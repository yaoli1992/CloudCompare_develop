/****************************************************************************
** Meta object code from reading C++ file 'ccGLWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../libs/qCC_glWindow/ccGLWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccGLWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ccGLWindow_t {
    QByteArrayData data[70];
    char stringdata0[890];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccGLWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccGLWindow_t qt_meta_stringdata_ccGLWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ccGLWindow"
QT_MOC_LITERAL(1, 11, 22), // "entitySelectionChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "ccHObject*"
QT_MOC_LITERAL(4, 46, 6), // "entity"
QT_MOC_LITERAL(5, 53, 24), // "entitiesSelectionChanged"
QT_MOC_LITERAL(6, 78, 23), // "std::unordered_set<int>"
QT_MOC_LITERAL(7, 102, 6), // "entIDs"
QT_MOC_LITERAL(8, 109, 10), // "itemPicked"
QT_MOC_LITERAL(9, 120, 11), // "subEntityID"
QT_MOC_LITERAL(10, 132, 1), // "x"
QT_MOC_LITERAL(11, 134, 1), // "y"
QT_MOC_LITERAL(12, 136, 9), // "CCVector3"
QT_MOC_LITERAL(13, 146, 1), // "P"
QT_MOC_LITERAL(14, 148, 10), // "CCVector3d"
QT_MOC_LITERAL(15, 159, 3), // "uvw"
QT_MOC_LITERAL(16, 163, 14), // "itemPickedFast"
QT_MOC_LITERAL(17, 178, 19), // "fastPickingFinished"
QT_MOC_LITERAL(18, 198, 14), // "viewMatRotated"
QT_MOC_LITERAL(19, 213, 11), // "ccGLMatrixd"
QT_MOC_LITERAL(20, 225, 6), // "rotMat"
QT_MOC_LITERAL(21, 232, 15), // "cameraDisplaced"
QT_MOC_LITERAL(22, 248, 3), // "ddx"
QT_MOC_LITERAL(23, 252, 3), // "ddy"
QT_MOC_LITERAL(24, 256, 17), // "mouseWheelRotated"
QT_MOC_LITERAL(25, 274, 14), // "wheelDelta_deg"
QT_MOC_LITERAL(26, 289, 23), // "perspectiveStateChanged"
QT_MOC_LITERAL(27, 313, 18), // "baseViewMatChanged"
QT_MOC_LITERAL(28, 332, 10), // "newViewMat"
QT_MOC_LITERAL(29, 343, 16), // "pixelSizeChanged"
QT_MOC_LITERAL(30, 360, 9), // "pixelSize"
QT_MOC_LITERAL(31, 370, 10), // "fovChanged"
QT_MOC_LITERAL(32, 381, 3), // "fov"
QT_MOC_LITERAL(33, 385, 16), // "zNearCoefChanged"
QT_MOC_LITERAL(34, 402, 4), // "coef"
QT_MOC_LITERAL(35, 407, 17), // "pivotPointChanged"
QT_MOC_LITERAL(36, 425, 16), // "cameraPosChanged"
QT_MOC_LITERAL(37, 442, 11), // "translation"
QT_MOC_LITERAL(38, 454, 1), // "t"
QT_MOC_LITERAL(39, 456, 8), // "rotation"
QT_MOC_LITERAL(40, 465, 17), // "leftButtonClicked"
QT_MOC_LITERAL(41, 483, 18), // "rightButtonClicked"
QT_MOC_LITERAL(42, 502, 10), // "mouseMoved"
QT_MOC_LITERAL(43, 513, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(44, 530, 7), // "buttons"
QT_MOC_LITERAL(45, 538, 14), // "buttonReleased"
QT_MOC_LITERAL(46, 553, 9), // "drawing3D"
QT_MOC_LITERAL(47, 563, 12), // "filesDropped"
QT_MOC_LITERAL(48, 576, 9), // "filenames"
QT_MOC_LITERAL(49, 586, 8), // "newLabel"
QT_MOC_LITERAL(50, 595, 3), // "obj"
QT_MOC_LITERAL(51, 599, 26), // "exclusiveFullScreenToggled"
QT_MOC_LITERAL(52, 626, 9), // "exclusive"
QT_MOC_LITERAL(53, 636, 19), // "middleButtonClicked"
QT_MOC_LITERAL(54, 656, 10), // "zoomGlobal"
QT_MOC_LITERAL(55, 667, 6), // "redraw"
QT_MOC_LITERAL(56, 674, 6), // "only2D"
QT_MOC_LITERAL(57, 681, 8), // "resetLOD"
QT_MOC_LITERAL(58, 690, 12), // "onWheelEvent"
QT_MOC_LITERAL(59, 703, 18), // "startFrameRateTest"
QT_MOC_LITERAL(60, 722, 13), // "requestUpdate"
QT_MOC_LITERAL(61, 736, 18), // "renderNextLODLevel"
QT_MOC_LITERAL(62, 755, 17), // "stopFrameRateTest"
QT_MOC_LITERAL(63, 773, 16), // "onItemPickedFast"
QT_MOC_LITERAL(64, 790, 12), // "pickedEntity"
QT_MOC_LITERAL(65, 803, 15), // "pickedItemIndex"
QT_MOC_LITERAL(66, 819, 20), // "checkScheduledRedraw"
QT_MOC_LITERAL(67, 840, 19), // "handleLoggedMessage"
QT_MOC_LITERAL(68, 860, 19), // "QOpenGLDebugMessage"
QT_MOC_LITERAL(69, 880, 9) // "doPicking"

    },
    "ccGLWindow\0entitySelectionChanged\0\0"
    "ccHObject*\0entity\0entitiesSelectionChanged\0"
    "std::unordered_set<int>\0entIDs\0"
    "itemPicked\0subEntityID\0x\0y\0CCVector3\0"
    "P\0CCVector3d\0uvw\0itemPickedFast\0"
    "fastPickingFinished\0viewMatRotated\0"
    "ccGLMatrixd\0rotMat\0cameraDisplaced\0"
    "ddx\0ddy\0mouseWheelRotated\0wheelDelta_deg\0"
    "perspectiveStateChanged\0baseViewMatChanged\0"
    "newViewMat\0pixelSizeChanged\0pixelSize\0"
    "fovChanged\0fov\0zNearCoefChanged\0coef\0"
    "pivotPointChanged\0cameraPosChanged\0"
    "translation\0t\0rotation\0leftButtonClicked\0"
    "rightButtonClicked\0mouseMoved\0"
    "Qt::MouseButtons\0buttons\0buttonReleased\0"
    "drawing3D\0filesDropped\0filenames\0"
    "newLabel\0obj\0exclusiveFullScreenToggled\0"
    "exclusive\0middleButtonClicked\0zoomGlobal\0"
    "redraw\0only2D\0resetLOD\0onWheelEvent\0"
    "startFrameRateTest\0requestUpdate\0"
    "renderNextLODLevel\0stopFrameRateTest\0"
    "onItemPickedFast\0pickedEntity\0"
    "pickedItemIndex\0checkScheduledRedraw\0"
    "handleLoggedMessage\0QOpenGLDebugMessage\0"
    "doPicking"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccGLWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  209,    2, 0x06 /* Public */,
       5,    1,  212,    2, 0x06 /* Public */,
       8,    6,  215,    2, 0x06 /* Public */,
      16,    4,  228,    2, 0x06 /* Public */,
      17,    0,  237,    2, 0x06 /* Public */,
      18,    1,  238,    2, 0x06 /* Public */,
      21,    2,  241,    2, 0x06 /* Public */,
      24,    1,  246,    2, 0x06 /* Public */,
      26,    0,  249,    2, 0x06 /* Public */,
      27,    1,  250,    2, 0x06 /* Public */,
      29,    1,  253,    2, 0x06 /* Public */,
      31,    1,  256,    2, 0x06 /* Public */,
      33,    1,  259,    2, 0x06 /* Public */,
      35,    1,  262,    2, 0x06 /* Public */,
      36,    1,  265,    2, 0x06 /* Public */,
      37,    1,  268,    2, 0x06 /* Public */,
      39,    1,  271,    2, 0x06 /* Public */,
      40,    2,  274,    2, 0x06 /* Public */,
      41,    2,  279,    2, 0x06 /* Public */,
      42,    3,  284,    2, 0x06 /* Public */,
      45,    0,  291,    2, 0x06 /* Public */,
      46,    0,  292,    2, 0x06 /* Public */,
      47,    1,  293,    2, 0x06 /* Public */,
      49,    1,  296,    2, 0x06 /* Public */,
      51,    1,  299,    2, 0x06 /* Public */,
      53,    2,  302,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      54,    0,  307,    2, 0x0a /* Public */,
      55,    2,  308,    2, 0x0a /* Public */,
      55,    1,  313,    2, 0x2a /* Public | MethodCloned */,
      55,    0,  316,    2, 0x2a /* Public | MethodCloned */,
      58,    1,  317,    2, 0x0a /* Public */,
      59,    0,  320,    2, 0x0a /* Public */,
      60,    0,  321,    2, 0x0a /* Public */,
      61,    0,  322,    2, 0x09 /* Protected */,
      62,    0,  323,    2, 0x09 /* Protected */,
      63,    4,  324,    2, 0x09 /* Protected */,
      66,    0,  333,    2, 0x09 /* Protected */,
      67,    1,  334,    2, 0x09 /* Protected */,
      69,    0,  337,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::Int, QMetaType::Int, 0x80000000 | 12, 0x80000000 | 14,    4,    9,   10,   11,   13,   15,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   22,   23,
    QMetaType::Void, QMetaType::Float,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   28,
    QMetaType::Void, QMetaType::Float,   30,
    QMetaType::Void, QMetaType::Float,   32,
    QMetaType::Void, QMetaType::Float,   34,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,   38,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 43,   10,   11,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   48,
    QMetaType::Void, 0x80000000 | 3,   50,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   56,   57,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   65,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 68,    2,
    QMetaType::Void,

       0        // eod
};

void ccGLWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccGLWindow *_t = static_cast<ccGLWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entitySelectionChanged((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 1: _t->entitiesSelectionChanged((*reinterpret_cast< std::unordered_set<int>(*)>(_a[1]))); break;
        case 2: _t->itemPicked((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const CCVector3(*)>(_a[5])),(*reinterpret_cast< const CCVector3d(*)>(_a[6]))); break;
        case 3: _t->itemPickedFast((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->fastPickingFinished(); break;
        case 5: _t->viewMatRotated((*reinterpret_cast< const ccGLMatrixd(*)>(_a[1]))); break;
        case 6: _t->cameraDisplaced((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 7: _t->mouseWheelRotated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->perspectiveStateChanged(); break;
        case 9: _t->baseViewMatChanged((*reinterpret_cast< const ccGLMatrixd(*)>(_a[1]))); break;
        case 10: _t->pixelSizeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->fovChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->zNearCoefChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: _t->pivotPointChanged((*reinterpret_cast< const CCVector3d(*)>(_a[1]))); break;
        case 14: _t->cameraPosChanged((*reinterpret_cast< const CCVector3d(*)>(_a[1]))); break;
        case 15: _t->translation((*reinterpret_cast< const CCVector3d(*)>(_a[1]))); break;
        case 16: _t->rotation((*reinterpret_cast< const ccGLMatrixd(*)>(_a[1]))); break;
        case 17: _t->leftButtonClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->rightButtonClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->mouseMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3]))); break;
        case 20: _t->buttonReleased(); break;
        case 21: _t->drawing3D(); break;
        case 22: _t->filesDropped((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 23: _t->newLabel((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 24: _t->exclusiveFullScreenToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->middleButtonClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->zoomGlobal(); break;
        case 27: _t->redraw((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->redraw((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->redraw(); break;
        case 30: _t->onWheelEvent((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 31: _t->startFrameRateTest(); break;
        case 32: _t->requestUpdate(); break;
        case 33: _t->renderNextLODLevel(); break;
        case 34: _t->stopFrameRateTest(); break;
        case 35: _t->onItemPickedFast((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 36: _t->checkScheduledRedraw(); break;
        case 37: _t->handleLoggedMessage((*reinterpret_cast< const QOpenGLDebugMessage(*)>(_a[1]))); break;
        case 38: _t->doPicking(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ccGLWindow::*_t)(ccHObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::entitySelectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(std::unordered_set<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::entitiesSelectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(ccHObject * , unsigned  , int , int , const CCVector3 & , const CCVector3d & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::itemPicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(ccHObject * , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::itemPickedFast)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::fastPickingFinished)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const ccGLMatrixd & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::viewMatRotated)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::cameraDisplaced)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::mouseWheelRotated)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::perspectiveStateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const ccGLMatrixd & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::baseViewMatChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::pixelSizeChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::fovChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::zNearCoefChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const CCVector3d & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::pivotPointChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const CCVector3d & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::cameraPosChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const CCVector3d & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::translation)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const ccGLMatrixd & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::rotation)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::leftButtonClicked)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::rightButtonClicked)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(int , int , Qt::MouseButtons );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::mouseMoved)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::buttonReleased)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::drawing3D)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::filesDropped)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(ccHObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::newLabel)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::exclusiveFullScreenToggled)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::middleButtonClicked)) {
                *result = 25;
                return;
            }
        }
    }
}

const QMetaObject ccGLWindow::staticMetaObject = {
    { &ccGLWindowParent::staticMetaObject, qt_meta_stringdata_ccGLWindow.data,
      qt_meta_data_ccGLWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccGLWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccGLWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccGLWindow.stringdata0))
        return static_cast<void*>(const_cast< ccGLWindow*>(this));
    if (!strcmp(_clname, "ccGenericGLDisplay"))
        return static_cast< ccGenericGLDisplay*>(const_cast< ccGLWindow*>(this));
    return ccGLWindowParent::qt_metacast(_clname);
}

int ccGLWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccGLWindowParent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void ccGLWindow::entitySelectionChanged(ccHObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ccGLWindow::entitiesSelectionChanged(std::unordered_set<int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ccGLWindow::itemPicked(ccHObject * _t1, unsigned  _t2, int _t3, int _t4, const CCVector3 & _t5, const CCVector3d & _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ccGLWindow::itemPickedFast(ccHObject * _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ccGLWindow::fastPickingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void ccGLWindow::viewMatRotated(const ccGLMatrixd & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ccGLWindow::cameraDisplaced(float _t1, float _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ccGLWindow::mouseWheelRotated(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ccGLWindow::perspectiveStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void ccGLWindow::baseViewMatChanged(const ccGLMatrixd & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ccGLWindow::pixelSizeChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ccGLWindow::fovChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ccGLWindow::zNearCoefChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ccGLWindow::pivotPointChanged(const CCVector3d & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ccGLWindow::cameraPosChanged(const CCVector3d & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ccGLWindow::translation(const CCVector3d & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ccGLWindow::rotation(const ccGLMatrixd & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void ccGLWindow::leftButtonClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void ccGLWindow::rightButtonClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void ccGLWindow::mouseMoved(int _t1, int _t2, Qt::MouseButtons _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ccGLWindow::buttonReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 20, Q_NULLPTR);
}

// SIGNAL 21
void ccGLWindow::drawing3D()
{
    QMetaObject::activate(this, &staticMetaObject, 21, Q_NULLPTR);
}

// SIGNAL 22
void ccGLWindow::filesDropped(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void ccGLWindow::newLabel(ccHObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void ccGLWindow::exclusiveFullScreenToggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void ccGLWindow::middleButtonClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}
QT_END_MOC_NAMESPACE
