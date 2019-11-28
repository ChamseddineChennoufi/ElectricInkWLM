/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_nom_societe;
    QLineEdit *lineEdit_adresse;
    QPushButton *pb_ajouter;
    QLabel *label_5;
    QLineEdit *lineEdit_numtel;
    QWidget *tab_2;
    QTableView *tabfour;
    QWidget *tab_3;
    QLineEdit *lineEdit_id_2;
    QLabel *label_4;
    QPushButton *pb_supprimer;
    QWidget *tab_6;
    QLineEdit *lineEdit_ide;
    QLineEdit *lineEdit_nom_societe_2;
    QLineEdit *lineEdit_adresse_2;
    QLineEdit *lineEdit_numtel_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *PushButton_Edit;
    QWidget *tab_13;
    QPushButton *pb_rechercher;
    QLabel *label_19;
    QLineEdit *lineEdit_rechercher;
    QTableView *tabrecherche;
    QWidget *tab_5;
    QTabWidget *tabWidget_3;
    QWidget *tab_7;
    QLabel *label_6;
    QLineEdit *lineEdit_ref;
    QLabel *label_7;
    QLineEdit *lineEdit_datec;
    QLabel *label_8;
    QLineEdit *lineEdit_quan;
    QPushButton *ajouterc;
    QLineEdit *lineEdit_nomc_2;
    QLabel *label_18;
    QLineEdit *lineEdit_idd;
    QLabel *label_20;
    QWidget *tab_8;
    QTabWidget *tabWidget_4;
    QWidget *tab_11;
    QTableView *tabc;
    QWidget *tab_12;
    QTableView *tabc_2;
    QWidget *tab_14;
    QTableView *tablecalcul;
    QWidget *tab_15;
    QCustomPlot *customPlot;
    QWidget *tab_9;
    QLineEdit *lineEdit_4;
    QLabel *label_9;
    QPushButton *supprimerc;
    QWidget *tab_10;
    QLineEdit *lineEdit_ref_2;
    QLineEdit *lineEdit_d;
    QLineEdit *lineEdit_3;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton;
    QLineEdit *lineEdit_nomc;
    QLabel *label_17;
    QLineEdit *lineEdit_iddd;
    QLabel *label_21;
    QLabel *BG;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(607, 389);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(30, 10, 561, 301));
        QFont font;
        font.setFamily(QString::fromUtf8("Eras Bold ITC"));
        font.setPointSize(9);
        tabWidget_2->setFont(font);
        tabWidget_2->setStyleSheet(QString::fromUtf8(""));
        tabWidget_2->setTabShape(QTabWidget::Triangular);
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget = new QTabWidget(tab_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 20, 551, 261));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 71, 16));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 81, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 47, 13));
        lineEdit_id = new QLineEdit(tab);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(130, 30, 113, 20));
        lineEdit_id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        lineEdit_nom_societe = new QLineEdit(tab);
        lineEdit_nom_societe->setObjectName(QString::fromUtf8("lineEdit_nom_societe"));
        lineEdit_nom_societe->setGeometry(QRect(130, 70, 113, 20));
        lineEdit_nom_societe->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        lineEdit_adresse = new QLineEdit(tab);
        lineEdit_adresse->setObjectName(QString::fromUtf8("lineEdit_adresse"));
        lineEdit_adresse->setGeometry(QRect(130, 110, 113, 20));
        lineEdit_adresse->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QString::fromUtf8("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(280, 170, 75, 23));
        pb_ajouter->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 171, 254);"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 143, 111, 20));
        lineEdit_numtel = new QLineEdit(tab);
        lineEdit_numtel->setObjectName(QString::fromUtf8("lineEdit_numtel"));
        lineEdit_numtel->setGeometry(QRect(130, 140, 113, 20));
        lineEdit_numtel->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabfour = new QTableView(tab_2);
        tabfour->setObjectName(QString::fromUtf8("tabfour"));
        tabfour->setGeometry(QRect(10, 10, 341, 171));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        lineEdit_id_2 = new QLineEdit(tab_3);
        lineEdit_id_2->setObjectName(QString::fromUtf8("lineEdit_id_2"));
        lineEdit_id_2->setGeometry(QRect(140, 30, 113, 20));
        lineEdit_id_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 30, 61, 20));
        pb_supprimer = new QPushButton(tab_3);
        pb_supprimer->setObjectName(QString::fromUtf8("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(240, 140, 75, 23));
        pb_supprimer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);"));
        tabWidget->addTab(tab_3, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        lineEdit_ide = new QLineEdit(tab_6);
        lineEdit_ide->setObjectName(QString::fromUtf8("lineEdit_ide"));
        lineEdit_ide->setGeometry(QRect(110, 20, 113, 20));
        lineEdit_ide->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        lineEdit_nom_societe_2 = new QLineEdit(tab_6);
        lineEdit_nom_societe_2->setObjectName(QString::fromUtf8("lineEdit_nom_societe_2"));
        lineEdit_nom_societe_2->setGeometry(QRect(110, 50, 113, 20));
        lineEdit_nom_societe_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        lineEdit_adresse_2 = new QLineEdit(tab_6);
        lineEdit_adresse_2->setObjectName(QString::fromUtf8("lineEdit_adresse_2"));
        lineEdit_adresse_2->setGeometry(QRect(110, 80, 113, 20));
        lineEdit_adresse_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        lineEdit_numtel_2 = new QLineEdit(tab_6);
        lineEdit_numtel_2->setObjectName(QString::fromUtf8("lineEdit_numtel_2"));
        lineEdit_numtel_2->setGeometry(QRect(110, 120, 113, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Eras Bold ITC"));
        font1.setPointSize(11);
        lineEdit_numtel_2->setFont(font1);
        lineEdit_numtel_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_10 = new QLabel(tab_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 20, 71, 16));
        label_11 = new QLabel(tab_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 50, 81, 16));
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 80, 47, 20));
        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 120, 47, 13));
        PushButton_Edit = new QPushButton(tab_6);
        PushButton_Edit->setObjectName(QString::fromUtf8("PushButton_Edit"));
        PushButton_Edit->setGeometry(QRect(270, 160, 75, 23));
        PushButton_Edit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 171, 254);"));
        tabWidget->addTab(tab_6, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        pb_rechercher = new QPushButton(tab_13);
        pb_rechercher->setObjectName(QString::fromUtf8("pb_rechercher"));
        pb_rechercher->setGeometry(QRect(310, 170, 75, 23));
        pb_rechercher->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 171, 254);"));
        label_19 = new QLabel(tab_13);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(30, 30, 71, 16));
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_rechercher = new QLineEdit(tab_13);
        lineEdit_rechercher->setObjectName(QString::fromUtf8("lineEdit_rechercher"));
        lineEdit_rechercher->setGeometry(QRect(120, 30, 113, 20));
        lineEdit_rechercher->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        tabrecherche = new QTableView(tab_13);
        tabrecherche->setObjectName(QString::fromUtf8("tabrecherche"));
        tabrecherche->setGeometry(QRect(20, 80, 251, 111));
        tabWidget->addTab(tab_13, QString());
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget_3 = new QTabWidget(tab_5);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 551, 271));
        tabWidget_3->setStyleSheet(QString::fromUtf8(""));
        tabWidget_3->setTabShape(QTabWidget::Triangular);
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        label_6 = new QLabel(tab_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 20, 61, 16));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        lineEdit_ref = new QLineEdit(tab_7);
        lineEdit_ref->setObjectName(QString::fromUtf8("lineEdit_ref"));
        lineEdit_ref->setGeometry(QRect(130, 20, 113, 20));
        lineEdit_ref->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_7 = new QLabel(tab_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 50, 81, 20));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        lineEdit_datec = new QLineEdit(tab_7);
        lineEdit_datec->setObjectName(QString::fromUtf8("lineEdit_datec"));
        lineEdit_datec->setGeometry(QRect(130, 50, 113, 20));
        lineEdit_datec->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_8 = new QLabel(tab_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 80, 61, 16));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        lineEdit_quan = new QLineEdit(tab_7);
        lineEdit_quan->setObjectName(QString::fromUtf8("lineEdit_quan"));
        lineEdit_quan->setGeometry(QRect(130, 80, 113, 20));
        lineEdit_quan->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        ajouterc = new QPushButton(tab_7);
        ajouterc->setObjectName(QString::fromUtf8("ajouterc"));
        ajouterc->setGeometry(QRect(240, 170, 75, 23));
        ajouterc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);"));
        lineEdit_nomc_2 = new QLineEdit(tab_7);
        lineEdit_nomc_2->setObjectName(QString::fromUtf8("lineEdit_nomc_2"));
        lineEdit_nomc_2->setGeometry(QRect(130, 110, 113, 20));
        lineEdit_nomc_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_18 = new QLabel(tab_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 110, 101, 16));
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        lineEdit_idd = new QLineEdit(tab_7);
        lineEdit_idd->setObjectName(QString::fromUtf8("lineEdit_idd"));
        lineEdit_idd->setGeometry(QRect(130, 140, 113, 20));
        lineEdit_idd->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_20 = new QLabel(tab_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(30, 140, 47, 13));
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget_4 = new QTabWidget(tab_8);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(10, 9, 501, 231));
        tabWidget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget_4->setTabShape(QTabWidget::Triangular);
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        tabc = new QTableView(tab_11);
        tabc->setObjectName(QString::fromUtf8("tabc"));
        tabc->setGeometry(QRect(10, 10, 481, 191));
        tabc->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 255, 198);"));
        tabWidget_4->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        tabc_2 = new QTableView(tab_12);
        tabc_2->setObjectName(QString::fromUtf8("tabc_2"));
        tabc_2->setGeometry(QRect(0, 10, 321, 131));
        tabc_2->setStyleSheet(QString::fromUtf8(""));
        tabWidget_4->addTab(tab_12, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QString::fromUtf8("tab_14"));
        tablecalcul = new QTableView(tab_14);
        tablecalcul->setObjectName(QString::fromUtf8("tablecalcul"));
        tablecalcul->setGeometry(QRect(10, 10, 361, 192));
        tablecalcul->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 171, 254);"));
        tabWidget_4->addTab(tab_14, QString());
        tabWidget_3->addTab(tab_8, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QString::fromUtf8("tab_15"));
        customPlot = new QCustomPlot(tab_15);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(9, 9, 491, 231));
        tabWidget_3->addTab(tab_15, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        lineEdit_4 = new QLineEdit(tab_9);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 50, 113, 20));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_9 = new QLabel(tab_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 50, 61, 16));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        supprimerc = new QPushButton(tab_9);
        supprimerc->setObjectName(QString::fromUtf8("supprimerc"));
        supprimerc->setGeometry(QRect(230, 140, 75, 23));
        supprimerc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 171, 254);"));
        tabWidget_3->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        lineEdit_ref_2 = new QLineEdit(tab_10);
        lineEdit_ref_2->setObjectName(QString::fromUtf8("lineEdit_ref_2"));
        lineEdit_ref_2->setGeometry(QRect(120, 30, 113, 20));
        lineEdit_ref_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        lineEdit_d = new QLineEdit(tab_10);
        lineEdit_d->setObjectName(QString::fromUtf8("lineEdit_d"));
        lineEdit_d->setGeometry(QRect(120, 70, 113, 20));
        lineEdit_d->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        lineEdit_3 = new QLineEdit(tab_10);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 110, 113, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_14 = new QLabel(tab_10);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 30, 61, 16));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        label_15 = new QLabel(tab_10);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 70, 81, 16));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        label_16 = new QLabel(tab_10);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 110, 61, 16));
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        pushButton = new QPushButton(tab_10);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 210, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 171, 254);"));
        lineEdit_nomc = new QLineEdit(tab_10);
        lineEdit_nomc->setObjectName(QString::fromUtf8("lineEdit_nomc"));
        lineEdit_nomc->setGeometry(QRect(120, 150, 113, 20));
        lineEdit_nomc->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_17 = new QLabel(tab_10);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 150, 101, 16));
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        lineEdit_iddd = new QLineEdit(tab_10);
        lineEdit_iddd->setObjectName(QString::fromUtf8("lineEdit_iddd"));
        lineEdit_iddd->setGeometry(QRect(120, 190, 113, 20));
        lineEdit_iddd->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_21 = new QLabel(tab_10);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 190, 47, 20));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        tabWidget_3->addTab(tab_10, QString());
        tabWidget_2->addTab(tab_5, QString());
        BG = new QLabel(centralWidget);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(0, 0, 601, 331));
        MainWindow->setCentralWidget(centralWidget);
        BG->raise();
        tabWidget_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 607, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des \303\251tudiants", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Identifiant", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "nom_societe", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "adresse", nullptr));
        pb_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "numerodutelephone", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Ajouter un fournisseur", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Afficher les fournisseurs", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "id", nullptr));
        pb_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Supprimer un fournisseur", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "identifiant", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "nom_societe", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "adresse", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "numero du telephone", nullptr));
        PushButton_Edit->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "modifier un fournisseur", nullptr));
        pb_rechercher->setText(QCoreApplication::translate("MainWindow", "rechercher", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "identifiant", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_13), QCoreApplication::translate("MainWindow", "rechercher", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "gerer des  fournisseurs", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "reference", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "date_reserve", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "quantite", nullptr));
        ajouterc->setText(QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "nom_commande", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "id", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QCoreApplication::translate("MainWindow", "ajouter commande", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_11), QCoreApplication::translate("MainWindow", "affiche", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_12), QCoreApplication::translate("MainWindow", "affiche trier", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_14), QCoreApplication::translate("MainWindow", "calculer_quantite", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QCoreApplication::translate("MainWindow", "afficher commande", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_15), QCoreApplication::translate("MainWindow", "statistique", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "reference", nullptr));
        supprimerc->setText(QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QCoreApplication::translate("MainWindow", "supprimer commande", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "reference", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "date_reserve", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "quantite", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "nom_commande", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "id", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QCoreApplication::translate("MainWindow", "modifier commande", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "gerer des commandes", nullptr));
        BG->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
