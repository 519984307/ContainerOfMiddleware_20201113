#include "mainwindow.h"
#include "mdump.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    MiniDumper dump;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
