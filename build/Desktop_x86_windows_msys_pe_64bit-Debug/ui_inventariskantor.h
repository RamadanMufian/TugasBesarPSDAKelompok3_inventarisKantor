/********************************************************************************
** Form generated from reading UI file 'inventariskantor.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTARISKANTOR_H
#define UI_INVENTARISKANTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inventariskantor
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *inventariskantor)
    {
        if (inventariskantor->objectName().isEmpty())
            inventariskantor->setObjectName("inventariskantor");
        inventariskantor->resize(800, 600);
        centralwidget = new QWidget(inventariskantor);
        centralwidget->setObjectName("centralwidget");
        inventariskantor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(inventariskantor);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        inventariskantor->setMenuBar(menubar);
        statusbar = new QStatusBar(inventariskantor);
        statusbar->setObjectName("statusbar");
        inventariskantor->setStatusBar(statusbar);

        retranslateUi(inventariskantor);

        QMetaObject::connectSlotsByName(inventariskantor);
    } // setupUi

    void retranslateUi(QMainWindow *inventariskantor)
    {
        inventariskantor->setWindowTitle(QCoreApplication::translate("inventariskantor", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inventariskantor: public Ui_inventariskantor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTARISKANTOR_H
