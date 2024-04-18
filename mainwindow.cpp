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

        //initially connecting to Database

        db.init();
        if (!db.isConnected()){
            // if failed to connect then show the warning dialoge
             QMessageBox::critical(this, "Error", "Failed to connect to database try again.");
        }

    }

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
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

