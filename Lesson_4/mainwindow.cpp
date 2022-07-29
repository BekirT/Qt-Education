#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString shlist = " ";
    QObjectList pazar_list = children();

    foreach(QObject *obj, pazar_list)
    {

        if(obj->inherits("QCheckBox"))
        {
            qDebug()<<"hello";
            QCheckBox* chb = qobject_cast<QCheckBox*>(obj);
            if(chb != nullptr && chb->isChecked())
                shlist += chb->text(), shlist += " x ";

        }
    }
    qDebug()<<pazar_list;
    qDebug()<<shlist;
}

