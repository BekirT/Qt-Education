#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QString shlist = " ";
    QObjectList pazar_list = children();

    foreach(QObject * obj, pazar_list)
    {
        if(obj->inherits("QCheckBox"))
        {
            QCheckBox* chbx_obj = qobject_cast<QCheckBox*>(obj);
            if(chbx_obj != nullptr && chbx_obj->isChecked())
                shlist += chbx_obj->text(), shlist += " ";

        }
    }
    qDebug()<<pazar_list;

    qDebug()<<shlist;
}

