#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pshB_Hello, &QAbstractButton::clicked, this, &MainWindow::on_pshB_Hello_MyClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pshB_Merhaba_clicked()
{
    qDebug()<<"MerhabaDunya";
}

void MainWindow::on_pshB_Hello_MyClick()
{
    qDebug()<<"Hello World";
}
