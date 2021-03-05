#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QFileInfo>
#include <QTimer>
#include <QDebug>
#include <QPluginLoader>
#include <QSettings>
#include <QVariant>
#include <QCoreApplication>
#include <QCloseEvent>
#include <QtConcurrent>
#include <QFutureWatcher>
#include <QFuture>

#include "licenseplateinterface.h"
#include "socketserverinterface.h"
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void closeEvent(QCloseEvent* event)Q_DECL_OVERRIDE;

private:

    void loadPlugins();
    void initPar();
    void showMsg(QString msg);

    QByteArray bgkToHex(QString str);
    QByteArray strToHex(QString str);

    void plateProcess(LicensePlateInterface* pLicensePlateInterface);
    void containerProcess(SocketServerInterface* pSocketServerInterface);

    void plateErrMsg();

    QString containerAddr;
    int containerPort;
    QString plateAddr;
    int platePort;
    QString localAddr;
    QString fromPath;
    QString toPath;
    int timeOut;
    QString text1;
    QString text2;
    QString errText1;
    QString errText2;
    QString succText;
    QString exitPass;

    QString plate;
    QString datetmp;
    bool exit;

private:
    Ui::MainWindow *ui;
    Dialog *Dlg;

    ///
    /// \brief watcher 监视异步加载插件完成状态
    ///
    QFutureWatcher<void> *watcher;

private slots:

    void slot_handleFinished();

    ///
    /// \brief resultsTheLicensePlateSlot 车牌结果
    /// \param plate
    /// \param color
    /// \param time
    /// \param arrImg
    ///
    void resultsTheLicensePlateSlot(const QString &plate,const QString &color,const QString &time,QByteArray arrImg);

    ///
    /// \brief equipmentStateslot  设备额在线状态
    /// \param state
    ///
    void equipmentStateSlot( bool state);

    //----------------------------------------------------

    ///
    /// \brief socketReadDataSlot 接受数据
    /// \param data 数据体
    ///
    void socketReadDataSlot(const QString& data);

    ///
    /// \brief socketLinkStateSlot TCP链接状态
    /// \param address 地址
    /// \param state 状态
    ///
    void socketLinkStateSlot(const QString& address,bool state);

    ///
    /// \brief messageSlot 日志信息
    /// \param type 日志类型
    /// \param msg 信息体
    ///
    void messageSlot(const QString &type,const QString &msg);

    ///
    /// \brief copyFile 复制文件
    ///
    void  copyFile(QString plate, QString datetime);

    void on_putpushButton_clicked();

    void on_capturepushButton_clicked();

    void on_send485pushButton_2_clicked();

    void on_pushButton_clicked();

    void slot_getPass(QString pass);

signals:

    ///
    /// \brief initCameraSignal 初始化车牌相机
    /// \param localAddr
    /// \param addr
    /// \param port
    /// \param imgPath
    /// \param imgFormat
    /// \param channel
    ///
    void initCameraSignal(const QString &localAddr,const QString &addr, const int &port, const QString &imgPath, int imgFormat,const int &channel);

    ///
    /// \brief simulationCaptureSignal 模拟抓拍
    ///
    void simulationCaptureSignal();

    ///
    /// \brief transparentTransmission485Signal 透明传输
    /// \param dmsg
    ///
    void transparentTransmission485Signal(const QString &msg);

    ///
    /// \brief liftingElectronicRailingSignal 抬杆/落杆
    ///
    void liftingElectronicRailingSignal(bool gate);


    //---------------------------------------------------------

    ///
    /// \brief InitializationParameterSignal 初始化服务
    /// \param address
    /// \param port
    /// \param serviceType
    /// \param serviceMode
    ///
    void  InitializationParameterSignal(const QString& address,const quint16& port,const int& serviceType,const int& serviceMode);

    ///
    /// \brief releaseResourcesSignal 释放资源
    ///
    void releaseResourcesSignal();
};
#endif // MAINWINDOW_H
