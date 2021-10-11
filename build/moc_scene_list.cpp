/****************************************************************************
** Meta object code from reading C++ file 'scene_list.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/scene_list.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scene_list.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SceneList_t {
    QByteArrayData data[14];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneList_t qt_meta_stringdata_SceneList = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SceneList"
QT_MOC_LITERAL(1, 10, 10), // "hideScenes"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "showScenes"
QT_MOC_LITERAL(4, 33, 14), // "moveScenesDown"
QT_MOC_LITERAL(5, 48, 12), // "moveScenesUp"
QT_MOC_LITERAL(6, 61, 13), // "sceneSelected"
QT_MOC_LITERAL(7, 75, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 87, 5), // "index"
QT_MOC_LITERAL(9, 93, 18), // "selectCurrentScene"
QT_MOC_LITERAL(10, 112, 9), // "setFilter"
QT_MOC_LITERAL(11, 122, 6), // "filter"
QT_MOC_LITERAL(12, 129, 12), // "toggleScenes"
QT_MOC_LITERAL(13, 142, 15) // "updateShortcuts"

    },
    "SceneList\0hideScenes\0\0showScenes\0"
    "moveScenesDown\0moveScenesUp\0sceneSelected\0"
    "QModelIndex\0index\0selectCurrentScene\0"
    "setFilter\0filter\0toggleScenes\0"
    "updateShortcuts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneList[] = {

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
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,
      12,    0,   70,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SceneList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SceneList *_t = static_cast<SceneList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hideScenes(); break;
        case 1: _t->showScenes(); break;
        case 2: _t->moveScenesDown(); break;
        case 3: _t->moveScenesUp(); break;
        case 4: _t->sceneSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->selectCurrentScene(); break;
        case 6: _t->setFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->toggleScenes(); break;
        case 8: _t->updateShortcuts(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SceneList::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SceneList.data,
      qt_meta_data_SceneList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SceneList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SceneList.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int SceneList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
