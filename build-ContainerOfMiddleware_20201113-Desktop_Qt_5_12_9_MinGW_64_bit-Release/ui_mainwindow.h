/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *plateAddrlineEdit;
    QLabel *label_2;
    QLineEdit *platePortlineEdit_2;
    QLabel *platelabel_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *containerAddrlineEdit_3;
    QLabel *label_4;
    QLineEdit *containerPortlineEdit_4;
    QLabel *containerlabel_6;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *Send485lineEdit_5;
    QLineEdit *Send485EndlineEdit;
    QPushButton *send485pushButton_2;
    QPushButton *capturepushButton;
    QPushButton *putpushButton;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/ICO.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        plateAddrlineEdit = new QLineEdit(centralwidget);
        plateAddrlineEdit->setObjectName(QString::fromUtf8("plateAddrlineEdit"));

        horizontalLayout->addWidget(plateAddrlineEdit);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        platePortlineEdit_2 = new QLineEdit(centralwidget);
        platePortlineEdit_2->setObjectName(QString::fromUtf8("platePortlineEdit_2"));

        horizontalLayout->addWidget(platePortlineEdit_2);

        platelabel_5 = new QLabel(centralwidget);
        platelabel_5->setObjectName(QString::fromUtf8("platelabel_5"));
        platelabel_5->setFrameShape(QFrame::Panel);

        horizontalLayout->addWidget(platelabel_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        containerAddrlineEdit_3 = new QLineEdit(centralwidget);
        containerAddrlineEdit_3->setObjectName(QString::fromUtf8("containerAddrlineEdit_3"));

        horizontalLayout_2->addWidget(containerAddrlineEdit_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        containerPortlineEdit_4 = new QLineEdit(centralwidget);
        containerPortlineEdit_4->setObjectName(QString::fromUtf8("containerPortlineEdit_4"));

        horizontalLayout_2->addWidget(containerPortlineEdit_4);

        containerlabel_6 = new QLabel(centralwidget);
        containerlabel_6->setObjectName(QString::fromUtf8("containerlabel_6"));
        containerlabel_6->setFrameShape(QFrame::Panel);

        horizontalLayout_2->addWidget(containerlabel_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        Send485lineEdit_5 = new QLineEdit(centralwidget);
        Send485lineEdit_5->setObjectName(QString::fromUtf8("Send485lineEdit_5"));

        horizontalLayout_3->addWidget(Send485lineEdit_5);

        Send485EndlineEdit = new QLineEdit(centralwidget);
        Send485EndlineEdit->setObjectName(QString::fromUtf8("Send485EndlineEdit"));

        horizontalLayout_3->addWidget(Send485EndlineEdit);

        send485pushButton_2 = new QPushButton(centralwidget);
        send485pushButton_2->setObjectName(QString::fromUtf8("send485pushButton_2"));

        horizontalLayout_3->addWidget(send485pushButton_2);

        capturepushButton = new QPushButton(centralwidget);
        capturepushButton->setObjectName(QString::fromUtf8("capturepushButton"));

        horizontalLayout_3->addWidget(capturepushButton);

        putpushButton = new QPushButton(centralwidget);
        putpushButton->setObjectName(QString::fromUtf8("putpushButton"));

        horizontalLayout_3->addWidget(putpushButton);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\350\275\246\347\211\214\345\234\260\345\235\200\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\350\275\246\347\211\214\347\253\257\345\217\243\357\274\232", nullptr));
        platePortlineEdit_2->setText(QString());
        platelabel_5->setText(QApplication::translate("MainWindow", "\350\275\246\347\211\214\351\223\276\346\216\245\347\212\266\346\200\201", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\347\256\261\345\217\267\345\234\260\345\235\200\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\347\256\261\345\217\267\347\253\257\345\217\243\357\274\232", nullptr));
        containerlabel_6->setText(QApplication::translate("MainWindow", "\347\256\261\345\217\267\351\223\276\346\216\245\347\212\266\346\200\201", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\351\200\217\344\274\240\346\225\260\346\215\256\357\274\232", nullptr));
        send485pushButton_2->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\225\260\346\215\256", nullptr));
        capturepushButton->setText(QApplication::translate("MainWindow", "\346\250\241\346\213\237\346\212\223\346\213\215", nullptr));
        putpushButton->setText(QApplication::translate("MainWindow", "\346\211\213\345\212\250\346\212\254\346\235\206", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Test", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
