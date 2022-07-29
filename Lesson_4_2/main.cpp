#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file_deneme("deneme.txt");

    bool res = file_deneme.open(QIODevice::ReadOnly| QIODevice::Text);

    if(res == false)
    {
        qDebug()<<"Hata açılamadı";
        return -1;
    }
    qDebug()<<"Dosyanız açıldı ve yazılmaya hazır";

    //sfile_deneme.write("Bekir Can Tac");


    QFile writedeneme("write.txt");
    bool res1 = writedeneme.open(QIODevice::WriteOnly|QIODevice::Text);
    if(res1 == false)
    {
        qDebug()<<"Hata açılamadı";
        return -1;
    }

    QByteArray qba = file_deneme.readAll();
    writedeneme.write(qba);



}
