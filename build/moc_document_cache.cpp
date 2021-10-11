/****************************************************************************
** Meta object code from reading C++ file 'document_cache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/document_cache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'document_cache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DocumentCache_t {
    QByteArrayData data[10];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DocumentCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DocumentCache_t qt_meta_stringdata_DocumentCache = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DocumentCache"
QT_MOC_LITERAL(1, 14, 13), // "updateMapping"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "replaceCacheFile"
QT_MOC_LITERAL(4, 46, 9), // "Document*"
QT_MOC_LITERAL(5, 56, 8), // "document"
QT_MOC_LITERAL(6, 65, 4), // "file"
QT_MOC_LITERAL(7, 70, 14), // "writeCacheFile"
QT_MOC_LITERAL(8, 85, 15), // "DocumentWriter*"
QT_MOC_LITERAL(9, 101, 6) // "writer"

    },
    "DocumentCache\0updateMapping\0\0"
    "replaceCacheFile\0Document*\0document\0"
    "file\0writeCacheFile\0DocumentWriter*\0"
    "writer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocumentCache[] = {

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
       3,    2,   30,    2, 0x08 /* Private */,
       7,    2,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 8,    5,    9,

       0        // eod
};

void DocumentCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DocumentCache *_t = static_cast<DocumentCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMapping(); break;
        case 1: _t->replaceCacheFile((*reinterpret_cast< Document*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->writeCacheFile((*reinterpret_cast< Document*(*)>(_a[1])),(*reinterpret_cast< DocumentWriter*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DocumentCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DocumentCache.data,
      qt_meta_data_DocumentCache,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DocumentCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocumentCache.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DocumentCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
