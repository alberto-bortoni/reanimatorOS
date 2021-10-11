/****************************************************************************
** Meta object code from reading C++ file 'timer_manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/timer_manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timer_manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimerManager_t {
    QByteArrayData data[17];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimerManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimerManager_t qt_meta_stringdata_TimerManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TimerManager"
QT_MOC_LITERAL(1, 13, 10), // "saveTimers"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "newTimer"
QT_MOC_LITERAL(4, 34, 11), // "recentTimer"
QT_MOC_LITERAL(5, 46, 8), // "QAction*"
QT_MOC_LITERAL(6, 55, 6), // "action"
QT_MOC_LITERAL(7, 62, 24), // "recentTimerMenuRequested"
QT_MOC_LITERAL(8, 87, 3), // "pos"
QT_MOC_LITERAL(9, 91, 12), // "timerChanged"
QT_MOC_LITERAL(10, 104, 6), // "Timer*"
QT_MOC_LITERAL(11, 111, 5), // "timer"
QT_MOC_LITERAL(12, 117, 12), // "timerDeleted"
QT_MOC_LITERAL(13, 130, 6), // "object"
QT_MOC_LITERAL(14, 137, 11), // "timerEdited"
QT_MOC_LITERAL(15, 149, 16), // "toggleVisibility"
QT_MOC_LITERAL(16, 166, 11) // "updateClock"

    },
    "TimerManager\0saveTimers\0\0newTimer\0"
    "recentTimer\0QAction*\0action\0"
    "recentTimerMenuRequested\0pos\0timerChanged\0"
    "Timer*\0timer\0timerDeleted\0object\0"
    "timerEdited\0toggleVisibility\0updateClock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimerManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
      12,    1,   70,    2, 0x08 /* Private */,
      14,    1,   73,    2, 0x08 /* Private */,
      15,    0,   76,    2, 0x08 /* Private */,
      16,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QObjectStar,   13,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TimerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimerManager *_t = static_cast<TimerManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveTimers(); break;
        case 1: _t->newTimer(); break;
        case 2: _t->recentTimer((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->recentTimerMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->timerChanged((*reinterpret_cast< Timer*(*)>(_a[1]))); break;
        case 5: _t->timerDeleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->timerEdited((*reinterpret_cast< Timer*(*)>(_a[1]))); break;
        case 7: _t->toggleVisibility(); break;
        case 8: _t->updateClock(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TimerManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TimerManager.data,
      qt_meta_data_TimerManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TimerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimerManager.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TimerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
