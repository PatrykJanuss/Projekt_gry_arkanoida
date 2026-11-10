/****************************************************************************
** Meta object code from reading C++ file 'licznik.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../licznik.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'licznik.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17Klasa_wyswietlaczE_t {};
} // unnamed namespace

template <> constexpr inline auto Klasa_wyswietlacz::qt_create_metaobjectdata<qt_meta_tag_ZN17Klasa_wyswietlaczE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Klasa_wyswietlacz",
        "QML.Element",
        "auto",
        "licznik_zmienione",
        "",
        "dodano_punkty",
        "zmien_status_poziom",
        "zmien_status_zycia",
        "zmien_status_punkty",
        "punktacja",
        "biezacy_licznik"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'licznik_zmienione'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dodano_punkty'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'zmien_status_poziom'
        QtMocHelpers::MethodData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'zmien_status_zycia'
        QtMocHelpers::MethodData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'zmien_status_punkty'
        QtMocHelpers::MethodData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'punktacja'
        QtMocHelpers::PropertyData<int>(9, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
        // property 'biezacy_licznik'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<Klasa_wyswietlacz, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject Klasa_wyswietlacz::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17Klasa_wyswietlaczE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17Klasa_wyswietlaczE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17Klasa_wyswietlaczE_t>.metaTypes,
    nullptr
} };

void Klasa_wyswietlacz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Klasa_wyswietlacz *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->licznik_zmienione(); break;
        case 1: _t->dodano_punkty(); break;
        case 2: _t->zmien_status_poziom(); break;
        case 3: _t->zmien_status_zycia(); break;
        case 4: _t->zmien_status_punkty(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Klasa_wyswietlacz::*)()>(_a, &Klasa_wyswietlacz::licznik_zmienione, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Klasa_wyswietlacz::*)()>(_a, &Klasa_wyswietlacz::dodano_punkty, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->czytaj_punktacja(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->czytaj_licznik(); break;
        default: break;
        }
    }
}

const QMetaObject *Klasa_wyswietlacz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Klasa_wyswietlacz::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17Klasa_wyswietlaczE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Klasa_wyswietlacz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
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
void Klasa_wyswietlacz::licznik_zmienione()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Klasa_wyswietlacz::dodano_punkty()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
