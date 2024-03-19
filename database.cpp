#include "database.h"
#include"usermodel.h"
#include<iostream>
#include <QHeaderView>
#include <QtSql/QSqlDatabase>
#include<QtSql>
#include<QTableWidget>
#include<QTableWidgetItem>

QSqlDatabase Database::db = QSqlDatabase::addDatabase("QMYSQL", "CafeKit_db_connection");
bool Database::dbConnected = false;

void Database::init() {
    QString SERVICEURL = "mysql://avnadmin:AVNS_MH_eJNcJIlxfrdJvNc3@cafekit-cafekit.a.aivencloud.com:14708/defaultdb?ssl-mode=REQUIRED";
    QString HOST = "cafekit-cafekit.a.aivencloud.com";
    QString DBNAME= "CafeKit";
    QString USER= "avnadmin";
    QString PASSWORD= "AVNS_MH_eJNcJIlxfrdJvNc3";
    int PORT = 14708;
    db.setHostName(HOST);
    db.setDatabaseName(DBNAME);
    db.setUserName(USER);
    db.setPassword(PASSWORD);
    db.setPort(PORT);
    db.open();

    dbConnected = db.isOpen() == false ? false: true;

    // db.setHostName("127.0.0.1");
    // db.setDatabaseName("CafeKit");
    // db.setUserName("user1");
    // db.setPassword("user123");
}

void Database::readvalues(){
    QSqlQuery query(db);
    query.prepare("SELECT * FROM `users`");
    query.exec();

    const int rows = query.size();
    const int column = query.record().count();

    QList<User> users;

    if(query.record().indexOf("cnic") == -1){
        qDebug() << "Db is empty";
    }else{
        int i = 0;
        while(query.next()){
            users.append(User(
                query.value("Cnic").toInt(),
                query.value("name").toString(),
                query.value("rollno").toString(),
                query.value("pin").toString(),
                query.value("daily limit").toInt(),
                query.value("monthly limit").toInt(),
                query.value("Status").toInt(),
                query.value("Phone no").toString(),
                query.value("Loan").toInt(),
                query.value("ProfilePic").toString()
                )
               );
            i++;
        }

        for(auto user : users){
            std::cout<<"Name :" << user.Name.toStdString() << std::endl;
        }
    }


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


