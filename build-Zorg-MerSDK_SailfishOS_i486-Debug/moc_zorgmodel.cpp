/****************************************************************************
** Meta object code from reading C++ file 'zorgmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Zorg/zorgmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zorgmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ZorgModel_t {
    QByteArrayData data[9];
    char stringdata[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ZorgModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ZorgModel_t qt_meta_stringdata_ZorgModel = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 10),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 3),
QT_MOC_LITERAL(4, 26, 5),
QT_MOC_LITERAL(5, 32, 6),
QT_MOC_LITERAL(6, 39, 10),
QT_MOC_LITERAL(7, 50, 14),
QT_MOC_LITERAL(8, 65, 7)
    },
    "ZorgModel\0removeRows\0\0row\0count\0parent\0"
    "insertRows\0getZorgAtIndex\0MyZorg*\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZorgModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x02,
       1,    2,   56,    2, 0x22,
       1,    1,   61,    2, 0x22,
       6,    3,   64,    2, 0x02,
       6,    2,   71,    2, 0x22,
       6,    1,   76,    2, 0x22,
       7,    1,   79,    2, 0x02,

 // methods: parameters
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    3,    4,    5,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Bool, QMetaType::Int,    3,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    3,    4,    5,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Bool, QMetaType::Int,    3,
    0x80000000 | 8, QMetaType::Int,    3,

       0        // eod
};

void ZorgModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZorgModel *_t = static_cast<ZorgModel *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->removeRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->removeRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->removeRows((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->insertRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->insertRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->insertRows((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { MyZorg* _r = _t->getZorgAtIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< MyZorg**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ZorgModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ZorgModel.data,
      qt_meta_data_ZorgModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *ZorgModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZorgModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZorgModel.stringdata))
        return static_cast<void*>(const_cast< ZorgModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int ZorgModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
