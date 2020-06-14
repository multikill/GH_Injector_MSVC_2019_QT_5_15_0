/****************************************************************************
** Meta object code from reading C++ file 'GuiMain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../GuiMain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiMain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiMain_t {
    QByteArrayData data[59];
    char stringdata0[742];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiMain_t qt_meta_stringdata_GuiMain = {
    {
QT_MOC_LITERAL(0, 0, 7), // "GuiMain"
QT_MOC_LITERAL(1, 8, 14), // "send_to_picker"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "Process_State_Struct*"
QT_MOC_LITERAL(4, 46, 15), // "procStateStruct"
QT_MOC_LITERAL(5, 62, 15), // "Process_Struct*"
QT_MOC_LITERAL(6, 78, 10), // "procStruct"
QT_MOC_LITERAL(7, 89, 17), // "send_to_scan_hook"
QT_MOC_LITERAL(8, 107, 3), // "pid"
QT_MOC_LITERAL(9, 111, 5), // "error"
QT_MOC_LITERAL(10, 117, 15), // "get_from_picker"
QT_MOC_LITERAL(11, 133, 18), // "get_from_scan_hook"
QT_MOC_LITERAL(12, 152, 10), // "closeEvent"
QT_MOC_LITERAL(13, 163, 12), // "QCloseEvent*"
QT_MOC_LITERAL(14, 176, 5), // "event"
QT_MOC_LITERAL(15, 182, 13), // "platformCheck"
QT_MOC_LITERAL(16, 196, 14), // "rb_process_set"
QT_MOC_LITERAL(17, 211, 10), // "rb_pid_set"
QT_MOC_LITERAL(18, 222, 12), // "rb_unset_all"
QT_MOC_LITERAL(19, 235, 20), // "cmb_proc_name_change"
QT_MOC_LITERAL(20, 256, 14), // "txt_pid_change"
QT_MOC_LITERAL(21, 271, 22), // "btn_pick_process_click"
QT_MOC_LITERAL(22, 294, 11), // "auto_inject"
QT_MOC_LITERAL(23, 306, 16), // "auto_loop_inject"
QT_MOC_LITERAL(24, 323, 14), // "reset_settings"
QT_MOC_LITERAL(25, 338, 10), // "slotReboot"
QT_MOC_LITERAL(26, 349, 9), // "hook_Scan"
QT_MOC_LITERAL(27, 359, 20), // "btn_hook_scan_change"
QT_MOC_LITERAL(28, 380, 13), // "save_settings"
QT_MOC_LITERAL(29, 394, 13), // "load_settings"
QT_MOC_LITERAL(30, 408, 11), // "color_setup"
QT_MOC_LITERAL(31, 420, 12), // "color_change"
QT_MOC_LITERAL(32, 433, 11), // "load_banner"
QT_MOC_LITERAL(33, 445, 11), // "hide_banner"
QT_MOC_LITERAL(34, 457, 11), // "load_change"
QT_MOC_LITERAL(35, 469, 1), // "i"
QT_MOC_LITERAL(36, 471, 13), // "create_change"
QT_MOC_LITERAL(37, 485, 15), // "cb_main_clicked"
QT_MOC_LITERAL(38, 501, 15), // "add_file_dialog"
QT_MOC_LITERAL(39, 517, 16), // "add_file_to_list"
QT_MOC_LITERAL(40, 534, 3), // "str"
QT_MOC_LITERAL(41, 538, 6), // "active"
QT_MOC_LITERAL(42, 545, 11), // "remove_file"
QT_MOC_LITERAL(43, 557, 11), // "select_file"
QT_MOC_LITERAL(44, 569, 12), // "delay_inject"
QT_MOC_LITERAL(45, 582, 11), // "inject_file"
QT_MOC_LITERAL(46, 594, 12), // "injec_status"
QT_MOC_LITERAL(47, 607, 2), // "ok"
QT_MOC_LITERAL(48, 610, 3), // "msg"
QT_MOC_LITERAL(49, 614, 8), // "load_Dll"
QT_MOC_LITERAL(50, 623, 14), // "tooltip_change"
QT_MOC_LITERAL(51, 638, 9), // "open_help"
QT_MOC_LITERAL(52, 648, 8), // "open_log"
QT_MOC_LITERAL(53, 657, 20), // "check_online_version"
QT_MOC_LITERAL(54, 678, 13), // "replyFinished"
QT_MOC_LITERAL(55, 692, 14), // "QNetworkReply*"
QT_MOC_LITERAL(56, 707, 3), // "rep"
QT_MOC_LITERAL(57, 711, 14), // "download_start"
QT_MOC_LITERAL(58, 726, 15) // "download_finish"

    },
    "GuiMain\0send_to_picker\0\0Process_State_Struct*\0"
    "procStateStruct\0Process_Struct*\0"
    "procStruct\0send_to_scan_hook\0pid\0error\0"
    "get_from_picker\0get_from_scan_hook\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "platformCheck\0rb_process_set\0rb_pid_set\0"
    "rb_unset_all\0cmb_proc_name_change\0"
    "txt_pid_change\0btn_pick_process_click\0"
    "auto_inject\0auto_loop_inject\0"
    "reset_settings\0slotReboot\0hook_Scan\0"
    "btn_hook_scan_change\0save_settings\0"
    "load_settings\0color_setup\0color_change\0"
    "load_banner\0hide_banner\0load_change\0"
    "i\0create_change\0cb_main_clicked\0"
    "add_file_dialog\0add_file_to_list\0str\0"
    "active\0remove_file\0select_file\0"
    "delay_inject\0inject_file\0injec_status\0"
    "ok\0msg\0load_Dll\0tooltip_change\0open_help\0"
    "open_log\0check_online_version\0"
    "replyFinished\0QNetworkReply*\0rep\0"
    "download_start\0download_finish"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  224,    2, 0x06 /* Public */,
       7,    2,  229,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,  234,    2, 0x0a /* Public */,
      11,    2,  239,    2, 0x0a /* Public */,
      12,    1,  244,    2, 0x08 /* Private */,
      15,    0,  247,    2, 0x08 /* Private */,
      16,    0,  248,    2, 0x08 /* Private */,
      17,    0,  249,    2, 0x08 /* Private */,
      18,    0,  250,    2, 0x08 /* Private */,
      19,    0,  251,    2, 0x08 /* Private */,
      20,    0,  252,    2, 0x08 /* Private */,
      21,    0,  253,    2, 0x08 /* Private */,
      22,    0,  254,    2, 0x08 /* Private */,
      23,    0,  255,    2, 0x08 /* Private */,
      24,    0,  256,    2, 0x08 /* Private */,
      25,    0,  257,    2, 0x08 /* Private */,
      26,    0,  258,    2, 0x08 /* Private */,
      27,    0,  259,    2, 0x08 /* Private */,
      28,    0,  260,    2, 0x08 /* Private */,
      29,    0,  261,    2, 0x08 /* Private */,
      30,    0,  262,    2, 0x08 /* Private */,
      31,    0,  263,    2, 0x08 /* Private */,
      32,    0,  264,    2, 0x08 /* Private */,
      33,    0,  265,    2, 0x08 /* Private */,
      34,    1,  266,    2, 0x08 /* Private */,
      36,    1,  269,    2, 0x08 /* Private */,
      37,    0,  272,    2, 0x08 /* Private */,
      38,    0,  273,    2, 0x08 /* Private */,
      39,    2,  274,    2, 0x08 /* Private */,
      42,    0,  279,    2, 0x08 /* Private */,
      43,    0,  280,    2, 0x08 /* Private */,
      44,    0,  281,    2, 0x08 /* Private */,
      45,    0,  282,    2, 0x08 /* Private */,
      46,    2,  283,    2, 0x08 /* Private */,
      49,    0,  288,    2, 0x08 /* Private */,
      50,    0,  289,    2, 0x08 /* Private */,
      51,    0,  290,    2, 0x08 /* Private */,
      52,    0,  291,    2, 0x08 /* Private */,
      53,    0,  292,    2, 0x08 /* Private */,
      54,    1,  293,    2, 0x08 /* Private */,
      57,    0,  296,    2, 0x08 /* Private */,
      58,    0,  297,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, 0x80000000 | 13,   14,
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
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   47,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 55,   56,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GuiMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_to_picker((*reinterpret_cast< Process_State_Struct*(*)>(_a[1])),(*reinterpret_cast< Process_Struct*(*)>(_a[2]))); break;
        case 1: _t->send_to_scan_hook((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->get_from_picker((*reinterpret_cast< Process_State_Struct*(*)>(_a[1])),(*reinterpret_cast< Process_Struct*(*)>(_a[2]))); break;
        case 3: _t->get_from_scan_hook((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 5: _t->platformCheck(); break;
        case 6: _t->rb_process_set(); break;
        case 7: _t->rb_pid_set(); break;
        case 8: _t->rb_unset_all(); break;
        case 9: _t->cmb_proc_name_change(); break;
        case 10: _t->txt_pid_change(); break;
        case 11: _t->btn_pick_process_click(); break;
        case 12: _t->auto_inject(); break;
        case 13: _t->auto_loop_inject(); break;
        case 14: _t->reset_settings(); break;
        case 15: _t->slotReboot(); break;
        case 16: _t->hook_Scan(); break;
        case 17: _t->btn_hook_scan_change(); break;
        case 18: _t->save_settings(); break;
        case 19: _t->load_settings(); break;
        case 20: _t->color_setup(); break;
        case 21: _t->color_change(); break;
        case 22: _t->load_banner(); break;
        case 23: _t->hide_banner(); break;
        case 24: _t->load_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->create_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->cb_main_clicked(); break;
        case 27: _t->add_file_dialog(); break;
        case 28: _t->add_file_to_list((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 29: _t->remove_file(); break;
        case 30: _t->select_file(); break;
        case 31: _t->delay_inject(); break;
        case 32: _t->inject_file(); break;
        case 33: _t->injec_status((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 34: _t->load_Dll(); break;
        case 35: _t->tooltip_change(); break;
        case 36: _t->open_help(); break;
        case 37: _t->open_log(); break;
        case 38: _t->check_online_version(); break;
        case 39: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 40: _t->download_start(); break;
        case 41: _t->download_finish(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiMain::*)(Process_State_Struct * , Process_Struct * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiMain::send_to_picker)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiMain::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiMain::send_to_scan_hook)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_GuiMain.data,
    qt_meta_data_GuiMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiMain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GuiMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void GuiMain::send_to_picker(Process_State_Struct * _t1, Process_Struct * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuiMain::send_to_scan_hook(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
