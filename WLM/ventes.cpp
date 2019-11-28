#include "ventes.h"


Ventes::Ventes()
{
    ISBN=00000000;
    Quant=0;
    Price=0;
}
Ventes::Ventes(long ISBN, int Quant, double Price)
{
    this->ISBN=ISBN;
    this->Quant=Quant;
    this->Price=Price;
}

/*-----------------------------------------------------------------------------*/

bool Ventes::AddVente()
{
    QSqlQuery qry;
    QString SISBN=QString::number(ISBN),SQuant=QString::number(Quant),SPrice=QString::number(Price);

    qry.prepare("insert into Ventes (ISBN, Quant, Price) Values (:ISBN, :Quant, :Price)");
    qry.bindValue(":ISBN",SISBN);
    qry.bindValue(":Quant",SQuant);
    qry.bindValue(":Price",SPrice);
    return qry.exec();
}

/*-----------------------------------------------------------------------------*/

QSqlQueryModel* Ventes::DisplayVente()
{
    QSqlQueryModel *Model= new QSqlQueryModel();

    Model->setQuery("select * from Ventes");
    Model->setHeaderData(0,Qt::Horizontal,QObject::tr("ISBN"));
    Model->setHeaderData(1,Qt::Horizontal,QObject::tr("Quantité"));
    Model->setHeaderData(3,Qt::Horizontal,QObject::tr("Prix Totale"));

    return Model;
}

/*-----------------------------------------------------------------------------*/

QSqlQueryModel* Ventes::SearchISBN()
{
    QSqlQueryModel *Model= new QSqlQueryModel();
    //QSqlQuery qry;
    QString SISBN=QString::number(ISBN);
    //qDebug("%ld",ISBN);
    //qry.prepare("Select * from Ventes where ISBN= :ISBN");
    //qry.bindValue(":ISBN",SISBN);

    Model->setQuery("Select * from Ventes where ISBN= "+SISBN+"");
    Model->setHeaderData(0,Qt::Horizontal,QObject::tr("ISBN"));
    Model->setHeaderData(1,Qt::Horizontal,QObject::tr("Quantité"));
    Model->setHeaderData(3,Qt::Horizontal,QObject::tr("Prix Totale"));
    return Model;
}

/*-----------------------------------------------------------------------------*/

bool Ventes::RemoveVente()
{
    QSqlQuery qry;
    QString SISBN=QString::number(ISBN);

    qry.prepare("delete from Ventes where ISBN= :ISBN");
    qry.bindValue(":ISBN",SISBN);
    return qry.exec();
}

/*-----------------------------------------------------------------------------*/

bool Ventes::ModifyVente_Quant()
{
    QSqlQuery qry;
    QString SISBN=QString::number(ISBN),SQuant=QString::number(Quant);

    qry.prepare("Update Ventes set Quant= :Quant where ISBN= :ISBN");
    qry.bindValue(":Quant",SQuant);
    qry.bindValue(":ISBN",SISBN);
    return qry.exec();
}

/*-----------------------------------------------------------------------------*/

bool Ventes::ModifyVente_Price()
{
    QSqlQuery qry;
    QString SISBN=QString::number(ISBN),SPrice=QString::number(Price);

    qry.prepare("Update Ventes set Price= :Price where ISBN= :ISBN");
    qry.bindValue(":Price",SPrice);
    qry.bindValue(":ISBN",SISBN);
    return qry.exec();
}









Ventes::~Ventes()
{

}
















