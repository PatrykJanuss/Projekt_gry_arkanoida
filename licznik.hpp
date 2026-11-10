#ifndef LICZNIK_HPP
#define LICZNIK_HPP
#include "ball.hpp"
#include <QObject>
#include <QtQml/qqmlregistration.h>

class Klasa_wyswietlacz : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(int punktacja READ czytaj_punktacja NOTIFY dodano_punkty)
    Q_PROPERTY(int biezacy_licznik READ czytaj_licznik NOTIFY licznik_zmienione)

public:
    explicit Klasa_wyswietlacz(QObject *rodzic = nullptr);
    double czytaj_licznik() const;
    double czytaj_punktacja() const;
    Q_INVOKABLE void zmien_status_poziom();
    Q_INVOKABLE void zmien_status_zycia();
    Q_INVOKABLE void zmien_status_punkty();
signals:
    void licznik_zmienione();
    void dodano_punkty();
private slots:

private:
    Koordynaty aktualny;
};

#endif