#include "bloczki.hpp"
#include <QDebug>
#include <vector>

Klasa_BLOCZKI::Klasa_BLOCZKI(QObject *rodzic) : QObject(rodzic) {}

double Klasa_BLOCZKI::czytaj_bx() const { return aktualny_stan_bloczki.pozycja_bloczki_x; }
double Klasa_BLOCZKI::czytaj_by() const { return aktualny_stan_bloczki.pozycja_bloczki_y; }

void Klasa_BLOCZKI::wymiaryBloczki(double kolumny, double rozstaw, double ilosc_bloczki,
                                   double szer_belka, double wys_belka,
                                   double szer_apka, double wys_apka,
                                   double szer_licznik, double wys_licznik)
{

    lista_bloczkow.clear();
    mapa bloczek;
    double odstep = (szer_apka - (kolumny * szer_belka + (kolumny - 1) * rozstaw)) / 2;
    int wiersze = (ilosc_bloczki + kolumny - 1) / kolumny;
    double poziom_y = wys_licznik + rozstaw + wys_belka;
    int nr = 0;

    for (int ii = 0; ii < wiersze; ii++)
    {
        bloczek.y1 = poziom_y + ii * (wys_belka + rozstaw);
        bloczek.y2 = bloczek.y1 - wys_belka;
        for (int i = 0; i < kolumny; i++)
        {
            if (nr >= ilosc_bloczki){break;}

            bloczek.x1 = odstep + i * (szer_belka + rozstaw);
            bloczek.x2 = bloczek.x1 + szer_belka;
            bloczek.nr_bloczka = nr + 1;
            bloczek.zniszczony = false;

            lista_bloczkow.push_back(bloczek);
            nr = nr + 1;
            // qDebug() << "       y min:"<< bloczek.y1;
            // qDebug() << "Bloczek nr:" << bloczek.nr_bloczka
            //            << "       "<<bloczek.zniszczony
            //            <<"       x min:" << bloczek.x1
            //            << "      x max:"<< bloczek.x2
            //            << "       y min:"<< bloczek.y1
            //            << "       y max:"<< bloczek.y2;
        }
    }
    aktualny_stan_bloczki.pozycja_bloczki_x = odstep;
    aktualny_stan_bloczki.pozycja_bloczki_y = wys_licznik + rozstaw;
    emit pozycja();
};

void Klasa_BLOCZKI::sprawdz_kolizje(
    double szer_pilka, double wys_pilka,
    double pozycja_x_pilka, double pozycja_y_pilka)
{
    if (lista_bloczkow.empty()){return;}
    for (int i = 0; i < lista_bloczkow.size(); i++)
    {
        if (lista_bloczkow[i].zniszczony){continue;}

        if ((pozycja_x_pilka + szer_pilka) >= lista_bloczkow[i].x1 && pozycja_x_pilka <= lista_bloczkow[i].x2 && (pozycja_y_pilka + wys_pilka) >= lista_bloczkow[i].y2 && pozycja_y_pilka <= lista_bloczkow[i].y1)
        {
            lista_bloczkow[i].zniszczony = true;
            zniszczenie_bloczek(i);
            emit sygnal_odbij_pilke();
            break;
        }
    }
};
void Klasa_BLOCZKI::zniszczenie_bloczek(int indeks)
{   flaga_zbity_bloczek=true;
    aktualny_stan_bloczki.licznik_punktyy = 0;
    
    if (indeks >= 0 && indeks < lista_bloczkow.size())
    {
        lista_bloczkow[indeks].zniszczony = true;      
        emit sygnal_zniszczono_bloczek(indeks);
        qDebug() << "USUNIETO BLOCZEK nr:" << lista_bloczkow[indeks].nr_bloczka;
    }
    if (flaga_zbity_bloczek=true)
    {
        aktualny_stan_bloczki.licznik_punktyy = 1;
    }   
};