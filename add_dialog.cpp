#include "add_dialog.h"
#include "ui_add_dialog.h"

Add_Dialog::Add_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Dialog)
{
    ui->setupUi(this);
}

Add_Dialog::~Add_Dialog()
{
    delete ui;
}

void Add_Dialog::on_pushButton_clicked()
{
    QSqlQuery q;
    q.prepare("INSERT INTO RoomMember VALUES (:id, :name, :year, :fun, :home)");
    QString id, name, year, fun, home;
    id = ui->lineEdit->text();
    name = ui->lineEdit_2->text();
    year = ui->lineEdit_3->text();
    home = ui->lineEdit_4->text();
    fun = ui->comboBox->currentText();
    q.bindValue(":id", id.toLocal8Bit().data());
    q.bindValue(":name", name);
    q.bindValue(":year", year);
    q.bindValue(":fun", fun);
    q.bindValue(":home", home);
    q.exec();
    this->destroy();
}


void Add_Dialog::on_pushButton_2_clicked()
{
    this->destroy();
}
