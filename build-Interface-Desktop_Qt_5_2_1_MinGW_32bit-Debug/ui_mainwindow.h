/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionRed_marrer;
    QAction *actionQuitter_2;
    QAction *actionSe_D_connecter;
    QWidget *centralWidget;
    QTabWidget *Onglets;
    QWidget *Onglet_UV;
    QGroupBox *Seek_UV_Group;
    QCheckBox *Seek_UV_CS;
    QLineEdit *Seek_UV_Code;
    QCheckBox *Seek_UV_TSH;
    QCheckBox *Seek_UV_SP;
    QCheckBox *Seek_UV_TM;
    QPushButton *Seek_UV_Submit;
    QLabel *Seek_UV_Label1;
    QLabel *Print_UV_Label1;
    QGroupBox *Edit_UV_Group;
    QLineEdit *Edit_UV_Code;
    QLabel *Edit_UV_Label1;
    QLabel *Edit_UV_Label2;
    QLineEdit *Edit_UV_Titre;
    QLabel *Edit_UV_Label3;
    QCheckBox *Edit_UV_Automne;
    QCheckBox *Edit_UV_Printemps;
    QLabel *Edit_UV_Label4;
    QSpinBox *Edit_UV_CS;
    QLabel *Edit_UV_Label5;
    QSpinBox *Edit_UV_TM;
    QLabel *Edit_UV_Label6;
    QSpinBox *Edit_UV_TSH;
    QLabel *Edit_UV_Label7;
    QSpinBox *Edit_UV_SP;
    QCheckBox *checkBox_7;
    QLabel *Edit_UV_Label8;
    QLabel *Edit_UV_Label9;
    QPushButton *Delete_UV;
    QPushButton *Save_UV;
    QListWidget *Edit_UV_List1;
    QListWidget *Edit_UV_List2;
    QPushButton *Create_UV;
    QListWidget *Print_UV_List;
    QWidget *Onglet_Cursus;
    QGroupBox *Seek_Cursus_Group;
    QCheckBox *Seek_Cursus_Prepa;
    QLineEdit *Seek_Cursus_Code;
    QCheckBox *Seek_Cursus_Filiere;
    QCheckBox *Seek_Cursus_Mineur;
    QCheckBox *Seek_Cursus_Branche;
    QPushButton *Seek_Cursus_Submit;
    QLabel *Seek_Cursus_Label1;
    QPushButton *Create_Cursus;
    QListWidget *Print_Cursus_List;
    QLabel *Print_Cursus_Label1;
    QGroupBox *Edit_Cursus_Group;
    QLineEdit *Edit_Cursus_Code;
    QLabel *Edit_Cursus_Label1;
    QLabel *Edit_Cursus_Label2;
    QLineEdit *Edit_Cursus_Titre;
    QPushButton *Delete_Cursus;
    QPushButton *Save_Cursus;
    QListWidget *Edit_Cursus_List1;
    QListWidget *Edit_Cursus_List2;
    QLineEdit *Edit_Cursus_Resp;
    QLabel *Edit_Cursus_Label3;
    QListWidget *Edit_Cursus_List3;
    QLineEdit *Edit_Cursus_Seek_Code;
    QLabel *Edit_Cursus_Label4;
    QLabel *Edit_Cursus_Label5;
    QSpinBox *Edit_Cursus_CS;
    QSpinBox *Edit_Cursus_TM;
    QLabel *Edit_Cursus_Label6;
    QSpinBox *Edit_Cursus_TSH;
    QLabel *Edit_Cursus_Label7;
    QSpinBox *Edit_Cursus_SP;
    QLabel *Edit_Cursus_Label8;
    QSpinBox *Edit_Cursus_CSTM;
    QLabel *Edit_Cursus_Label9;
    QSpinBox *Edit_Cursus_Total;
    QLabel *Edit_Cursus_Label10;
    QLabel *Edit_Cursus_Label11;
    QPushButton *Edit_Cursus_Seek_Submit;
    QPushButton *Edit_Cursus_Seek_Delete;
    QWidget *widget;
    QRadioButton *Edit_Cursus_Prepa;
    QRadioButton *Edit_Cursus_Branche;
    QRadioButton *Edit_Cursus_Filiere;
    QRadioButton *Edit_Cursus_Mineur;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QMenu *menuAide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(823, 671);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        actionRed_marrer = new QAction(MainWindow);
        actionRed_marrer->setObjectName(QStringLiteral("actionRed_marrer"));
        actionQuitter_2 = new QAction(MainWindow);
        actionQuitter_2->setObjectName(QStringLiteral("actionQuitter_2"));
        actionSe_D_connecter = new QAction(MainWindow);
        actionSe_D_connecter->setObjectName(QStringLiteral("actionSe_D_connecter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Onglets = new QTabWidget(centralWidget);
        Onglets->setObjectName(QStringLiteral("Onglets"));
        Onglets->setGeometry(QRect(0, 0, 821, 621));
        Onglet_UV = new QWidget();
        Onglet_UV->setObjectName(QStringLiteral("Onglet_UV"));
        Seek_UV_Group = new QGroupBox(Onglet_UV);
        Seek_UV_Group->setObjectName(QStringLiteral("Seek_UV_Group"));
        Seek_UV_Group->setGeometry(QRect(40, 30, 151, 191));
        Seek_UV_CS = new QCheckBox(Seek_UV_Group);
        Seek_UV_CS->setObjectName(QStringLiteral("Seek_UV_CS"));
        Seek_UV_CS->setGeometry(QRect(10, 60, 70, 17));
        Seek_UV_CS->setLayoutDirection(Qt::RightToLeft);
        Seek_UV_Code = new QLineEdit(Seek_UV_Group);
        Seek_UV_Code->setObjectName(QStringLiteral("Seek_UV_Code"));
        Seek_UV_Code->setGeometry(QRect(50, 30, 81, 20));
        Seek_UV_TSH = new QCheckBox(Seek_UV_Group);
        Seek_UV_TSH->setObjectName(QStringLiteral("Seek_UV_TSH"));
        Seek_UV_TSH->setGeometry(QRect(10, 100, 70, 17));
        Seek_UV_TSH->setLayoutDirection(Qt::RightToLeft);
        Seek_UV_SP = new QCheckBox(Seek_UV_Group);
        Seek_UV_SP->setObjectName(QStringLiteral("Seek_UV_SP"));
        Seek_UV_SP->setGeometry(QRect(10, 120, 70, 17));
        Seek_UV_SP->setLayoutDirection(Qt::RightToLeft);
        Seek_UV_TM = new QCheckBox(Seek_UV_Group);
        Seek_UV_TM->setObjectName(QStringLiteral("Seek_UV_TM"));
        Seek_UV_TM->setGeometry(QRect(10, 80, 70, 17));
        Seek_UV_TM->setLayoutDirection(Qt::RightToLeft);
        Seek_UV_Submit = new QPushButton(Seek_UV_Group);
        Seek_UV_Submit->setObjectName(QStringLiteral("Seek_UV_Submit"));
        Seek_UV_Submit->setGeometry(QRect(40, 150, 75, 23));
        Seek_UV_Label1 = new QLabel(Seek_UV_Group);
        Seek_UV_Label1->setObjectName(QStringLiteral("Seek_UV_Label1"));
        Seek_UV_Label1->setGeometry(QRect(20, 30, 46, 13));
        Print_UV_Label1 = new QLabel(Onglet_UV);
        Print_UV_Label1->setObjectName(QStringLiteral("Print_UV_Label1"));
        Print_UV_Label1->setGeometry(QRect(280, 20, 46, 13));
        Edit_UV_Group = new QGroupBox(Onglet_UV);
        Edit_UV_Group->setObjectName(QStringLiteral("Edit_UV_Group"));
        Edit_UV_Group->setGeometry(QRect(450, 10, 341, 401));
        Edit_UV_Code = new QLineEdit(Edit_UV_Group);
        Edit_UV_Code->setObjectName(QStringLiteral("Edit_UV_Code"));
        Edit_UV_Code->setGeometry(QRect(80, 20, 61, 20));
        Edit_UV_Code->setDragEnabled(false);
        Edit_UV_Label1 = new QLabel(Edit_UV_Group);
        Edit_UV_Label1->setObjectName(QStringLiteral("Edit_UV_Label1"));
        Edit_UV_Label1->setGeometry(QRect(30, 20, 46, 13));
        Edit_UV_Label2 = new QLabel(Edit_UV_Group);
        Edit_UV_Label2->setObjectName(QStringLiteral("Edit_UV_Label2"));
        Edit_UV_Label2->setGeometry(QRect(30, 50, 46, 13));
        Edit_UV_Titre = new QLineEdit(Edit_UV_Group);
        Edit_UV_Titre->setObjectName(QStringLiteral("Edit_UV_Titre"));
        Edit_UV_Titre->setGeometry(QRect(80, 50, 231, 20));
        Edit_UV_Titre->setDragEnabled(false);
        Edit_UV_Label3 = new QLabel(Edit_UV_Group);
        Edit_UV_Label3->setObjectName(QStringLiteral("Edit_UV_Label3"));
        Edit_UV_Label3->setGeometry(QRect(30, 90, 46, 13));
        Edit_UV_Automne = new QCheckBox(Edit_UV_Group);
        Edit_UV_Automne->setObjectName(QStringLiteral("Edit_UV_Automne"));
        Edit_UV_Automne->setGeometry(QRect(100, 90, 70, 17));
        Edit_UV_Automne->setLayoutDirection(Qt::RightToLeft);
        Edit_UV_Printemps = new QCheckBox(Edit_UV_Group);
        Edit_UV_Printemps->setObjectName(QStringLiteral("Edit_UV_Printemps"));
        Edit_UV_Printemps->setGeometry(QRect(190, 90, 70, 17));
        Edit_UV_Printemps->setLayoutDirection(Qt::RightToLeft);
        Edit_UV_Label4 = new QLabel(Edit_UV_Group);
        Edit_UV_Label4->setObjectName(QStringLiteral("Edit_UV_Label4"));
        Edit_UV_Label4->setGeometry(QRect(60, 140, 46, 13));
        Edit_UV_CS = new QSpinBox(Edit_UV_Group);
        Edit_UV_CS->setObjectName(QStringLiteral("Edit_UV_CS"));
        Edit_UV_CS->setGeometry(QRect(50, 160, 42, 22));
        Edit_UV_Label5 = new QLabel(Edit_UV_Group);
        Edit_UV_Label5->setObjectName(QStringLiteral("Edit_UV_Label5"));
        Edit_UV_Label5->setGeometry(QRect(120, 140, 46, 13));
        Edit_UV_TM = new QSpinBox(Edit_UV_Group);
        Edit_UV_TM->setObjectName(QStringLiteral("Edit_UV_TM"));
        Edit_UV_TM->setGeometry(QRect(110, 160, 42, 22));
        Edit_UV_Label6 = new QLabel(Edit_UV_Group);
        Edit_UV_Label6->setObjectName(QStringLiteral("Edit_UV_Label6"));
        Edit_UV_Label6->setGeometry(QRect(180, 140, 46, 13));
        Edit_UV_TSH = new QSpinBox(Edit_UV_Group);
        Edit_UV_TSH->setObjectName(QStringLiteral("Edit_UV_TSH"));
        Edit_UV_TSH->setGeometry(QRect(170, 160, 42, 22));
        Edit_UV_Label7 = new QLabel(Edit_UV_Group);
        Edit_UV_Label7->setObjectName(QStringLiteral("Edit_UV_Label7"));
        Edit_UV_Label7->setGeometry(QRect(240, 140, 46, 13));
        Edit_UV_SP = new QSpinBox(Edit_UV_Group);
        Edit_UV_SP->setObjectName(QStringLiteral("Edit_UV_SP"));
        Edit_UV_SP->setGeometry(QRect(230, 160, 42, 22));
        checkBox_7 = new QCheckBox(Edit_UV_Group);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(20, 110, 70, 17));
        checkBox_7->setLayoutDirection(Qt::RightToLeft);
        Edit_UV_Label8 = new QLabel(Edit_UV_Group);
        Edit_UV_Label8->setObjectName(QStringLiteral("Edit_UV_Label8"));
        Edit_UV_Label8->setGeometry(QRect(40, 190, 101, 16));
        Edit_UV_Label9 = new QLabel(Edit_UV_Group);
        Edit_UV_Label9->setObjectName(QStringLiteral("Edit_UV_Label9"));
        Edit_UV_Label9->setGeometry(QRect(210, 190, 71, 16));
        Delete_UV = new QPushButton(Edit_UV_Group);
        Delete_UV->setObjectName(QStringLiteral("Delete_UV"));
        Delete_UV->setGeometry(QRect(44, 370, 91, 23));
        Save_UV = new QPushButton(Edit_UV_Group);
        Save_UV->setObjectName(QStringLiteral("Save_UV"));
        Save_UV->setGeometry(QRect(200, 370, 101, 23));
        Edit_UV_List1 = new QListWidget(Edit_UV_Group);
        new QListWidgetItem(Edit_UV_List1);
        new QListWidgetItem(Edit_UV_List1);
        new QListWidgetItem(Edit_UV_List1);
        new QListWidgetItem(Edit_UV_List1);
        Edit_UV_List1->setObjectName(QStringLiteral("Edit_UV_List1"));
        Edit_UV_List1->setGeometry(QRect(20, 210, 131, 141));
        Edit_UV_List1->setDragEnabled(true);
        Edit_UV_List1->setDragDropMode(QAbstractItemView::DragDrop);
        Edit_UV_List1->setDefaultDropAction(Qt::MoveAction);
        Edit_UV_List1->setSelectionBehavior(QAbstractItemView::SelectRows);
        Edit_UV_List2 = new QListWidget(Edit_UV_Group);
        new QListWidgetItem(Edit_UV_List2);
        new QListWidgetItem(Edit_UV_List2);
        new QListWidgetItem(Edit_UV_List2);
        Edit_UV_List2->setObjectName(QStringLiteral("Edit_UV_List2"));
        Edit_UV_List2->setGeometry(QRect(180, 210, 131, 141));
        Edit_UV_List2->setDragEnabled(true);
        Edit_UV_List2->setDragDropMode(QAbstractItemView::DragDrop);
        Edit_UV_List2->setDefaultDropAction(Qt::MoveAction);
        Edit_UV_List2->setSelectionBehavior(QAbstractItemView::SelectRows);
        Create_UV = new QPushButton(Onglet_UV);
        Create_UV->setObjectName(QStringLiteral("Create_UV"));
        Create_UV->setGeometry(QRect(80, 240, 75, 23));
        Print_UV_List = new QListWidget(Onglet_UV);
        new QListWidgetItem(Print_UV_List);
        new QListWidgetItem(Print_UV_List);
        new QListWidgetItem(Print_UV_List);
        Print_UV_List->setObjectName(QStringLiteral("Print_UV_List"));
        Print_UV_List->setGeometry(QRect(220, 40, 161, 311));
        Print_UV_List->setProperty("showDropIndicator", QVariant(false));
        Print_UV_List->setDragEnabled(false);
        Print_UV_List->setDragDropMode(QAbstractItemView::NoDragDrop);
        Onglets->addTab(Onglet_UV, QString());
        Onglet_Cursus = new QWidget();
        Onglet_Cursus->setObjectName(QStringLiteral("Onglet_Cursus"));
        Seek_Cursus_Group = new QGroupBox(Onglet_Cursus);
        Seek_Cursus_Group->setObjectName(QStringLiteral("Seek_Cursus_Group"));
        Seek_Cursus_Group->setGeometry(QRect(20, 20, 151, 191));
        Seek_Cursus_Prepa = new QCheckBox(Seek_Cursus_Group);
        Seek_Cursus_Prepa->setObjectName(QStringLiteral("Seek_Cursus_Prepa"));
        Seek_Cursus_Prepa->setGeometry(QRect(10, 60, 70, 17));
        Seek_Cursus_Prepa->setLayoutDirection(Qt::RightToLeft);
        Seek_Cursus_Code = new QLineEdit(Seek_Cursus_Group);
        Seek_Cursus_Code->setObjectName(QStringLiteral("Seek_Cursus_Code"));
        Seek_Cursus_Code->setGeometry(QRect(60, 30, 81, 20));
        Seek_Cursus_Filiere = new QCheckBox(Seek_Cursus_Group);
        Seek_Cursus_Filiere->setObjectName(QStringLiteral("Seek_Cursus_Filiere"));
        Seek_Cursus_Filiere->setGeometry(QRect(10, 100, 70, 17));
        Seek_Cursus_Filiere->setLayoutDirection(Qt::RightToLeft);
        Seek_Cursus_Mineur = new QCheckBox(Seek_Cursus_Group);
        Seek_Cursus_Mineur->setObjectName(QStringLiteral("Seek_Cursus_Mineur"));
        Seek_Cursus_Mineur->setGeometry(QRect(10, 120, 70, 17));
        Seek_Cursus_Mineur->setLayoutDirection(Qt::RightToLeft);
        Seek_Cursus_Branche = new QCheckBox(Seek_Cursus_Group);
        Seek_Cursus_Branche->setObjectName(QStringLiteral("Seek_Cursus_Branche"));
        Seek_Cursus_Branche->setGeometry(QRect(10, 80, 70, 17));
        Seek_Cursus_Branche->setLayoutDirection(Qt::RightToLeft);
        Seek_Cursus_Submit = new QPushButton(Seek_Cursus_Group);
        Seek_Cursus_Submit->setObjectName(QStringLiteral("Seek_Cursus_Submit"));
        Seek_Cursus_Submit->setGeometry(QRect(40, 150, 75, 23));
        Seek_Cursus_Label1 = new QLabel(Seek_Cursus_Group);
        Seek_Cursus_Label1->setObjectName(QStringLiteral("Seek_Cursus_Label1"));
        Seek_Cursus_Label1->setGeometry(QRect(10, 30, 46, 13));
        Create_Cursus = new QPushButton(Onglet_Cursus);
        Create_Cursus->setObjectName(QStringLiteral("Create_Cursus"));
        Create_Cursus->setGeometry(QRect(50, 220, 91, 23));
        Print_Cursus_List = new QListWidget(Onglet_Cursus);
        new QListWidgetItem(Print_Cursus_List);
        new QListWidgetItem(Print_Cursus_List);
        new QListWidgetItem(Print_Cursus_List);
        new QListWidgetItem(Print_Cursus_List);
        new QListWidgetItem(Print_Cursus_List);
        Print_Cursus_List->setObjectName(QStringLiteral("Print_Cursus_List"));
        Print_Cursus_List->setGeometry(QRect(210, 30, 161, 301));
        Print_Cursus_List->setProperty("showDropIndicator", QVariant(false));
        Print_Cursus_List->setDragEnabled(false);
        Print_Cursus_List->setDragDropMode(QAbstractItemView::NoDragDrop);
        Print_Cursus_Label1 = new QLabel(Onglet_Cursus);
        Print_Cursus_Label1->setObjectName(QStringLiteral("Print_Cursus_Label1"));
        Print_Cursus_Label1->setGeometry(QRect(270, 10, 46, 13));
        Edit_Cursus_Group = new QGroupBox(Onglet_Cursus);
        Edit_Cursus_Group->setObjectName(QStringLiteral("Edit_Cursus_Group"));
        Edit_Cursus_Group->setGeometry(QRect(440, 40, 341, 561));
        Edit_Cursus_Code = new QLineEdit(Edit_Cursus_Group);
        Edit_Cursus_Code->setObjectName(QStringLiteral("Edit_Cursus_Code"));
        Edit_Cursus_Code->setGeometry(QRect(80, 20, 61, 20));
        Edit_Cursus_Code->setDragEnabled(false);
        Edit_Cursus_Label1 = new QLabel(Edit_Cursus_Group);
        Edit_Cursus_Label1->setObjectName(QStringLiteral("Edit_Cursus_Label1"));
        Edit_Cursus_Label1->setGeometry(QRect(30, 20, 46, 13));
        Edit_Cursus_Label2 = new QLabel(Edit_Cursus_Group);
        Edit_Cursus_Label2->setObjectName(QStringLiteral("Edit_Cursus_Label2"));
        Edit_Cursus_Label2->setGeometry(QRect(30, 50, 46, 13));
        Edit_Cursus_Titre = new QLineEdit(Edit_Cursus_Group);
        Edit_Cursus_Titre->setObjectName(QStringLiteral("Edit_Cursus_Titre"));
        Edit_Cursus_Titre->setGeometry(QRect(80, 50, 231, 20));
        Edit_Cursus_Titre->setDragEnabled(false);
        Delete_Cursus = new QPushButton(Edit_Cursus_Group);
        Delete_Cursus->setObjectName(QStringLiteral("Delete_Cursus"));
        Delete_Cursus->setGeometry(QRect(40, 510, 101, 23));
        Save_Cursus = new QPushButton(Edit_Cursus_Group);
        Save_Cursus->setObjectName(QStringLiteral("Save_Cursus"));
        Save_Cursus->setGeometry(QRect(196, 510, 111, 23));
        Edit_Cursus_List1 = new QListWidget(Edit_Cursus_Group);
        new QListWidgetItem(Edit_Cursus_List1);
        new QListWidgetItem(Edit_Cursus_List1);
        new QListWidgetItem(Edit_Cursus_List1);
        Edit_Cursus_List1->setObjectName(QStringLiteral("Edit_Cursus_List1"));
        Edit_Cursus_List1->setGeometry(QRect(30, 320, 71, 121));
        Edit_Cursus_List1->setDragEnabled(true);
        Edit_Cursus_List1->setDragDropMode(QAbstractItemView::DragDrop);
        Edit_Cursus_List1->setDefaultDropAction(Qt::MoveAction);
        Edit_Cursus_List1->setSelectionBehavior(QAbstractItemView::SelectRows);
        Edit_Cursus_List2 = new QListWidget(Edit_Cursus_Group);
        new QListWidgetItem(Edit_Cursus_List2);
        new QListWidgetItem(Edit_Cursus_List2);
        new QListWidgetItem(Edit_Cursus_List2);
        Edit_Cursus_List2->setObjectName(QStringLiteral("Edit_Cursus_List2"));
        Edit_Cursus_List2->setGeometry(QRect(130, 320, 71, 121));
        Edit_Cursus_List2->setDragEnabled(true);
        Edit_Cursus_List2->setDragDropMode(QAbstractItemView::DragDrop);
        Edit_Cursus_List2->setDefaultDropAction(Qt::MoveAction);
        Edit_Cursus_List2->setSelectionBehavior(QAbstractItemView::SelectRows);
        Edit_Cursus_Resp = new QLineEdit(Edit_Cursus_Group);
        Edit_Cursus_Resp->setObjectName(QStringLiteral("Edit_Cursus_Resp"));
        Edit_Cursus_Resp->setGeometry(QRect(80, 80, 201, 20));
        Edit_Cursus_Resp->setDragEnabled(false);
        Edit_Cursus_Label3 = new QLabel(Edit_Cursus_Group);
        Edit_Cursus_Label3->setObjectName(QStringLiteral("Edit_Cursus_Label3"));
        Edit_Cursus_Label3->setGeometry(QRect(10, 80, 71, 16));
        Edit_Cursus_List3 = new QListWidget(Edit_Cursus_Group);
        new QListWidgetItem(Edit_Cursus_List3);
        new QListWidgetItem(Edit_Cursus_List3);
        new QListWidgetItem(Edit_Cursus_List3);
        Edit_Cursus_List3->setObjectName(QStringLiteral("Edit_Cursus_List3"));
        Edit_Cursus_List3->setGeometry(QRect(230, 320, 71, 121));
        Edit_Cursus_List3->setDragEnabled(true);
        Edit_Cursus_List3->setDragDropMode(QAbstractItemView::DragDrop);
        Edit_Cursus_List3->setDefaultDropAction(Qt::MoveAction);
        Edit_Cursus_List3->setSelectionBehavior(QAbstractItemView::SelectRows);
        Edit_Cursus_Seek_Code = new QLineEdit(Edit_Cursus_Group);
        Edit_Cursus_Seek_Code->setObjectName(QStringLiteral("Edit_Cursus_Seek_Code"));
        Edit_Cursus_Seek_Code->setGeometry(QRect(70, 450, 61, 20));
        Edit_Cursus_Label4 = new QLabel(Edit_Cursus_Group);
        Edit_Cursus_Label4->setObjectName(QStringLiteral("Edit_Cursus_Label4"));
        Edit_Cursus_Label4->setGeometry(QRect(140, 150, 46, 13));
        Edit_Cursus_Label5 = new QLabel(Edit_Cursus_Group);
        Edit_Cursus_Label5->setObjectName(QStringLiteral("Edit_Cursus_Label5"));
        Edit_Cursus_Label5->setGeometry(QRect(30, 170, 46, 13));
        Edit_Cursus_CS = new QSpinBox(Edit_Cursus_Group);
        Edit_Cursus_CS->setObjectName(QStringLiteral("Edit_Cursus_CS"));
        Edit_Cursus_CS->setGeometry(QRect(60, 170, 42, 22));
        Edit_Cursus_TM = new QSpinBox(Edit_Cursus_Group);
        Edit_Cursus_TM->setObjectName(QStringLiteral("Edit_Cursus_TM"));
        Edit_Cursus_TM->setGeometry(QRect(60, 200, 42, 22));
        Edit_Cursus_Label6 = new QLabel(Edit_Cursus_Group);
        Edit_Cursus_Label6->setObjectName(QStringLiteral("Edit_Cursus_Label6"));
        Edit_Cursus_Label6->setGeometry(QRect(30, 200, 46, 13));
        Edit_Cursus_TSH = new QSpinBox(Edit_Cursus_Group);
        Edit_Cursus_TSH->setObjectName(QStringLiteral("Edit_Cursus_TSH"));
        Edit_Cursus_TSH->setGeometry(QRect(60, 230, 42, 22));
        Edit_Cursus_Label7 = new QLabel(Edit_Cursus_Group);
        Edit_Cursus_Label7->setObjectName(QStringLiteral("Edit_Cursus_Label7"));
        Edit_Cursus_Label7->setGeometry(QRect(30, 230, 46, 13));
        Edit_Cursus_SP = new QSpinBox(Edit_Cursus_Group);
        Edit_Cursus_SP->setObjectName(QStringLiteral("Edit_Cursus_SP"));
        Edit_Cursus_SP->setGeometry(QRect(60, 260, 42, 22));
        Edit_Cursus_Label8 = new QLabel(Edit_Cursus_Group);
        Edit_Cursus_Label8->setObjectName(QStringLiteral("Edit_Cursus_Label8"));
        Edit_Cursus_Label8->setGeometry(QRect(30, 260, 46, 13));
        Edit_Cursus_CSTM = new QSpinBox(Edit_Cursus_Group);
        Edit_Cursus_CSTM->setObjectName(QStringLiteral("Edit_Cursus_CSTM"));
        Edit_Cursus_CSTM->setGeometry(QRect(150, 190, 42, 22));
        Edit_Cursus_Label9 = new QLabel(Edit_Cursus_Group);
        Edit_Cursus_Label9->setObjectName(QStringLiteral("Edit_Cursus_Label9"));
        Edit_Cursus_Label9->setGeometry(QRect(140, 170, 46, 13));
        Edit_Cursus_Total = new QSpinBox(Edit_Cursus_Group);
        Edit_Cursus_Total->setObjectName(QStringLiteral("Edit_Cursus_Total"));
        Edit_Cursus_Total->setGeometry(QRect(230, 220, 42, 22));
        Edit_Cursus_Label10 = new QLabel(Edit_Cursus_Group);
        Edit_Cursus_Label10->setObjectName(QStringLiteral("Edit_Cursus_Label10"));
        Edit_Cursus_Label10->setGeometry(QRect(230, 200, 46, 13));
        Edit_Cursus_Label11 = new QLabel(Edit_Cursus_Group);
        Edit_Cursus_Label11->setObjectName(QStringLiteral("Edit_Cursus_Label11"));
        Edit_Cursus_Label11->setGeometry(QRect(130, 290, 81, 16));
        Edit_Cursus_Seek_Submit = new QPushButton(Edit_Cursus_Group);
        Edit_Cursus_Seek_Submit->setObjectName(QStringLiteral("Edit_Cursus_Seek_Submit"));
        Edit_Cursus_Seek_Submit->setGeometry(QRect(140, 450, 51, 23));
        Edit_Cursus_Seek_Delete = new QPushButton(Edit_Cursus_Group);
        Edit_Cursus_Seek_Delete->setObjectName(QStringLiteral("Edit_Cursus_Seek_Delete"));
        Edit_Cursus_Seek_Delete->setEnabled(true);
        Edit_Cursus_Seek_Delete->setGeometry(QRect(220, 450, 51, 23));
        Edit_Cursus_Seek_Delete->setCursor(QCursor(Qt::ArrowCursor));
        Edit_Cursus_Seek_Delete->setAcceptDrops(true);
        widget = new QWidget(Edit_Cursus_Group);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 110, 311, 31));
        Edit_Cursus_Prepa = new QRadioButton(widget);
        Edit_Cursus_Prepa->setObjectName(QStringLiteral("Edit_Cursus_Prepa"));
        Edit_Cursus_Prepa->setGeometry(QRect(30, 10, 82, 17));
        Edit_Cursus_Branche = new QRadioButton(widget);
        Edit_Cursus_Branche->setObjectName(QStringLiteral("Edit_Cursus_Branche"));
        Edit_Cursus_Branche->setGeometry(QRect(90, 10, 82, 17));
        Edit_Cursus_Filiere = new QRadioButton(widget);
        Edit_Cursus_Filiere->setObjectName(QStringLiteral("Edit_Cursus_Filiere"));
        Edit_Cursus_Filiere->setGeometry(QRect(160, 10, 82, 17));
        Edit_Cursus_Mineur = new QRadioButton(widget);
        Edit_Cursus_Mineur->setObjectName(QStringLiteral("Edit_Cursus_Mineur"));
        Edit_Cursus_Mineur->setGeometry(QRect(220, 10, 82, 17));
        Onglets->addTab(Onglet_Cursus, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 823, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QStringLiteral("menuEdition"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QStringLiteral("menuAide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(Seek_Cursus_Code, Onglets);
        QWidget::setTabOrder(Onglets, Seek_Cursus_Prepa);
        QWidget::setTabOrder(Seek_Cursus_Prepa, Seek_Cursus_Branche);
        QWidget::setTabOrder(Seek_Cursus_Branche, Seek_Cursus_Filiere);
        QWidget::setTabOrder(Seek_Cursus_Filiere, Seek_Cursus_Mineur);
        QWidget::setTabOrder(Seek_Cursus_Mineur, Seek_UV_Submit);
        QWidget::setTabOrder(Seek_UV_Submit, Edit_UV_Code);
        QWidget::setTabOrder(Edit_UV_Code, Edit_UV_Titre);
        QWidget::setTabOrder(Edit_UV_Titre, Edit_UV_Automne);
        QWidget::setTabOrder(Edit_UV_Automne, Edit_UV_Printemps);
        QWidget::setTabOrder(Edit_UV_Printemps, Edit_UV_CS);
        QWidget::setTabOrder(Edit_UV_CS, Edit_UV_TM);
        QWidget::setTabOrder(Edit_UV_TM, Edit_UV_TSH);
        QWidget::setTabOrder(Edit_UV_TSH, Edit_UV_SP);
        QWidget::setTabOrder(Edit_UV_SP, checkBox_7);
        QWidget::setTabOrder(checkBox_7, Delete_UV);
        QWidget::setTabOrder(Delete_UV, Save_UV);
        QWidget::setTabOrder(Save_UV, Edit_UV_List1);
        QWidget::setTabOrder(Edit_UV_List1, Edit_UV_List2);
        QWidget::setTabOrder(Edit_UV_List2, Create_UV);
        QWidget::setTabOrder(Create_UV, Print_UV_List);
        QWidget::setTabOrder(Print_UV_List, Seek_UV_Code);
        QWidget::setTabOrder(Seek_UV_Code, Seek_UV_CS);
        QWidget::setTabOrder(Seek_UV_CS, Seek_UV_SP);
        QWidget::setTabOrder(Seek_UV_SP, Seek_UV_TM);
        QWidget::setTabOrder(Seek_UV_TM, Seek_UV_TSH);
        QWidget::setTabOrder(Seek_UV_TSH, Seek_Cursus_Submit);
        QWidget::setTabOrder(Seek_Cursus_Submit, Create_Cursus);
        QWidget::setTabOrder(Create_Cursus, Print_Cursus_List);
        QWidget::setTabOrder(Print_Cursus_List, Edit_Cursus_Code);
        QWidget::setTabOrder(Edit_Cursus_Code, Edit_Cursus_Titre);
        QWidget::setTabOrder(Edit_Cursus_Titre, Delete_Cursus);
        QWidget::setTabOrder(Delete_Cursus, Save_Cursus);
        QWidget::setTabOrder(Save_Cursus, Edit_Cursus_List1);
        QWidget::setTabOrder(Edit_Cursus_List1, Edit_Cursus_List2);
        QWidget::setTabOrder(Edit_Cursus_List2, Edit_Cursus_Resp);
        QWidget::setTabOrder(Edit_Cursus_Resp, Edit_Cursus_List3);
        QWidget::setTabOrder(Edit_Cursus_List3, Edit_Cursus_Seek_Code);
        QWidget::setTabOrder(Edit_Cursus_Seek_Code, Edit_Cursus_CS);
        QWidget::setTabOrder(Edit_Cursus_CS, Edit_Cursus_TM);
        QWidget::setTabOrder(Edit_Cursus_TM, Edit_Cursus_TSH);
        QWidget::setTabOrder(Edit_Cursus_TSH, Edit_Cursus_SP);
        QWidget::setTabOrder(Edit_Cursus_SP, Edit_Cursus_CSTM);
        QWidget::setTabOrder(Edit_Cursus_CSTM, Edit_Cursus_Total);
        QWidget::setTabOrder(Edit_Cursus_Total, Edit_Cursus_Seek_Submit);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter_2);
        menuEdition->addAction(actionSe_D_connecter);

        retranslateUi(MainWindow);

        Onglets->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0));
        actionRed_marrer->setText(QApplication::translate("MainWindow", "Red\303\251marrer", 0));
        actionQuitter_2->setText(QApplication::translate("MainWindow", "Quitter", 0));
        actionSe_D_connecter->setText(QApplication::translate("MainWindow", "Se D\303\251connecter", 0));
        Seek_UV_Group->setTitle(QApplication::translate("MainWindow", "Recherche", 0));
        Seek_UV_CS->setText(QApplication::translate("MainWindow", "CS", 0));
        Seek_UV_TSH->setText(QApplication::translate("MainWindow", "TSH", 0));
        Seek_UV_SP->setText(QApplication::translate("MainWindow", "SP", 0));
        Seek_UV_TM->setText(QApplication::translate("MainWindow", "TM", 0));
        Seek_UV_Submit->setText(QApplication::translate("MainWindow", "Rechercher", 0));
        Seek_UV_Label1->setText(QApplication::translate("MainWindow", "UV:", 0));
        Print_UV_Label1->setText(QApplication::translate("MainWindow", "R\303\251sultats", 0));
        Edit_UV_Group->setTitle(QApplication::translate("MainWindow", "Modification UV", 0));
        Edit_UV_Label1->setText(QApplication::translate("MainWindow", "Code:", 0));
        Edit_UV_Label2->setText(QApplication::translate("MainWindow", "Titre:", 0));
        Edit_UV_Label3->setText(QApplication::translate("MainWindow", "Saison:", 0));
        Edit_UV_Automne->setText(QApplication::translate("MainWindow", "Automne", 0));
        Edit_UV_Printemps->setText(QApplication::translate("MainWindow", "Printemps", 0));
        Edit_UV_Label4->setText(QApplication::translate("MainWindow", "CS", 0));
        Edit_UV_Label5->setText(QApplication::translate("MainWindow", "TM", 0));
        Edit_UV_Label6->setText(QApplication::translate("MainWindow", "TSH", 0));
        Edit_UV_Label7->setText(QApplication::translate("MainWindow", "SP", 0));
        checkBox_7->setText(QApplication::translate("MainWindow", "Demi-UV:", 0));
        Edit_UV_Label8->setText(QApplication::translate("MainWindow", "Cursus Disponibles", 0));
        Edit_UV_Label9->setText(QApplication::translate("MainWindow", "Cursus Actuels", 0));
        Delete_UV->setText(QApplication::translate("MainWindow", "Supprimer l'UV", 0));
        Save_UV->setText(QApplication::translate("MainWindow", "Sauvegarder l'UV", 0));

        const bool __sortingEnabled = Edit_UV_List1->isSortingEnabled();
        Edit_UV_List1->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = Edit_UV_List1->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "GI", 0));
        QListWidgetItem *___qlistwidgetitem1 = Edit_UV_List1->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "GB", 0));
        QListWidgetItem *___qlistwidgetitem2 = Edit_UV_List1->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "TC", 0));
        QListWidgetItem *___qlistwidgetitem3 = Edit_UV_List1->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "HuTeck", 0));
        Edit_UV_List1->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = Edit_UV_List2->isSortingEnabled();
        Edit_UV_List2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem4 = Edit_UV_List2->item(0);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "SY14", 0));
        QListWidgetItem *___qlistwidgetitem5 = Edit_UV_List2->item(1);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "SY15", 0));
        QListWidgetItem *___qlistwidgetitem6 = Edit_UV_List2->item(2);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "SY16", 0));
        Edit_UV_List2->setSortingEnabled(__sortingEnabled1);

        Create_UV->setText(QApplication::translate("MainWindow", "Cr\303\251er une UV", 0));

        const bool __sortingEnabled2 = Print_UV_List->isSortingEnabled();
        Print_UV_List->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem7 = Print_UV_List->item(0);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "LO21", 0));
        QListWidgetItem *___qlistwidgetitem8 = Print_UV_List->item(1);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "LO22", 0));
        QListWidgetItem *___qlistwidgetitem9 = Print_UV_List->item(2);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "NF17", 0));
        Print_UV_List->setSortingEnabled(__sortingEnabled2);

        Onglets->setTabText(Onglets->indexOf(Onglet_UV), QApplication::translate("MainWindow", "Administration des UVs", 0));
        Seek_Cursus_Group->setTitle(QApplication::translate("MainWindow", "Recherche", 0));
        Seek_Cursus_Prepa->setText(QApplication::translate("MainWindow", "Pr\303\251pa", 0));
        Seek_Cursus_Filiere->setText(QApplication::translate("MainWindow", "Fili\303\250re", 0));
        Seek_Cursus_Mineur->setText(QApplication::translate("MainWindow", "Mineur", 0));
        Seek_Cursus_Branche->setText(QApplication::translate("MainWindow", "Branche", 0));
        Seek_Cursus_Submit->setText(QApplication::translate("MainWindow", "Rechercher", 0));
        Seek_Cursus_Label1->setText(QApplication::translate("MainWindow", "Cursus:", 0));
        Create_Cursus->setText(QApplication::translate("MainWindow", "Cr\303\251er un Cursus", 0));

        const bool __sortingEnabled3 = Print_Cursus_List->isSortingEnabled();
        Print_Cursus_List->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem10 = Print_Cursus_List->item(0);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "GI", 0));
        QListWidgetItem *___qlistwidgetitem11 = Print_Cursus_List->item(1);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "TS", 0));
        QListWidgetItem *___qlistwidgetitem12 = Print_Cursus_List->item(2);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "GB", 0));
        QListWidgetItem *___qlistwidgetitem13 = Print_Cursus_List->item(3);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "TSN", 0));
        QListWidgetItem *___qlistwidgetitem14 = Print_Cursus_List->item(4);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "SRI", 0));
        Print_Cursus_List->setSortingEnabled(__sortingEnabled3);

        Print_Cursus_Label1->setText(QApplication::translate("MainWindow", "R\303\251sultats", 0));
        Edit_Cursus_Group->setTitle(QApplication::translate("MainWindow", "Modification Cursus", 0));
        Edit_Cursus_Label1->setText(QApplication::translate("MainWindow", "Code:", 0));
        Edit_Cursus_Label2->setText(QApplication::translate("MainWindow", "Titre:", 0));
        Delete_Cursus->setText(QApplication::translate("MainWindow", "Supprimer Cursus", 0));
        Save_Cursus->setText(QApplication::translate("MainWindow", "Sauvegarder Cursus", 0));

        const bool __sortingEnabled4 = Edit_Cursus_List1->isSortingEnabled();
        Edit_Cursus_List1->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem15 = Edit_Cursus_List1->item(0);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "NF1", 0));
        QListWidgetItem *___qlistwidgetitem16 = Edit_Cursus_List1->item(1);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "NF2", 0));
        QListWidgetItem *___qlistwidgetitem17 = Edit_Cursus_List1->item(2);
        ___qlistwidgetitem17->setText(QApplication::translate("MainWindow", "NF3", 0));
        Edit_Cursus_List1->setSortingEnabled(__sortingEnabled4);


        const bool __sortingEnabled5 = Edit_Cursus_List2->isSortingEnabled();
        Edit_Cursus_List2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem18 = Edit_Cursus_List2->item(0);
        ___qlistwidgetitem18->setText(QApplication::translate("MainWindow", "SY14", 0));
        QListWidgetItem *___qlistwidgetitem19 = Edit_Cursus_List2->item(1);
        ___qlistwidgetitem19->setText(QApplication::translate("MainWindow", "SY15", 0));
        QListWidgetItem *___qlistwidgetitem20 = Edit_Cursus_List2->item(2);
        ___qlistwidgetitem20->setText(QApplication::translate("MainWindow", "SY16", 0));
        Edit_Cursus_List2->setSortingEnabled(__sortingEnabled5);

        Edit_Cursus_Resp->setText(QString());
        Edit_Cursus_Label3->setText(QApplication::translate("MainWindow", "Responsable:", 0));

        const bool __sortingEnabled6 = Edit_Cursus_List3->isSortingEnabled();
        Edit_Cursus_List3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem21 = Edit_Cursus_List3->item(0);
        ___qlistwidgetitem21->setText(QApplication::translate("MainWindow", "SY14", 0));
        QListWidgetItem *___qlistwidgetitem22 = Edit_Cursus_List3->item(1);
        ___qlistwidgetitem22->setText(QApplication::translate("MainWindow", "SY15", 0));
        QListWidgetItem *___qlistwidgetitem23 = Edit_Cursus_List3->item(2);
        ___qlistwidgetitem23->setText(QApplication::translate("MainWindow", "SY16", 0));
        Edit_Cursus_List3->setSortingEnabled(__sortingEnabled6);

        Edit_Cursus_Seek_Code->setText(QString());
        Edit_Cursus_Seek_Code->setPlaceholderText(QApplication::translate("MainWindow", "Code", 0));
        Edit_Cursus_Label4->setText(QApplication::translate("MainWindow", "Cr\303\251dits:", 0));
        Edit_Cursus_Label5->setText(QApplication::translate("MainWindow", "CS:", 0));
        Edit_Cursus_Label6->setText(QApplication::translate("MainWindow", "TM:", 0));
        Edit_Cursus_Label7->setText(QApplication::translate("MainWindow", "TSH:", 0));
        Edit_Cursus_Label8->setText(QApplication::translate("MainWindow", "SP:", 0));
        Edit_Cursus_Label9->setText(QApplication::translate("MainWindow", "CS+TM", 0));
        Edit_Cursus_Label10->setText(QApplication::translate("MainWindow", "Total", 0));
        Edit_Cursus_Label11->setText(QApplication::translate("MainWindow", "UV \303\240 Valider:", 0));
        Edit_Cursus_Seek_Submit->setText(QApplication::translate("MainWindow", "Ajouter", 0));
        Edit_Cursus_Seek_Delete->setText(QApplication::translate("MainWindow", "Poubelle", 0));
        Edit_Cursus_Seek_Delete->setProperty("dropAction", QVariant(QApplication::translate("MainWindow", "delete", 0)));
        Edit_Cursus_Prepa->setText(QApplication::translate("MainWindow", "Pr\303\251pa", 0));
        Edit_Cursus_Branche->setText(QApplication::translate("MainWindow", "Branche", 0));
        Edit_Cursus_Filiere->setText(QApplication::translate("MainWindow", "Fili\303\250re", 0));
        Edit_Cursus_Mineur->setText(QApplication::translate("MainWindow", "Mineur", 0));
        Onglets->setTabText(Onglets->indexOf(Onglet_Cursus), QApplication::translate("MainWindow", "Administration des Cursus", 0));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Login", 0));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
