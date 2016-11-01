/****************************************************************************
** Meta object code from reading C++ file 'formfieldwidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/formfieldwidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formfieldwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qpdfview__NormalTextFieldWidget_t {
    QByteArrayData data[5];
    char stringdata[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__NormalTextFieldWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__NormalTextFieldWidget_t qt_meta_stringdata_qpdfview__NormalTextFieldWidget = {
    {
QT_MOC_LITERAL(0, 0, 31),
QT_MOC_LITERAL(1, 32, 11),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 14),
QT_MOC_LITERAL(4, 60, 4)
    },
    "qpdfview::NormalTextFieldWidget\0"
    "wasModified\0\0on_textChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__NormalTextFieldWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void qpdfview::NormalTextFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NormalTextFieldWidget *_t = static_cast<NormalTextFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NormalTextFieldWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NormalTextFieldWidget::wasModified)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject qpdfview::NormalTextFieldWidget::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_qpdfview__NormalTextFieldWidget.data,
      qt_meta_data_qpdfview__NormalTextFieldWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *qpdfview::NormalTextFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::NormalTextFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__NormalTextFieldWidget.stringdata))
        return static_cast<void*>(const_cast< NormalTextFieldWidget*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int qpdfview::NormalTextFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::NormalTextFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_qpdfview__MultilineTextFieldWidget_t {
    QByteArrayData data[4];
    char stringdata[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__MultilineTextFieldWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__MultilineTextFieldWidget_t qt_meta_stringdata_qpdfview__MultilineTextFieldWidget = {
    {
QT_MOC_LITERAL(0, 0, 34),
QT_MOC_LITERAL(1, 35, 11),
QT_MOC_LITERAL(2, 47, 0),
QT_MOC_LITERAL(3, 48, 14)
    },
    "qpdfview::MultilineTextFieldWidget\0"
    "wasModified\0\0on_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__MultilineTextFieldWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qpdfview::MultilineTextFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultilineTextFieldWidget *_t = static_cast<MultilineTextFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_textChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MultilineTextFieldWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MultilineTextFieldWidget::wasModified)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject qpdfview::MultilineTextFieldWidget::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_qpdfview__MultilineTextFieldWidget.data,
      qt_meta_data_qpdfview__MultilineTextFieldWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *qpdfview::MultilineTextFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::MultilineTextFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__MultilineTextFieldWidget.stringdata))
        return static_cast<void*>(const_cast< MultilineTextFieldWidget*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int qpdfview::MultilineTextFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::MultilineTextFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_qpdfview__ComboBoxChoiceFieldWidget_t {
    QByteArrayData data[7];
    char stringdata[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__ComboBoxChoiceFieldWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__ComboBoxChoiceFieldWidget_t qt_meta_stringdata_qpdfview__ComboBoxChoiceFieldWidget = {
    {
QT_MOC_LITERAL(0, 0, 35),
QT_MOC_LITERAL(1, 36, 11),
QT_MOC_LITERAL(2, 48, 0),
QT_MOC_LITERAL(3, 49, 22),
QT_MOC_LITERAL(4, 72, 5),
QT_MOC_LITERAL(5, 78, 21),
QT_MOC_LITERAL(6, 100, 4)
    },
    "qpdfview::ComboBoxChoiceFieldWidget\0"
    "wasModified\0\0on_currentIndexChanged\0"
    "index\0on_currentTextChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__ComboBoxChoiceFieldWidget[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x09 /* Protected */,
       5,    1,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void qpdfview::ComboBoxChoiceFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComboBoxChoiceFieldWidget *_t = static_cast<ComboBoxChoiceFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ComboBoxChoiceFieldWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ComboBoxChoiceFieldWidget::wasModified)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject qpdfview::ComboBoxChoiceFieldWidget::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_qpdfview__ComboBoxChoiceFieldWidget.data,
      qt_meta_data_qpdfview__ComboBoxChoiceFieldWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *qpdfview::ComboBoxChoiceFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::ComboBoxChoiceFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__ComboBoxChoiceFieldWidget.stringdata))
        return static_cast<void*>(const_cast< ComboBoxChoiceFieldWidget*>(this));
    return QComboBox::qt_metacast(_clname);
}

int qpdfview::ComboBoxChoiceFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
void qpdfview::ComboBoxChoiceFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_qpdfview__ListBoxChoiceFieldWidget_t {
    QByteArrayData data[4];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__ListBoxChoiceFieldWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__ListBoxChoiceFieldWidget_t qt_meta_stringdata_qpdfview__ListBoxChoiceFieldWidget = {
    {
QT_MOC_LITERAL(0, 0, 34),
QT_MOC_LITERAL(1, 35, 11),
QT_MOC_LITERAL(2, 47, 0),
QT_MOC_LITERAL(3, 48, 23)
    },
    "qpdfview::ListBoxChoiceFieldWidget\0"
    "wasModified\0\0on_itemSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__ListBoxChoiceFieldWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qpdfview::ListBoxChoiceFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListBoxChoiceFieldWidget *_t = static_cast<ListBoxChoiceFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_itemSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ListBoxChoiceFieldWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ListBoxChoiceFieldWidget::wasModified)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject qpdfview::ListBoxChoiceFieldWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_qpdfview__ListBoxChoiceFieldWidget.data,
      qt_meta_data_qpdfview__ListBoxChoiceFieldWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *qpdfview::ListBoxChoiceFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::ListBoxChoiceFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__ListBoxChoiceFieldWidget.stringdata))
        return static_cast<void*>(const_cast< ListBoxChoiceFieldWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int qpdfview::ListBoxChoiceFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::ListBoxChoiceFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_qpdfview__CheckBoxChoiceFieldWidget_t {
    QByteArrayData data[5];
    char stringdata[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__CheckBoxChoiceFieldWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__CheckBoxChoiceFieldWidget_t qt_meta_stringdata_qpdfview__CheckBoxChoiceFieldWidget = {
    {
QT_MOC_LITERAL(0, 0, 35),
QT_MOC_LITERAL(1, 36, 11),
QT_MOC_LITERAL(2, 48, 0),
QT_MOC_LITERAL(3, 49, 10),
QT_MOC_LITERAL(4, 60, 7)
    },
    "qpdfview::CheckBoxChoiceFieldWidget\0"
    "wasModified\0\0on_toggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__CheckBoxChoiceFieldWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void qpdfview::CheckBoxChoiceFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CheckBoxChoiceFieldWidget *_t = static_cast<CheckBoxChoiceFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CheckBoxChoiceFieldWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckBoxChoiceFieldWidget::wasModified)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject qpdfview::CheckBoxChoiceFieldWidget::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_qpdfview__CheckBoxChoiceFieldWidget.data,
      qt_meta_data_qpdfview__CheckBoxChoiceFieldWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *qpdfview::CheckBoxChoiceFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::CheckBoxChoiceFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__CheckBoxChoiceFieldWidget.stringdata))
        return static_cast<void*>(const_cast< CheckBoxChoiceFieldWidget*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int qpdfview::CheckBoxChoiceFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::CheckBoxChoiceFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_qpdfview__RadioChoiceFieldWidget_t {
    QByteArrayData data[5];
    char stringdata[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__RadioChoiceFieldWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__RadioChoiceFieldWidget_t qt_meta_stringdata_qpdfview__RadioChoiceFieldWidget = {
    {
QT_MOC_LITERAL(0, 0, 32),
QT_MOC_LITERAL(1, 33, 11),
QT_MOC_LITERAL(2, 45, 0),
QT_MOC_LITERAL(3, 46, 10),
QT_MOC_LITERAL(4, 57, 7)
    },
    "qpdfview::RadioChoiceFieldWidget\0"
    "wasModified\0\0on_toggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__RadioChoiceFieldWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void qpdfview::RadioChoiceFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RadioChoiceFieldWidget *_t = static_cast<RadioChoiceFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RadioChoiceFieldWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioChoiceFieldWidget::wasModified)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject qpdfview::RadioChoiceFieldWidget::staticMetaObject = {
    { &QRadioButton::staticMetaObject, qt_meta_stringdata_qpdfview__RadioChoiceFieldWidget.data,
      qt_meta_data_qpdfview__RadioChoiceFieldWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *qpdfview::RadioChoiceFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::RadioChoiceFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__RadioChoiceFieldWidget.stringdata))
        return static_cast<void*>(const_cast< RadioChoiceFieldWidget*>(this));
    return QRadioButton::qt_metacast(_clname);
}

int qpdfview::RadioChoiceFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRadioButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::RadioChoiceFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
