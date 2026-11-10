#ifndef BALL_HPP
#define BALL_HPP

#include <QObject>
#include <QTimer>
#include <QtQml/qqmlregistration.h>

struct Koordynaty {
    double pozycja_x = 0.0;
    double pozycja_y = 0.0;
    double predkosc_x = 0.0;
    double predkosc_y = 0.0;

    double predkosc_calkowita = 4.0;
    double predkosc_calkowita_belka =2.0;

    double pozycja_belka_x = 0.0;
    double pozycja_belka_y = 0.0;
    double predkosc_belka = 0.0;

    double pozycja_bloczki_x =0.0;
    double pozycja_bloczki_y =0.0;

    double licznik=0.0;
    double licznik_punktyy=0.0;
};

// Struktura przygotowana do przechowywania zrzuconych z QML wymiarów
struct Wymiary_elementow {
    double szerokosc_apka = 0.0;
    double wysokosc_apka = 0.0;

    double szerokosc_bloczek = 0.0;
    double wysokosc_bloczek = 0.0;

    double szerokosc_belka = 0.0;
    double wysokosc_belka = 0.0;

    double szerokosc_pilka = 0.0;
    double wysokosc_pilka = 0.0;

    double kolumny_bloczki = 0.0;
    double rozstaw_bloczki =0.0;

    double ilosc_bloczki =0.0;
    double szerokosc_licznik=0.0;
    double wysokosc_licznik=0.0;
};


class Klasa_ruch_pilki : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(double pozycja_x READ czytaj_x NOTIFY pozycja_zmieniona)
    Q_PROPERTY(double pozycja_y READ czytaj_y NOTIFY pozycja_zmieniona)

public:
    explicit Klasa_ruch_pilki(QObject *rodzic = nullptr);
    double czytaj_x() const;
    double czytaj_y() const;

    Q_INVOKABLE void wystrzel_pilke();
    Q_INVOKABLE void szukaj_pozycja_belka(double pozycja_belki_x);
    Q_INVOKABLE void wymiaryObiektow(
        double szerokosc_apka, double wysokosc_apka,
        double szerokosc_bloczek, double wysokosc_bloczek,
        double szerokosc_belka, double wysokosc_belka, 
        double szerokosc_pilka, double wysokosc_pilka,
        double kolumny_bloczki, double rozstaw_bloczki,
        double szerokosc_licznik, double wysokosc_licznik,
        double ilosc_bloczki);
    Q_INVOKABLE void odbicie_belka();
            Q_INVOKABLE void odworc_predkosc_y();


    
signals:
    void pozycja_zmieniona();
    void sygnal_koniec_gry();
private slots:
    void ruch_pilki();
    void odbicie_gora();
    void odbicie_sciana();
private:
    Wymiary_elementow dane;
    Koordynaty aktualny_stan;
    bool flaga_wystrzelona=false;
    QTimer *zegar;
};

#endif