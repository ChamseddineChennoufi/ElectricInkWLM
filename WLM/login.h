#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "sqldbt.h"
#include "ventes.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QStackedWidget>
#include <QApplication>
#include <QTabWidget>




QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    void checkdb(bool test);
    ~Login();

private slots:
    void on_LoginB_clicked();

    void on_Acceuil_clicked();

    void on_Inscriptions_clicked();

    void on_Livres_clicked();

    void on_Services_clicked();

    void on_EncV_clicked();

    void on_SupV_clicked();

    void on_ModQ_clicked();

    void on_ModP_clicked();

    void on_SrchV_clicked();

    void on_ReinitVAF_clicked();

private:
    Ui::Login *ui;
    Ventes TmpV;
};
#endif // LOGIN_H
