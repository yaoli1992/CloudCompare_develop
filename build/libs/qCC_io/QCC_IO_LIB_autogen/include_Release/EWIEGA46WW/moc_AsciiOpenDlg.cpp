/****************************************************************************
** Meta object code from reading C++ file 'AsciiOpenDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../libs/qCC_io/AsciiOpenDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AsciiOpenDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AsciiOpenDlg_t {
    QByteArrayData data[14];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsciiOpenDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsciiOpenDlg_t qt_meta_stringdata_AsciiOpenDlg = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AsciiOpenDlg"
QT_MOC_LITERAL(1, 13, 17), // "onSeparatorChange"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "separator"
QT_MOC_LITERAL(4, 42, 11), // "updateTable"
QT_MOC_LITERAL(5, 54, 15), // "setSkippedLines"
QT_MOC_LITERAL(6, 70, 10), // "linesCount"
QT_MOC_LITERAL(7, 81, 27), // "commaDecimalCheckBoxToggled"
QT_MOC_LITERAL(8, 109, 5), // "apply"
QT_MOC_LITERAL(9, 115, 8), // "applyAll"
QT_MOC_LITERAL(10, 124, 21), // "columnsTypeHasChanged"
QT_MOC_LITERAL(11, 146, 5), // "index"
QT_MOC_LITERAL(12, 152, 21), // "shortcutButtonPressed"
QT_MOC_LITERAL(13, 174, 28) // "checkSelectedColumnsValidity"

    },
    "AsciiOpenDlg\0onSeparatorChange\0\0"
    "separator\0updateTable\0setSkippedLines\0"
    "linesCount\0commaDecimalCheckBoxToggled\0"
    "apply\0applyAll\0columnsTypeHasChanged\0"
    "index\0shortcutButtonPressed\0"
    "checkSelectedColumnsValidity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsciiOpenDlg[] = {

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
       1,    1,   59,    2, 0x0a /* Public */,
       4,    0,   62,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       8,    0,   69,    2, 0x09 /* Protected */,
       9,    0,   70,    2, 0x09 /* Protected */,
      10,    1,   71,    2, 0x09 /* Protected */,
      12,    0,   74,    2, 0x09 /* Protected */,
      13,    0,   75,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AsciiOpenDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AsciiOpenDlg *_t = static_cast<AsciiOpenDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSeparatorChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateTable(); break;
        case 2: _t->setSkippedLines((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->commaDecimalCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->apply();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->applyAll(); break;
        case 6: _t->columnsTypeHasChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->shortcutButtonPressed(); break;
        case 8: _t->checkSelectedColumnsValidity(); break;
        default: ;
        }
    }
}

const QMetaObject AsciiOpenDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AsciiOpenDlg.data,
      qt_meta_data_AsciiOpenDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AsciiOpenDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsciiOpenDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AsciiOpenDlg.stringdata0))
        return static_cast<void*>(const_cast< AsciiOpenDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int AsciiOpenDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
