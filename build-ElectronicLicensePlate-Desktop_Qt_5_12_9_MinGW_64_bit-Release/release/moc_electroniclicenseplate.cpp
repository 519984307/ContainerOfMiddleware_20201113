/****************************************************************************
** Meta object code from reading C++ file 'electroniclicenseplate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ElectronicLicensePlate/electroniclicenseplate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'electroniclicenseplate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElectronicLicensePlate_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElectronicLicensePlate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElectronicLicensePlate_t qt_meta_stringdata_ElectronicLicensePlate = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ElectronicLicensePlate"
QT_MOC_LITERAL(1, 23, 13), // "autoLinkCamer"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "ElectronicLicensePlate\0autoLinkCamer\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElectronicLicensePlate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ElectronicLicensePlate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElectronicLicensePlate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->autoLinkCamer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ElectronicLicensePlate::staticMetaObject = { {
    &LicensePlateInterface::staticMetaObject,
    qt_meta_stringdata_ElectronicLicensePlate.data,
    qt_meta_data_ElectronicLicensePlate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElectronicLicensePlate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElectronicLicensePlate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElectronicLicensePlate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ZBY.ContainerServer.LicensePlateInterface/1.0"))
        return static_cast< LicensePlateInterface*>(this);
    return LicensePlateInterface::qt_metacast(_clname);
}

int ElectronicLicensePlate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LicensePlateInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
    'S',  'e',  'r',  'v',  'e',  'r',  '.',  'L', 
    'i',  'c',  'e',  'n',  's',  'e',  'P',  'l', 
    'a',  't',  'e',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  '/',  '1',  '.',  '0', 
    // "className"
    0x03,  0x76,  'E',  'l',  'e',  'c',  't',  'r', 
    'o',  'n',  'i',  'c',  'L',  'i',  'c',  'e', 
    'n',  's',  'e',  'P',  'l',  'a',  't',  'e', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ElectronicLicensePlate, ElectronicLicensePlate)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
