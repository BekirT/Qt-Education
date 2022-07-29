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


void MainWindow::on_pushB_okey_clicked()
{
    QString shopping_list = " ";
    if(ui->checkB_domates ->isChecked())
        shopping_list.append(ui->checkB_domates->text()), shopping_list += " ";
    if(ui->checkB_biber->isChecked())
        shopping_list.append(ui->checkB_biber->text()), shopping_list += " ";
    if(ui->checkB_erik->isChecked())
        shopping_list.append(ui->checkB_erik->text()), shopping_list += " ";
    if(ui->checkB_patates->isChecked())
        shopping_list.append(ui->checkB_patates->text()), shopping_list += " ";
    if(ui->checkB_patlican->isChecked())
        shopping_list.append(ui->checkB_patlican->text()), shopping_list += " ";
    if(ui->checkB_sarimsak->isChecked())
        shopping_list.append(ui->checkB_sarimsak->text()), shopping_list += " ";
    if(ui->checkB_sogan->isChecked())
        shopping_list.append( ui->checkB_sogan->text()), shopping_list += " ";

    qDebug()<<shopping_list;
}

