/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actioncreate_experiment_series;
    QAction *actionopen_experiment_series;
    QAction *actiondeath_laser;
    QAction *actionadd_new_measurement_2;
    QAction *action2st_floor_cam;
    QAction *actionview;
    QAction *actionview_2;
    QAction *actioncameras_2;
    QAction *actionsoil_sensor_diagram;
    QAction *actioninfo;
    QAction *actionHelp_center_phone_7_916_2576182;
    QAction *actiondatasheet;
    QAction *actionexit_please;
    QAction *actiondownload_data_from_database;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QCustomPlot *customplot;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QProgressBar *progressBar;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuinstruments;
    QMenu *menusoil_sensor;
    QMenu *menucameras;
    QMenu *menuview;
    QMenu *menuinfo;
    QMenu *menuhelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1202, 759);
        MainWindow->setIconSize(QSize(30, 30));
        actioncreate_experiment_series = new QAction(MainWindow);
        actioncreate_experiment_series->setObjectName(QString::fromUtf8("actioncreate_experiment_series"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/prefix/img/square.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncreate_experiment_series->setIcon(icon);
        actionopen_experiment_series = new QAction(MainWindow);
        actionopen_experiment_series->setObjectName(QString::fromUtf8("actionopen_experiment_series"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/prefix/img/Book_open_duotone_line.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen_experiment_series->setIcon(icon1);
        actiondeath_laser = new QAction(MainWindow);
        actiondeath_laser->setObjectName(QString::fromUtf8("actiondeath_laser"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/prefix/img/Alarm_duotone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondeath_laser->setIcon(icon2);
        actionadd_new_measurement_2 = new QAction(MainWindow);
        actionadd_new_measurement_2->setObjectName(QString::fromUtf8("actionadd_new_measurement_2"));
        actionadd_new_measurement_2->setIcon(icon);
        action2st_floor_cam = new QAction(MainWindow);
        action2st_floor_cam->setObjectName(QString::fromUtf8("action2st_floor_cam"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/prefix/img/Camera_duotone_line.png"), QSize(), QIcon::Normal, QIcon::Off);
        action2st_floor_cam->setIcon(icon3);
        actionview = new QAction(MainWindow);
        actionview->setObjectName(QString::fromUtf8("actionview"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/prefix/img/nut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionview->setIcon(icon4);
        actionview_2 = new QAction(MainWindow);
        actionview_2->setObjectName(QString::fromUtf8("actionview_2"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/prefix/img/gear_fill.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionview_2->setIcon(icon5);
        actioncameras_2 = new QAction(MainWindow);
        actioncameras_2->setObjectName(QString::fromUtf8("actioncameras_2"));
        actioncameras_2->setIcon(icon3);
        actionsoil_sensor_diagram = new QAction(MainWindow);
        actionsoil_sensor_diagram->setObjectName(QString::fromUtf8("actionsoil_sensor_diagram"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/prefix/img/diagram_fill.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsoil_sensor_diagram->setIcon(icon6);
        actioninfo = new QAction(MainWindow);
        actioninfo->setObjectName(QString::fromUtf8("actioninfo"));
        actioninfo->setIcon(icon2);
        actionHelp_center_phone_7_916_2576182 = new QAction(MainWindow);
        actionHelp_center_phone_7_916_2576182->setObjectName(QString::fromUtf8("actionHelp_center_phone_7_916_2576182"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/prefix/img/phone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp_center_phone_7_916_2576182->setIcon(icon7);
        actiondatasheet = new QAction(MainWindow);
        actiondatasheet->setObjectName(QString::fromUtf8("actiondatasheet"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/prefix/img/Info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondatasheet->setIcon(icon8);
        actionexit_please = new QAction(MainWindow);
        actionexit_please->setObjectName(QString::fromUtf8("actionexit_please"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/prefix/img/Sign_in_squre_fill.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionexit_please->setIcon(icon9);
        actiondownload_data_from_database = new QAction(MainWindow);
        actiondownload_data_from_database->setObjectName(QString::fromUtf8("actiondownload_data_from_database"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/Upload_duotone_line.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondownload_data_from_database->setIcon(icon10);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(310, 30, 871, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 4, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 4, 2, 1, 1);

        tableView = new QTableView(gridLayoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 3);

        listWidget = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 180, 221, 71));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 81, 21));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 121, 21));
        label_2->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 30, 113, 20));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 60, 113, 20));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 100, 221, 31));
        QFont font1;
        pushButton_4->setFont(font1);
        customplot = new QCustomPlot(centralwidget);
        customplot->setObjectName(QString::fromUtf8("customplot"));
        customplot->setGeometry(QRect(310, 290, 871, 351));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1000, 660, 181, 41));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(310, 660, 191, 41));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(530, 660, 201, 41));
        progressBar->setValue(24);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(750, 660, 211, 41));
        QFont font2;
        font2.setPointSize(12);
        label_3->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1202, 22));
        menufile = new QMenu(menubar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        menuinstruments = new QMenu(menubar);
        menuinstruments->setObjectName(QString::fromUtf8("menuinstruments"));
        menusoil_sensor = new QMenu(menuinstruments);
        menusoil_sensor->setObjectName(QString::fromUtf8("menusoil_sensor"));
        menucameras = new QMenu(menuinstruments);
        menucameras->setObjectName(QString::fromUtf8("menucameras"));
        menuview = new QMenu(menubar);
        menuview->setObjectName(QString::fromUtf8("menuview"));
        menuinfo = new QMenu(menubar);
        menuinfo->setObjectName(QString::fromUtf8("menuinfo"));
        menuhelp = new QMenu(menubar);
        menuhelp->setObjectName(QString::fromUtf8("menuhelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuinstruments->menuAction());
        menubar->addAction(menuview->menuAction());
        menubar->addAction(menuinfo->menuAction());
        menubar->addAction(menuhelp->menuAction());
        menufile->addAction(actioncreate_experiment_series);
        menufile->addAction(actionopen_experiment_series);
        menufile->addAction(actiondownload_data_from_database);
        menuinstruments->addAction(menusoil_sensor->menuAction());
        menuinstruments->addAction(menucameras->menuAction());
        menuinstruments->addAction(actiondeath_laser);
        menusoil_sensor->addSeparator();
        menusoil_sensor->addAction(actionadd_new_measurement_2);
        menuview->addAction(actioncameras_2);
        menuview->addAction(actionsoil_sensor_diagram);
        menuinfo->addAction(actiondatasheet);
        menuhelp->addAction(actioninfo);
        menuhelp->addAction(actionHelp_center_phone_7_916_2576182);
        menuhelp->addAction(actionexit_please);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actioncreate_experiment_series->setText(QCoreApplication::translate("MainWindow", "create experiment series", nullptr));
        actionopen_experiment_series->setText(QCoreApplication::translate("MainWindow", "open experiment series", nullptr));
        actiondeath_laser->setText(QCoreApplication::translate("MainWindow", "plant death laser", nullptr));
        actionadd_new_measurement_2->setText(QCoreApplication::translate("MainWindow", "add new measurement", nullptr));
        action2st_floor_cam->setText(QCoreApplication::translate("MainWindow", "2st floor cam", nullptr));
        actionview->setText(QCoreApplication::translate("MainWindow", "view", nullptr));
        actionview_2->setText(QCoreApplication::translate("MainWindow", "view", nullptr));
        actioncameras_2->setText(QCoreApplication::translate("MainWindow", "cameras", nullptr));
        actionsoil_sensor_diagram->setText(QCoreApplication::translate("MainWindow", "soil sensor diagram", nullptr));
        actioninfo->setText(QCoreApplication::translate("MainWindow", "info", nullptr));
        actionHelp_center_phone_7_916_2576182->setText(QCoreApplication::translate("MainWindow", "Help center phone +7(916)2576182", nullptr));
        actiondatasheet->setText(QCoreApplication::translate("MainWindow", "datasheet", nullptr));
        actionexit_please->setText(QCoreApplication::translate("MainWindow", "exit, please", nullptr));
        actiondownload_data_from_database->setText(QCoreApplication::translate("MainWindow", "download data from database", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "add measurement", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "delete measurement", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "connect to server (download data)", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "George growbox", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Dmitrii growbox", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Yaroslav growbox", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "sign in", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "plot the diagram", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Progress bar with information", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "file", nullptr));
        menuinstruments->setTitle(QCoreApplication::translate("MainWindow", "instruments", nullptr));
        menusoil_sensor->setTitle(QCoreApplication::translate("MainWindow", "soil sensor", nullptr));
        menucameras->setTitle(QCoreApplication::translate("MainWindow", "cameras", nullptr));
        menuview->setTitle(QCoreApplication::translate("MainWindow", "view", nullptr));
        menuinfo->setTitle(QCoreApplication::translate("MainWindow", "info", nullptr));
        menuhelp->setTitle(QCoreApplication::translate("MainWindow", "help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
