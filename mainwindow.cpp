#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "home.h"
#include"database.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    {
    ui->setupUi(this);
      // connecting to Database
         db.init();
    }

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    // QString id = "admin";
    // QString password = "admin";
    // if(ui->id->text() == id && ui->password->text() == password){
    //     MainWindow::close();
    //     Home* home = new Home();
    //     home->show();
    // }else{
    //     QMessageBox::critical(this, "Error", "Wrong Password or id try again.");
    // }

    MainWindow::close();
    Home* home = new Home();
    home->show();

}
