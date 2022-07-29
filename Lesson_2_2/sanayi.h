#ifndef SANAYI_H
#define SANAYI_H

#include <QObject>
#include<QDebug>
class Sanayi : public QObject
{
    Q_OBJECT
public:
    explicit Sanayi(QObject *parent = nullptr);

public slots:
    void  kaporta(int x);

signals:

};

#endif // SANAYI_H
