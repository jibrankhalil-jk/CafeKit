#include "home.h"
#include "ui_home.h"
#include"database.h"

#include <QApplication>
#include <QFileDialog>
#include <QLabel>
#include <QPixmap>
#include <QMessageBox>

Home::Home(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::Home)
{
    ui->setupUi(this);

    //qDebug() << " db status : "<<db.isConnected()<<"\n" ; // checking if db is connnected

    loadHomeData();
    getUsersViewData();
    getFoodViewData();

}


Home::~Home()
{
    delete ui;
}

void Home::selectedPushButton(QPushButton *button)
{
    const QString active= "QPushButton{text-align:left;padding-left:20px;	border-bottom: 2px solid dodgerblue; border-top: 2px solid dodgerblue;border-left: 2px solid dodgerblue; border-top-left-radius: 20px;border-bottom-left-radius: 20px;   color:white;	  	background:transparent; } #QPushButton:hover{       text-align:left;       padding-left:26px;	   border:none;	  color:white;	  background:#333333; }";
    const QString deactive= "QPushButton{text-align:left;padding-left:20px; color:white;	border:none;	background:transparent; } QPushButton:hover{       text-align:left;       padding-left:20px;		border-top-left-radius: 20px;   border-bottom-left-radius: 20px;   border:none;	  color:white;	  background-color: rgb(61, 56, 70); }";

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

void Home::on_HomeButton_clicked(){
    selectedPushButton(ui->HomeButton);
}

void Home::on_OrdersButton_clicked()
{
    selectedPushButton(ui->OrdersButton);
}

void Home::on_FoodButton_clicked()
{
    selectedPushButton(ui->FoodButton);

    // fetching user view data
    //getFoodViewData();


}

void Home::on_UserButton_clicked()
{
    selectedPushButton(ui->UserButton);
    // db.getusers(this->ui->userstableView);

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

void Home::loadHomeData(){
    db.getorders(ui->table1);

    ui->homeTotalUsers->setText(db.getTotalUsers());

    ui->homeTotalOrders->setText(db.getTotalOrdersTodays());

    ui->homeTotalSales->setText(db.getTotalSalesToday());

    QMap<QString,QString> user = db.getTodaysLastOderandUser();
    ui->homeLasUserName->setText(user["user_name"]);
    ui->homeLasUserRollno->setText(user["roll_no"]);
    ui->homeLasUserOrderDateTime->setText("sdfs");
    ui->homeLasUserPayement->setText("Rs." + user["total_charges"]);

   // qDebug() << QDateTime::fromString(user["date_time"]).time().toString();

}
void Home::getUsersViewData(){

    db.getUsers(ui->usersViewUsersTable);


}
void Home::getFoodViewData(){
    db.getCategories(ui->foodViewCategoryTable);
    db.getFoods(ui->foodViewFoodItemTable);
}


// User View
void Home::on_addNewUserButton_clicked()
{
    // changing view to user ,to add new user
    ui->views->setCurrentIndex(7);
}


void Home::on_userCancelButton_clicked()
{
     ui->views->setCurrentIndex(3);
}


void Home::on_ProfilePictureButton_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(nullptr, "Select Profile Picture", QDir::homePath(), "Images (*.png *.jpg *.jpeg)");

    if (!imagePath.isEmpty()) {

        QPixmap image(imagePath);

        ui->userprofilepctureview->setPixmap(image);
        ui->userprofilepctureview->setScaledContents(true);
        ui->userprofilepctureview->setStyleSheet("border-radius: 77px;");

    }
}


void Home::on_addNewFoodButton_clicked()
{
    ui->views->setCurrentIndex(8);
}


void Home::on_foodAddNewCancelButton_clicked()
{
    ui->views->setCurrentIndex(2);
}


void Home::on_removeUserButton_clicked()
{

   int itemRow = ui->usersViewUsersTable->currentIndex().row();

    QString userName = ui->usersViewUsersTable->model()->itemData(ui->usersViewUsersTable->model()->index(itemRow,0)).value(0).toString();

    if (itemRow >= 0){

        QMessageBox msgBox;
        msgBox.setWindowTitle("Delete Item");
        msgBox.setText("Are you sure you want to delete " + userName + " ? ");
        msgBox.setInformativeText("This action cannot be undone.");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);

       if (msgBox.exec() == QMessageBox::Yes) {
           // Delete the item here
       }
    }

}


void Home::on_views_currentChanged(int arg1)
{

}


void Home::on_foodAddNewSubmitButton_clicked()
{
     db.addNewFood(ui->newFoodItemName->text(),
    ui->newFoodItemQuantity->text(),
    ui->newFoodItemSize->text(),
    ui->newFoodItemPrice->text(),
    ui->foodViewFoodItemTable
    );

    ui->views->setCurrentIndex(2);


    ui->newFoodItemName->clear();
    ui->newFoodItemQuantity->clear();
    ui->newFoodItemSize->clear();
    ui->newFoodItemPrice->clear();

}


void Home::on_removeFoodButton_clicked()
{
    int itemRow = ui->foodViewFoodItemTable->currentIndex().row();

    QString userName = ui->foodViewFoodItemTable->model()->itemData(ui->foodViewFoodItemTable->model()->index(itemRow,0)).value(0).toString();

    if (itemRow >= 0){

        QMessageBox msgBox;
        msgBox.setWindowTitle("Delete Item");
        msgBox.setText("Are you sure you want to delete " + userName + " ? ");
        msgBox.setInformativeText("This action cannot be undone.");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);

        if (msgBox.exec() == QMessageBox::Yes) {
            // Delete the item here
            db.removeFoodItem(ui->foodViewFoodItemTable->model()->itemData(ui->foodViewFoodItemTable->model()->index(itemRow,1)).value(0).toString(),ui->foodViewFoodItemTable);
        }
    }
}

