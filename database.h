#ifndef DATABASE_H
#define DATABASE_H

#include <QHeaderView>
#include <QtSql/QSqlDatabase>
#include<QtSql>

class Database
{
public:
    Database();

protected:
    QSqlDatabase db;
    bool dbConnected;
public:
    void readvalues();
    void writevalues();

};

#endif // DATABASE_H
