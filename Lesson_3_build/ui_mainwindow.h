/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkB_domates;
    QCheckBox *checkB_biber;
    QCheckBox *checkB_patlican;
    QCheckBox *checkB_erik;
    QCheckBox *checkB_patates;
    QCheckBox *checkB_sogan;
    QCheckBox *checkB_sarimsak;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushB_okey;
    QPushButton *pushB_cancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(454, 366);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkB_domates = new QCheckBox(centralwidget);
        checkB_domates->setObjectName(QString::fromUtf8("checkB_domates"));

        verticalLayout->addWidget(checkB_domates);

        checkB_biber = new QCheckBox(centralwidget);
        checkB_biber->setObjectName(QString::fromUtf8("checkB_biber"));

        verticalLayout->addWidget(checkB_biber);

        checkB_patlican = new QCheckBox(centralwidget);
        checkB_patlican->setObjectName(QString::fromUtf8("checkB_patlican"));

        verticalLayout->addWidget(checkB_patlican);

        checkB_erik = new QCheckBox(centralwidget);
        checkB_erik->setObjectName(QString::fromUtf8("checkB_erik"));

        verticalLayout->addWidget(checkB_erik);

        checkB_patates = new QCheckBox(centralwidget);
        checkB_patates->setObjectName(QString::fromUtf8("checkB_patates"));

        verticalLayout->addWidget(checkB_patates);

        checkB_sogan = new QCheckBox(centralwidget);
        checkB_sogan->setObjectName(QString::fromUtf8("checkB_sogan"));

        verticalLayout->addWidget(checkB_sogan);

        checkB_sarimsak = new QCheckBox(centralwidget);
        checkB_sarimsak->setObjectName(QString::fromUtf8("checkB_sarimsak"));

        verticalLayout->addWidget(checkB_sarimsak);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushB_okey = new QPushButton(centralwidget);
        pushB_okey->setObjectName(QString::fromUtf8("pushB_okey"));

        horizontalLayout->addWidget(pushB_okey);

        pushB_cancel = new QPushButton(centralwidget);
        pushB_cancel->setObjectName(QString::fromUtf8("pushB_cancel"));

        horizontalLayout->addWidget(pushB_cancel);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 454, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Al\304\261\305\237veri\305\237 Listesi", nullptr));
        checkB_domates->setText(QCoreApplication::translate("MainWindow", "Domates", nullptr));
        checkB_biber->setText(QCoreApplication::translate("MainWindow", "Biberr", nullptr));
        checkB_patlican->setText(QCoreApplication::translate("MainWindow", "Patl\304\261can", nullptr));
        checkB_erik->setText(QCoreApplication::translate("MainWindow", "Erik", nullptr));
        checkB_patates->setText(QCoreApplication::translate("MainWindow", "Patates", nullptr));
        checkB_sogan->setText(QCoreApplication::translate("MainWindow", "So\304\237an", nullptr));
        checkB_sarimsak->setText(QCoreApplication::translate("MainWindow", "Sar\304\261msak", nullptr));
        pushB_okey->setText(QCoreApplication::translate("MainWindow", "OKEY", nullptr));
        pushB_cancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
