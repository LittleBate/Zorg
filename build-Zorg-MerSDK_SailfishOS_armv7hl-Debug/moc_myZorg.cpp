/****************************************************************************
** Meta object code from reading C++ file 'myZorg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Zorg/myZorg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myZorg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyZorg_t {
    QByteArrayData data[16];
    char stringdata[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MyZorg_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MyZorg_t qt_meta_stringdata_MyZorg = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 10),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 3),
QT_MOC_LITERAL(4, 23, 11),
QT_MOC_LITERAL(5, 35, 12),
QT_MOC_LITERAL(6, 48, 5),
QT_MOC_LITERAL(7, 54, 9),
QT_MOC_LITERAL(8, 64, 2),
QT_MOC_LITERAL(9, 67, 6),
QT_MOC_LITERAL(10, 74, 6),
QT_MOC_LITERAL(11, 81, 4),
QT_MOC_LITERAL(12, 86, 7),
QT_MOC_LITERAL(13, 94, 7),
QT_MOC_LITERAL(14, 102, 5),
QT_MOC_LITERAL(15, 108, 5)
    },
    "MyZorg\0nomChanged\0\0nom\0sexeChanged\0"
    "titreChanged\0titre\0pvChanged\0pv\0setNom\0"
    "newNom\0sexe\0setSexe\0newSexe\0setPv\0"
    "newPV\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyZorg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06,
       4,    0,   72,    2, 0x06,
       5,    1,   73,    2, 0x06,
       7,    1,   76,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   79,    2, 0x0a,
       9,    1,   80,    2, 0x0a,
      11,    0,   83,    2, 0x0a,
      12,    1,   84,    2, 0x0a,
       6,    0,   87,    2, 0x0a,
       8,    0,   88,    2, 0x0a,
      14,    1,   89,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   15,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
      11, QMetaType::Bool, 0x00495103,
       6, QMetaType::QString, 0x00495001,
       8, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void MyZorg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyZorg *_t = static_cast<MyZorg *>(_o);
        switch (_id) {
        case 0: _t->nomChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sexeChanged(); break;
        case 2: _t->titreChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->pvChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { QString _r = _t->nom();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->setNom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: { bool _r = _t->sexe();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->setSexe((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: { QString _r = _t->titre();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->pv();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->setPv((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyZorg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyZorg::nomChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (MyZorg::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyZorg::sexeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (MyZorg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyZorg::titreChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (MyZorg::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyZorg::pvChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject MyZorg::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyZorg.data,
      qt_meta_data_MyZorg,  qt_static_metacall, 0, 0}
};


const QMetaObject *MyZorg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyZorg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyZorg.stringdata))
        return static_cast<void*>(const_cast< MyZorg*>(this));
    return QObject::qt_metacast(_clname);
}

int MyZorg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void MyZorg::nomChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyZorg::sexeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MyZorg::titreChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyZorg::pvChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
