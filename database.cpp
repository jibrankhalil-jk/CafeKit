#include "database.h"
#include<iostream>
#include <QHeaderView>
#include <QtSql/QSqlDatabase>
#include<QtSql>
#include<QTableWidget>
#include<QTableWidgetItem>


QSqlDatabase Database::db = QSqlDatabase::addDatabase("QMYSQL", "CafeKit_db_connection");
bool Database::dbConnected = false;

void Database::init() {
    // QString SERVICEURL = "mysql://avnadmin:AVNS_MH_eJNcJIlxfrdJvNc3@cafekit-cafekit.a.aivencloud.com:14708/defaultdb?ssl-mode=REQUIRED";
    QString HOST = "cafekit-cafekit.a.aivencloud.com";
    QString DBNAME= "cafekit";
    QString USER= "avnadmin";
    QString PASSWORD= "AVNS_MH_eJNcJIlxfrdJvNc3";
   // int PORT = 14708;

    db.setHostName("127.0.0.1");
    // db.setHostName(HOST);
    db.setDatabaseName(DBNAME);
    db.setUserName(USER);
    db.setPassword(PASSWORD);

    db.open();

    // qDebug() << db.lastError();

    dbConnected = db.isOpen() == false ? false: true;
}

void Database::readvalues(QString sqlquery){
    QSqlQuery query(db);
    // query.prepare("SELECT * FROM `users`");
    query.prepare(sqlquery);
    query.exec();

   // const int rows = query.size();
    //const int column = query.record().count();

    // QList<User> users;

    // if(query.record().indexOf("cnic") == -1){
    //     qDebug() << "Db is empty";
    // }else{
    //     int i = 0;
    //     while(query.next()){
    //         users.append(User(
    //             query.value("Cnic").toInt(),
    //             query.value("name").toString(),
    //             query.value("rollno").toString(),
    //             query.value("pin").toString(),
    //             query.value("daily limit").toInt(),
    //             query.value("monthly limit").toInt(),
    //             query.value("Status").toInt(),
    //             query.value("Phone no").toString(),
    //             query.value("Loan").toInt(),
    //             query.value("ProfilePic").toString()
    //             )
    //            );
    //         i++;
    //     }

    //     for(auto user : users){
    //         std::cout<<"Name :" << user.Name.toStdString() << std::endl;
    //     }
    // }

}

void Database::writevalues(){
    QSqlQuery query(db);
    query.prepare("INSERT INTO `users` (`id`, `name`, `age`) VALUES (NULL, 'jk', '11');");
    if(query.exec()){
        std::cout<<"Done value added "<<std::endl;
    }
}

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

void TableView(QTableWidget *table) {

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query = QSqlQuery();
    query.prepare("SELECT * FROM `users`");
    query.exec();

    model->setQuery(std::move(query));
    table->clearContents();
    int i = 1;
    for (int row = 0; row < model->rowCount(); ++row,++i) {
        for (int col = 0; col < 4  ; ++col) {
            QModelIndex index = model->index(row, col);
            if(col == 0){// at # we are adding 1,2,3
                table->setItem(row, col, new QTableWidgetItem(QString("%1").arg(i)));
            }else{
              table->setItem(row, col, new QTableWidgetItem(model->index(index.row(), index.column()).data().toString()));
            }

        }
    }

}


void Database::getHomeOrdersTableData(QTableView *table) {


    QSqlQueryModel model =  QSqlQueryModel();

    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT users.user_name , users.roll_no ,orders.items FROM `orders` LEFT JOIN users ON users.nic = orders.order_by LIMIT 10;");
    query.exec();


    model.setQuery(std::move(query));

    model.setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
    model.setHeaderData(1, Qt::Horizontal, QObject::tr("Roll No"));
    model.setHeaderData(2, Qt::Horizontal, QObject::tr("Items"));
    // table->setModel(model);

    // QMap<int, QVariant> map;
    // map[0] = model->index(0,0).data().toString();
    // map[1] = model->index(0,1).data().toString();
    // map[2] = 2;
    // model->setItemData(model->index(0,2),map);
 table->setModel(&model);
    model.setData(model.index(1,1),QObject::tr("Items"),Qt::EditRole);

    // if (model.submit()) {
        // qDebug() << "Error updating value:" << model.lastError().text();
        // Handle the error appropriately
    // }//
    //qDebug() << "last error is : "<<model.data(model.index(1,1)).toString();
  //  model->submit();

    // for (auto item : model->data().toJsonArray()){

    // }

    // for (int row = 0; row < model->rowCount(); ++row) {

    //        QString rawitems = model->index(row,2).data().toString();
    //        int items = rawitems.split(',').length();

    //             QMap<int, QVariant> map;
    //                 map[0] = model->index(row,0).data().toString();
    //                 map[1] = model->index(row,1).data().toString();
    //                 map[2] = items;

    //                 // model->setData(model->index(row,1),"fas");
    //                // model->setItemData(model->index(row,2),map);



    //                 qDebug() << "model is "<<model->index(row,2).data().toString()<<",,,, "<<items<<" \n";


    // }

    // table->setModel(model);
    table->horizontalHeader()->setStretchLastSection(true);
    table->viewport()->update();
}



void Database::getorders(QTableWidget *table) {

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT users.user_name , users.roll_no ,orders.items FROM `orders` LEFT JOIN users ON users.nic = orders.order_by LIMIT 10;");
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
                }else{// all other filed data implementation from database
                    table->setItem(row, col, new QTableWidgetItem(model->index(index.row(), index.column()).data().toString()));
                }
             }
        }
    }

    table->setColumnWidth(0,20);
    table->setColumnWidth(1,120);
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
    query.prepare("SELECT COUNT(nic) FROM `users`;");
    query.exec();
    query.next();
    int total = query.value(0).toInt();
    return QString::number(total);
}
QString Database::getTotalOrdersTodays(){
    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT COUNT(nic) FROM `users`;");
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

    query.prepare("SELECT users.user_name ,users.roll_no,users.nic , users.account_status,users.loan_status FROM `users` ORDER BY users.datetime ;");
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
    //table->setAlternatingRowColors(true);


}

