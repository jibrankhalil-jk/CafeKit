#include "home.h"
#include "ui_home.h"
#include"database.h"

#include <QApplication>
#include <QFileDialog>
#include <QLabel>
#include <QPixmap>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>

Home::Home(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::Home)
{
    ui->setupUi(this);
    ui->newOrderItemsListView->setVisible(false);
    //qDebug() << " db status : "<<db.isConnected()<<"\n" ; // checking if db is connnected
    loadHomeData();
    getUsersViewData();
    getFoodViewData();


    // ui->columnView->setModel();
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

    if(button ==  ui->SettingsButton){
        ui->SettingsButton->setStyleSheet(active);
        ui->views->setCurrentIndex(5);
    }else{
        ui->SettingsButton->setStyleSheet(deactive);
    }
    if(button ==  ui->aboutbutton){
        ui->aboutbutton->setStyleSheet(active);
        ui->views->setCurrentIndex(6);
    }else{
        ui->aboutbutton->setStyleSheet(deactive);
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


void Home::on_SettingsButton_clicked()
{
    selectedPushButton(ui->SettingsButton);
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
    qDebug() << arg1;
    if(arg1 == 1){
        db.getAllOrders(ui->allorderstable);
    }
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

void Home::on_aboutbutton_clicked()
{
    selectedPushButton(ui->aboutbutton);
}


void Home::on_foodItemPicture_clicked()
{


    QString imagePath = QFileDialog::getOpenFileName(nullptr, "Select Profile Picture", QDir::homePath(), "Images (*.png *.jpg *.jpeg)");

    if (!imagePath.isEmpty()) {

        QPixmap image(imagePath);
        ui->userprofilepctureview_2->setPixmap(image);
        ui->userprofilepctureview_2->setScaledContents(true);


        QFile* pic = new QFile(imagePath);
        pic->open(QIODevice::ReadOnly);
        QByteArray picture = pic->readAll();
        int originalSize = picture.length();

        QString encoded = QString(picture.toBase64());
        int encodedSize = encoded.size();

        db.addnewUser(encoded,ui->usersViewUsersTable);

    }
}


void Home::on_newOrderStudentCnic_editingFinished()
{
    qDebug() << " end ";
}


void Home::on_newOrderStudentCnic_textChanged(const QString &arg1)
{
    db.getUserWithCnic(ui->newOrderStudentCnic->text(),ui->newOrderStudentName);
}


void Home::on_newOrderItemName_textChanged(const QString &arg1)
{
    ui->newOrderItemsListView->setVisible(true);
    db.getItemsWithName(ui->newOrderItemName->text(),ui->newOrderItemsListView);

}


void Home::on_newOrderCancel_clicked()
{
     ui->views->setCurrentIndex(1);
}


void Home::on_pushButton_clicked()
{
     ui->views->setCurrentIndex(9);
}


void Home::on_newOrderItemsListView_clicked(const QModelIndex &index)
{


    QMap<QString,QString> tempItem;
    tempItem["id"] =ui->newOrderItemsListView->model()->index(ui->newOrderItemsListView->currentIndex().row(),0).data().toString();
    // tempItem["itemid"] =ui->newOrderItemsListView->model()->index(ui->newOrderItemsListView->currentIndex().row(),0).data().toString();
    tempItem["Name"] =ui->newOrderItemsListView->model()->index(ui->newOrderItemsListView->currentIndex().row(),1).data().toString();
    tempItem["Quantity"] = ui->newOrderItemsListView->model()->index(ui->newOrderItemsListView->currentIndex().row(),2).data().toString();
    tempItem["Price"] =ui->newOrderItemsListView->model()->index(ui->newOrderItemsListView->currentIndex().row(),5).data().toString();

    qDebug() << tempItem["itemid"]<< tempItem["Name"] <<  tempItem["Quantity"]<< tempItem["Price"]<<"\n";

    finItems.push_back(tempItem);

    int i = ui->newOrderFinalItemstableWidget->rowCount();
    ui->newOrderFinalItemstableWidget->setRowCount(ui->newOrderFinalItemstableWidget->rowCount() + 1 );
    // ui->newOrderFinalItemstableWidget->setItem(i,0,new QTableWidgetItem(finItems.back()["id"]));
    ui->newOrderFinalItemstableWidget->setItem(i,0,new QTableWidgetItem(finItems.back()["Name"]));
    ui->newOrderFinalItemstableWidget->setItem(i,1,new QTableWidgetItem(finItems.back()["Quantity"]));
    ui->newOrderFinalItemstableWidget->setItem(i,2,new QTableWidgetItem(finItems.back()["Price"]));
    ui->newOrderFinalItemstableWidget->setItem(i,3,new QTableWidgetItem("Remove"));

    int total = 0;
    qDebug() << "size of veotr " <<  finItems.size() <<"\n";
    for(auto item: finItems){
        total += item["Price"].toInt();
    }

    ui->newOrderTotalPrice->setText(QString("%1").arg(total));
}

void Home::on_newOrderFinalItemstableWidget_cellClicked(int row, int column)
{
    if(column == 3 && row >= 0 ){

        QMessageBox msgBox(this);
        msgBox.setWindowTitle("Delete Item");
        msgBox.setText("Are you sure you want to delete this item ? ");
        msgBox.setInformativeText("This action cannot be undone.");
        msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
        msgBox.setDefaultButton(QMessageBox::No);
        int btn = msgBox.exec();
        if ( btn == QMessageBox::Yes) {
            finItems.erase(finItems.begin() + row); // Erase the element at the specified index
            // qDebug() << "ppppppp  " << row << " removed"<<  " "<<ui->newOrderFinalItemstableWidget->rowCount() <<" " <<finItems.size() <<".\n";
             qDebug()<<"..[[";
            for(auto item : finItems){
                qDebug()<< item["Name"] << ", " ;
            }
    qDebug()<<"]]..";

            int i  = 0 ;
            ui->newOrderFinalItemstableWidget->clear();
            ui->newOrderFinalItemstableWidget->setRowCount(finItems.size());
            QStringList list = {"Name","Qty","Price","Remove"};
            ui->newOrderFinalItemstableWidget->setHorizontalHeaderLabels(list);
            int total = 0;
            for(auto item : finItems){
                 total += item["Price"].toInt();
                // ui->newOrderFinalItemstableWidget->setItem(i,0,new QTableWidgetItem(item["id"]));
                ui->newOrderFinalItemstableWidget->setItem(i,0,new QTableWidgetItem(item["Name"]));
                ui->newOrderFinalItemstableWidget->setItem(i,1,new QTableWidgetItem(item["Quantity"]));
                ui->newOrderFinalItemstableWidget->setItem(i,2,new QTableWidgetItem(item["Price"]));
                ui->newOrderFinalItemstableWidget->setItem(i,3,new QTableWidgetItem("Remove"));
                ++i;
            }




            ui->newOrderTotalPrice->setText(QString("%1").arg(total));


        }




        if (btn == QMessageBox::No) {
            msgBox.close();
        }
    }
}


void Home::on_newOrdersubmit_clicked()
{

    if (ui->newOrderStudentName->text().contains("Student Name")) {
        QMessageBox::critical(this, "Error", "Add a Student");
    }else if(!(finItems.size() > 0 )){
        QMessageBox::critical(this, "Error", "Add items to the order.");
    }else{

        QString itemsIds = "";
        for(auto item : finItems){
            itemsIds += item["id"] + ",";
        }

        db.addNewOrder(ui->newOrderStudentCnic->text(),ui->newOrderTotalPrice->text(),itemsIds,ui->allorderstable);
            // ui->views->setCurrentIndex(1);
    }


}

