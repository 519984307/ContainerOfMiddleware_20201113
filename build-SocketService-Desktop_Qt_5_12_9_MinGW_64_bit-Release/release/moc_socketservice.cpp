/****************************************************************************
** Meta object code from reading C++ file 'socketservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SocketService/socketservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SocketService_t {
    QByteArrayData data[16];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SocketService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SocketService_t qt_meta_stringdata_SocketService = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SocketService"
QT_MOC_LITERAL(1, 14, 9), // "startLink"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "startListen"
QT_MOC_LITERAL(4, 37, 13), // "heartbeatSlot"
QT_MOC_LITERAL(5, 51, 9), // "connected"
QT_MOC_LITERAL(6, 61, 11), // "readFortune"
QT_MOC_LITERAL(7, 73, 12), // "disconnected"
QT_MOC_LITERAL(8, 86, 12), // "displayError"
QT_MOC_LITERAL(9, 99, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(10, 128, 11), // "socketError"
QT_MOC_LITERAL(11, 140, 19), // "sendHeartPacketSlot"
QT_MOC_LITERAL(12, 160, 5), // "state"
QT_MOC_LITERAL(13, 166, 14), // "sendResultSlot"
QT_MOC_LITERAL(14, 181, 7), // "channel"
QT_MOC_LITERAL(15, 189, 6) // "result"

    },
    "SocketService\0startLink\0\0startListen\0"
    "heartbeatSlot\0connected\0readFortune\0"
    "disconnected\0displayError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "sendHeartPacketSlot\0state\0sendResultSlot\0"
    "channel\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SocketService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      11,    1,   68,    2, 0x08 /* Private */,
      13,    2,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   15,

       0        // eod
};

void SocketService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startLink(); break;
        case 1: _t->startListen(); break;
        case 2: _t->heartbeatSlot(); break;
        case 3: _t->connected(); break;
        case 4: _t->readFortune(); break;
        case 5: _t->disconnected(); break;
        case 6: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->sendHeartPacketSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->sendResultSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SocketService::staticMetaObject = { {
    &SocketServerInterface::staticMetaObject,
    qt_meta_stringdata_SocketService.data,
    qt_meta_data_SocketService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SocketService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SocketService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SocketService.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ZBY.ContainerServer.SocketServerInterface/1.0"))
        return static_cast< SocketServerInterface*>(this);
    return SocketServerInterface::qt_metacast(_clname);
}

int SocketService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SocketServerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2d,  'Z',  'B',  'Y',  '.',  'C', 
    'o',  'n',  't',  'a',  'i',  'n',  'e',  'r', 
    'S',  'e',  'r',  'v',  'e',  'r',  '.',  'S', 
    'o',  'c',  'k',  'e',  't',  'S',  'e',  'r', 
    'v',  'e',  'r',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  '/',  '1',  '.',  '0', 
    // "className"
    0x03,  0x6d,  'S',  'o',  'c',  'k',  'e',  't', 
    'S',  'e',  'r',  'v',  'i',  'c',  'e', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(SocketService, SocketService)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
