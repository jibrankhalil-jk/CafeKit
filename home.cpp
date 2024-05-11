#include "home.h"
#include "ui_home.h"
#include "database.h"

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

    // geting all views data
    loadHomeViewData();
    loadOrdersViewData();
    getFoodViewData();
    getUsersViewData();
    getSettingViewData();
}

// ************************************* Views **************************************************************

void Home::loadHomeViewData()
{
    // getting total ordes data for table on home view
    db.getorders(ui->table1);

    // getting total size of total users, today orders , total sales for today
    ui->homeTotalUsers->setText(db.getTotalUsers());
    ui->homeTotalOrders->setText(db.getTotalOrdersTodays());
    ui->homeTotalSales->setText(db.getTotalSalesToday());

    // getting data of last user who order something
    QMap<QString, QString> user = db.getTodaysLastOderandUser();
    ui->homeLasUserName->setText(user["user_name"]);
    ui->homeLasUserRollno->setText(user["roll_no"]);
    ui->homeLasUserOrderDateTime->setText("sdfs");
    ui->homeLasUserPayement->setText("Rs." + user["total_charges"]);
}

void Home::loadOrdersViewData()
{
    db.getAllOrders(ui->ordersViewAllOrdersTable);
    ui->orderPageTotalSales->setText(db.getTotalSalesToday());
    ui->orderPageTotalOrders->setText(db.getTotalOrdersTodays());
}

void Home::getFoodViewData()
{
    db.getFoods(ui->foodViewFoodItemsTable);
}

void Home::getUsersViewData()
{
    db.getUsers(ui->usersViewUsersTable);
}

void Home::getSettingViewData()
{
}

Home::~Home()
{
    delete ui;
}

// ************************************* Main View **************************************************************

void Home::selectedPushButton(QPushButton *button)
{
    const QString active = "QPushButton{text-align:left;padding-left:20px;	border-bottom: 2px solid dodgerblue; border-top: 2px solid dodgerblue;border-left: 2px solid dodgerblue; border-top-left-radius: 20px;border-bottom-left-radius: 20px;   color:white;	  	background:transparent; } #QPushButton:hover{       text-align:left;       padding-left:26px;	   border:none;	  color:white;	  background:#333333; }";
    const QString deactive = "QPushButton{text-align:left;padding-left:20px; color:white;	border:none;	background:transparent; } QPushButton:hover{       text-align:left;       padding-left:20px;		border-top-left-radius: 20px;   border-bottom-left-radius: 20px;   border:none;	  color:white;	  background-color: rgb(61, 56, 70); }";
    if (button == ui->HomeButton)
    {
        ui->HomeButton->setStyleSheet(active);
        ui->views->setCurrentIndex(0);
    }
    else
    {
        ui->HomeButton->setStyleSheet(deactive);
    }
    if (button == ui->OrdersButton)
    {
        ui->OrdersButton->setStyleSheet(active);
        ui->views->setCurrentIndex(1);
    }
    else
    {
        ui->OrdersButton->setStyleSheet(deactive);
    }
    if (button == ui->FoodButton)
    {
        ui->FoodButton->setStyleSheet(active);
        ui->views->setCurrentIndex(2);
    }
    else
    {
        ui->FoodButton->setStyleSheet(deactive);
    }
    if (button == ui->UserButton)
    {
        ui->UserButton->setStyleSheet(active);
        ui->views->setCurrentIndex(3);
    }
    else
    {
        ui->UserButton->setStyleSheet(deactive);
    }

    if (button == ui->SettingsButton)
    {
        ui->SettingsButton->setStyleSheet(active);
        ui->views->setCurrentIndex(5);
    }
    else
    {
        ui->SettingsButton->setStyleSheet(deactive);
    }
    if (button == ui->aboutbutton)
    {
        ui->aboutbutton->setStyleSheet(active);
        ui->views->setCurrentIndex(6);
    }
    else
    {
        ui->aboutbutton->setStyleSheet(deactive);
    }
}

void Home::on_HomeButton_clicked()
{
    selectedPushButton(ui->HomeButton);    loadHomeViewData();

}

void Home::on_OrdersButton_clicked()
{
    selectedPushButton(ui->OrdersButton);    loadOrdersViewData();

}

void Home::on_FoodButton_clicked()
{
    selectedPushButton(ui->FoodButton);    getFoodViewData();

}

void Home::on_UserButton_clicked()
{
    selectedPushButton(ui->UserButton);    getUsersViewData();

}

void Home::on_SettingsButton_clicked()
{
    selectedPushButton(ui->SettingsButton);  getSettingViewData();
}

void Home::on_aboutbutton_clicked()
{
    selectedPushButton(ui->aboutbutton);
}
// ************************************* Home View **************************************************************

// ************************************* Orders View **************************************************************

void Home::on_ordersViewAddNewButton_clicked()
{
    ui->views->setCurrentIndex(9);
}

// ************************************* Food View **************************************************************

void Home::on_FoodViewAddNewFoodButton_clicked()
{
    ui->views->setCurrentIndex(8);
}

void Home::on_FoodViewRemoveFoodButton_clicked()
{
    int itemRow = ui->foodViewFoodItemsTable->currentIndex().row();

    QString userName = ui->foodViewFoodItemsTable->model()->itemData(ui->foodViewFoodItemsTable->model()->index(itemRow, 0)).value(0).toString();

    if (itemRow >= 0)
    {

        QMessageBox msgBox(this);
        msgBox.setWindowTitle("Delete Item");
        msgBox.setText("Are you sure you want to delete " + userName + " ? ");
        msgBox.setInformativeText("This action cannot be undone.");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);

        if (msgBox.exec() == QMessageBox::Yes)
        {
            // Delete the item here
            db.removeFoodItem(ui->foodViewFoodItemsTable->model()->itemData(ui->foodViewFoodItemsTable->model()->index(itemRow, 1)).value(0).toString(), ui->foodViewFoodItemsTable);
        }
    }
}

// ************************************* User View **************************************************************

void Home::on_usersViewAddNewUserButton_clicked()
{
    ui->views->setCurrentIndex(7);
}

void Home::on_usersViewRemoveUserButton_clicked()
{
    int itemRow = ui->usersViewUsersTable->currentIndex().row();

    QString userName = ui->usersViewUsersTable->model()->itemData(ui->usersViewUsersTable->model()->index(itemRow, 0)).value(0).toString();

    if (itemRow >= 0)
    {

        QMessageBox msgBox;
        msgBox.setWindowTitle("Delete Item");
        msgBox.setText("Are you sure you want to delete " + userName + " ? ");
        msgBox.setInformativeText("This action cannot be undone.");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);

        if (msgBox.exec() == QMessageBox::Yes)
        {
            // Delete the item here
        }
    }
}

// ************************************* Add New User Sub View **************************************************************

void Home::on_newUserCancelButton_clicked()
{
    ui->views->setCurrentIndex(3);
}

void Home::on_newUserSubmitButton_clicked()
{
    QString nic, name, rollNo, email, phoneNumber, gender;
    nic = ui->newUserNicNumber->text();
    name = ui->newUserName->text().toLower();
    rollNo = ui->newUserRollNo->text();
    email = ui->newUserEmail->text();
    phoneNumber = ui->newUserPhoneNumber->text();
    int tempGender = ui->newUserGender->currentIndex();
    {
        if (tempGender == 0)
        {
            gender = "male";
        }
        else if (tempGender == 1)
        {
            gender = "female";
        }
        else
        {
            gender = "other";
        }
    }

    if (nic.length() != 13)
    {
        QMessageBox::warning(this, "Error", "Please enter a nic number.");
    }
    else if (name.isEmpty() || name.length() > 50)
    {
        QMessageBox::warning(this, "Error", "Please enter a valid name.");
    }else if (rollNo.size() < 7 || name.length() > 11){
             QMessageBox::warning(this, "Error", "Please select a valid roll number.");
    }
    else if (email.length() < 1 || email.length() >= 50)
    {
        QMessageBox::warning(this, "Error", "Please enter a valid email id");
    }
    else if (tempGender < 0 || tempGender > 2 )
    {
        QMessageBox::warning(this, "Error", "Please chose a gender from the options.");
    }
    else if (phoneNumber.length() != 11 )
    {
        QMessageBox::warning(this, "Error", "Please enter a valid number e.g (03...).");
    }
    else{
        QString data  = "'"+nic+"', '"+email+"','"+ name+"', '"+ rollNo +"', '0', '"+ phoneNumber+"',current_timestamp()";
        if(db.addnewUser(data,ui->usersViewUsersTable)){
           ui->views->setCurrentIndex(3);
           ui->newUserNicNumber->clear();
           ui->newUserName->clear();
           ui->newUserRollNo->clear();
           ui->newUserEmail->clear();
           ui->newUserPhoneNumber->clear();
           ui->newUserGender->setCurrentIndex(0);
        }
        else{
            QMessageBox::warning(this, "Error", "Failed to add new user.");
        }


     }
}

// ************************************* Add New Food Sub View **************************************************************
void Home::on_foodAddNewCancelButton_clicked()
{
    ui->views->setCurrentIndex(2);
}
void Home::on_foodAddNewSubmitButton_clicked()
{

    QString name = ui->newFoodItemName->text().toLower();
    int qty = ui->newFoodItemQuantity->text().toInt();
    QString size = ui->newFoodItemSize->text().toLower();
    int price = ui->newFoodItemPrice->text().toInt();

    if (name.isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please enter a name for the food item.");
    }
    else if (qty <= 0 || qty >= 10)
    {
    }
    else if (size.isEmpty() || (size != "small" && size != "medium" && size != "large"))
    {
        QMessageBox::warning(this, "Error", "Please select a size for the food item.");
    }
    else if (price <= 0.0 || price >= 2000.0)
    {
        QMessageBox::warning(this, "Error", "Please enter a valid price");
    }

    else
    {

        QString qtyString = QString::number(qty);
        QString priceString = QString::number(price);

        db.addNewFood(name, qtyString, size, priceString, ui->foodViewFoodItemsTable);

        ui->views->setCurrentIndex(2);

        ui->newFoodItemName->clear();
        ui->newFoodItemQuantity->clear();
        ui->newFoodItemPrice->clear();
        ui->newFoodItemSize->clear();

        QMessageBox::information(this, "Success", "Food item added successfully!");
    }
}

// ************************************* Add New Order Sub View **************************************************************

void Home::on_newOrderCancel_clicked()
{
    ui->views->setCurrentIndex(1);
}
void Home::on_newOrderStudentCnic_textChanged(const QString &arg1)
{
    db.getUserWithCnic(ui->newOrderStudentCnic->text(), ui->newOrderStudentName);
}
void Home::on_newOrderItemName_textChanged(const QString &arg1)
{
    ui->newOrderItemsListView->setVisible(true);
    db.getItemsWithName(ui->newOrderItemName->text(), ui->newOrderItemsListView);
}

void Home::on_newOrderItemsListView_clicked(const QModelIndex &index)
{

    QMap<QString, QString> tempItem;
    tempItem["id"] = ui->newOrderItemsListView->model()->index(ui->newOrderItemsListView->currentIndex().row(), 0).data().toString();
    // tempItem["itemid"] =ui->newOrderItemsListView->model()->index(ui->newOrderItemsListView->currentIndex().row(),0).data().toString();
    tempItem["Name"] = ui->newOrderItemsListView->model()->index(ui->newOrderItemsListView->currentIndex().row(), 1).data().toString();
    tempItem["Quantity"] = ui->newOrderItemsListView->model()->index(ui->newOrderItemsListView->currentIndex().row(), 2).data().toString();
    tempItem["Price"] = ui->newOrderItemsListView->model()->index(ui->newOrderItemsListView->currentIndex().row(), 4).data().toString();

    qDebug() << tempItem["id"] << tempItem["Name"] << tempItem["Quantity"] << tempItem["Price"] << "\n";

    finItems.push_back(tempItem);

    int i = ui->newOrderFinalItemstableWidget->rowCount();
    ui->newOrderFinalItemstableWidget->setRowCount(ui->newOrderFinalItemstableWidget->rowCount() + 1);
    // ui->newOrderFinalItemstableWidget->setItem(i,0,new QTableWidgetItem(finItems.back()["id"]));
    ui->newOrderFinalItemstableWidget->setItem(i, 0, new QTableWidgetItem(finItems.back()["Name"]));
    ui->newOrderFinalItemstableWidget->setItem(i, 1, new QTableWidgetItem(finItems.back()["Quantity"]));
    ui->newOrderFinalItemstableWidget->setItem(i, 2, new QTableWidgetItem(finItems.back()["Price"]));
    ui->newOrderFinalItemstableWidget->setItem(i, 3, new QTableWidgetItem("Remove"));

    int total = 0;
    qDebug() << "size of veotr " << finItems.size() << "\n";
    for (auto item : finItems)
    {
        total += item["Price"].toInt();
    }

    ui->newOrderTotalPrice->setText(QString("%1").arg(total));
}

void Home::on_newOrderFinalItemstableWidget_cellClicked(int row, int column)
{
    if (column == 3 && row >= 0)
    {

        QMessageBox msgBox(this);
        msgBox.setWindowTitle("Delete Item");
        msgBox.setText("Are you sure you want to delete this item ? ");
        msgBox.setInformativeText("This action cannot be undone.");
        msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
        msgBox.setDefaultButton(QMessageBox::No);
        int btn = msgBox.exec();
        if (btn == QMessageBox::Yes)
        {
            finItems.erase(finItems.begin() + row); // Erase the element at the specified index
                                                    // qDebug() << "ppppppp  " << row << " removed"<<  " "<<ui->newOrderFinalItemstableWidget->rowCount() <<" " <<finItems.size() <<".\n";
            qDebug() << "..[[";
            for (auto item : finItems)
            {
                qDebug() << item["Name"] << ", ";
            }
            qDebug() << "]]..";

            int i = 0;
            ui->newOrderFinalItemstableWidget->clear();
            ui->newOrderFinalItemstableWidget->setRowCount(finItems.size());
            QStringList list = {"Name", "Qty", "Price", "Remove"};
            ui->newOrderFinalItemstableWidget->setHorizontalHeaderLabels(list);
            int total = 0;
            for (auto item : finItems)
            {
                total += item["Price"].toInt();
                // ui->newOrderFinalItemstableWidget->setItem(i,0,new QTableWidgetItem(item["id"]));
                ui->newOrderFinalItemstableWidget->setItem(i, 0, new QTableWidgetItem(item["Name"]));
                ui->newOrderFinalItemstableWidget->setItem(i, 1, new QTableWidgetItem(item["Quantity"]));
                ui->newOrderFinalItemstableWidget->setItem(i, 2, new QTableWidgetItem(item["Price"]));
                ui->newOrderFinalItemstableWidget->setItem(i, 3, new QTableWidgetItem("Remove"));
                ++i;
            }

            ui->newOrderTotalPrice->setText(QString("%1").arg(total));
        }

        if (btn == QMessageBox::No)
        {
            msgBox.close();
        }
    }
}

void Home::on_newOrdersubmit_clicked()
{

    if (ui->newOrderStudentName->text().contains("Student Name"))
    {
        QMessageBox::critical(this, "Error", "Add a Student");
    }
    else if (!(finItems.size() > 0))
    {
        QMessageBox::critical(this, "Error", "Add items to the order.");
    }
    else
    {

        QString itemsIds = "";
        for (auto item : finItems)
        {
            itemsIds += item["id"] + ",";
        }

        db.addNewOrder(ui->newOrderStudentCnic->text(), ui->newOrderTotalPrice->text(), itemsIds, ui->ordersViewAllOrdersTable);
        ui->views->setCurrentIndex(1);
    }
}
// ************************************* other **************************************************************

void Home::on_ordersViewAllOrdersTable_cellClicked(int row, int column)
{

    if(column == 6){
        QString oid = ui->ordersViewAllOrdersTable->model()->itemData(ui->ordersViewAllOrdersTable->model()->index(row,0)).first().toString();


        QMessageBox msgBox(this);
        msgBox.setWindowTitle("Delete Order");
        msgBox.setText("Are you sure you want to delete "+ ui->ordersViewAllOrdersTable->model()->itemData(ui->ordersViewAllOrdersTable->model()->index(row,0)).first().toString() +" order ? ");
        msgBox.setInformativeText("This action cannot be undone.");
        msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
        msgBox.setDefaultButton(QMessageBox::No);
        int btn = msgBox.exec();
        if (btn == QMessageBox::Yes)
        {
             db.removeOrder(oid,ui->ordersViewAllOrdersTable);
        }

        if (btn == QMessageBox::No)
        {
            msgBox.close();
        }


    }
}

