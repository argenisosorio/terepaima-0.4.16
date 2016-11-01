/****************************************************************************
** Meta object code from reading C++ file 'rendertask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/rendertask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rendertask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qpdfview__RenderTask_t {
    QByteArrayData data[13];
    char stringdata[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__RenderTask_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__RenderTask_t qt_meta_stringdata_qpdfview__RenderTask = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 8),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 10),
QT_MOC_LITERAL(4, 42, 11),
QT_MOC_LITERAL(5, 54, 11),
QT_MOC_LITERAL(6, 66, 4),
QT_MOC_LITERAL(7, 71, 8),
QT_MOC_LITERAL(8, 80, 5),
QT_MOC_LITERAL(9, 86, 8),
QT_MOC_LITERAL(10, 95, 5),
QT_MOC_LITERAL(11, 101, 6),
QT_MOC_LITERAL(12, 108, 5)
    },
    "qpdfview::RenderTask\0finished\0\0"
    "imageReady\0RenderParam\0renderParam\0"
    "rect\0prefetch\0image\0cropRect\0start\0"
    "cancel\0force"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__RenderTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    5,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    3,   51,    2, 0x0a /* Public */,
      11,    1,   58,    2, 0x0a /* Public */,
      11,    0,   61,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QRect, QMetaType::Bool, QMetaType::QImage, QMetaType::QRectF,    5,    6,    7,    8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::QRect, QMetaType::Bool,    5,    6,    7,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

void qpdfview::RenderTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RenderTask *_t = static_cast<RenderTask *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->imageReady((*reinterpret_cast< const RenderParam(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QImage(*)>(_a[4])),(*reinterpret_cast< const QRectF(*)>(_a[5]))); break;
        case 2: _t->start((*reinterpret_cast< const RenderParam(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->cancel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RenderTask::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RenderTask::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (RenderTask::*_t)(const RenderParam & , const QRect & , bool , const QImage & , const QRectF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RenderTask::imageReady)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject qpdfview::RenderTask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qpdfview__RenderTask.data,
      qt_meta_data_qpdfview__RenderTask,  qt_static_metacall, 0, 0}
};


const QMetaObject *qpdfview::RenderTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::RenderTask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__RenderTask.stringdata))
        return static_cast<void*>(const_cast< RenderTask*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< RenderTask*>(this));
    return QObject::qt_metacast(_clname);
}

int qpdfview::RenderTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::RenderTask::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void qpdfview::RenderTask::imageReady(const RenderParam & _t1, const QRect & _t2, bool _t3, const QImage & _t4, const QRectF & _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
