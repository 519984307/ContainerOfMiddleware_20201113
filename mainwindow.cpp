#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTextCodec>
#include <QTimer>
#include <QtConcurrent>
#include <QFuture>
#include <QFutureWatcher>
#include <QThread>
#include <QPixmap>
#include <QImage>
#include <QLabel>
#include <QFileDialog>
#include <QMessageBox>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->containerlabel_6->setStyleSheet("background-color: rgb(255, 0, 0);");
    ui->platelabel_5->setStyleSheet("background-color: rgb(255, 0, 0);");

    watcher=new QFutureWatcher<void>(this);
    connect(watcher, SIGNAL(finished()), this, SLOT(slot_handleFinished()));

    loadPlugins();
    initPar();
}

MainWindow::~MainWindow()
{
    emit releaseResourcesSignal();
    delete Dlg;
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    Dlg->exec();
    if(exit){
        showMsg("人为关闭软件");
        event->accept();
        QWidget::closeEvent(event);
    }
    else {
        event->ignore();
    }
    //QMessageBox::warning(this,"Exit","Are you sure you want to exit the program?",QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
}

void MainWindow::loadPlugins()
{
    QDir dir(QCoreApplication::applicationDirPath());
    dir.mkdir("log");


    exit=false;
    Dlg=new Dialog(this);
    connect(Dlg,&Dialog::signal_setPass,this,&MainWindow::slot_getPass);

    QSettings set(QDir::toNativeSeparators("sys.ini"),QSettings::IniFormat);
    set.setIniCodec("UTF-8");

    set.beginGroup("Sys");
    containerAddr = set.value("containerAddr","127.0.0.1").toString();
    containerPort = set.value("containerPort",12011).toInt();
    plateAddr = set.value("plateAddr","127.0.0.1").toString();
    platePort = set.value("platePort",8080).toInt();
    localAddr = set.value("localAddr","192.168.0.98").toString();
    fromPath = set.value("fromPath","C:\\视觉系统").toString();
    toPath = set.value("toPath","C:\\images").toString();
    timeOut = set.value("timeOut",40).toInt();
    text1 = set.value("text1","箱体检测系统").toString();
    text2 = set.value("text2","舍弗勒欢迎您").toString();
    errText1 = set.value("errText1","识别失败").toString();
    errText2 = set.value("errText2","请按规定行驶，或联系管理人员").toString();
    succText = set.value("succText","请通行！").toString();
    exitPass = set.value("exitPass","870888").toString();
    set.endGroup();


    QDir plugin(QCoreApplication::applicationDirPath());
    for(const QString &fileName :plugin.entryList(QDir::Files)){
        qDebug()<<fileName;
        QPluginLoader  pluginLoader(plugin.absoluteFilePath(fileName));
        QObject *plugin = pluginLoader.instance();

        if(plugin){
            if (LicensePlateInterface* pLicensePlateInterface=qobject_cast<LicensePlateInterface*>(plugin)) {
                plateProcess(pLicensePlateInterface);
                qDebug()<<"plate load sucess";
            }
            else if(SocketServerInterface* pSocketServerInterface=qobject_cast<SocketServerInterface*>(plugin)) {
                containerProcess(pSocketServerInterface);
                qDebug()<<"container load sucess";
            }
            else {
                pluginLoader.unload();
            }
        }
        else {
            delete plugin;
            plugin=nullptr;
        }
    }
}

void MainWindow::initPar()
{
    ui->plateAddrlineEdit->setText(this->plateAddr);
    ui->platePortlineEdit_2->setText(QString::number(this->platePort));
    ui->containerAddrlineEdit_3->setText(this->containerAddr);
    ui->containerPortlineEdit_4->setText(QString::number(this->containerPort));

    emit initCameraSignal(localAddr,plateAddr,platePort,"",1,1);
    emit InitializationParameterSignal(containerAddr,containerPort,0,0);
}

void MainWindow::showMsg(QString msg)
{
    if(msg.trimmed()!="[H]"){

        QDir dir(QCoreApplication::applicationDirPath());
        dir.cd("log");
        QFile file(dir.path()+"/"+ QString("%1.log").arg(QDateTime::currentDateTime().toString("yyyy_MM_dd")));
    #ifdef Q_OS_LINUX
        QString eol = "\n";
    #endif
    #ifdef Q_OS_WIN
        QString eol = "\r\n";
    #endif
        QString tmsg=QString("%1：%2").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss:zzz")).arg(msg);
        file.open( QIODevice::Append | QIODevice::Text | QIODevice::Unbuffered );
        file.write( tmsg.toUtf8() );
        file.write( eol.toUtf8() );
        file.close();

        if(ui->plainTextEdit->blockCount()>100){
            ui->plainTextEdit->clear();
        }
        ui->plainTextEdit->appendPlainText(msg);
    }
}

QByteArray MainWindow::bgkToHex(QString str)
{
    QTextCodec *gbk = QTextCodec::codecForName("gbk");
    QByteArray hex_data;

    hex_data.append(gbk->fromUnicode(str).toHex().toUpper());
    return  hex_data;
}

QByteArray MainWindow::strToHex(QString str)
{
    QByteArray buf;
    for(int i = 0; i < str.length(); i += 2)
    {
        bool ok;
        char chr = (str.mid(i, 2).toInt(&ok, 16)) & 0xFF;
        buf.append(chr);
    }
    return buf;
}

void MainWindow::plateProcess(LicensePlateInterface* pLicensePlateInterface)
{
    /* 初始化相机 */
    connect(this,&MainWindow::initCameraSignal,pLicensePlateInterface,&LicensePlateInterface::initCameraSlot);
    /* 模拟抓拍 */
    connect(this,&MainWindow::simulationCaptureSignal,pLicensePlateInterface,&LicensePlateInterface::simulationCaptureSlot);
    /* 识别结果 */
    connect(pLicensePlateInterface,&LicensePlateInterface::resultsTheLicensePlateSignal,this,&MainWindow::resultsTheLicensePlateSlot);
    /* 相机状态 */
    connect(pLicensePlateInterface,&LicensePlateInterface::equipmentStateSignal,this,&MainWindow::equipmentStateSlot);
    /* 485透传 */
    connect(this,&MainWindow::transparentTransmission485Signal,pLicensePlateInterface,&LicensePlateInterface::transparentTransmission485Slot);
    /* 释放资源 */
    connect(this,&MainWindow::releaseResourcesSignal,pLicensePlateInterface,&LicensePlateInterface::releaseResourcesSlot);
    /* 抬杆 */
    connect(this,&MainWindow::liftingElectronicRailingSignal,pLicensePlateInterface,&LicensePlateInterface::liftingElectronicRailingSlot);
    /* 日志 */
    connect(pLicensePlateInterface,&LicensePlateInterface::messageSignal,this,&MainWindow::messageSlot);
}

void MainWindow::containerProcess(SocketServerInterface *pSocketServerInterface)
{
    /* 初始化参数 */
    connect(this,&MainWindow::InitializationParameterSignal,pSocketServerInterface,&SocketServerInterface::InitializationParameterSlot);
    /* 接收数据 */
    connect(pSocketServerInterface,&SocketServerInterface::socketReadDataSignal,this,&MainWindow::socketReadDataSlot);
    /* 绑定SOCKET数量到服务界面 */
    connect(pSocketServerInterface,&SocketServerInterface::socketLinkStateSingal,this,&MainWindow::socketLinkStateSlot);
    /* 释放资源 */
    connect(this,&MainWindow::releaseResourcesSignal,pSocketServerInterface,&SocketServerInterface::releaseResourcesSlot);
    /* 日志 */
    connect(pSocketServerInterface,&SocketServerInterface::messageSignal,this,&MainWindow::messageSlot);
}

void MainWindow::plateErrMsg()
{
    QString msg1=bgkToHex(errText1);
    int len1= QString::fromLocal8Bit(msg1.toLocal8Bit()).length()/2;

    QString msg2=bgkToHex(errText2);
    int len2= QString::fromLocal8Bit(msg2.toLocal8Bit()).length()/2;
                                                                                /*00020001000A0201*/
    QString head1="F501"+QString("%1").arg(len1+9, 4, 16, QChar('0')).toUpper()+("00020001001E0201")+QString("%1").arg(len1,2,16,QChar('0')).toUpper();//第一行
    if(!errText2.isEmpty()){
        head1="F501"+QString("%1").arg(len1+9+len2+6, 4, 16, QChar('0')).toUpper()+("00020001001E0201")+QString("%1").arg(len1,2,16,QChar('0')).toUpper();//第一行+第二行
    }
                 /*02000A0201*/
    QString head2="02001E0201"+QString("%1").arg(len2,2,16,QChar('0')).toUpper(); //第二行

    QByteArray arr=head1.toLatin1()+msg1.toLatin1();
    if(!errText2.isEmpty()){
        arr=head1.toLatin1()+msg1.toLatin1()+head2.toLatin1()+msg2.toLatin1();
    }

    int xorResult = arr.mid(0,2).toInt(0,16);
    // 求xor校验
    for (int i = 2; i < arr.count(); i+=2) {
        xorResult ^= arr.mid(i,2).toInt(0,16);
    }
    QByteArray hex = QString("%1").arg(xorResult,2,16,QChar('0')).toUpper().toLatin1();
    if(errText1.endsWith("您")){
        arr=head1.toLatin1()+msg1.toLatin1()+"0A"+head2.toLatin1()+msg2.toLatin1();
    }
    if(errText2.endsWith("您")){
        arr=arr+"0A";
    }
    arr=arr+hex;

    QString tmp;
    for (int i = 0; i < arr.count(); i+=2) {
        tmp=tmp+arr.mid(i,2).toInt(0,16);
    }

    emit transparentTransmission485Signal(tmp);
    showMsg("识别失败发送数据:"+arr);
}

void MainWindow::resultsTheLicensePlateSlot(const QString &plate, const QString &color, const QString &time, QByteArray arrImg)
{
    this->plate=plate;

    if(plate==""){
        plateErrMsg();
    }
    else {
        emit liftingElectronicRailingSignal(true);

        QString msg1=bgkToHex(plate);
        int len1= QString::fromLocal8Bit(msg1.toLocal8Bit()).length()/2;

        QString msg2=bgkToHex(succText);
        int len2= QString::fromLocal8Bit(msg2.toLocal8Bit()).length()/2;
                                                                                           /*00020001000A0201*/
        QString head1="F501"+QString("%1").arg(len1+9+len2+6, 4, 16, QChar('0')).toUpper()+("00020001001E0201")+QString("%1").arg(len1,2,16,QChar('0')).toUpper();//第一行
                     /*02000A0201*/
        QString head2="02001E0201"+QString("%1").arg(len2,2,16,QChar('0')).toUpper(); //第二行

        QByteArray arr=head1.toLatin1()+msg1.toLatin1()+head2.toLatin1()+msg2.toLatin1();

        int xorResult = arr.mid(0,2).toInt(0,16);
        // 求xor校验
        for (int i = 2; i < arr.count(); i+=2) {
            xorResult ^= arr.mid(i,2).toInt(0,16);
        }
        QByteArray hex = QString("%1").arg(xorResult,2,16,QChar('0')).toUpper().toLatin1();
        arr=arr+hex;

        QString tmp;
        for (int i = 0; i < arr.count(); i+=2) {
            tmp=tmp+ arr.mid(i,2).toInt(0,16);
        }

        emit transparentTransmission485Signal(tmp);
        showMsg("识别车牌:"+arr);
    }

    QTimer::singleShot(31000,this,SLOT(on_send485pushButton_2_clicked()));
}

void MainWindow::equipmentStateSlot(bool state)
{
    if(state){
        ui->platelabel_5->setStyleSheet("background-color: rgb(85, 170, 0);");
        //showMsg("车牌服务链接成功");
    }
    else {
       ui->platelabel_5->setStyleSheet("background-color: rgb(255, 0, 0);");
       //showMsg("车牌服务链接失败");
    }
}

void MainWindow::socketReadDataSlot(const QString &data)
{
    if(data.trimmed()!="[H]"){
        int dex=data.indexOf("[C|");
        if(dex!=-1 && plate!="" /*&& plate!="无车牌"*/){
            datetmp=data.mid(dex+3,14);
            showMsg(datetmp);

            QFuture<void> future =QtConcurrent::run(this,&MainWindow::copyFile,plate,datetmp);
            watcher->setFuture(future);
        }
    }
}

void MainWindow::slot_handleFinished()
{
    QDir dir(toPath);
    if(dir.cd(datetmp.mid(8))){
        if(dir.cd(plate)){
            int i=0;
            for(const QString &fileName :dir.entryList(QDir::Files,QDir::Name|QDir::Reversed)){
                if(-1!=fileName.indexOf(datetmp)){
                    showMsg(fileName+"处理完成");
                    i++;
                }
            }
            if(i==0){
                showMsg("没有找到图片");
            }
        }
    }
    showMsg("路径查找失败");
}

void MainWindow::socketLinkStateSlot(const QString &address, bool state)
{
    if(state){
        ui->containerlabel_6->setStyleSheet("background-color: rgb(85, 170, 0);");
        showMsg("箱号服务链接成功");
    }
    else {
       ui->containerlabel_6->setStyleSheet("background-color: rgb(255, 0, 0);");
       showMsg("箱号服务链接失败");
    }
}

void MainWindow::messageSlot(const QString &type, const QString &msg)
{
    if(msg.trimmed()!="[H]"){

        QDir dir(QCoreApplication::applicationDirPath());
        dir.cd("log");
        QFile file(dir.path()+"/"+ QString("%1.log").arg(QDateTime::currentDateTime().toString("yyyy_MM_dd")));
    #ifdef Q_OS_LINUX
        QString eol = "\n";
    #endif
    #ifdef Q_OS_WIN
        QString eol = "\r\n";
    #endif
        QString tmsg=QString("%1：%2").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss:zzz")).arg(msg);
        file.open( QIODevice::Append | QIODevice::Text | QIODevice::Unbuffered );
        file.write( tmsg.toUtf8() );
        file.write( eol.toUtf8() );
        file.close();

        if(ui->plainTextEdit->blockCount()>100){
            ui->plainTextEdit->clear();
        }
        ui->plainTextEdit->appendPlainText(msg);
    }
}


void MainWindow::copyFile(QString plate,QString datetime)
{
    QThread::sleep(timeOut);
    QDir dir(fromPath);
    if(dir.cd(datetime.mid(0,4))){
        if(dir.cd(datetime.mid(4,2))){
            if(dir.cd(datetime.mid(6,2))){
                for(const QString &fileName :dir.entryList(QDir::Files,QDir::Name|QDir::Reversed)){
                    if(-1!=fileName.indexOf(datetime)){
                        if(QString("%1%2%3.jpg").arg(datetime).arg("1").arg("1")==fileName ||
                                QString("%1%2%3.jpg").arg(datetime).arg("1").arg("10")==fileName ||
                                QString("%1%2%3.jpg").arg(datetime).arg("1").arg("15")==fileName ||
                                QString("%1%2%3.jpg").arg(datetime).arg("1").arg("16")==fileName ||
                                QString("%1%2%3.jpg").arg(datetime).arg("1").arg("17")==fileName){

                            if(-1!= fileName.indexOf("115.jpg") || -1!=fileName.indexOf("116.jpg")){
                                QString file= dir.absoluteFilePath(fileName);
                                QImage image(file);
                                QImage mirroredImage = image.mirrored(false, true);
                                QPixmap pixmap = QPixmap::fromImage(mirroredImage);
                                pixmap.save(file,"JPG",100);
                            }
                            QFile::copy(QDir::toNativeSeparators(QString("%1/%2").arg(dir.path()).arg(fileName)),QDir::toNativeSeparators(QString("%1/%2/%3/%4").arg(toPath).arg(datetime.mid(0,8)).arg(plate).arg(fileName)));
                        }
                    }
                }
            }
        }
    }
    qDebug()<<datetime;
}



void MainWindow::on_putpushButton_clicked()
{
    emit liftingElectronicRailingSignal(true);
}

void MainWindow::on_capturepushButton_clicked()
{
    emit simulationCaptureSignal();
}

void MainWindow::on_send485pushButton_2_clicked()
{
    if(ui->Send485lineEdit_5->text().isEmpty()){
        ui->Send485lineEdit_5->setText(text1);
    }
    QString msg1=bgkToHex(ui->Send485lineEdit_5->text());
    int len1= QString::fromLocal8Bit(msg1.toLocal8Bit()).length()/2;

    if(ui->Send485EndlineEdit->text().isEmpty()){
        ui->Send485EndlineEdit->setText(text2);
    }
    QString msg2=bgkToHex(ui->Send485EndlineEdit->text());
    int len2= QString::fromLocal8Bit(msg2.toLocal8Bit()).length()/2;

    QString head1="F501"+QString("%1").arg(len1+9, 4, 16, QChar('0')).toUpper()+("000100010B000001")+QString("%1").arg(len1,2,16,QChar('0')).toUpper();//第一行
    if(!msg1.isEmpty()){
        head1="F501"+QString("%1").arg(len1+9+len2+6, 4, 16, QChar('0')).toUpper()+("000100010B000001")+QString("%1").arg(len1,2,16,QChar('0')).toUpper();//第一行
    }
    QString head2="020B000001"+QString("%1").arg(len2,2,16,QChar('0')).toUpper(); //第二行

    QByteArray arr=head1.toLatin1()+msg1.toLatin1();
    if(!ui->Send485EndlineEdit->text().isEmpty()){
        arr=head1.toLatin1()+msg1.toLatin1()+head2.toLatin1()+msg2.toLatin1();
    }

    int xorResult = arr.mid(0,2).toInt(0,16);
    // 求xor校验
    for (int i = 2; i < arr.count(); i+=2) {
        xorResult ^= arr.mid(i,2).toInt(0,16);
    }
    QByteArray hex = QString("%1").arg(xorResult,2,16,QChar('0')).toUpper().toLatin1();
    if(ui->Send485lineEdit_5->text().endsWith("您")){
        arr=head1.toLatin1()+msg1.toLatin1()+"0A"+head2.toLatin1()+msg2.toLatin1();
    }
    if(ui->Send485EndlineEdit->text().endsWith("您")){
        arr=arr+"0A";
    }
    arr=arr+hex;

    QString tmp;
    for (int i = 0; i < arr.count(); i+=2) {
        tmp=tmp+arr.mid(i,2).toInt(0,16);
    }

    emit transparentTransmission485Signal(tmp);
    showMsg("手动发送固定数据"+arr);
}

void MainWindow::on_pushButton_clicked()
{

    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                                  "C:\\",
                                                                  tr("Images (*.png *.xpm *.jpg)"));

//    QImage image(fileName);
//    QImage mirroredImage = image.mirrored(false, true);
//    QPixmap pixmap = QPixmap::fromImage(mirroredImage);
//    pixmap.save(fileName,"PNG",100);

    QMatrix matrix;
    matrix.rotate(180);

    QLabel *Label= new QLabel();
    Label->setPixmap(QPixmap(fileName).transformed(matrix, Qt::SmoothTransformation));
    Label->pixmap()->save(fileName,"JPG",100);
    delete Label;
    Label=nullptr;

    QFile::copy(QDir::toNativeSeparators(fileName),QDir::toNativeSeparators("1.jpg"));
    showMsg(QString("%1拷贝完成！").arg(fileName));
}

void MainWindow::slot_getPass(QString pass)
{
    if(pass==exitPass){
        exit=true;
    }
}
