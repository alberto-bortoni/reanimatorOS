/****************************************************************************
** Meta object code from reading C++ file 'daily_progress.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/daily_progress.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'daily_progress.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DailyProgress_t {
    QByteArrayData data[8];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DailyProgress_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DailyProgress_t qt_meta_stringdata_DailyProgress = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DailyProgress"
QT_MOC_LITERAL(1, 14, 15), // "progressChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "streaksChanged"
QT_MOC_LITERAL(4, 46, 4), // "save"
QT_MOC_LITERAL(5, 51, 18), // "setProgressEnabled"
QT_MOC_LITERAL(6, 70, 6), // "enable"
QT_MOC_LITERAL(7, 77, 9) // "updateDay"

    },
    "DailyProgress\0progressChanged\0\0"
    "streaksChanged\0save\0setProgressEnabled\0"
    "enable\0updateDay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DailyProgress[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       5,    0,   50,    2, 0x2a /* Public | MethodCloned */,
       7,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DailyProgress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DailyProgress *_t = static_cast<DailyProgress *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressChanged(); break;
        case 1: _t->streaksChanged(); break;
        case 2: _t->save(); break;
        case 3: _t->setProgressEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setProgressEnabled(); break;
        case 5: _t->updateDay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DailyProgress::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DailyProgress::progressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DailyProgress::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DailyProgress::streaksChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DailyProgress::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_DailyProgress.data,
      qt_meta_data_DailyProgress,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DailyProgress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DailyProgress::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DailyProgress.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int DailyProgress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DailyProgress::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DailyProgress::streaksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
