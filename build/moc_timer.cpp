/****************************************************************************
** Meta object code from reading C++ file 'timer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/timer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Timer_t {
    QByteArrayData data[19];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Timer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Timer_t qt_meta_stringdata_Timer = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Timer"
QT_MOC_LITERAL(1, 6, 7), // "changed"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 6), // "Timer*"
QT_MOC_LITERAL(4, 22, 5), // "timer"
QT_MOC_LITERAL(5, 28, 6), // "edited"
QT_MOC_LITERAL(6, 35, 13), // "documentAdded"
QT_MOC_LITERAL(7, 49, 9), // "Document*"
QT_MOC_LITERAL(8, 59, 8), // "document"
QT_MOC_LITERAL(9, 68, 15), // "documentRemoved"
QT_MOC_LITERAL(10, 84, 12), // "delayChanged"
QT_MOC_LITERAL(11, 97, 5), // "delay"
QT_MOC_LITERAL(12, 103, 10), // "endChanged"
QT_MOC_LITERAL(13, 114, 3), // "end"
QT_MOC_LITERAL(14, 118, 12), // "editAccepted"
QT_MOC_LITERAL(15, 131, 12), // "editRejected"
QT_MOC_LITERAL(16, 144, 11), // "editClicked"
QT_MOC_LITERAL(17, 156, 13), // "removeClicked"
QT_MOC_LITERAL(18, 170, 13) // "timerFinished"

    },
    "Timer\0changed\0\0Timer*\0timer\0edited\0"
    "documentAdded\0Document*\0document\0"
    "documentRemoved\0delayChanged\0delay\0"
    "endChanged\0end\0editAccepted\0editRejected\0"
    "editClicked\0removeClicked\0timerFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Timer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   75,    2, 0x0a /* Public */,
       9,    1,   78,    2, 0x0a /* Public */,
      10,    1,   81,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,
      15,    0,   88,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,
      17,    0,   90,    2, 0x08 /* Private */,
      18,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QTime,   11,
    QMetaType::Void, QMetaType::QTime,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Timer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Timer *_t = static_cast<Timer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< Timer*(*)>(_a[1]))); break;
        case 1: _t->edited((*reinterpret_cast< Timer*(*)>(_a[1]))); break;
        case 2: _t->documentAdded((*reinterpret_cast< Document*(*)>(_a[1]))); break;
        case 3: _t->documentRemoved((*reinterpret_cast< Document*(*)>(_a[1]))); break;
        case 4: _t->delayChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 5: _t->endChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 6: _t->editAccepted(); break;
        case 7: _t->editRejected(); break;
        case 8: _t->editClicked(); break;
        case 9: _t->removeClicked(); break;
        case 10: _t->timerFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Timer* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Timer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Timer::*)(Timer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Timer::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Timer::*)(Timer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Timer::edited)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Timer::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Timer.data,
      qt_meta_data_Timer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Timer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Timer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Timer.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Timer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Timer::changed(Timer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Timer::edited(Timer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
