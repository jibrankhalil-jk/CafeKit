#include "mainwindow.h"
#include "ui_mainwindow.h"
<<<<<<< HEAD
=======
#include "home.h"
>>>>>>> 1269334 (home ui updated)

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
<<<<<<< HEAD
=======

void MainWindow::on_pushButton_clicked()
{

    MainWindow::close();
    Home* home = new Home();
    // home->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    home->show();
}

>>>>>>> 1269334 (home ui updated)
