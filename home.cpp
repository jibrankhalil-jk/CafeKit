#include "home.h"
#include "ui_home.h"

Home::Home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
}

Home::~Home()
{
    delete ui;
}


void Home::selectedPushButton(QPushButton *button)
{
    const QString active= "QPushButton{text-align:left;padding-left:20px;border:2px solid dodgerblue; border-top-left-radius: 20px;border-bottom-left-radius: 20px;   color:white;	   background:#333333; } #QPushButton:hover{       text-align:left;       padding-left:26px;	   border:none;	  color:white;	  background:#333333; }";
    const QString deactive= "QPushButton{text-align:left;padding-left:20px; color:white;	border:none;	   background:#333333; } QPushButton:hover{       text-align:left;       padding-left:26px;	   border:none;	  color:white;	  background:#333333; }";
    if(button ==  ui->HomeButton){
        ui->HomeButton->setStyleSheet(active);
        ui->views->setCurrentIndex(0);
    }else{
        ui->HomeButton->setStyleSheet(deactive);
    }

    if(button ==  ui->OrdersButton){
        ui->OrdersButton->setStyleSheet(active);
        ui->views->setCurrentIndex(1);
    }else{
        ui->OrdersButton->setStyleSheet(deactive);
    }

    if(button ==  ui->FoodButton){
        ui->FoodButton->setStyleSheet(active);
        ui->views->setCurrentIndex(2);
    }else{
        ui->FoodButton->setStyleSheet(deactive);
    }

    if(button ==  ui->UserButton){
        ui->UserButton->setStyleSheet(active);
        ui->views->setCurrentIndex(3);
    }else{
        ui->UserButton->setStyleSheet(deactive);
    }

    if(button ==  ui->LoanButton){
        ui->LoanButton->setStyleSheet(active);
        ui->views->setCurrentIndex(4);
    }else{
        ui->LoanButton->setStyleSheet(deactive);
    }
    if(button ==  ui->SettingsButton){
        ui->SettingsButton->setStyleSheet(active);
        ui->views->setCurrentIndex(5);
    }else{
        ui->SettingsButton->setStyleSheet(deactive);
    }

    if(button ==  ui->HelpButton){
        ui->HelpButton->setStyleSheet(active);
        ui->views->setCurrentIndex(6);
    }else{
        ui->HelpButton->setStyleSheet(deactive);
    }

}




void Home::on_HomeButton_clicked()
{
    selectedPushButton(ui->HomeButton);
}


void Home::on_OrdersButton_clicked()
{
    selectedPushButton(ui->OrdersButton);
}


void Home::on_FoodButton_clicked()
{
    selectedPushButton(ui->FoodButton);
}


void Home::on_UserButton_clicked()
{
    selectedPushButton(ui->UserButton);
}


void Home::on_LoanButton_clicked()
{
    selectedPushButton(ui->LoanButton);
}


void Home::on_SettingsButton_clicked()
{
    selectedPushButton(ui->SettingsButton);
}


void Home::on_HelpButton_clicked()
{
    selectedPushButton(ui->HelpButton);
}

