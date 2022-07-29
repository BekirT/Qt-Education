#ifndef ARABA_H
#define ARABA_H

#include <QObject>
#include<QDebug>
class Araba : public QObject
{
    Q_OBJECT
public:
    explicit Araba(QObject *parent = nullptr);
    void on_test_ariza(int x);
signals:
    void ariza(int x);

};

#endif // ARABA_H
