/****************************************************************************
** Meta object code from reading C++ file 'GuiProcess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../GuiProcess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiProcess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiProcess_t {
    QByteArrayData data[15];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiProcess_t qt_meta_stringdata_GuiProcess = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GuiProcess"
QT_MOC_LITERAL(1, 11, 11), // "send_to_inj"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "Process_State_Struct*"
QT_MOC_LITERAL(4, 46, 15), // "procStateStruct"
QT_MOC_LITERAL(5, 62, 15), // "Process_Struct*"
QT_MOC_LITERAL(6, 78, 10), // "procStruct"
QT_MOC_LITERAL(7, 89, 12), // "get_from_inj"
QT_MOC_LITERAL(8, 102, 11), // "refresh_gui"
QT_MOC_LITERAL(9, 114, 15), // "refresh_process"
QT_MOC_LITERAL(10, 130, 13), // "filter_change"
QT_MOC_LITERAL(11, 144, 1), // "i"
QT_MOC_LITERAL(12, 146, 14), // "session_change"
QT_MOC_LITERAL(13, 161, 11), // "name_change"
QT_MOC_LITERAL(14, 173, 11) // "proc_select"

    },
    "GuiProcess\0send_to_inj\0\0Process_State_Struct*\0"
    "procStateStruct\0Process_Struct*\0"
    "procStruct\0get_from_inj\0refresh_gui\0"
    "refresh_process\0filter_change\0i\0"
    "session_change\0name_change\0proc_select"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiProcess[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   59,    2, 0x0a /* Public */,
       8,    0,   64,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,
      13,    1,   70,    2, 0x08 /* Private */,
      14,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void GuiProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_to_inj((*reinterpret_cast< Process_State_Struct*(*)>(_a[1])),(*reinterpret_cast< Process_Struct*(*)>(_a[2]))); break;
        case 1: _t->get_from_inj((*reinterpret_cast< Process_State_Struct*(*)>(_a[1])),(*reinterpret_cast< Process_Struct*(*)>(_a[2]))); break;
        case 2: _t->refresh_gui(); break;
        case 3: _t->refresh_process(); break;
        case 4: _t->filter_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->session_change(); break;
        case 6: _t->name_change((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->proc_select(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiProcess::*)(Process_State_Struct * , Process_Struct * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiProcess::send_to_inj)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GuiProcess.data,
    qt_meta_data_GuiProcess,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiProcess.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GuiProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void GuiProcess::send_to_inj(Process_State_Struct * _t1, Process_Struct * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
