/****************************************************************************
** Meta object code from reading C++ file 'calibrate_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/industrial_calibration_tutorials/calibrate_gui/include/calibrate_gui/calibrate_window.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibrate_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_calibrate_gui__CalMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x08,
      59,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_calibrate_gui__CalMainWindow[] = {
    "calibrate_gui::CalMainWindow\0\0"
    "on_CalibrateButton_clicked()\0"
    "on_AcceptButton_clicked()\0"
};

void calibrate_gui::CalMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CalMainWindow *_t = static_cast<CalMainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_CalibrateButton_clicked(); break;
        case 1: _t->on_AcceptButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData calibrate_gui::CalMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject calibrate_gui::CalMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_calibrate_gui__CalMainWindow,
      qt_meta_data_calibrate_gui__CalMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &calibrate_gui::CalMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *calibrate_gui::CalMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *calibrate_gui::CalMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_calibrate_gui__CalMainWindow))
        return static_cast<void*>(const_cast< CalMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int calibrate_gui::CalMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
