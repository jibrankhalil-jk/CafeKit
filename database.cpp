#include "database.h"

#include"usermodel.h"
#include<iostream>
#include <QHeaderView>
#include <QtSql/QSqlDatabase>
#include<QtSql>

Database::Database() {
    db = QSqlDatabase::addDatabase("QMYSQL", "CafeKit_db_connection");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("CafeKit");
    db.setUserName("user1");
    db.setPassword("user123");
    db.open();
    if(db.isOpen()){
        dbConnected = true;
        std::cout<<"Db connected"<<std::endl;
    }else{
        dbConnected = false;
        std::cout<<"Db connection failed"<<std::endl;
    }
}

void Database::readvalues(){
    QSqlQuery query(db);
    query.prepare("SELECT * FROM `users`");
    query.exec();

    const int rows = query.size();
    const int column = query.record().count();
<<<<<<< HEAD

    QList<User> users;


=======
    QList<User> users;
>>>>>>> 1269334 (home ui updated)
    if(query.record().indexOf("cnic") == -1){
        qDebug() << "Db is empty";
    }else{
        int i = 0;
        while(query.next()){
<<<<<<< HEAD

=======
>>>>>>> 1269334 (home ui updated)
            users.append(User(
                query.value("Cnic").toInt(),
                QString().fromStdString(query.value("name").toString().toStdString()),
                QString().fromStdString(query.value("rollno").toString().toStdString()),
                QString().fromStdString(query.value("pin").toString().toStdString()),
                query.value("daily limit").toInt(),
                query.value("monthly limit").toInt(),
                query.value("Status").toInt(),
                QString().fromStdString(query.value("Phone no").toString().toStdString()),
                query.value("Loan").toInt(),
                QString().fromStdString(query.value("ProfilePic").toString().toStdString())
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

