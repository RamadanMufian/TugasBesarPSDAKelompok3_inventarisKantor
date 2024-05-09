#ifndef INVENTARISKANTOR_H
#define INVENTARISKANTOR_H

#include <QMainWindow>

namespace Ui {
class inventariskantor;
}

class inventariskantor : public QMainWindow
{
    Q_OBJECT

public:
    explicit inventariskantor(QWidget *parent = nullptr);
    ~inventariskantor();

private:
    Ui::inventariskantor *ui;
};

#endif // INVENTARISKANTOR_H
