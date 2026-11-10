/****************************************************************************
** Meta object code from reading C++ file 'bloczki.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bloczki.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bloczki.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13Klasa_BLOCZKIE_t {};
} // unnamed namespace

template <> constexpr inline auto Klasa_BLOCZKI::qt_create_metaobjectdata<qt_meta_tag_ZN13Klasa_BLOCZKIE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Klasa_BLOCZKI",
        "QML.Element",
        "auto",
        "pozycja",
        "",
        "sygnal_zniszczono_bloczek",
        "indeks_trafionego",
        "sygnal_odbij_pilke",
        "wymiaryBloczki",
        "kolumny",
        "rozstaw",
        "ilosc_bloczki",
        "szerokosc_blok",
        "wysokosc_blok",
        "szer_apka",
        "wys_apka",
        "szer_licznik",
        "wys_licznik",
        "sprawdz_kolizje",
        "szer_pilka",
        "wys_pilka",
        "pozycja_x_pilka",
        "pozycja_y_pilka",
        "zniszczenie_bloczek",
        "indeks",
        "pozycja_bx",
        "pozycja_by"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pozycja'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sygnal_zniszczono_bloczek'
        QtMocHelpers::SignalData<void(int)>(5, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'sygnal_odbij_pilke'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'wymiaryBloczki'
        QtMocHelpers::MethodData<void(double, double, double, double, double, double, double, double, double)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 9 }, { QMetaType::Double, 10 }, { QMetaType::Double, 11 }, { QMetaType::Double, 12 },
            { QMetaType::Double, 13 }, { QMetaType::Double, 14 }, { QMetaType::Double, 15 }, { QMetaType::Double, 16 },
            { QMetaType::Double, 17 },
        }}),
        // Method 'sprawdz_kolizje'
        QtMocHelpers::MethodData<void(double, double, double, double)>(18, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 19 }, { QMetaType::Double, 20 }, { QMetaType::Double, 21 }, { QMetaType::Double, 22 },
        }}),
        // Method 'zniszczenie_bloczek'
        QtMocHelpers::MethodData<void(int)>(23, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'pozycja_bx'
        QtMocHelpers::PropertyData<double>(25, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'pozycja_by'
        QtMocHelpers::PropertyData<double>(26, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<Klasa_BLOCZKI, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject Klasa_BLOCZKI::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13Klasa_BLOCZKIE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13Klasa_BLOCZKIE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13Klasa_BLOCZKIE_t>.metaTypes,
    nullptr
} };

void Klasa_BLOCZKI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Klasa_BLOCZKI *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pozycja(); break;
        case 1: _t->sygnal_zniszczono_bloczek((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->sygnal_odbij_pilke(); break;
        case 3: _t->wymiaryBloczki((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[9]))); break;
        case 4: _t->sprawdz_kolizje((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4]))); break;
        case 5: _t->zniszczenie_bloczek((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Klasa_BLOCZKI::*)()>(_a, &Klasa_BLOCZKI::pozycja, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Klasa_BLOCZKI::*)(int )>(_a, &Klasa_BLOCZKI::sygnal_zniszczono_bloczek, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Klasa_BLOCZKI::*)()>(_a, &Klasa_BLOCZKI::sygnal_odbij_pilke, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<double*>(_v) = _t->czytaj_bx(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->czytaj_by(); break;
        default: break;
        }
    }
}

const QMetaObject *Klasa_BLOCZKI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Klasa_BLOCZKI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13Klasa_BLOCZKIE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Klasa_BLOCZKI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
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
void Klasa_BLOCZKI::pozycja()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Klasa_BLOCZKI::sygnal_zniszczono_bloczek(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Klasa_BLOCZKI::sygnal_odbij_pilke()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
