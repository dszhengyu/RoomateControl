#ifndef ADD_DIALOG_H
#define ADD_DIALOG_H

#include "mainwindow.h"

namespace Ui {
class Add_Dialog;
}

class Add_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Dialog(QWidget *parent = 0);
    ~Add_Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Add_Dialog *ui;
};

#endif // ADD_DIALOG_H

