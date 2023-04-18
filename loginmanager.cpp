#include "loginmanager.h"
#include "qdebug.h"

loginManager::loginManager(QObject *parent) : QObject(parent)
{
    m_database = QSqlDatabase::database();
}

bool loginManager::login(QString username, QString password)
{
    QSqlQuery query1;
    query1.prepare("SELECT username,password FROM users WHERE username = :username AND password = :password");
    query1.bindValue(":username",username);
    query1.bindValue(":password",password);
    if(!query1.exec()){
        qDebug()<<"Query Failed!";
        return false;
    }
    if(query1.next()){
        qDebug()<<"Login Successful";
        return true;
    }
    else{
    qDebug()<<"Login Failed";
    return false;
    }
}
