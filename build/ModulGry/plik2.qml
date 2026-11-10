import QtQuick
import QtQuick.Controls
import ModulGry

ApplicationWindow {
    id: okno_glowne
    visible: true
    width: 1000
    height: 600
    title: "GRA MINI_arkadoid"

    Component.onCompleted: {
        logika_pilki.wymiaryObiektow(
            okno_glowne.width, okno_glowne.height,
            60, 20,
            belka.width, belka.height,
            pilka.width, pilka.height,
            siatka_blokow.columns, siatka_blokow.spacing,
            licznik.width, licznik.height,
            bloczki_reapeater.model
        );

        logika_belka.pozycja_belka(
            okno_glowne.width, okno_glowne.height,
            belka.width, belka.height
        );
        logika_bloczki.wymiaryBloczki(
            siatka_blokow.columns, siatka_blokow.spacing, bloczki_reapeater.model,
            60, 20, okno_glowne.width, okno_glowne.height,
            licznik.width, licznik.height
        );
    }

    KlasaRuchPilki {
            id: logika_pilki
            onSygnal_koniec_gry: {
            logika_belka.zresetuj_polozenie_belki();
            logika_wyswietlacz.zmien_status_zycia();
        }
    }
    KlasaRuchBelka {id: logika_belka}
    KlasaStatus {id: logika_wyswietlacz}
    KlasaBloczki {id: logika_bloczki}
    //...
    //...
    //...
    //...
    //LIcznik
    Rectangle {
        id: licznik; width: okno_glowne.width; height: 70; color: "black"
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter

        Row {
            anchors.centerIn: parent
            spacing: 20
            Rectangle {
                id: licznik_level; width: 200; height: 50;
                color: "white";radius: 10

                Text {
                    anchors.centerIn: parent
                    text: "LEVEL:\n"+ licznik.width
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    font.bold: true
                    font.pixelSize: 20
                    color: "black"
                }

            }
            Rectangle {
                id: licznik_zycie; width: 200; height: 50;
                color: "white";radius: 10

                Text {
                    anchors.centerIn: parent
                    text: "ZYCIE:\n"+ logika_wyswietlacz.biezacy_licznik
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    font.bold: true
                    font.pixelSize: 20
                    color: "black"
                }
            }
            Rectangle {
                id: licznik_punkty; width: 200; height: 50;
                color: "white";radius: 10

                Text {
                    anchors.centerIn: parent
                    text: "PUNKTY:\n"+ logika_wyswietlacz.punktacja
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    font.bold: true
                    font.pixelSize: 20
                    color: "black"
                }
            }
        }
    }
    //...
    //...
    //...
    //...
    //BLOCZKI
    Grid {
        id: siatka_blokow; columns: 13; spacing: 2
        x:logika_bloczki.pozycja_bx
        y:logika_bloczki.pozycja_by

        Repeater {
            id: bloczki_reapeater
            model:70

            Rectangle {
                id: bloczek; width: 60; height: 20; color: "green"; radius: 4
                border.color: "black"; border.width:3; visible: true

                Connections {
                    target: logika_bloczki

                    function onSygnal_zniszczono_bloczek(indeks_trafionego)
                    {
                        if (index === indeks_trafionego)
                        {
                            bloczek.opacity = 0;
                        }
                    }
                }
            }
        }
    }

    Connections {
        target: logika_bloczki
        function onSygnal_odbij_pilke()
        {
            logika_pilki.odworc_predkosc_y();
            logika_wyswietlacz.zmien_status_punkty();
        }
    }
    //...
    //...
    //...
    //...
    //BELKA

    Rectangle {
        id: belka; width: 150; height: 20; color: "blue";
        x: logika_belka.pozycja_belka_x
        y: logika_belka.pozycja_belka_y
        onXChanged: {
            logika_pilki.odbicie_belka();
            logika_pilki.szukaj_pozycja_belka(belka.x);
        }
        focus: true

        Keys.onPressed: function(event) {
        if (event.key === Qt.Key_Left) {
             logika_belka.sterowanie_belka(-1); 
        }
        if (event.key === Qt.Key_Right) {
             logika_belka.sterowanie_belka(1); 
        }
        if (event.key === Qt.Key_Space)
        {
        if (logika_wyswietlacz.biezacy_licznik > 0) {
            logika_pilki.wystrzel_pilke();
        }
    }
}

        Row{
            id: dzialko
            anchors.centerIn: parent
            spacing: belka.width
            Rectangle{
                        id: dzialko_1; width: belka.width-120; height: belka.height-5; color: "red";radius: dzialko.height/2

            }
            Rectangle{
                        id: dzialko_2; width: belka.width-120; height: belka.height-5; color: "red";radius: dzialko.height/2

            }
            
        }
        Row{
            id: odstep
            anchors.centerIn: parent
            spacing: belka.width    
            Rectangle{
                        id: odstep_1; width: dzialko_1.width-22; height: belka.height; color: "black";

            }
            Rectangle{
                        id: odstep_2; width: dzialko_2.width-22; height: belka.height; color: "black";

            }
        }
        Row{
            id: pocisk
            anchors.centerIn: parent
            spacing: belka.width+30    
            Rectangle{
                        id: pocisk_1; width: odstep_1.width; height: belka.height; color: "red";

            }
            Rectangle{
                        id: pocisk_2; width: odstep_2.width; height: belka.height;  color: "red";

            }
        }
}

//...
//...
//...
//...
//PILKA
Rectangle {
    id: pilka; width: 30; height: 30; color: "purple"; radius: pilka.width/2
    border.color: "black"; border.width:3
    x: logika_pilki.pozycja_x
    y: logika_pilki.pozycja_y

    onXChanged: {
        logika_bloczki.sprawdz_kolizje(pilka.width, pilka.height, pilka.x, pilka.y);
    }
    onYChanged: {
        logika_bloczki.sprawdz_kolizje(pilka.width, pilka.height, pilka.x, pilka.y);
    }
}
}
