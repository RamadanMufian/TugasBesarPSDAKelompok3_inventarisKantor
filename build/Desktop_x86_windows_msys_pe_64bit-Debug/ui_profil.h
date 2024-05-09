/********************************************************************************
** Form generated from reading UI file 'profil.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFIL_H
#define UI_PROFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profil
{
public:
    QWidget *centralwidget;
    QLabel *label_bc;
    QLabel *lbl_title;
    QLabel *lbl_title_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *profil)
    {
        if (profil->objectName().isEmpty())
            profil->setObjectName("profil");
        profil->resize(1635, 865);
        centralwidget = new QWidget(profil);
        centralwidget->setObjectName("centralwidget");
        label_bc = new QLabel(centralwidget);
        label_bc->setObjectName("label_bc");
        label_bc->setGeometry(QRect(0, -160, 1611, 951));
        label_bc->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"color: rgb(0, 0, 0);"));
        label_bc->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/bahan qt/New folder/bc.jpeg")));
        label_bc->setScaledContents(true);
        lbl_title = new QLabel(centralwidget);
        lbl_title->setObjectName("lbl_title");
        lbl_title->setGeometry(QRect(840, 130, 791, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(22);
        font.setBold(true);
        lbl_title->setFont(font);
        lbl_title->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"color: rgb(0, 0, 0);"));
        lbl_title_2 = new QLabel(centralwidget);
        lbl_title_2->setObjectName("lbl_title_2");
        lbl_title_2->setGeometry(QRect(720, 10, 101, 91));
        lbl_title_2->setFont(font);
        lbl_title_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1420, 740, 101, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1080, 770, 101, 31));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        profil->setCentralWidget(centralwidget);
        lbl_title->raise();
        label_bc->raise();
        lbl_title_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        menubar = new QMenuBar(profil);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1635, 25));
        profil->setMenuBar(menubar);
        statusbar = new QStatusBar(profil);
        statusbar->setObjectName("statusbar");
        profil->setStatusBar(statusbar);

        retranslateUi(profil);

        QMetaObject::connectSlotsByName(profil);
    } // setupUi

    void retranslateUi(QMainWindow *profil)
    {
        profil->setWindowTitle(QCoreApplication::translate("profil", "MainWindow", nullptr));
        label_bc->setText(QString());
        lbl_title->setText(QCoreApplication::translate("profil", "SELAMAT DATANG DI INVESTARIS KANTOR ", nullptr));
        lbl_title_2->setText(QCoreApplication::translate("profil", "Profil", nullptr));
        pushButton->setText(QCoreApplication::translate("profil", "HOME", nullptr));
        pushButton_2->setText(QCoreApplication::translate("profil", "HOME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profil: public Ui_profil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIL_H
