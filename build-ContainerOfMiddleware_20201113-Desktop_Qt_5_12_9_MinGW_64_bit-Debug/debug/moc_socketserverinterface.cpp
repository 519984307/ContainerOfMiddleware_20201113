/****************************************************************************
** Meta object code from reading C++ file 'socketserverinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ContainerOfMiddleware_20201113/socketserverinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketserverinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SocketServerInterface_t {
    QByteArrayData data[22];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SocketServerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SocketServerInterface_t qt_meta_stringdata_SocketServerInterface = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SocketServerInterface"
QT_MOC_LITERAL(1, 22, 13), // "messageSignal"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "type"
QT_MOC_LITERAL(4, 42, 3), // "msg"
QT_MOC_LITERAL(5, 46, 21), // "socketLinkStateSingal"
QT_MOC_LITERAL(6, 68, 7), // "address"
QT_MOC_LITERAL(7, 76, 5), // "state"
QT_MOC_LITERAL(8, 82, 20), // "socketReadDataSignal"
QT_MOC_LITERAL(9, 103, 4), // "data"
QT_MOC_LITERAL(10, 108, 24), // "socketConnectCountSignal"
QT_MOC_LITERAL(11, 133, 5), // "count"
QT_MOC_LITERAL(12, 139, 16), // "sendResultSignal"
QT_MOC_LITERAL(13, 156, 7), // "channel"
QT_MOC_LITERAL(14, 164, 6), // "result"
QT_MOC_LITERAL(15, 171, 21), // "sendHeartPacketSignal"
QT_MOC_LITERAL(16, 193, 27), // "InitializationParameterSlot"
QT_MOC_LITERAL(17, 221, 4), // "port"
QT_MOC_LITERAL(18, 226, 11), // "serviceType"
QT_MOC_LITERAL(19, 238, 11), // "serviceMode"
QT_MOC_LITERAL(20, 250, 18), // "socketSendDataSlot"
QT_MOC_LITERAL(21, 269, 20) // "releaseResourcesSlot"

    },
    "SocketServerInterface\0messageSignal\0"
    "\0type\0msg\0socketLinkStateSingal\0address\0"
    "state\0socketReadDataSignal\0data\0"
    "socketConnectCountSignal\0count\0"
    "sendResultSignal\0channel\0result\0"
    "sendHeartPacketSignal\0InitializationParameterSlot\0"
    "port\0serviceType\0serviceMode\0"
    "socketSendDataSlot\0releaseResourcesSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SocketServerInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    2,   64,    2, 0x06 /* Public */,
       8,    1,   69,    2, 0x06 /* Public */,
      10,    1,   72,    2, 0x06 /* Public */,
      12,    2,   75,    2, 0x06 /* Public */,
      15,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    4,   83,    2, 0x0a /* Public */,
      20,    1,   92,    2, 0x0a /* Public */,
      21,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   13,   14,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::Int, QMetaType::Int,    6,   17,   18,   19,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void SocketServerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketServerInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->socketLinkStateSingal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->socketReadDataSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->socketConnectCountSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sendResultSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->sendHeartPacketSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->InitializationParameterSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 7: _t->socketSendDataSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->releaseResourcesSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SocketServerInterface::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketServerInterface::messageSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SocketServerInterface::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketServerInterface::socketLinkStateSingal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SocketServerInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketServerInterface::socketReadDataSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SocketServerInterface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketServerInterface::socketConnectCountSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SocketServerInterface::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketServerInterface::sendResultSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SocketServerInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketServerInterface::sendHeartPacketSignal)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SocketServerInterface::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SocketServerInterface.data,
    qt_meta_data_SocketServerInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SocketServerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SocketServerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SocketServerInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SocketServerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SocketServerInterface::messageSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SocketServerInterface::socketLinkStateSingal(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SocketServerInterface::socketReadDataSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SocketServerInterface::socketConnectCountSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SocketServerInterface::sendResultSignal(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SocketServerInterface::sendHeartPacketSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
