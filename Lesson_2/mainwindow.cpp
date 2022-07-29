#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   QObject::connect(ui->pshB_connection,&QAbstractButton::clicked,this, &MainWindow::connect);
   QObject::connect(ui->pushB_disconnection, &QAbstractButton::clicked,this, &MainWindow::disconnect);
   QObject::connect(ui->pushB_hello, &QAbstractButton::clicked,this,&MainWindow::dispalyHel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connect()
{
    QObject::connect(ui->pushB_hello, &QAbstractButton::clicked,this,&MainWindow::dispalyHel);
    ui->plainTextEdit->appendPlainText(QString{"Connection"});
}

void MainWindow::disconnect()
{
    QObject::disconnect(ui->pushB_hello, &QAbstractButton::clicked,this,&MainWindow::dispalyHel);
    ui->plainTextEdit->appendPlainText(QString{"Disconnection"});
}

void MainWindow::dispalyHel()
{
    ui->plainTextEdit->appendPlainText(QString{"Hello"});
}

