/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<ball.hpp>)
#  include <ball.hpp>
#endif
#if __has_include(<belka.hpp>)
#  include <belka.hpp>
#endif
#if __has_include(<bloczki.hpp>)
#  include <bloczki.hpp>
#endif
#if __has_include(<licznik.hpp>)
#  include <licznik.hpp>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_ModulGry()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<Klasa_BLOCZKI>("ModulGry", 1);
    qmlRegisterTypesAndRevisions<Klasa_ruch_pilki>("ModulGry", 1);
    qmlRegisterTypesAndRevisions<Klasa_wyswietlacz>("ModulGry", 1);
    qmlRegisterTypesAndRevisions<RUCH_BELKA>("ModulGry", 1);
    QT_WARNING_POP
    qmlRegisterModule("ModulGry", 1, 0);
}

static const QQmlModuleRegistration modulGryRegistration("ModulGry", qml_register_types_ModulGry);
