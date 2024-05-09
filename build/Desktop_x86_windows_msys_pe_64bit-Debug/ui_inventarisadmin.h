/********************************************************************************
** Form generated from reading UI file 'inventarisadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTARISADMIN_H
#define UI_INVENTARISADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inventarisadmin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLineEdit *lineEditKategori;
    QPushButton *pushButtonCari;
    QSpinBox *spinBoxJumlah;
    QLineEdit *lineEditKodeCari;
    QPushButton *pushButton_3;
    QLabel *labelData;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *lineEditKode;
    QLineEdit *lineEditMerek;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QLineEdit *lineEditNama;
    QLineEdit *lineEditKodeHapus;
    QPushButton *pushButton_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *inventarisadmin)
    {
        if (inventarisadmin->objectName().isEmpty())
            inventarisadmin->setObjectName("inventarisadmin");
        inventarisadmin->resize(1787, 901);
        QFont font;
        font.setPointSize(18);
        inventarisadmin->setFont(font);
        inventarisadmin->setStyleSheet(QString::fromUtf8("background-color: rgb(11, 182, 255);"));
        centralwidget = new QWidget(inventarisadmin);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 0, 1161, 111));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(22);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-10, 0, 1801, 121));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1380, 660, 141, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(true);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 400, 131, 41));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEditKategori = new QLineEdit(centralwidget);
        lineEditKategori->setObjectName("lineEditKategori");
        lineEditKategori->setGeometry(QRect(240, 480, 261, 51));
        lineEditKategori->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButtonCari = new QPushButton(centralwidget);
        pushButtonCari->setObjectName("pushButtonCari");
        pushButtonCari->setGeometry(QRect(750, 663, 91, 41));
        pushButtonCari->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        spinBoxJumlah = new QSpinBox(centralwidget);
        spinBoxJumlah->setObjectName("spinBoxJumlah");
        spinBoxJumlah->setGeometry(QRect(240, 400, 61, 51));
        spinBoxJumlah->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEditKodeCari = new QLineEdit(centralwidget);
        lineEditKodeCari->setObjectName("lineEditKodeCari");
        lineEditKodeCari->setGeometry(QRect(860, 663, 111, 41));
        lineEditKodeCari->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(519, 653, 91, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        labelData = new QLabel(centralwidget);
        labelData->setObjectName("labelData");
        labelData->setGeometry(QRect(690, 280, 331, 211));
        labelData->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 560, 101, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(18);
        font4.setBold(true);
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 210, 211, 51));
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(11, 182, 255);\n"
"color: rgb(0, 0, 0);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 310, 211, 41));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 480, 151, 41));
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEditKode = new QLineEdit(centralwidget);
        lineEditKode->setObjectName("lineEditKode");
        lineEditKode->setGeometry(QRect(240, 220, 261, 51));
        lineEditKode->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEditMerek = new QLineEdit(centralwidget);
        lineEditMerek->setObjectName("lineEditMerek");
        lineEditMerek->setGeometry(QRect(240, 550, 261, 51));
        lineEditMerek->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(650, 200, 611, 411));
        QFont font5;
        font5.setBold(false);
        tableWidget->setFont(font5);
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(96, 107, 118);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(349, 653, 141, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEditNama = new QLineEdit(centralwidget);
        lineEditNama->setObjectName("lineEditNama");
        lineEditNama->setGeometry(QRect(240, 310, 261, 51));
        lineEditNama->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEditKodeHapus = new QLineEdit(centralwidget);
        lineEditKodeHapus->setObjectName("lineEditKodeHapus");
        lineEditKodeHapus->setGeometry(QRect(620, 660, 113, 41));
        lineEditKodeHapus->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1380, 610, 141, 31));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        inventarisadmin->setCentralWidget(centralwidget);
        label_2->raise();
        label->raise();
        pushButton_2->raise();
        label_5->raise();
        lineEditKategori->raise();
        pushButtonCari->raise();
        spinBoxJumlah->raise();
        lineEditKodeCari->raise();
        pushButton_3->raise();
        labelData->raise();
        label_6->raise();
        label_3->raise();
        label_4->raise();
        label_7->raise();
        lineEditKode->raise();
        lineEditMerek->raise();
        tableWidget->raise();
        pushButton->raise();
        lineEditNama->raise();
        lineEditKodeHapus->raise();
        pushButton_4->raise();
        statusbar = new QStatusBar(inventarisadmin);
        statusbar->setObjectName("statusbar");
        inventarisadmin->setStatusBar(statusbar);

        retranslateUi(inventarisadmin);

        QMetaObject::connectSlotsByName(inventarisadmin);
    } // setupUi

    void retranslateUi(QMainWindow *inventarisadmin)
    {
        inventarisadmin->setWindowTitle(QCoreApplication::translate("inventarisadmin", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("inventarisadmin", "INVENTARIS KANTOR DINAS PENDIDIKAN PR0VINSI BENGKULU", nullptr));
        label_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("inventarisadmin", "Keluar", nullptr));
        label_5->setText(QCoreApplication::translate("inventarisadmin", "Jumlah:", nullptr));
        pushButtonCari->setText(QCoreApplication::translate("inventarisadmin", "Cari ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("inventarisadmin", "Hapus", nullptr));
        labelData->setText(QString());
        label_6->setText(QCoreApplication::translate("inventarisadmin", "Merek:", nullptr));
        label_3->setText(QCoreApplication::translate("inventarisadmin", "Kode Barang:", nullptr));
        label_4->setText(QCoreApplication::translate("inventarisadmin", "Nama Barang:", nullptr));
        label_7->setText(QCoreApplication::translate("inventarisadmin", "Kategori:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("inventarisadmin", "Kode", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("inventarisadmin", "Nama", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("inventarisadmin", "Jumlah", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("inventarisadmin", "Kategori", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("inventarisadmin", "Merek", nullptr));
        pushButton->setText(QCoreApplication::translate("inventarisadmin", "Tambahkan", nullptr));
        pushButton_4->setText(QCoreApplication::translate("inventarisadmin", "HOME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inventarisadmin: public Ui_inventarisadmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTARISADMIN_H
