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
    void readvalues(QString sqlquery);
    void writevalues();
    void getusers(QTableWidget* tableView);


    void getTotalUsersToday();
    void getTotalSalesToday();
    void getTodaysOrders();
    void getTodaysPaymets();
    void getOrderDetails();
    void getUser();
    void getFoods();
    void getCategories();
    void getUsers(QTableWidget *table);


    //

    void removeOrder();
    void acceptOrder();
    void addNewOrder();
    void addNewFood();
    void addnewCategorie();
    void addnewUser();

    //
    void updateOrder();
    void updateFoodDetails();
    void updateCAtegorieDetails();
    void updateUser();


    void getorders(QTableWidget *table);
};


#endif // DATABASE_H
