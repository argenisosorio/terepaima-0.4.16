/****************************************************************************
** Meta object code from reading C++ file 'recentlyusedmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/recentlyusedmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recentlyusedmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qpdfview__RecentlyUsedMenu_t {
    QByteArrayData data[8];
    char stringdata[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__RecentlyUsedMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__RecentlyUsedMenu_t qt_meta_stringdata_qpdfview__RecentlyUsedMenu = {
    {
QT_MOC_LITERAL(0, 0, 26),
QT_MOC_LITERAL(1, 27, 13),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 8),
QT_MOC_LITERAL(4, 51, 17),
QT_MOC_LITERAL(5, 69, 8),
QT_MOC_LITERAL(6, 78, 6),
QT_MOC_LITERAL(7, 85, 22)
    },
    "qpdfview::RecentlyUsedMenu\0openTriggered\0"
    "\0filePath\0on_open_triggered\0QAction*\0"
    "action\0on_clearList_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__RecentlyUsedMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x09 /* Protected */,
       7,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void qpdfview::RecentlyUsedMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RecentlyUsedMenu *_t = static_cast<RecentlyUsedMenu *>(_o);
        switch (_id) {
        case 0: _t->openTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_open_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->on_clearList_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RecentlyUsedMenu::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RecentlyUsedMenu::openTriggered)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject qpdfview::RecentlyUsedMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_qpdfview__RecentlyUsedMenu.data,
      qt_meta_data_qpdfview__RecentlyUsedMenu,  qt_static_metacall, 0, 0}
};


const QMetaObject *qpdfview::RecentlyUsedMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::RecentlyUsedMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__RecentlyUsedMenu.stringdata))
        return static_cast<void*>(const_cast< RecentlyUsedMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int qpdfview::RecentlyUsedMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::RecentlyUsedMenu::openTriggered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
