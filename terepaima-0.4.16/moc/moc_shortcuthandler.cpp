/****************************************************************************
** Meta object code from reading C++ file 'shortcuthandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/shortcuthandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcuthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qpdfview__ShortcutHandler_t {
    QByteArrayData data[5];
    char stringdata[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__ShortcutHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__ShortcutHandler_t qt_meta_stringdata_qpdfview__ShortcutHandler = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 6),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 6),
QT_MOC_LITERAL(4, 41, 5)
    },
    "qpdfview::ShortcutHandler\0submit\0\0"
    "revert\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__ShortcutHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qpdfview::ShortcutHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShortcutHandler *_t = static_cast<ShortcutHandler *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->submit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->revert(); break;
        case 2: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObject qpdfview::ShortcutHandler::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_qpdfview__ShortcutHandler.data,
      qt_meta_data_qpdfview__ShortcutHandler,  qt_static_metacall, 0, 0}
};


const QMetaObject *qpdfview::ShortcutHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::ShortcutHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__ShortcutHandler.stringdata))
        return static_cast<void*>(const_cast< ShortcutHandler*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int qpdfview::ShortcutHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
