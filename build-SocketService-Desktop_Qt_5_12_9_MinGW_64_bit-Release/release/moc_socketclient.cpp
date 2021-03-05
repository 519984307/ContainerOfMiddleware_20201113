/****************************************************************************
** Meta object code from reading C++ file 'socketclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SocketService/socketclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SocketClient_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SocketClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SocketClient_t qt_meta_stringdata_SocketClient = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SocketClient"
QT_MOC_LITERAL(1, 13, 19), // "getLastResultSignal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "qintptr"
QT_MOC_LITERAL(4, 42, 7), // "socktID"
QT_MOC_LITERAL(5, 50, 19), // "setClientLandSignal"
QT_MOC_LITERAL(6, 70, 4), // "land"
QT_MOC_LITERAL(7, 75, 14) // "readClientSlot"

    },
    "SocketClient\0getLastResultSignal\0\0"
    "qintptr\0socktID\0setClientLandSignal\0"
    "land\0readClientSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SocketClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    6,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SocketClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getLastResultSignal((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 1: _t->setClientLandSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 2: _t->readClientSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SocketClient::*)(qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketClient::getLastResultSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SocketClient::*)(int , qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketClient::setClientLandSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SocketClient::staticMetaObject = { {
    &QTcpSocket::staticMetaObject,
    qt_meta_stringdata_SocketClient.data,
    qt_meta_data_SocketClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SocketClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SocketClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SocketClient.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int SocketClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SocketClient::getLastResultSignal(qintptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SocketClient::setClientLandSignal(int _t1, qintptr _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
