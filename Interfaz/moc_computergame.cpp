/****************************************************************************
** Meta object code from reading C++ file 'computergame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "computergame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'computergame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_computerGame_t {
    QByteArrayData data[20];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_computerGame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_computerGame_t qt_meta_stringdata_computerGame = {
    {
QT_MOC_LITERAL(0, 0, 12), // "computerGame"
QT_MOC_LITERAL(1, 13, 11), // "resizeEvent"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "QResizeEvent*"
QT_MOC_LITERAL(4, 40, 5), // "event"
QT_MOC_LITERAL(5, 46, 18), // "updateTextBrowser1"
QT_MOC_LITERAL(6, 65, 18), // "updateTextBrowser2"
QT_MOC_LITERAL(7, 84, 7), // "uint8_t"
QT_MOC_LITERAL(8, 92, 4), // "play"
QT_MOC_LITERAL(9, 97, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 119, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 143, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(12, 167, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(13, 191, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(14, 215, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(15, 239, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(16, 263, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(17, 287, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(18, 311, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(19, 336, 15) // "on_exit_clicked"

    },
    "computerGame\0resizeEvent\0\0QResizeEvent*\0"
    "event\0updateTextBrowser1\0updateTextBrowser2\0"
    "uint8_t\0play\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_7_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_9_clicked\0"
    "on_pushButton_10_clicked\0on_exit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_computerGame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,
      18,    0,  100,    2, 0x08 /* Private */,
      19,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
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

       0        // eod
};

void computerGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<computerGame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 1: _t->updateTextBrowser1(); break;
        case 2: _t->updateTextBrowser2((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        case 7: _t->on_pushButton_5_clicked(); break;
        case 8: _t->on_pushButton_6_clicked(); break;
        case 9: _t->on_pushButton_7_clicked(); break;
        case 10: _t->on_pushButton_8_clicked(); break;
        case 11: _t->on_pushButton_9_clicked(); break;
        case 12: _t->on_pushButton_10_clicked(); break;
        case 13: _t->on_exit_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject computerGame::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_computerGame.data,
    qt_meta_data_computerGame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *computerGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *computerGame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_computerGame.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int computerGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
