/****************************************************************************
** Meta object code from reading C++ file 'signalhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/signalhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qpdfview__SignalHandler_t {
    QByteArrayData data[5];
    char stringdata[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__SignalHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__SignalHandler_t qt_meta_stringdata_qpdfview__SignalHandler = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 14),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 15),
QT_MOC_LITERAL(4, 56, 27)
    },
    "qpdfview::SignalHandler\0sigIntReceived\0"
    "\0sigTermReceived\0on_socketNotifier_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__SignalHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qpdfview::SignalHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignalHandler *_t = static_cast<SignalHandler *>(_o);
        switch (_id) {
        case 0: _t->sigIntReceived(); break;
        case 1: _t->sigTermReceived(); break;
        case 2: _t->on_socketNotifier_activated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SignalHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalHandler::sigIntReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (SignalHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalHandler::sigTermReceived)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject qpdfview::SignalHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qpdfview__SignalHandler.data,
      qt_meta_data_qpdfview__SignalHandler,  qt_static_metacall, 0, 0}
};


const QMetaObject *qpdfview::SignalHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::SignalHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__SignalHandler.stringdata))
        return static_cast<void*>(const_cast< SignalHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int qpdfview::SignalHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void qpdfview::SignalHandler::sigIntReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void qpdfview::SignalHandler::sigTermReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
