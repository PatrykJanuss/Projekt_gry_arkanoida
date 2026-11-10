#include "belka.hpp"
#include <QDebug>

RUCH_BELKA::RUCH_BELKA(QObject *rodzic) : QObject(rodzic) {}
double RUCH_BELKA::czytaj_belka_x() const { return aktualny_stan_belka.pozycja_belka_x; }
double RUCH_BELKA::czytaj_belka_y() const { return aktualny_stan_belka.pozycja_belka_y; }

void RUCH_BELKA::pozycja_belka(
        double szer_apka, double wys_apka, 
        double szer_belka, double wys_belka
    ){
    dane.szerokosc_apka = szer_apka;
    dane.wysokosc_apka = wys_apka;
    dane.szerokosc_belka = szer_belka;
    dane.wysokosc_belka = wys_belka;
    aktualny_stan_belka.pozycja_belka_x = (szer_apka -szer_belka )/ 2.0;
    aktualny_stan_belka.pozycja_belka_y=wys_apka-wys_belka;
    emit pozycja_znaleziona();
}


void RUCH_BELKA::sterowanie_belka(double kierunek_ruchu) {
    double nowa_pozycja_x = aktualny_stan_belka.pozycja_belka_x + (kierunek_ruchu *aktualny_stan_belka.predkosc_calkowita_belka* dane.wysokosc_belka);

    if (nowa_pozycja_x < 0) {
        nowa_pozycja_x = 0;
    } else if (nowa_pozycja_x > (dane.szerokosc_apka - dane.szerokosc_belka)) {
        nowa_pozycja_x = dane.szerokosc_apka - dane.szerokosc_belka;
    }

    aktualny_stan_belka.pozycja_belka_x = nowa_pozycja_x;
    emit pozycja_znaleziona();
}
void RUCH_BELKA::zresetuj_polozenie_belki() 
{
    aktualny_stan_belka.pozycja_belka_x = (dane.szerokosc_apka -dane.szerokosc_belka)/2.0;
    emit pozycja_znaleziona();
}