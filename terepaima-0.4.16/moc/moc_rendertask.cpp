/****************************************************************************
** Meta object code from reading C++ file 'rendertask.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/rendertask.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rendertask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__RenderTask[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      74,   33,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     149,  123,   21,   21, 0x0a,
     185,  179,   21,   21, 0x0a,
     198,   21,   21,   21, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__RenderTask[] = {
    "qpdfview::RenderTask\0\0finished()\0"
    "renderParam,rect,prefetch,image,cropRect\0"
    "imageReady(RenderParam,QRect,bool,QImage,QRectF)\0"
    "renderParam,rect,prefetch\0"
    "start(RenderParam,QRect,bool)\0force\0"
    "cancel(bool)\0cancel()\0"
};

void qpdfview::RenderTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RenderTask *_t = static_cast<RenderTask *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->imageReady((*reinterpret_cast< const RenderParam(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QImage(*)>(_a[4])),(*reinterpret_cast< const QRectF(*)>(_a[5]))); break;
        case 2: _t->start((*reinterpret_cast< const RenderParam(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->cancel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->cancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::RenderTask::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::RenderTask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qpdfview__RenderTask,
      qt_meta_data_qpdfview__RenderTask, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::RenderTask::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::RenderTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::RenderTask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__RenderTask))
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
