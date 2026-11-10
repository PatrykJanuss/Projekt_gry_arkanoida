#ifndef BELKA_HPP
#define BELKA_HPP
#include "ball.hpp"
#include <QObject>
#include <QtQml/qqmlregistration.h>

class RUCH_BELKA : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(double pozycja_belka_x READ czytaj_belka_x NOTIFY pozycja_znaleziona)
    Q_PROPERTY(double pozycja_belka_y READ czytaj_belka_y NOTIFY pozycja_znaleziona)

public:
    explicit RUCH_BELKA(QObject *rodzic = nullptr);
    double czytaj_belka_x() const;
    double czytaj_belka_y() const;
    Q_INVOKABLE void pozycja_belka(
        double szer_apka, double wys_apka, 
        double szer_belka, double wys_belka);
    Q_INVOKABLE void sterowanie_belka(double kierunek_ruchu);
    Q_INVOKABLE void zresetuj_polozenie_belki();

signals:
    void pozycja_znaleziona();
private slots:

private:
    Koordynaty aktualny_stan_belka;
    Wymiary_elementow dane;
};

#endif