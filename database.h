#ifndef DATABASE_H
#define DATABASE_H

#include <QHeaderView>
#include <QtSql/QSqlDatabase>
#include <QtSql>
#include <QTableWidget>
#include <QLabel>
#include <QList>

class Database
{
public:
    Database() {}
    void init();

private:
    static QSqlDatabase db;
    static bool dbConnected;

public:
    void getHomeOrdersTableData(QTableView *table);
    static bool isConnected() { return dbConnected; }
    void readvalues(QString sqlquery);
    void writevalues();

    void getTodaysPaymets();
    void getOrderDetails();

    void getUser();

    bool removeFoodItem(QString id, QTableView *table);
    void getCategories(QTableView *table);
    void getUsers(QTableView *table);
    void getUserWithCnic(QString cnic, QLabel *label);
    void getItemsWithName(QString name, QListView *list);

    void removeOrder();
    void acceptOrder();
    void addNewOrder(QString cnic, QString total, QString items, QTableWidget *table);
    void addNewFood(QString, QString, QString, QString, QTableView *table);
    void addnewCategorie();
    void addnewUser(QString, QTableView *table);

    void updateOrder();
    void updateFoodDetails();
    void updateCAtegorieDetails();
    void updateUser();

    // home view  *******************************************

    void getorders(QTableWidget *table);
    QString getTotalUsers();
    QString getTotalSalesToday();
    QString getTotalOrdersTodays();
    QMap<QString, QString> getTodaysLastOderandUser();

    // orders view  *******************************************

    void getAllOrders(QTableWidget *table);

    // food view  *******************************************

    void getFoods(QTableView *table);

    // users view  *******************************************

    void getusers(QTableWidget *tableView);

    // setting view  *******************************************
};

#endif // DATABASE_H
