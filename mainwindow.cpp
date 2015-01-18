#include "mainwindow.h"
#include "ui_mainwindow.h"

QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionLogin_triggered()
{
    Login_Dialog *l = new Login_Dialog();
    l->show();
}

void MainWindow::on_actionShow_Roomates_triggered()
{
    if (!db.isOpen()) {
        QMessageBox alert(QMessageBox::Warning, QString("Warning"), QString("Login First!"), QMessageBox::Yes);
        alert.exec();
        return;
    }

    static QSqlQueryModel *mode  = new QSqlQueryModel(ui->tableView);
    mode->setQuery(QString("select * from RoomMember"),db) ;
    mode->setHeaderData(0,Qt::Horizontal,QObject::tr("BedId"));
    mode->setHeaderData(1,Qt::Horizontal,QObject::tr("Name"));
    mode->setHeaderData(2,Qt::Horizontal,QObject::tr("Born"));
    mode->setHeaderData(3,Qt::Horizontal,QObject::tr("FunOfSex"));
    mode->setHeaderData(4,Qt::Horizontal,QObject::tr("HomeTown"));
    ui->tableView->setModel(mode);
}

void MainWindow::on_actionAdd_Newcomer_triggered()
{
    if (!db.isOpen()) {
        QMessageBox alert(QMessageBox::Warning, QString("Warning"), QString("Login First!"), QMessageBox::Yes);
        alert.exec();
        return;
    }

    Add_Dialog *a = new Add_Dialog();
    a->show();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox aboutMessage(QMessageBox::NoIcon, "About", "<h2 id=\"16-428\">16#428</h2>\
                             <h2 id=\"-\">我们都是猛男！</h2>\
                             <h3 id=\"producted-by\">Producted By</h3>\
                             <h4 id=\"-\">郑宇</h4>\
                             <p>（学号 201200121256）</p>");
    aboutMessage.setIconPixmap(QPixmap(":/icon/strongman.png"));
    aboutMessage.exec();
}
