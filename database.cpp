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
    int PORT = 14708;

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

    const int rows = query.size();
    const int column = query.record().count();

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

void Database::getUsers(QTableWidget *table) {

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query = QSqlQuery(db);
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


void Database::getorders(QTableWidget *table) {

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT * FROM `orders`");
    query.exec();

    model->setQuery(std::move(query));
    table->clearContents();

    table->setRowCount(model->rowCount());
    model->insertColumn(2);
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

}

