#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H

#include <QObject>
#include <QWidget>
#include <QtSql>
#include<QFile>
#include<QDebug>

class loginManager : public QObject
{
    Q_OBJECT
public:
    explicit loginManager(QObject *parent = nullptr);

signals:

public slots:
    bool login(QString username, QString password);

private:
    QSqlDatabase m_database;
};

#endif // LOGINMANAGER_H
