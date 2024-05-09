/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

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

class Ui_admin
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_User_Name_3;
    QLineEdit *lineEdit_Password_3;
    QPushButton *pushButton_Login_3;
    QPushButton *pushButton_Cancel_3;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *label_10;
    QPushButton *pushButton;
    QLabel *label_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(1639, 718);
        admin->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(admin);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(580, 260, 441, 191));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	background-color: rgb(11, 182, 255);\n"
"\n"
"}"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 10, 141, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	background-color: rgb(11, 182, 255);\n"
"}"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 50, 121, 41));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	background-color: rgb(11, 182, 255);\n"
"}"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_User_Name_3 = new QLineEdit(groupBox);
        lineEdit_User_Name_3->setObjectName("lineEdit_User_Name_3");
        lineEdit_User_Name_3->setGeometry(QRect(170, 20, 241, 28));
        lineEdit_User_Name_3->setFont(font);
        lineEdit_User_Name_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        lineEdit_User_Name_3->setEchoMode(QLineEdit::Normal);
        lineEdit_Password_3 = new QLineEdit(groupBox);
        lineEdit_Password_3->setObjectName("lineEdit_Password_3");
        lineEdit_Password_3->setGeometry(QRect(170, 60, 241, 28));
        lineEdit_Password_3->setFont(font);
        lineEdit_Password_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        lineEdit_Password_3->setEchoMode(QLineEdit::Password);
        pushButton_Login_3 = new QPushButton(groupBox);
        pushButton_Login_3->setObjectName("pushButton_Login_3");
        pushButton_Login_3->setGeometry(QRect(170, 100, 111, 41));
        pushButton_Login_3->setFont(font);
        pushButton_Login_3->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"background-color: rgb(255, 255, 0);"));
        pushButton_Cancel_3 = new QPushButton(groupBox);
        pushButton_Cancel_3->setObjectName("pushButton_Cancel_3");
        pushButton_Cancel_3->setGeometry(QRect(300, 100, 111, 41));
        pushButton_Cancel_3->setFont(font);
        pushButton_Cancel_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(580, 240, 121, 16));
        QFont font1;
        font1.setBold(false);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(620, 50, 431, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(500, 90, 641, 31));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(760, 470, 83, 29));
        QFont font2;
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 96);\n"
"color: rgb(0, 0, 0);"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(580, 460, 121, 16));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1639, 25));
        admin->setMenuBar(menubar);
        statusbar = new QStatusBar(admin);
        statusbar->setObjectName("statusbar");
        admin->setStatusBar(statusbar);

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QMainWindow *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label_6->setText(QCoreApplication::translate("admin", "User Name:", nullptr));
        label_7->setText(QCoreApplication::translate("admin", "Password:", nullptr));
        lineEdit_User_Name_3->setText(QString());
        pushButton_Login_3->setText(QCoreApplication::translate("admin", "Login", nullptr));
        pushButton_Cancel_3->setText(QCoreApplication::translate("admin", "Cancel", nullptr));
        label_9->setText(QCoreApplication::translate("admin", "Login with admin", nullptr));
        label_3->setText(QCoreApplication::translate("admin", "SELAMAT DATANG DI INVESTARIS ", nullptr));
        label_10->setText(QCoreApplication::translate("admin", "KANTOR DINAS PENDIDIKAN PROVINSI BENGKULU", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "User", nullptr));
        label_11->setText(QCoreApplication::translate("admin", "login with user", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
