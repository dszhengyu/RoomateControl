#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QDialog>
#include <QMessageBox>
#include "login_dialog.h"
#include "add_dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionLogin_triggered();

    void on_actionShow_Roomates_triggered();

    void on_actionAdd_Newcomer_triggered();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
