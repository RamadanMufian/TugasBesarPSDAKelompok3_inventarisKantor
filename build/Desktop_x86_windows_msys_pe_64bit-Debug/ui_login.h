/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_User_Name_2;
    QLineEdit *lineEdit_Password_2;
    QPushButton *pushButton_Login_2;
    QPushButton *pushButton_Cancel_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(1635, 886);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(640, 50, 431, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(600, 260, 441, 191));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	background-color: rgb(11, 182, 255);\n"
"\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 10, 141, 41));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	background-color: rgb(11, 182, 255);\n"
"}"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 50, 121, 41));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	background-color: rgb(11, 182, 255);\n"
"}"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_User_Name_2 = new QLineEdit(groupBox);
        lineEdit_User_Name_2->setObjectName("lineEdit_User_Name_2");
        lineEdit_User_Name_2->setGeometry(QRect(170, 20, 241, 28));
        lineEdit_User_Name_2->setFont(font);
        lineEdit_User_Name_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        lineEdit_User_Name_2->setEchoMode(QLineEdit::Normal);
        lineEdit_Password_2 = new QLineEdit(groupBox);
        lineEdit_Password_2->setObjectName("lineEdit_Password_2");
        lineEdit_Password_2->setGeometry(QRect(170, 60, 241, 28));
        lineEdit_Password_2->setFont(font);
        lineEdit_Password_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        lineEdit_Password_2->setEchoMode(QLineEdit::Password);
        pushButton_Login_2 = new QPushButton(groupBox);
        pushButton_Login_2->setObjectName("pushButton_Login_2");
        pushButton_Login_2->setGeometry(QRect(170, 100, 111, 41));
        pushButton_Login_2->setFont(font);
        pushButton_Login_2->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"background-color: rgb(255, 255, 0);"));
        pushButton_Cancel_2 = new QPushButton(groupBox);
        pushButton_Cancel_2->setObjectName("pushButton_Cancel_2");
        pushButton_Cancel_2->setGeometry(QRect(300, 100, 111, 41));
        pushButton_Cancel_2->setFont(font);
        pushButton_Cancel_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(760, 460, 121, 16));
        QFont font1;
        font1.setBold(false);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(600, 240, 121, 16));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(630, 490, 121, 16));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(520, 90, 641, 31));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(760, 490, 83, 29));
        QFont font2;
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 96);\n"
"color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1330, 740, 101, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        font3.setBold(true);
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        login->setCentralWidget(centralwidget);
        groupBox->raise();
        label_6->raise();
        label_7->raise();
        label_11->raise();
        label_8->raise();
        pushButton->raise();
        label_3->raise();
        pushButton_2->raise();
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1635, 25));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("login", "SELAMAT DATANG DI INVESTARIS ", nullptr));
        groupBox->setTitle(QString());
        label_4->setText(QCoreApplication::translate("login", "User Name:", nullptr));
        label_5->setText(QCoreApplication::translate("login", "Password:", nullptr));
        lineEdit_User_Name_2->setText(QString());
        pushButton_Login_2->setText(QCoreApplication::translate("login", "Login", nullptr));
        pushButton_Cancel_2->setText(QCoreApplication::translate("login", "Cancel", nullptr));
        label_6->setText(QCoreApplication::translate("login", "Login with admin", nullptr));
        label_7->setText(QCoreApplication::translate("login", "Login With User", nullptr));
        label_11->setText(QCoreApplication::translate("login", "Login With User", nullptr));
        label_8->setText(QCoreApplication::translate("login", "KANTOR DINAS PENDIDIKAN PROVINSI BENGKULU", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "Admin", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login", "HOME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
