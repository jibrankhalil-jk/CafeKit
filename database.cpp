// cafekit
// coder : jibran khalil , marya amin
// purpose of code: this is database header file , it consists of all the function and class to manage the databse connection , inserting , updatig and removing data .


#include "database.h"
#include <QHeaderView>
#include <QtSql/QSqlDatabase>
#include<QtSql>
#include<QTableWidget>
#include<QTableWidgetItem>
#include <QLabel>
#include <QMessageBox>

QSqlDatabase Database::db = QSqlDatabase::addDatabase("QMYSQL", "CafeKit_db_connection");
bool Database::dbConnected = false;
QString Database::admin = "";
void Database::init() {

    db.setHostName("127.0.0.1");
    db.setDatabaseName("cafekit");
    db.setUserName("avnadmin");
    db.setPassword("AVNS_MH_eJNcJIlxfrdJvNc3");

    db.open();

    qDebug() << db.lastError();

    dbConnected = db.isOpen() == false ? false: true;
}

bool Database::login(QString id ,QString pass){
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query = QSqlQuery(db);

    query.prepare("SELECT * FROM `admins` WHERE `id` = '"+id+"' AND `password` = '"+pass+"'");
    query.exec();
    model->setQuery(std::move(query));
    if(model->rowCount() > 0){
         admin = id;
        return 1;
    }else{
        return 0;
    }
};

void Database::getusers(QTableWidget* tableWidget){
    QSqlQuery* query = new QSqlQuery(db);
    query->prepare("SELECT * FROM `users`");
    if (query->exec()) {
        tableWidget->setRowCount(query->size());
        // tableWidget->setColumnCount(1);
        int row = 0;
        while (query->next()) {
            QTableWidgetItem*  item = new QTableWidgetItem(query->value(0).toString());
            tableWidget->setItem(row, 0, item );
            item = new QTableWidgetItem(query->value(1).toString());
            tableWidget->setItem(row, 1, item );
            item = new QTableWidgetItem(query->value(1).toString());
            tableWidget->setItem(row, 1, item );
            row++;
        }
    }
}

void Database::getorders(QTableWidget *table) {

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT users.user_name , users.roll_no ,orders.items  FROM `orders` LEFT JOIN users ON users.nic = orders.order_by LIMIT 10;");
    query.exec();

    model->setQuery(std::move(query));
    model->insertColumn(0);
    table->setRowCount(model->rowCount());

    int i = 1;
    for (int row = 0; row < model->rowCount(); ++row,++i) {
        for (int col = 0; col < 4 ; ++col) {
            QModelIndex index = model->index(row, col);
            if(col == 0){// at # we are adding 1,2,3
                table->setItem(row, col, new QTableWidgetItem(QString("%1").arg(i)));
            }else{
                if( col == 3){// if last index , checking the total items in order and calculating the length
                    QString rawitems = model->index(index.row(), index.column()).data().toString();
                    int items = rawitems.split(',').length();
                    table->setItem(row, col, new QTableWidgetItem(QString("%1").arg(items)));
                }else{
                    table->setItem(row, col, new QTableWidgetItem(model->index(index.row(), index.column()).data().toString()));
                }
             }
        }
    }

    table->setColumnWidth(0,44);
}

QString Database::getTotalUsers(){
    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT COUNT(nic) FROM `users`;");
    query.exec();
    query.next();
    int total = query.value(0).toInt();
    return QString::number(total);
};

QString Database::getTotalSalesToday(){
    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT SUM(orders.total_charges) FROM `orders` LEFT JOIN users ON users.nic = orders.order_by WHERE orders.date_time >= DATE_FORMAT(CURDATE(), '%Y-%m-%d 00:00:00') AND date_time <= DATE_FORMAT(CURDATE(), '%Y-%m-%d 23:59:59');    ");
    query.exec();
    query.next();
    int total = query.value(0).toInt();
    return QString::number(total);
}

QString Database::getTotalOrdersTodays(){
    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT COUNT(orders.oid) FROM `orders` LEFT JOIN users ON users.nic = orders.order_by WHERE orders.date_time >= DATE_FORMAT(CURDATE(), '%Y-%m-%d 00:00:00') AND date_time <= DATE_FORMAT(CURDATE(), '%Y-%m-%d 23:59:59');");
    query.exec();
    query.next();
    int total = query.value(0).toInt();
    return QString::number(total);
}

QMap<QString, QString> Database::getTodaysLastOderandUser(){
    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT orders.date_time , orders.total_charges ,users.user_name , users.roll_no FROM `orders` LEFT JOIN users ON users.nic = orders.order_by ORDER BY orders.date_time DESC LIMIT 1;");
    query.exec();
    query.next();

    QMap<QString, QString> lastuser;
    lastuser["user_name"] = query.value(2).toString();
    lastuser["roll_no"] = query.value(3).toString();
    lastuser["date_time"] = query.value(0).toString();
    lastuser["total_charges"] = query.value(1).toString();

    return lastuser;
};

void Database::getUsers(QTableView *table){

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query = QSqlQuery(db);

    query.prepare("SELECT users.user_name ,users.roll_no,users.nic FROM `users` ORDER BY users.datetime ;");
    query.exec();
    model->setQuery(std::move(query));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Roll No"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nic"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Account Status"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Loan Status"));
    table->setModel(model);

    table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    table->horizontalHeader()->setStretchLastSection(true);

}


void Database::getUserWithCnic(QString cnic,QLabel *label){
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query = QSqlQuery(db);

    query.prepare("SELECT users.nic , users.roll_no , users.user_name FROM `users` WHERE `nic` = " + cnic + ";");
    query.exec();
    model->setQuery(std::move(query));
    // qDebug() << model->data(model->index(0,2)).toString() ;

    if(!model->data(model->index(0,2)).toString().isEmpty()){
        label->setText(model->data(model->index(0,2)).toString());
         label->setStyleSheet("color:white;");
    }else{
        label->setText("Student Name");
        label->setStyleSheet("color:white;");
    }
};


void Database::getItemsWithName(QString name,QListView *list){
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query = QSqlQuery(db);

    query.prepare("SELECT * FROM `food_items` WHERE `food_name` LIKE '%" + name + "%' ;");
    query.exec();
    model->setQuery(std::move(query));
    list->setModel(model);
    list->setModelColumn(1);
};



bool Database::addnewUser(QString data,QTableView *table){
    QSqlQuery query =  QSqlQuery(db);
    if(db.isOpen())
    {

         query.prepare("INSERT INTO `users` (`nic`, `email`, `user_name`, `roll_no`, `account_status`, `phone_number`, `datetime`) VALUES ("+data+");");
        if(query.exec())
        {
            getUsers(table);
            return 1;
        }
        else
        {
            return 0;
            qDebug() << "Error : "<<query.lastError().text() << query.isValid();
        }
    }
     return 0;
}


bool Database::updateUser(QString phone_number,QString name,QString email,QString nic,QTableView *table){
    QSqlQuery query =  QSqlQuery(db);
    if(db.isOpen())
    {
         query.prepare("UPDATE `users` SET user_name = '"+name+"' phone_number = '"+phone_number+"' , email = '"+email+"' WHERE `users`.`nic` = '"+nic+"'  ;");
        if(query.exec())
        {
            getUsers(table);
            return 1;
        }
        else
        {
            return 0;
            qDebug() << "Error : "<<query.lastError().text() << query.isValid();
        }
    }
    return 0;
}




bool Database::removeUser(QString id, QTableView *table){

    QSqlQuery query =  QSqlQuery(db);
    if(db.isOpen())
    {
        query.prepare("DELETE FROM users WHERE `users`.`nic` = "+id+";");
        if(query.exec())
        {
            getUsers(table);
            return true;

        }
        else
        {
            qDebug() << "Error : "<<query.lastError().text() << query.isValid();
        }
    }
    return false;
};

//
void Database::getFoods(QTableView *table){

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query = QSqlQuery(db);

    query.prepare("SELECT food_items.food_name, food_items.fid, food_items.quantity, food_items.size, food_items.price FROM `food_items`  ;");
    query.exec();
    model->setQuery(std::move(query));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantity"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Size"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Price"));
    table->setModel(model);

    table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    table->horizontalHeader()->setStretchLastSection(true);


};


void Database::addNewFood(QString name,QString qnt,QString size,QString price,QTableView *table){

    QSqlQuery query =  QSqlQuery(db);
    if(db.isOpen())
    {
        query.prepare("INSERT INTO `food_items` (`fid`, `food_name`, `quantity`, `size`, `price`) VALUES (NULL, '"+ name +"', '"+ qnt +"', '"+ size +"', '"+ price +"');");
        if(query.exec())
        {
            getFoods(table);
        }
        else
        {
            qDebug() << "Error : "<<query.lastError().text() << query.isValid();
        }
    }
}


bool Database::removeFoodItem(QString id,QTableView *table){
    QSqlQuery query =  QSqlQuery(db);
    if(db.isOpen())
    {
        query.prepare("DELETE FROM `food_items` WHERE `food_items`.`fid` = "+id+";");
        if(query.exec())
        {
            getFoods(table);
            return true;

        }
        else
        {
            qDebug() << "Error : "<<query.lastError().text() << query.isValid();
        }
    }
    return false;

}

void Database::addNewOrder( QString cnic,QString total,QString items,QTableWidget *table){
    QSqlQuery query =  QSqlQuery(db);
    items = items.left(items.length() - 1);
    if(db.isOpen())
    {
        query.prepare("INSERT INTO `orders` (`oid`, `order_by`, `items`, `total_charges`, `date_time`, `paid`) VALUES (NULL, '"+cnic+"', '["+items +"]','"+total+"', current_timestamp(), '1');");
        if(query.exec())
        {

            getAllOrders(table);
            // QMessageBox::information(this, "Success", "Order placed successfully",QMessageBox::Ok);

        }
        else
        {
            qDebug() << "Error : "<<query.lastError().text() << query.isValid();
        }
    }


};

void Database::getAllOrders(QTableWidget *table ){

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT orders.oid , users.user_name ,users.roll_no, orders.items ,orders.paid,orders.total_charges FROM `orders` LEFT JOIN users ON users.nic = orders.order_by WHERE orders.date_time >= DATE_FORMAT(CURDATE(), '%Y-%m-%d 00:00:00') AND date_time <= DATE_FORMAT(CURDATE(), '%Y-%m-%d 23:59:59');");
    query.exec();
    model->setQuery(std::move(query));
    // model->insertColumn(0);
    table->setRowCount(model->rowCount());

    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < model->columnCount() ; ++col) {
            QModelIndex index = model->index(row, col);
            if(col == 4 ){
                if(model->index(index.row(), col).data().toString().contains("1")){
                    table->setItem(row, col, new QTableWidgetItem("Paid"));
                }else{
                    table->setItem(row, col, new QTableWidgetItem("Not Paid"));
                }
            }else{
            table->setItem(row, col, new QTableWidgetItem(model->index(index.row(), col).data().toString()));
            }
        }
        table->setItem(row, 6, new QTableWidgetItem("Cancel"));
    }
};

void Database::removeOrder(QString oid, QTableWidget *table){
    QSqlQuery query =  QSqlQuery(db);
    if(db.isOpen())
    {
        query.prepare("DELETE FROM orders WHERE `orders`.`oid` = "+oid+";");
        if(query.exec())
        {
            getAllOrders(table);
        }
        else
        {
            qDebug() << "Error : "<<query.lastError().text() << query.isValid();
        }
    }
};



void Database::updateFood(QString id, QString name, QString qty, QString size,QString price, QTableView *table){
    QSqlQuery query =  QSqlQuery(db);
    if(db.isOpen())
    {
        query.prepare("UPDATE `food_items` SET `food_name` = '"+name+"' , quantity = '"+qty+"' , size= '"+size+"', price = '"+price+"' WHERE `food_items`.`fid` = '"+id+"';");
        if(query.exec())
        {
            getFoods(table);
        }
        else
        {
            qDebug() << "Error : "<<query.lastError().text() << query.isValid();
        }
    }

}
