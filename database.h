#ifndef DATABASE_H
#define DATABASE_H

#include <QHeaderView>
#include <QtSql/QSqlDatabase>
#include <QtSql>
#include <QTableWidget>

class Database
{
public:
    Database(){}
    void init();

private:
   static QSqlDatabase db; 
   static bool dbConnected;

public:
    static bool isConnected(){return dbConnected;}
    void readvalues();
    void writevalues();
    void getusers(QTableWidget* tableView);


    void getTotalUsersToday();
    void getTotalSalesToday();
    void getTotalOrdersToday();
    void getHomeOdersDetails();
    void getLastUser();

};


#endif // DATABASE_H
