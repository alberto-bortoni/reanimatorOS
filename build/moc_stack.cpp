/****************************************************************************
** Meta object code from reading C++ file 'stack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/stack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Stack_t {
    QByteArrayData data[81];
    char stringdata0[954];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Stack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Stack_t qt_meta_stringdata_Stack = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Stack"
QT_MOC_LITERAL(1, 6, 13), // "copyAvailable"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "redoAvailable"
QT_MOC_LITERAL(4, 35, 13), // "undoAvailable"
QT_MOC_LITERAL(5, 49, 13), // "footerVisible"
QT_MOC_LITERAL(6, 63, 13), // "headerVisible"
QT_MOC_LITERAL(7, 77, 13), // "documentAdded"
QT_MOC_LITERAL(8, 91, 9), // "Document*"
QT_MOC_LITERAL(9, 101, 8), // "document"
QT_MOC_LITERAL(10, 110, 15), // "documentRemoved"
QT_MOC_LITERAL(11, 126, 16), // "documentSelected"
QT_MOC_LITERAL(12, 143, 5), // "index"
QT_MOC_LITERAL(13, 149, 17), // "findNextAvailable"
QT_MOC_LITERAL(14, 167, 9), // "available"
QT_MOC_LITERAL(15, 177, 19), // "updateFormatActions"
QT_MOC_LITERAL(16, 197, 28), // "updateFormatAlignmentActions"
QT_MOC_LITERAL(17, 226, 11), // "alignCenter"
QT_MOC_LITERAL(18, 238, 12), // "alignJustify"
QT_MOC_LITERAL(19, 251, 9), // "alignLeft"
QT_MOC_LITERAL(20, 261, 10), // "alignRight"
QT_MOC_LITERAL(21, 272, 9), // "autoCache"
QT_MOC_LITERAL(22, 282, 13), // "checkSpelling"
QT_MOC_LITERAL(23, 296, 3), // "cut"
QT_MOC_LITERAL(24, 300, 4), // "copy"
QT_MOC_LITERAL(25, 305, 14), // "decreaseIndent"
QT_MOC_LITERAL(26, 320, 4), // "find"
QT_MOC_LITERAL(27, 325, 8), // "findNext"
QT_MOC_LITERAL(28, 334, 12), // "findPrevious"
QT_MOC_LITERAL(29, 347, 14), // "increaseIndent"
QT_MOC_LITERAL(30, 362, 5), // "paste"
QT_MOC_LITERAL(31, 368, 16), // "pasteUnformatted"
QT_MOC_LITERAL(32, 385, 9), // "pageSetup"
QT_MOC_LITERAL(33, 395, 5), // "print"
QT_MOC_LITERAL(34, 401, 4), // "redo"
QT_MOC_LITERAL(35, 406, 6), // "reload"
QT_MOC_LITERAL(36, 413, 7), // "replace"
QT_MOC_LITERAL(37, 421, 4), // "save"
QT_MOC_LITERAL(38, 426, 6), // "saveAs"
QT_MOC_LITERAL(39, 433, 9), // "selectAll"
QT_MOC_LITERAL(40, 443, 11), // "selectScene"
QT_MOC_LITERAL(41, 455, 12), // "setFocusMode"
QT_MOC_LITERAL(42, 468, 8), // "QAction*"
QT_MOC_LITERAL(43, 477, 6), // "action"
QT_MOC_LITERAL(44, 484, 15), // "setBlockHeading"
QT_MOC_LITERAL(45, 500, 7), // "heading"
QT_MOC_LITERAL(46, 508, 11), // "setFontBold"
QT_MOC_LITERAL(47, 520, 4), // "bold"
QT_MOC_LITERAL(48, 525, 13), // "setFontItalic"
QT_MOC_LITERAL(49, 539, 6), // "italic"
QT_MOC_LITERAL(50, 546, 16), // "setFontStrikeOut"
QT_MOC_LITERAL(51, 563, 9), // "strikeout"
QT_MOC_LITERAL(52, 573, 16), // "setFontUnderline"
QT_MOC_LITERAL(53, 590, 9), // "underline"
QT_MOC_LITERAL(54, 600, 18), // "setFontSuperScript"
QT_MOC_LITERAL(55, 619, 5), // "super"
QT_MOC_LITERAL(56, 625, 16), // "setFontSubScript"
QT_MOC_LITERAL(57, 642, 3), // "sub"
QT_MOC_LITERAL(58, 646, 19), // "setTextDirectionLTR"
QT_MOC_LITERAL(59, 666, 19), // "setTextDirectionRTL"
QT_MOC_LITERAL(60, 686, 11), // "showSymbols"
QT_MOC_LITERAL(61, 698, 13), // "themeSelected"
QT_MOC_LITERAL(62, 712, 5), // "Theme"
QT_MOC_LITERAL(63, 718, 5), // "theme"
QT_MOC_LITERAL(64, 724, 4), // "undo"
QT_MOC_LITERAL(65, 729, 17), // "updateSmartQuotes"
QT_MOC_LITERAL(66, 747, 26), // "updateSmartQuotesSelection"
QT_MOC_LITERAL(67, 774, 16), // "setFooterVisible"
QT_MOC_LITERAL(68, 791, 7), // "visible"
QT_MOC_LITERAL(69, 799, 16), // "setHeaderVisible"
QT_MOC_LITERAL(70, 816, 16), // "setScenesVisible"
QT_MOC_LITERAL(71, 833, 10), // "showHeader"
QT_MOC_LITERAL(72, 844, 15), // "actionTriggered"
QT_MOC_LITERAL(73, 860, 12), // "insertSymbol"
QT_MOC_LITERAL(74, 873, 4), // "text"
QT_MOC_LITERAL(75, 878, 16), // "updateBackground"
QT_MOC_LITERAL(76, 895, 5), // "image"
QT_MOC_LITERAL(77, 901, 10), // "foreground"
QT_MOC_LITERAL(78, 912, 12), // "updateMargin"
QT_MOC_LITERAL(79, 925, 10), // "updateMask"
QT_MOC_LITERAL(80, 936, 17) // "updateMenuIndexes"

    },
    "Stack\0copyAvailable\0\0redoAvailable\0"
    "undoAvailable\0footerVisible\0headerVisible\0"
    "documentAdded\0Document*\0document\0"
    "documentRemoved\0documentSelected\0index\0"
    "findNextAvailable\0available\0"
    "updateFormatActions\0updateFormatAlignmentActions\0"
    "alignCenter\0alignJustify\0alignLeft\0"
    "alignRight\0autoCache\0checkSpelling\0"
    "cut\0copy\0decreaseIndent\0find\0findNext\0"
    "findPrevious\0increaseIndent\0paste\0"
    "pasteUnformatted\0pageSetup\0print\0redo\0"
    "reload\0replace\0save\0saveAs\0selectAll\0"
    "selectScene\0setFocusMode\0QAction*\0"
    "action\0setBlockHeading\0heading\0"
    "setFontBold\0bold\0setFontItalic\0italic\0"
    "setFontStrikeOut\0strikeout\0setFontUnderline\0"
    "underline\0setFontSuperScript\0super\0"
    "setFontSubScript\0sub\0setTextDirectionLTR\0"
    "setTextDirectionRTL\0showSymbols\0"
    "themeSelected\0Theme\0theme\0undo\0"
    "updateSmartQuotes\0updateSmartQuotesSelection\0"
    "setFooterVisible\0visible\0setHeaderVisible\0"
    "setScenesVisible\0showHeader\0actionTriggered\0"
    "insertSymbol\0text\0updateBackground\0"
    "image\0foreground\0updateMargin\0updateMask\0"
    "updateMenuIndexes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Stack[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  319,    2, 0x06 /* Public */,
       3,    1,  322,    2, 0x06 /* Public */,
       4,    1,  325,    2, 0x06 /* Public */,
       5,    1,  328,    2, 0x06 /* Public */,
       6,    1,  331,    2, 0x06 /* Public */,
       7,    1,  334,    2, 0x06 /* Public */,
      10,    1,  337,    2, 0x06 /* Public */,
      11,    1,  340,    2, 0x06 /* Public */,
      13,    1,  343,    2, 0x06 /* Public */,
      15,    0,  346,    2, 0x06 /* Public */,
      16,    0,  347,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  348,    2, 0x0a /* Public */,
      18,    0,  349,    2, 0x0a /* Public */,
      19,    0,  350,    2, 0x0a /* Public */,
      20,    0,  351,    2, 0x0a /* Public */,
      21,    0,  352,    2, 0x0a /* Public */,
      22,    0,  353,    2, 0x0a /* Public */,
      23,    0,  354,    2, 0x0a /* Public */,
      24,    0,  355,    2, 0x0a /* Public */,
      25,    0,  356,    2, 0x0a /* Public */,
      26,    0,  357,    2, 0x0a /* Public */,
      27,    0,  358,    2, 0x0a /* Public */,
      28,    0,  359,    2, 0x0a /* Public */,
      29,    0,  360,    2, 0x0a /* Public */,
      30,    0,  361,    2, 0x0a /* Public */,
      31,    0,  362,    2, 0x0a /* Public */,
      32,    0,  363,    2, 0x0a /* Public */,
      33,    0,  364,    2, 0x0a /* Public */,
      34,    0,  365,    2, 0x0a /* Public */,
      35,    0,  366,    2, 0x0a /* Public */,
      36,    0,  367,    2, 0x0a /* Public */,
      37,    0,  368,    2, 0x0a /* Public */,
      38,    0,  369,    2, 0x0a /* Public */,
      39,    0,  370,    2, 0x0a /* Public */,
      40,    0,  371,    2, 0x0a /* Public */,
      41,    1,  372,    2, 0x0a /* Public */,
      44,    1,  375,    2, 0x0a /* Public */,
      46,    1,  378,    2, 0x0a /* Public */,
      48,    1,  381,    2, 0x0a /* Public */,
      50,    1,  384,    2, 0x0a /* Public */,
      52,    1,  387,    2, 0x0a /* Public */,
      54,    1,  390,    2, 0x0a /* Public */,
      56,    1,  393,    2, 0x0a /* Public */,
      58,    0,  396,    2, 0x0a /* Public */,
      59,    0,  397,    2, 0x0a /* Public */,
      60,    0,  398,    2, 0x0a /* Public */,
      61,    1,  399,    2, 0x0a /* Public */,
      64,    0,  402,    2, 0x0a /* Public */,
      65,    0,  403,    2, 0x0a /* Public */,
      66,    0,  404,    2, 0x0a /* Public */,
      67,    1,  405,    2, 0x0a /* Public */,
      69,    1,  408,    2, 0x0a /* Public */,
      70,    1,  411,    2, 0x0a /* Public */,
      71,    0,  414,    2, 0x0a /* Public */,
      72,    1,  415,    2, 0x08 /* Private */,
      73,    1,  418,    2, 0x08 /* Private */,
      75,    0,  421,    2, 0x08 /* Private */,
      75,    2,  422,    2, 0x08 /* Private */,
      78,    0,  427,    2, 0x08 /* Private */,
      79,    0,  428,    2, 0x08 /* Private */,
      80,    0,  429,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 62,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void, QMetaType::QString,   74,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage, QMetaType::QRect,   76,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Stack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Stack *_t = static_cast<Stack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->redoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->undoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->footerVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->headerVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->documentAdded((*reinterpret_cast< Document*(*)>(_a[1]))); break;
        case 6: _t->documentRemoved((*reinterpret_cast< Document*(*)>(_a[1]))); break;
        case 7: _t->documentSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->findNextAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->updateFormatActions(); break;
        case 10: _t->updateFormatAlignmentActions(); break;
        case 11: _t->alignCenter(); break;
        case 12: _t->alignJustify(); break;
        case 13: _t->alignLeft(); break;
        case 14: _t->alignRight(); break;
        case 15: _t->autoCache(); break;
        case 16: _t->checkSpelling(); break;
        case 17: _t->cut(); break;
        case 18: _t->copy(); break;
        case 19: _t->decreaseIndent(); break;
        case 20: _t->find(); break;
        case 21: _t->findNext(); break;
        case 22: _t->findPrevious(); break;
        case 23: _t->increaseIndent(); break;
        case 24: _t->paste(); break;
        case 25: _t->pasteUnformatted(); break;
        case 26: _t->pageSetup(); break;
        case 27: _t->print(); break;
        case 28: _t->redo(); break;
        case 29: _t->reload(); break;
        case 30: _t->replace(); break;
        case 31: _t->save(); break;
        case 32: _t->saveAs(); break;
        case 33: _t->selectAll(); break;
        case 34: _t->selectScene(); break;
        case 35: _t->setFocusMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 36: _t->setBlockHeading((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->setFontBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->setFontItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->setFontStrikeOut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->setFontUnderline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->setFontSuperScript((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->setFontSubScript((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->setTextDirectionLTR(); break;
        case 44: _t->setTextDirectionRTL(); break;
        case 45: _t->showSymbols(); break;
        case 46: _t->themeSelected((*reinterpret_cast< const Theme(*)>(_a[1]))); break;
        case 47: _t->undo(); break;
        case 48: _t->updateSmartQuotes(); break;
        case 49: _t->updateSmartQuotesSelection(); break;
        case 50: _t->setFooterVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->setHeaderVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->setScenesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->showHeader(); break;
        case 54: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 55: _t->insertSymbol((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 56: _t->updateBackground(); break;
        case 57: _t->updateBackground((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 58: _t->updateMargin(); break;
        case 59: _t->updateMask(); break;
        case 60: _t->updateMenuIndexes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Theme >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Stack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stack::copyAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Stack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stack::redoAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Stack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stack::undoAvailable)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Stack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stack::footerVisible)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Stack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stack::headerVisible)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Stack::*)(Document * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stack::documentAdded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Stack::*)(Document * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stack::documentRemoved)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Stack::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stack::documentSelected)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Stack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stack::findNextAvailable)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Stack::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stack::updateFormatActions)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Stack::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stack::updateFormatAlignmentActions)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Stack::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Stack.data,
      qt_meta_data_Stack,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Stack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Stack.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Stack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    }
    return _id;
}

// SIGNAL 0
void Stack::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Stack::redoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Stack::undoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Stack::footerVisible(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Stack::headerVisible(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Stack::documentAdded(Document * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Stack::documentRemoved(Document * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Stack::documentSelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Stack::findNextAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Stack::updateFormatActions()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Stack::updateFormatAlignmentActions()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
