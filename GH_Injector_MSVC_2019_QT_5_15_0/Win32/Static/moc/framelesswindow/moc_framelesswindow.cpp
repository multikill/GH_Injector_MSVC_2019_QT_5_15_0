/****************************************************************************
** Meta object code from reading C++ file 'framelesswindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../framelesswindow/framelesswindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'framelesswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FramelessWindow_t {
    QByteArrayData data[14];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FramelessWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FramelessWindow_t qt_meta_stringdata_FramelessWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FramelessWindow"
QT_MOC_LITERAL(1, 16, 14), // "setWindowTitle"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "text"
QT_MOC_LITERAL(4, 37, 13), // "setWindowIcon"
QT_MOC_LITERAL(5, 51, 3), // "ico"
QT_MOC_LITERAL(6, 55, 26), // "on_applicationStateChanged"
QT_MOC_LITERAL(7, 82, 20), // "Qt::ApplicationState"
QT_MOC_LITERAL(8, 103, 5), // "state"
QT_MOC_LITERAL(9, 109, 25), // "on_minimizeButton_clicked"
QT_MOC_LITERAL(10, 135, 24), // "on_restoreButton_clicked"
QT_MOC_LITERAL(11, 160, 25), // "on_maximizeButton_clicked"
QT_MOC_LITERAL(12, 186, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(13, 209, 31) // "on_windowTitlebar_doubleClicked"

    },
    "FramelessWindow\0setWindowTitle\0\0text\0"
    "setWindowIcon\0ico\0on_applicationStateChanged\0"
    "Qt::ApplicationState\0state\0"
    "on_minimizeButton_clicked\0"
    "on_restoreButton_clicked\0"
    "on_maximizeButton_clicked\0"
    "on_closeButton_clicked\0"
    "on_windowTitlebar_doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FramelessWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QIcon,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FramelessWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FramelessWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setWindowTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setWindowIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 2: _t->on_applicationStateChanged((*reinterpret_cast< Qt::ApplicationState(*)>(_a[1]))); break;
        case 3: _t->on_minimizeButton_clicked(); break;
        case 4: _t->on_restoreButton_clicked(); break;
        case 5: _t->on_maximizeButton_clicked(); break;
        case 6: _t->on_closeButton_clicked(); break;
        case 7: _t->on_windowTitlebar_doubleClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FramelessWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FramelessWindow.data,
    qt_meta_data_FramelessWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FramelessWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FramelessWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FramelessWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FramelessWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
