#include "mainwindow.h"
#include <QApplication>

#include"araba.h"
#include"sanayi.h"

/*
 *Sinyal Slotu manuel olusturma
 * 1- İlgili sinyalin ve slotun bulunduğu sınıflar QObject sınıfından türetilmeli yada kalıtılmalı
 * 2- Q_OBJECT makrosu header dosyasında tanım sırasında bulunmalı
 *
 * !!!!!!!!!!!!--- Arac sınıfının arıza sinyali tetiklenince Sanayi sınıfının kaportacı fonksiyonu çağrılsın ----!!!!!!!!!!
 *
 */


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    Araba ma;
    Sanayi ms;
    QObject::connect(&ma,&Araba::ariza,&ms,&Sanayi::kaporta);

    ma.on_test_ariza(34);
    return a.exec();
}
