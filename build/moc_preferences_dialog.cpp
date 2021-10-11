/****************************************************************************
** Meta object code from reading C++ file 'preferences_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/preferences_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreferencesDialog_t {
    QByteArrayData data[22];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreferencesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreferencesDialog_t qt_meta_stringdata_PreferencesDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PreferencesDialog"
QT_MOC_LITERAL(1, 18, 6), // "accept"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "reject"
QT_MOC_LITERAL(4, 33, 18), // "goalHistoryToggled"
QT_MOC_LITERAL(5, 52, 14), // "resetDailyGoal"
QT_MOC_LITERAL(6, 67, 12), // "moveActionUp"
QT_MOC_LITERAL(7, 80, 14), // "moveActionDown"
QT_MOC_LITERAL(8, 95, 18), // "addSeparatorAction"
QT_MOC_LITERAL(9, 114, 20), // "currentActionChanged"
QT_MOC_LITERAL(10, 135, 6), // "action"
QT_MOC_LITERAL(11, 142, 11), // "addLanguage"
QT_MOC_LITERAL(12, 154, 14), // "removeLanguage"
QT_MOC_LITERAL(13, 169, 23), // "selectedLanguageChanged"
QT_MOC_LITERAL(14, 193, 5), // "index"
QT_MOC_LITERAL(15, 199, 7), // "addWord"
QT_MOC_LITERAL(16, 207, 10), // "removeWord"
QT_MOC_LITERAL(17, 218, 19), // "selectedWordChanged"
QT_MOC_LITERAL(18, 238, 10), // "wordEdited"
QT_MOC_LITERAL(19, 249, 23), // "selectedShortcutChanged"
QT_MOC_LITERAL(20, 273, 15), // "shortcutChanged"
QT_MOC_LITERAL(21, 289, 21) // "shortcutDoubleClicked"

    },
    "PreferencesDialog\0accept\0\0reject\0"
    "goalHistoryToggled\0resetDailyGoal\0"
    "moveActionUp\0moveActionDown\0"
    "addSeparatorAction\0currentActionChanged\0"
    "action\0addLanguage\0removeLanguage\0"
    "selectedLanguageChanged\0index\0addWord\0"
    "removeWord\0selectedWordChanged\0"
    "wordEdited\0selectedShortcutChanged\0"
    "shortcutChanged\0shortcutDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreferencesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    1,  111,    2, 0x08 /* Private */,
      11,    0,  114,    2, 0x08 /* Private */,
      12,    0,  115,    2, 0x08 /* Private */,
      13,    1,  116,    2, 0x08 /* Private */,
      15,    0,  119,    2, 0x08 /* Private */,
      16,    0,  120,    2, 0x08 /* Private */,
      17,    0,  121,    2, 0x08 /* Private */,
      18,    0,  122,    2, 0x08 /* Private */,
      19,    0,  123,    2, 0x08 /* Private */,
      20,    0,  124,    2, 0x08 /* Private */,
      21,    0,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreferencesDialog *_t = static_cast<PreferencesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->goalHistoryToggled(); break;
        case 3: _t->resetDailyGoal(); break;
        case 4: _t->moveActionUp(); break;
        case 5: _t->moveActionDown(); break;
        case 6: _t->addSeparatorAction(); break;
        case 7: _t->currentActionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->addLanguage(); break;
        case 9: _t->removeLanguage(); break;
        case 10: _t->selectedLanguageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->addWord(); break;
        case 12: _t->removeWord(); break;
        case 13: _t->selectedWordChanged(); break;
        case 14: _t->wordEdited(); break;
        case 15: _t->selectedShortcutChanged(); break;
        case 16: _t->shortcutChanged(); break;
        case 17: _t->shortcutDoubleClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PreferencesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PreferencesDialog.data,
      qt_meta_data_PreferencesDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreferencesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
