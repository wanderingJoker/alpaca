#ifndef BTDATABASE_H
#define BTDATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlDriver>
#include <QDebug>
#include <QString>


class xhDatabase
{
public:

    static xhDatabase* instance();
    static void setconfig(const QString, const QString, const QString);
    QString identify(const QString, const QString);
    void init();
    bool isOpen();

    int execSQL(const QString sql);
    QSqlQuery querySQL(const QString sql, bool debug = 0);
    int insertOperation(const QString sql);
    int updateOperation(const QString sql);
    int batchOperation(const QString sql);

    void commitOperation();

private:
    static xhDatabase* _instance;
    xhDatabase();
    QSqlDatabase *db;
};

#endif // BTDATABASE_H
