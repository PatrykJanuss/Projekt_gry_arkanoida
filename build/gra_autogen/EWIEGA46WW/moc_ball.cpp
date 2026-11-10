/****************************************************************************
** Meta object code from reading C++ file 'ball.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ball.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ball.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN16Klasa_ruch_pilkiE_t {};
} // unnamed namespace

template <> constexpr inline auto Klasa_ruch_pilki::qt_create_metaobjectdata<qt_meta_tag_ZN16Klasa_ruch_pilkiE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Klasa_ruch_pilki",
        "QML.Element",
        "auto",
        "pozycja_zmieniona",
        "",
        "sygnal_koniec_gry",
        "ruch_pilki",
        "odbicie_gora",
        "odbicie_sciana",
        "wystrzel_pilke",
        "szukaj_pozycja_belka",
        "pozycja_belki_x",
        "wymiaryObiektow",
        "szerokosc_apka",
        "wysokosc_apka",
        "szerokosc_bloczek",
        "wysokosc_bloczek",
        "szerokosc_belka",
        "wysokosc_belka",
        "szerokosc_pilka",
        "wysokosc_pilka",
        "kolumny_bloczki",
        "rozstaw_bloczki",
        "szerokosc_licznik",
        "wysokosc_licznik",
        "ilosc_bloczki",
        "odbicie_belka",
        "odworc_predkosc_y",
        "pozycja_x",
        "pozycja_y"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pozycja_zmieniona'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sygnal_koniec_gry'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ruch_pilki'
        QtMocHelpers::SlotData<void()>(6, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'odbicie_gora'
        QtMocHelpers::SlotData<void()>(7, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'odbicie_sciana'
        QtMocHelpers::SlotData<void()>(8, 4, QMC::AccessPrivate, QMetaType::Void),
        // Method 'wystrzel_pilke'
        QtMocHelpers::MethodData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'szukaj_pozycja_belka'
        QtMocHelpers::MethodData<void(double)>(10, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 11 },
        }}),
        // Method 'wymiaryObiektow'
        QtMocHelpers::MethodData<void(double, double, double, double, double, double, double, double, double, double, double, double, double)>(12, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 13 }, { QMetaType::Double, 14 }, { QMetaType::Double, 15 }, { QMetaType::Double, 16 },
            { QMetaType::Double, 17 }, { QMetaType::Double, 18 }, { QMetaType::Double, 19 }, { QMetaType::Double, 20 },
            { QMetaType::Double, 21 }, { QMetaType::Double, 22 }, { QMetaType::Double, 23 }, { QMetaType::Double, 24 },
            { QMetaType::Double, 25 },
        }}),
        // Method 'odbicie_belka'
        QtMocHelpers::MethodData<void()>(26, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'odworc_predkosc_y'
        QtMocHelpers::MethodData<void()>(27, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'pozycja_x'
        QtMocHelpers::PropertyData<double>(28, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'pozycja_y'
        QtMocHelpers::PropertyData<double>(29, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<Klasa_ruch_pilki, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject Klasa_ruch_pilki::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16Klasa_ruch_pilkiE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16Klasa_ruch_pilkiE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16Klasa_ruch_pilkiE_t>.metaTypes,
    nullptr
} };

void Klasa_ruch_pilki::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Klasa_ruch_pilki *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pozycja_zmieniona(); break;
        case 1: _t->sygnal_koniec_gry(); break;
        case 2: _t->ruch_pilki(); break;
        case 3: _t->odbicie_gora(); break;
        case 4: _t->odbicie_sciana(); break;
        case 5: _t->wystrzel_pilke(); break;
        case 6: _t->szukaj_pozycja_belka((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->wymiaryObiektow((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[10])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[11])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[12])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[13]))); break;
        case 8: _t->odbicie_belka(); break;
        case 9: _t->odworc_predkosc_y(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Klasa_ruch_pilki::*)()>(_a, &Klasa_ruch_pilki::pozycja_zmieniona, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Klasa_ruch_pilki::*)()>(_a, &Klasa_ruch_pilki::sygnal_koniec_gry, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<double*>(_v) = _t->czytaj_x(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->czytaj_y(); break;
        default: break;
        }
    }
}

const QMetaObject *Klasa_ruch_pilki::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Klasa_ruch_pilki::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16Klasa_ruch_pilkiE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Klasa_ruch_pilki::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Klasa_ruch_pilki::pozycja_zmieniona()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Klasa_ruch_pilki::sygnal_koniec_gry()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
