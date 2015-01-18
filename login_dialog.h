#ifndef LOGIN_DIALOG_H
#define LOGIN_DIALOG_H

#include <mainwindow.h>

namespace Ui {
class Login_Dialog;
}

class Login_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Login_Dialog(QWidget *parent = 0);
    ~Login_Dialog();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Login_Dialog *ui;
};

#endif // LOGIN_DIALOG_H
