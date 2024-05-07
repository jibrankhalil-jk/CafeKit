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
        if(db.isConnected()){
            ui->dbstatus->setStyleSheet("background-color: rgb(106, 183, 79); border-radius:7px;");
        }

        // if (!db.isConnected()){
        //     // if failed to connect then show the warning dialoge
        //      QMessageBox::critical(this, "Error", "Failed to connect to database try again.Restart the app.");
        // }



    }

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{

    // if(db.isConnected()){
    //     QString id = "admin";
    //     QString password = "admin";

    //     if(ui->idTextField->text() == id && ui->passwordTextField->text() == password){
    //         MainWindow::close();
    //         Home* home = new Home();
    //         home->show();
    //     }else{
    //         QMessageBox::critical(this, "Error", "Wrong Password or id try again.");
    //     }
    // }else{
    //      QMessageBox::critical(this, "Error", "Failed to connect to database try again.Restart the app.");
    // }


    MainWindow::close();
    Home* home = new Home(this);
    home->show();
}

