#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "ball.hpp"
#include "belka.hpp"
#include "bloczki.hpp"
#include "licznik.hpp"

int main(int liczba_argumentow, char *tablica_argumentow[]) {
    qputenv("LIBGL_ALWAYS_SOFTWARE", "1");
    qputenv("MESA_LOADER_DRIVER_OVERRIDE", "llvmpipe");
    QGuiApplication aplikacja(liczba_argumentow, tablica_argumentow);

    qmlRegisterType<Klasa_ruch_pilki>("ModulGry", 1, 0, "KlasaRuchPilki");
    qmlRegisterType<RUCH_BELKA>("ModulGry", 1, 0, "KlasaRuchBelka");
    qmlRegisterType<Klasa_wyswietlacz>("ModulGry", 1, 0, "KlasaStatus");

    qmlRegisterType<Klasa_BLOCZKI>("ModulGry", 1, 0, "KlasaBloczki");

    QQmlApplicationEngine silnik_qml;
    QObject::connect(
        &silnik_qml,
        &QQmlApplicationEngine::objectCreationFailed,
        &aplikacja,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection
    );
silnik_qml.load(QUrl("qrc:/ModulGry/plik2.qml"));

    return aplikacja.exec();
}
