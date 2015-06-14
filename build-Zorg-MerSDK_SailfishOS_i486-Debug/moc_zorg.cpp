/****************************************************************************
** Meta object code from reading C++ file 'zorg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Zorg/zorg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zorg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Zorg_t {
    QByteArrayData data[10];
    char stringdata[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Zorg_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Zorg_t qt_meta_stringdata_Zorg = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 10),
QT_MOC_LITERAL(2, 16, 0),
QT_MOC_LITERAL(3, 17, 3),
QT_MOC_LITERAL(4, 21, 11),
QT_MOC_LITERAL(5, 33, 12),
QT_MOC_LITERAL(6, 46, 5),
QT_MOC_LITERAL(7, 52, 9),
QT_MOC_LITERAL(8, 62, 2),
QT_MOC_LITERAL(9, 65, 4)
    },
    "Zorg\0nomChanged\0\0nom\0sexeChanged\0"
    "titreChanged\0titre\0pvChanged\0pv\0sexe\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Zorg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,
       4,    0,   37,    2, 0x06,
       5,    1,   38,    2, 0x06,
       7,    1,   41,    2, 0x06,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
       6, QMetaType::QString, 0x00495001,
       8, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Zorg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Zorg *_t = static_cast<Zorg *>(_o);
        switch (_id) {
        case 0: _t->nomChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sexeChanged(); break;
        case 2: _t->titreChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->pvChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Zorg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Zorg::nomChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Zorg::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Zorg::sexeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Zorg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Zorg::titreChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Zorg::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Zorg::pvChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Zorg::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Zorg.data,
      qt_meta_data_Zorg,  qt_static_metacall, 0, 0}
};


const QMetaObject *Zorg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Zorg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Zorg.stringdata))
        return static_cast<void*>(const_cast< Zorg*>(this));
    return QObject::qt_metacast(_clname);
}

int Zorg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = nom(); break;
        case 1: *reinterpret_cast< bool*>(_v) = sexe(); break;
        case 2: *reinterpret_cast< QString*>(_v) = titre(); break;
        case 3: *reinterpret_cast< int*>(_v) = pv(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNom(*reinterpret_cast< QString*>(_v)); break;
        case 1: setSexe(*reinterpret_cast< bool*>(_v)); break;
        case 3: setPv(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Zorg::nomChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Zorg::sexeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Zorg::titreChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Zorg::pvChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
