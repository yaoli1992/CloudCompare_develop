/****************************************************************************
** Meta object code from reading C++ file 'ccOverlayDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../common/ccOverlayDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccOverlayDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ccOverlayDialog_t {
    QByteArrayData data[9];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccOverlayDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccOverlayDialog_t qt_meta_stringdata_ccOverlayDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ccOverlayDialog"
QT_MOC_LITERAL(1, 16, 15), // "processFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "accepted"
QT_MOC_LITERAL(4, 42, 17), // "shortcutTriggered"
QT_MOC_LITERAL(5, 60, 3), // "key"
QT_MOC_LITERAL(6, 64, 5), // "shown"
QT_MOC_LITERAL(7, 70, 22), // "onLinkedWindowDeletion"
QT_MOC_LITERAL(8, 93, 6) // "object"

    },
    "ccOverlayDialog\0processFinished\0\0"
    "accepted\0shortcutTriggered\0key\0shown\0"
    "onLinkedWindowDeletion\0object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccOverlayDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   46,    2, 0x09 /* Protected */,
       7,    0,   49,    2, 0x29 /* Protected | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    8,
    QMetaType::Void,

       0        // eod
};

void ccOverlayDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccOverlayDialog *_t = static_cast<ccOverlayDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->shortcutTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->shown(); break;
        case 3: _t->onLinkedWindowDeletion((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->onLinkedWindowDeletion(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ccOverlayDialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccOverlayDialog::processFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ccOverlayDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccOverlayDialog::shortcutTriggered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ccOverlayDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccOverlayDialog::shown)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ccOverlayDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccOverlayDialog.data,
      qt_meta_data_ccOverlayDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccOverlayDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccOverlayDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccOverlayDialog.stringdata0))
        return static_cast<void*>(const_cast< ccOverlayDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccOverlayDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ccOverlayDialog::processFinished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ccOverlayDialog::shortcutTriggered(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ccOverlayDialog::shown()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
