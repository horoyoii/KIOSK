/****************************************************************************
** Meta object code from reading C++ file 'payment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../McD/payment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'payment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Payment_t {
    QByteArrayData data[19];
    char stringdata0[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Payment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Payment_t qt_meta_stringdata_Payment = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Payment"
QT_MOC_LITERAL(1, 8, 16), // "SignalSendingOTP"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "OTP"
QT_MOC_LITERAL(4, 30, 18), // "SignalUpdatePassUI"
QT_MOC_LITERAL(5, 49, 24), // "on_push_send_otp_clicked"
QT_MOC_LITERAL(6, 74, 20), // "on_psh_num_1_clicked"
QT_MOC_LITERAL(7, 95, 20), // "on_psh_num_2_clicked"
QT_MOC_LITERAL(8, 116, 20), // "on_psh_num_3_clicked"
QT_MOC_LITERAL(9, 137, 20), // "on_psh_num_4_clicked"
QT_MOC_LITERAL(10, 158, 20), // "on_psh_num_5_clicked"
QT_MOC_LITERAL(11, 179, 20), // "on_psh_num_6_clicked"
QT_MOC_LITERAL(12, 200, 20), // "on_psh_num_7_clicked"
QT_MOC_LITERAL(13, 221, 20), // "on_psh_num_8_clicked"
QT_MOC_LITERAL(14, 242, 20), // "on_psh_num_9_clicked"
QT_MOC_LITERAL(15, 263, 20), // "on_psh_num_0_clicked"
QT_MOC_LITERAL(16, 284, 22), // "on_psh_num_del_clicked"
QT_MOC_LITERAL(17, 307, 12), // "UpdatePassUI"
QT_MOC_LITERAL(18, 320, 19) // "on_push_fin_clicked"

    },
    "Payment\0SignalSendingOTP\0\0OTP\0"
    "SignalUpdatePassUI\0on_push_send_otp_clicked\0"
    "on_psh_num_1_clicked\0on_psh_num_2_clicked\0"
    "on_psh_num_3_clicked\0on_psh_num_4_clicked\0"
    "on_psh_num_5_clicked\0on_psh_num_6_clicked\0"
    "on_psh_num_7_clicked\0on_psh_num_8_clicked\0"
    "on_psh_num_9_clicked\0on_psh_num_0_clicked\0"
    "on_psh_num_del_clicked\0UpdatePassUI\0"
    "on_push_fin_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Payment[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    0,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   98,    2, 0x08 /* Private */,
       6,    0,   99,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    0,  109,    2, 0x08 /* Private */,
      17,    0,  110,    2, 0x08 /* Private */,
      18,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
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

       0        // eod
};

void Payment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Payment *_t = static_cast<Payment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalSendingOTP((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SignalUpdatePassUI(); break;
        case 2: _t->on_push_send_otp_clicked(); break;
        case 3: _t->on_psh_num_1_clicked(); break;
        case 4: _t->on_psh_num_2_clicked(); break;
        case 5: _t->on_psh_num_3_clicked(); break;
        case 6: _t->on_psh_num_4_clicked(); break;
        case 7: _t->on_psh_num_5_clicked(); break;
        case 8: _t->on_psh_num_6_clicked(); break;
        case 9: _t->on_psh_num_7_clicked(); break;
        case 10: _t->on_psh_num_8_clicked(); break;
        case 11: _t->on_psh_num_9_clicked(); break;
        case 12: _t->on_psh_num_0_clicked(); break;
        case 13: _t->on_psh_num_del_clicked(); break;
        case 14: _t->UpdatePassUI(); break;
        case 15: _t->on_push_fin_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Payment::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Payment::SignalSendingOTP)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Payment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Payment::SignalUpdatePassUI)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Payment::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Payment.data,
    qt_meta_data_Payment,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Payment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Payment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Payment.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Payment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Payment::SignalSendingOTP(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Payment::SignalUpdatePassUI()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
