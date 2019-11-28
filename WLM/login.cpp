#include "login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    QFont F;
    ui->setupUi(this);
    QPixmap BI("C:/Users/NightLurker/Desktop/Qt Projects/WLM/WLMbackground.jpg");
    QPixmap Icon("C:/Users/NightLurker/Desktop/Qt Projects/WLM/Wizard Librarian.png");
    ui->BackgroundSheet->setPixmap(BI);
    ui->BackgroundSheet_2->setPixmap(BI);
    ui->Icon->setPixmap(Icon);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->VTab->setModel(TmpV.DisplayVente());
}

void Login::checkdb(bool test)
{
    if(test!=true)
        {
            QMessageBox::critical(nullptr, QObject::tr("DataBase opening failed, "),QObject::tr("connection failed.\nClick OK to exit."),QMessageBox::Ok);
        }
}

Login::~Login()
{
    delete ui;
}


void Login::on_LoginB_clicked()
{
    QSqlQuery qry;
    QSqlQuery qryag;
    QString User=ui->le_usr->text();
    QString Pswd=ui->le_pwd->text();
    QString sqlqry="select * from Admins where usr=? and pwd=?";
    QString sqlqryag="select * from Agents where usr=? and pwd=?";
    QString sqlqryad="select * from Agents where usr=? and pwd=? and lvl=1";
    qry.prepare(sqlqry);
    qryag.prepare(sqlqryag);
    qry.addBindValue(ui->le_usr->text());
    qry.addBindValue(ui->le_pwd->text());
    qryag.addBindValue(ui->le_usr->text());
    qryag.addBindValue(ui->le_pwd->text());

    if (qry.exec())
    {
        int occlog1=0;
        while(qry.next())
        {
            occlog1++;
        }

        if(occlog1==1)
        {
            ui->stackedWidget->setCurrentIndex(1);
            qDebug() << "Prop verified!";  //interface for prop to be added here
        }
        else
        {
            if (qryag.exec())
            {
                int occlog2=0,occadm=0;
                while(qryag.next())
                {
                    occlog2++;
                }
                if(occlog2==1)
                {
                    qryag.prepare(sqlqryad);
                    qryag.addBindValue(ui->le_usr->text());
                    qryag.addBindValue(ui->le_pwd->text());
                    if(qryag.exec())
                    {
                        while(qryag.next())
                        {
                            occadm++;
                        }
                        if(occadm==1)
                        {
                            qDebug()<<"Admin Verified"; //interface for admin to be added here
                        }
                        else
                        {
                            qDebug()<<"Agents Verified"; //interface for agent to be added here
                        }
                    }
                }
                else
                {

                    ui->StatusReport->setText("<font size=1.8><font color='red'>Wrong Username and/or Password! Try Again!</font></font>");

                }
            }
        }
    }
}










void Login::on_Acceuil_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void Login::on_Inscriptions_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}

void Login::on_Livres_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}

void Login::on_Services_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(3);
}

void Login::on_EncV_clicked()
{
    Ventes V(ui->LE_ISBNVA->text().toLong(),ui->LE_QuantVA->text().toInt(),ui->LE_PriceVA->text().toDouble());

    if(V.AddVente())
    {
        ui->VTab->setModel(TmpV.DisplayVente());
        ui->Txt_VA->setText("<font size =1.8><font color='green'>Achat encaisser avec succès!</font></font>");
    }
    else
    {
        ui->Txt_VA->setText("<font color='red'>Achat échoué!</font>");
    }

}


void Login::on_SupV_clicked()
{
    Ventes V;
    V.setisbn(ui->LE_ISBNVS->text().toLong());
    if(V.RemoveVente())
    {
        ui->VTab->setModel(TmpV.DisplayVente());
        ui->Txt_VS->setText("<font size =2.5><font color='green'>Achat Supprimer!</font></font>");
    }
    else
    {
        ui->Txt_VA->setText("<font color='red'>Suppression échoué!</font>");
    }
}

void Login::on_ModQ_clicked()
{
    Ventes V;
    V.setisbn(ui->LE_ISBNVM->text().toLong());
    V.setquant(ui->LE_QuantVM->text().toInt());
    if(V.ModifyVente_Quant())
    {
        ui->VTab->setModel(TmpV.DisplayVente());
        ui->Txt_VM->setText("<font size =2.5><font color='green'>Achat Modifier!</font></font>");
    }
    else
    {
        ui->Txt_VM->setText("<font color='red'>Modification échoué!</font>");
    }
}

void Login::on_ModP_clicked()
{
    Ventes V;
    V.setisbn(ui->LE_ISBNVM->text().toLong());
    V.setprice(ui->LE_PriceVM->text().toDouble());
    if(V.ModifyVente_Price())
    {
        ui->VTab->setModel(TmpV.DisplayVente());
        ui->Txt_VM->setText("<font size =2.5><font color='green'>Achat Modifier!</font></font>");
    }
    else
    {
        ui->Txt_VM->setText("<font color='red'>Modification échoué!</font>");
    }
}

void Login::on_SrchV_clicked()
{
    Ventes V;
    V.setisbn(ui->LE_ISBNVAF->text().toLong());
    ui->VTab->setModel(V.SearchISBN());
}

void Login::on_ReinitVAF_clicked()
{
    ui->VTab->setModel(TmpV.DisplayVente());
}
