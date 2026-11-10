#include "ball.hpp"
#include <QDebug>
#include <QRandomGenerator>
#include <QtMath>

Klasa_ruch_pilki::Klasa_ruch_pilki(QObject *rodzic) : QObject(rodzic)
{
    zegar = new QTimer(this);   connect(zegar, &QTimer::timeout, this, &Klasa_ruch_pilki::ruch_pilki);
}
double Klasa_ruch_pilki::czytaj_x() const { return aktualny_stan.pozycja_x; }
double Klasa_ruch_pilki::czytaj_y() const { return aktualny_stan.pozycja_y; }

void Klasa_ruch_pilki::wymiaryObiektow(
    double szerokosc_apka, double wysokosc_apka,
    double szerokosc_bloczek, double wysokosc_bloczek,
    double szerokosc_belka, double wysokosc_belka,
    double szerokosc_pilka, double wysokosc_pilka,
    double kolumny_bloczki, double rozstaw_bloczki,
    double szerokosc_licznik, double wysokosc_licznik,
    double ilosc_bloczki)
{
    dane.szerokosc_apka = szerokosc_apka;
    dane.wysokosc_apka = wysokosc_apka;
    dane.szerokosc_bloczek = szerokosc_bloczek;
    dane.wysokosc_bloczek = wysokosc_bloczek;
    dane.szerokosc_belka = szerokosc_belka;
    dane.wysokosc_belka = wysokosc_belka;
    dane.szerokosc_pilka = szerokosc_pilka;
    dane.wysokosc_pilka = wysokosc_pilka;
    dane.kolumny_bloczki = kolumny_bloczki;
    dane.rozstaw_bloczki = rozstaw_bloczki;
    dane.szerokosc_licznik = szerokosc_licznik;
    dane.wysokosc_licznik = wysokosc_licznik;
    dane.ilosc_bloczki = ilosc_bloczki;

    aktualny_stan.pozycja_x = (szerokosc_apka -szerokosc_pilka )/ 2.0;
    aktualny_stan.pozycja_y = wysokosc_apka - wysokosc_belka - wysokosc_pilka;
    emit pozycja_zmieniona();
}

void Klasa_ruch_pilki::szukaj_pozycja_belka(double pozycja_belki_x)
{
    aktualny_stan.pozycja_belka_x = pozycja_belki_x;
    if (!flaga_wystrzelona)
    {
        aktualny_stan.pozycja_x = (dane.szerokosc_apka - dane.szerokosc_pilka )/ 2.0;
        aktualny_stan.pozycja_y = dane.wysokosc_apka - dane.wysokosc_belka - dane.wysokosc_pilka;
        emit pozycja_zmieniona();
    }
}

void Klasa_ruch_pilki::wystrzel_pilke()
{
    if (flaga_wystrzelona)
    {
        return;
    }
    flaga_wystrzelona = true;
    double kat_stopnie = QRandomGenerator::global()->bounded(45, 135);
    double kat_radiany = qDegreesToRadians(kat_stopnie);

    aktualny_stan.predkosc_x = aktualny_stan.predkosc_calkowita * qCos(kat_radiany);
    aktualny_stan.predkosc_y = -aktualny_stan.predkosc_calkowita * qSin(kat_radiany);
    aktualny_stan.licznik = 0;
    if (flaga_wystrzelona = true)
    {
        aktualny_stan.licznik = 1;
    }

    zegar->start(16);
}

void Klasa_ruch_pilki::odbicie_gora()
{
   double dolna_granica_siatki=dane.wysokosc_licznik + dane.rozstaw_bloczki;

    if (aktualny_stan.pozycja_y <= dolna_granica_siatki)
    {
        aktualny_stan.pozycja_y = dolna_granica_siatki;
        odworc_predkosc_y();
    }
}

void Klasa_ruch_pilki::odbicie_sciana()
{
    if (aktualny_stan.pozycja_x <= 0)
    {
        aktualny_stan.pozycja_x = 0;
        aktualny_stan.predkosc_x = -aktualny_stan.predkosc_x;
    }
    else if (aktualny_stan.pozycja_x >= (dane.szerokosc_apka - dane.szerokosc_pilka))
    {
        aktualny_stan.pozycja_x = dane.szerokosc_apka - dane.szerokosc_pilka;
        aktualny_stan.predkosc_x = -aktualny_stan.predkosc_x;
    }
}

void Klasa_ruch_pilki::odbicie_belka()
{
    double wysokosc_belka_gora = dane.wysokosc_apka - dane.wysokosc_belka;
    double prawa_krawedz_belka = aktualny_stan.pozycja_belka_x + dane.szerokosc_belka;

    bool porownanie_wysokosc = ((aktualny_stan.pozycja_y + dane.wysokosc_pilka >= wysokosc_belka_gora) && (aktualny_stan.pozycja_y <= wysokosc_belka_gora));
    bool porownanie_szerokosc = ((aktualny_stan.pozycja_x + dane.szerokosc_pilka >= aktualny_stan.pozycja_belka_x) && (aktualny_stan.pozycja_x <= prawa_krawedz_belka));

    if (porownanie_wysokosc && porownanie_szerokosc)
    {
        if (aktualny_stan.predkosc_y > 0)
        {
            aktualny_stan.pozycja_y = wysokosc_belka_gora - dane.wysokosc_pilka;
            odworc_predkosc_y();
        }
    }
    if (aktualny_stan.pozycja_y >= dane.wysokosc_apka)
    {
        flaga_wystrzelona = false;
        zegar->stop();
        szukaj_pozycja_belka(aktualny_stan.pozycja_belka_x);
        emit sygnal_koniec_gry();
    }
}

void Klasa_ruch_pilki::odworc_predkosc_y()
{
    aktualny_stan.predkosc_y = -aktualny_stan.predkosc_y;
}

void Klasa_ruch_pilki::ruch_pilki()
{
    if (flaga_wystrzelona)
    {
        aktualny_stan.pozycja_x += aktualny_stan.predkosc_x;
        aktualny_stan.pozycja_y += aktualny_stan.predkosc_y;
        odbicie_gora();
        odbicie_sciana();
        odbicie_belka();
        emit pozycja_zmieniona();
    }
}