/****************************************************************************
** Meta object code from reading C++ file 'document_watcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/document_watcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'document_watcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DocumentWatcher_t {
    QByteArrayData data[9];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DocumentWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DocumentWatcher_t qt_meta_stringdata_DocumentWatcher = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DocumentWatcher"
QT_MOC_LITERAL(1, 16, 13), // "closeDocument"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "Document*"
QT_MOC_LITERAL(4, 41, 8), // "document"
QT_MOC_LITERAL(5, 50, 12), // "showDocument"
QT_MOC_LITERAL(6, 63, 14), // "processUpdates"
QT_MOC_LITERAL(7, 78, 15), // "documentChanged"
QT_MOC_LITERAL(8, 94, 4) // "path"

    },
    "DocumentWatcher\0closeDocument\0\0Document*\0"
    "document\0showDocument\0processUpdates\0"
    "documentChanged\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocumentWatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   40,    2, 0x0a /* Public */,
       7,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void DocumentWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DocumentWatcher *_t = static_cast<DocumentWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeDocument((*reinterpret_cast< Document*(*)>(_a[1]))); break;
        case 1: _t->showDocument((*reinterpret_cast< Document*(*)>(_a[1]))); break;
        case 2: _t->processUpdates(); break;
        case 3: _t->documentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DocumentWatcher::*)(Document * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentWatcher::closeDocument)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DocumentWatcher::*)(Document * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentWatcher::showDocument)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DocumentWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DocumentWatcher.data,
      qt_meta_data_DocumentWatcher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DocumentWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocumentWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DocumentWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DocumentWatcher::closeDocument(Document * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DocumentWatcher::showDocument(Document * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
