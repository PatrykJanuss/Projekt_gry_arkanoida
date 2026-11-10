#include "licznik.hpp"
#include <QDebug>

Klasa_wyswietlacz::Klasa_wyswietlacz(QObject *rodzic) : QObject(rodzic)
{
    aktualny.licznik = 3.0;
    aktualny.licznik_punktyy=0.0;
}
double Klasa_wyswietlacz::czytaj_licznik() const { return aktualny.licznik; }
double Klasa_wyswietlacz::czytaj_punktacja() const { return aktualny.licznik_punktyy; }

void Klasa_wyswietlacz::zmien_status_zycia()
{
    if (aktualny.licznik > 0)
    {
        aktualny.licznik = aktualny.licznik - 1.0;
        emit licznik_zmienione();
    }
    else if (aktualny.licznik = 0)
    {
        aktualny.licznik = 3;
        emit licznik_zmienione();
    }
}

void Klasa_wyswietlacz::zmien_status_punkty()
{
    qDebug()<<"aktualnuy licznik"<<aktualny.licznik_punktyy;

    if(aktualny.licznik_punktyy>0){
        aktualny.licznik_punktyy=aktualny.licznik_punktyy+10;
        emit dodano_punkty();

    }else if (aktualny.licznik_punktyy==0){
        aktualny.licznik_punktyy=10;
        emit dodano_punkty();
    }
}

void Klasa_wyswietlacz::zmien_status_poziom(){}
