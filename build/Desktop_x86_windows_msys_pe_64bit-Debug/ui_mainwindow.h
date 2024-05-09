/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lbl_title;
    QLabel *lbl_title_2;
    QLabel *lbl_title_3;
    QLabel *lbl_title_4;
    QPushButton *pushButton;
    QLabel *label_pic;
    QLabel *label_bc;
    QLabel *label_prof;
    QPushButton *pushButton_prof;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1819, 943);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(11, 183, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lbl_title = new QLabel(centralwidget);
        lbl_title->setObjectName("lbl_title");
        lbl_title->setGeometry(QRect(510, 10, 791, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(22);
        font.setBold(true);
        lbl_title->setFont(font);
        lbl_title->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"color: rgb(0, 0, 0);"));
        lbl_title_2 = new QLabel(centralwidget);
        lbl_title_2->setObjectName("lbl_title_2");
        lbl_title_2->setGeometry(QRect(510, 70, 801, 61));
        lbl_title_2->setFont(font);
        lbl_title_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"color: rgb(0, 0, 0);"));
        lbl_title_3 = new QLabel(centralwidget);
        lbl_title_3->setObjectName("lbl_title_3");
        lbl_title_3->setGeometry(QRect(440, 150, 751, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(13);
        font1.setBold(false);
        lbl_title_3->setFont(font1);
        lbl_title_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"color: rgb(0, 0, 0);"));
        lbl_title_4 = new QLabel(centralwidget);
        lbl_title_4->setObjectName("lbl_title_4");
        lbl_title_4->setGeometry(QRect(680, 190, 671, 61));
        lbl_title_4->setFont(font1);
        lbl_title_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(710, 430, 201, 61));
        QFont font2;
        font2.setPointSize(21);
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 85, 127);"));
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(160, -60, 411, 331));
        label_pic->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(0, 0, 0, 0));"));
        label_bc = new QLabel(centralwidget);
        label_bc->setObjectName("label_bc");
        label_bc->setGeometry(QRect(0, -30, 1801, 871));
        label_bc->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"color: rgb(0, 0, 0);"));
        label_bc->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/bahan qt/New folder/bc.jpeg")));
        label_bc->setScaledContents(true);
        label_prof = new QLabel(centralwidget);
        label_prof->setObjectName("label_prof");
        label_prof->setGeometry(QRect(1450, 710, 71, 61));
        label_prof->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/bahan qt/New folder/prof.jpeg")));
        label_prof->setScaledContents(true);
        label_prof->setWordWrap(false);
        pushButton_prof = new QPushButton(centralwidget);
        pushButton_prof->setObjectName("pushButton_prof");
        pushButton_prof->setGeometry(QRect(1450, 710, 71, 61));
        pushButton_prof->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(0, 0, 0, 0));\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(0, 0, 0, 0));"));
        MainWindow->setCentralWidget(centralwidget);
        label_bc->raise();
        label_prof->raise();
        lbl_title->raise();
        lbl_title_2->raise();
        lbl_title_3->raise();
        lbl_title_4->raise();
        pushButton->raise();
        label_pic->raise();
        pushButton_prof->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1819, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lbl_title->setText(QCoreApplication::translate("MainWindow", "SELAMAT DATANG DI INVESTARIS KANTOR ", nullptr));
        lbl_title_2->setText(QCoreApplication::translate("MainWindow", " DINAS PENDIDIKAN  PROVINSI BENGKULU", nullptr));
        lbl_title_3->setText(QCoreApplication::translate("MainWindow", "Sistem informasi inventaris kantor ini membantu untuk mengelola data barang yang ada di dinas ", nullptr));
        lbl_title_4->setText(QCoreApplication::translate("MainWindow", "pendidikan provinsi Bengkulu", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        label_pic->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_bc->setText(QString());
        label_prof->setText(QString());
        pushButton_prof->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
