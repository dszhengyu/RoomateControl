#include "login_dialog.h"
#include "ui_login_dialog.h"

extern QSqlDatabase db;

Login_Dialog::Login_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_Dialog)
{
    ui->setupUi(this);
}

Login_Dialog::~Login_Dialog()
{
    delete ui;
}


void Login_Dialog::on_pushButton_clicked()
{
    QString name, passwd;
    name = ui->lineEdit->text();
    passwd = ui->lineEdit_2->text();
    db.setHostName("localhost");
    db.setDatabaseName("RoomateControl");
    db.setUserName(name.toLocal8Bit().data());
    db.setPassword(passwd.toLocal8Bit().data());
    if(!db.open()) {
        ui->label_3->setText("Wrong, login again!");
        qDebug("fail to connect mysql");
    }
    else {
        qDebug("connected!");
        this->destroy();
    }
}

void Login_Dialog::on_pushButton_2_clicked()
{
    this->destroy();
}
