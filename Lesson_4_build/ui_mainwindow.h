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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_domates;
    QCheckBox *checkBox_biber;
    QCheckBox *checkBox_kiraz;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(397, 514);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox_domates = new QCheckBox(centralwidget);
        checkBox_domates->setObjectName(QString::fromUtf8("checkBox_domates"));

        gridLayout->addWidget(checkBox_domates, 0, 0, 1, 1);

        checkBox_biber = new QCheckBox(centralwidget);
        checkBox_biber->setObjectName(QString::fromUtf8("checkBox_biber"));

        gridLayout->addWidget(checkBox_biber, 1, 0, 1, 1);

        checkBox_kiraz = new QCheckBox(centralwidget);
        checkBox_kiraz->setObjectName(QString::fromUtf8("checkBox_kiraz"));

        gridLayout->addWidget(checkBox_kiraz, 2, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        checkBox_domates->setText(QCoreApplication::translate("MainWindow", "Domates", nullptr));
        checkBox_biber->setText(QCoreApplication::translate("MainWindow", "Biber", nullptr));
        checkBox_kiraz->setText(QCoreApplication::translate("MainWindow", "Kiraz", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Pazar Listesi", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
