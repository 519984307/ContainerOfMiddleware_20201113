/****************************************************************************
** Meta object code from reading C++ file 'socketserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SocketService/socketserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SocketServer_t {
    QByteArrayData data[21];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SocketServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SocketServer_t qt_meta_stringdata_SocketServer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SocketServer"
QT_MOC_LITERAL(1, 13, 13), // "messageSignal"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "type"
QT_MOC_LITERAL(4, 33, 3), // "msg"
QT_MOC_LITERAL(5, 37, 24), // "socketConnectCountSignal"
QT_MOC_LITERAL(6, 62, 5), // "count"
QT_MOC_LITERAL(7, 68, 16), // "disconnectedSlot"
QT_MOC_LITERAL(8, 85, 17), // "setClientLandSlot"
QT_MOC_LITERAL(9, 103, 4), // "land"
QT_MOC_LITERAL(10, 108, 7), // "qintptr"
QT_MOC_LITERAL(11, 116, 8), // "socketID"
QT_MOC_LITERAL(12, 125, 17), // "getLastResultSlot"
QT_MOC_LITERAL(13, 143, 7), // "socktID"
QT_MOC_LITERAL(14, 151, 14), // "sendResultSlot"
QT_MOC_LITERAL(15, 166, 7), // "channel"
QT_MOC_LITERAL(16, 174, 6), // "result"
QT_MOC_LITERAL(17, 181, 13), // "heartbeatSlot"
QT_MOC_LITERAL(18, 195, 19), // "sendHeartPacketSlot"
QT_MOC_LITERAL(19, 215, 5), // "state"
QT_MOC_LITERAL(20, 221, 20) // "releaseResourcesSlot"

    },
    "SocketServer\0messageSignal\0\0type\0msg\0"
    "socketConnectCountSignal\0count\0"
    "disconnectedSlot\0setClientLandSlot\0"
    "land\0qintptr\0socketID\0getLastResultSlot\0"
    "socktID\0sendResultSlot\0channel\0result\0"
    "heartbeatSlot\0sendHeartPacketSlot\0"
    "state\0releaseResourcesSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SocketServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   67,    2, 0x0a /* Public */,
       8,    2,   68,    2, 0x0a /* Public */,
      12,    1,   73,    2, 0x0a /* Public */,
      14,    2,   76,    2, 0x0a /* Public */,
      17,    0,   81,    2, 0x0a /* Public */,
      18,    1,   82,    2, 0x0a /* Public */,
      20,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 10,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,

       0        // eod
};

void SocketServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->socketConnectCountSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->disconnectedSlot(); break;
        case 3: _t->setClientLandSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 4: _t->getLastResultSlot((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 5: _t->sendResultSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->heartbeatSlot(); break;
        case 7: _t->sendHeartPacketSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->releaseResourcesSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SocketServer::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketServer::messageSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SocketServer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketServer::socketConnectCountSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SocketServer::staticMetaObject = { {
    &QTcpServer::staticMetaObject,
    qt_meta_stringdata_SocketServer.data,
    qt_meta_data_SocketServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SocketServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SocketServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SocketServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int SocketServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SocketServer::messageSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SocketServer::socketConnectCountSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
