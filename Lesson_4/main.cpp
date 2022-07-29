#include "mainwindow.h"

#include <QApplication>
#include<QObject>
#include<QCheckBox>
#include<QPushButton>
#include<QDebug>
#include<QString>
#include<QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile dene("deneme.txt");



    MainWindow w;
    w.show();
    return a.exec();
}
