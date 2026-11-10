#ifndef BLOCZKI_HPP
#define BLOCZKI_HPP
#include "ball.hpp"
#include <QObject>
#include <QtQml/qqmlregistration.h>
#include <vector>

struct mapa{
bool zniszczony=false;
int nr_bloczka=0;
double x1=0;
double x2=0;

double y1=0;
double y2=0;
};

class Klasa_BLOCZKI : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(double pozycja_bx READ czytaj_bx NOTIFY pozycja)
    Q_PROPERTY(double pozycja_by READ czytaj_by NOTIFY pozycja)

public:
    explicit Klasa_BLOCZKI(QObject *rodzic = nullptr);
    double czytaj_bx() const;
    double czytaj_by() const;
    Q_INVOKABLE void wymiaryBloczki(
        double kolumny, double rozstaw, double ilosc_bloczki,
        double szerokosc_blok, double  wysokosc_blok,
        double szer_apka,double wys_apka, 
        double szer_licznik, double wys_licznik);
    Q_INVOKABLE void sprawdz_kolizje(
        double szer_pilka, double wys_pilka,
        double pozycja_x_pilka, double pozycja_y_pilka);
    Q_INVOKABLE void zniszczenie_bloczek(int indeks);


signals:
    void pozycja();
    void sygnal_zniszczono_bloczek(int indeks_trafionego);
    void sygnal_odbij_pilke();
private slots:
    
private:
    Koordynaty aktualny_stan_bloczki;
    Wymiary_elementow dane_bloczki;
    std::vector<mapa> lista_bloczkow;
    bool flaga_zbity_bloczek=false;
};

#endif