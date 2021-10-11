/****************************************************************************
** Meta object code from reading C++ file 'symbols_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/symbols_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'symbols_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SymbolsDialog_t {
    QByteArrayData data[17];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SymbolsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SymbolsDialog_t qt_meta_stringdata_SymbolsDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SymbolsDialog"
QT_MOC_LITERAL(1, 14, 10), // "insertText"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "text"
QT_MOC_LITERAL(4, 31, 6), // "accept"
QT_MOC_LITERAL(5, 38, 6), // "reject"
QT_MOC_LITERAL(6, 45, 10), // "showFilter"
QT_MOC_LITERAL(7, 56, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 73, 6), // "filter"
QT_MOC_LITERAL(9, 80, 9), // "showGroup"
QT_MOC_LITERAL(10, 90, 5), // "group"
QT_MOC_LITERAL(11, 96, 13), // "symbolClicked"
QT_MOC_LITERAL(12, 110, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 122, 6), // "symbol"
QT_MOC_LITERAL(14, 129, 19), // "recentSymbolClicked"
QT_MOC_LITERAL(15, 149, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(16, 167, 15) // "shortcutChanged"

    },
    "SymbolsDialog\0insertText\0\0text\0accept\0"
    "reject\0showFilter\0QListWidgetItem*\0"
    "filter\0showGroup\0group\0symbolClicked\0"
    "QModelIndex\0symbol\0recentSymbolClicked\0"
    "QTableWidgetItem*\0shortcutChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SymbolsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,
      14,    1,   68,    2, 0x08 /* Private */,
      16,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   13,
    QMetaType::Void,

       0        // eod
};

void SymbolsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SymbolsDialog *_t = static_cast<SymbolsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->insertText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->accept(); break;
        case 2: _t->reject(); break;
        case 3: _t->showFilter((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->showGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->symbolClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->recentSymbolClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->shortcutChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SymbolsDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SymbolsDialog::insertText)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SymbolsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SymbolsDialog.data,
      qt_meta_data_SymbolsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SymbolsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SymbolsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SymbolsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SymbolsDialog::insertText(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
