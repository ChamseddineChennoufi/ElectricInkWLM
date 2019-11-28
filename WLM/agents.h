#ifndef AGENTS_H
#define AGENTS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Agents
{
    long CIN;
    QString nom,prenom;
    bool lvl;
public:
    Agents();
    void setCIN(long CIN){this->CIN=CIN;}
    long getCIN(){return CIN;}
    void setnom(QString nom){this->nom=nom;}
    QString getnom(){return nom;}
    void setprenom(QString prenom){this->prenom=prenom;}
    QString getprenom(){return prenom;}
    void setlvl(bool lvl){this->lvl=lvl;}
    bool getlvl(){return lvl;}
    ~Agents();
};

#endif // AGENTS_H
