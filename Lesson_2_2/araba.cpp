#include "araba.h"

Araba::Araba(QObject *parent)
    : QObject{parent}
{

}

void Araba::on_test_ariza(int x)
{
    qDebug()<<" sinyalden slota Deger aktarılıyor";
    emit ariza(x);
}
