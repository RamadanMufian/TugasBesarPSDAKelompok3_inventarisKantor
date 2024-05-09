#include "inventariskantor.h"
#include "ui_inventariskantor.h"

inventariskantor::inventariskantor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::inventariskantor)
{
    ui->setupUi(this);
}

inventariskantor::~inventariskantor()
{
    delete ui;
}
