/****************************************************************************
** Meta object code from reading C++ file 'searchtask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/searchtask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchtask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qpdfview__SearchTask_t {
    QByteArrayData data[16];
    char stringdata[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__SearchTask_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__SearchTask_t qt_meta_stringdata_qpdfview__SearchTask = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 15),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 8),
QT_MOC_LITERAL(4, 47, 12),
QT_MOC_LITERAL(5, 60, 5),
QT_MOC_LITERAL(6, 66, 13),
QT_MOC_LITERAL(7, 80, 7),
QT_MOC_LITERAL(8, 88, 5),
QT_MOC_LITERAL(9, 94, 21),
QT_MOC_LITERAL(10, 116, 5),
QT_MOC_LITERAL(11, 122, 4),
QT_MOC_LITERAL(12, 127, 9),
QT_MOC_LITERAL(13, 137, 10),
QT_MOC_LITERAL(14, 148, 11),
QT_MOC_LITERAL(15, 160, 6)
    },
    "qpdfview::SearchTask\0progressChanged\0"
    "\0progress\0resultsReady\0index\0QList<QRectF>\0"
    "results\0start\0QVector<Model::Page*>\0"
    "pages\0text\0matchCase\0wholeWords\0"
    "beginAtPage\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__SearchTask[] = {

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
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    5,   47,    2, 0x0a /* Public */,
       8,    4,   58,    2, 0x2a /* Public | MethodCloned */,
      15,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Int,   10,   11,   12,   13,   14,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   10,   11,   12,   13,
    QMetaType::Void,

       0        // eod
};

void qpdfview::SearchTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchTask *_t = static_cast<SearchTask *>(_o);
        switch (_id) {
        case 0: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->resultsReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<QRectF>(*)>(_a[2]))); break;
        case 2: _t->start((*reinterpret_cast< const QVector<Model::Page*>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 3: _t->start((*reinterpret_cast< const QVector<Model::Page*>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QRectF> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchTask::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchTask::progressChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (SearchTask::*_t)(int , const QList<QRectF> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchTask::resultsReady)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject qpdfview::SearchTask::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_qpdfview__SearchTask.data,
      qt_meta_data_qpdfview__SearchTask,  qt_static_metacall, 0, 0}
};


const QMetaObject *qpdfview::SearchTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::SearchTask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__SearchTask.stringdata))
        return static_cast<void*>(const_cast< SearchTask*>(this));
    return QThread::qt_metacast(_clname);
}

int qpdfview::SearchTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::SearchTask::progressChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qpdfview::SearchTask::resultsReady(int _t1, const QList<QRectF> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
