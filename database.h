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

   void getHomeOrdersTableData(QTableView *table);
    static bool isConnected(){return dbConnected;}
    void readvalues(QString sqlquery);
    void writevalues();
    void getusers(QTableWidget* tableView);


    QString getTotalUsers();
    QString getTotalSalesToday();
    QString getTotalOrdersTodays();

    QMap<QString, QString> getTodaysLastOderandUser();


    void getTodaysPaymets();
    void getOrderDetails();
    void getUser();
    void getFoods(QTableView *table);
    bool removeFoodItem(QString id,QTableView *table);
    void getCategories(QTableView *table);
    void getUsers(QTableView *table);

    //

    void removeOrder();
    void acceptOrder();
    void addNewOrder();
    void addNewFood(QString,QString,QString,QString,QTableView *table);
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
