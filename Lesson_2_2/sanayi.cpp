#include "sanayi.h"

Sanayi::Sanayi(QObject *parent)
    : QObject{parent}
{

}

void Sanayi::kaporta(int x)
{
    qDebug()<<"Slots cağrıldı";
    qDebug()<<"Cagrilan değer:"<<x;
}
