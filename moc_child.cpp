/****************************************************************************
** Meta object code from reading C++ file 'child.h'
**
** Created: Tue May 30 19:58:15 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "child.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'child.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Child[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      23,    6,    6,    6, 0x0a,
      47,    6,    6,    6, 0x0a,
      63,    6,    6,    6, 0x0a,
      79,    6,    6,    6, 0x0a,
      95,    6,    6,    6, 0x0a,
     111,    6,    6,    6, 0x0a,
     127,    6,    6,    6, 0x0a,
     143,    6,    6,    6, 0x0a,
     159,    6,    6,    6, 0x0a,
     175,    6,    6,    6, 0x0a,
     191,    6,    6,    6, 0x0a,
     208,    6,    6,    6, 0x0a,
     225,    6,    6,    6, 0x0a,
     242,    6,    6,    6, 0x0a,
     259,    6,    6,    6, 0x0a,
     276,    6,    6,    6, 0x0a,
     293,    6,    6,    6, 0x0a,
     310,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Child[] = {
    "Child\0\0signalRefresh()\0on_pushButton_clicked()\0"
    "button_check1()\0button_check2()\0"
    "button_check3()\0button_check4()\0"
    "button_check5()\0button_check6()\0"
    "button_check7()\0button_check8()\0"
    "button_check9()\0button_check10()\0"
    "button_check11()\0button_check12()\0"
    "button_check13()\0button_check14()\0"
    "button_check15()\0button_check16()\0"
    "on_pushButton_2_clicked()\0"
};

const QMetaObject Child::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Child,
      qt_meta_data_Child, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Child::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Child::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Child::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Child))
        return static_cast<void*>(const_cast< Child*>(this));
    return QWidget::qt_metacast(_clname);
}

int Child::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalRefresh(); break;
        case 1: on_pushButton_clicked(); break;
        case 2: button_check1(); break;
        case 3: button_check2(); break;
        case 4: button_check3(); break;
        case 5: button_check4(); break;
        case 6: button_check5(); break;
        case 7: button_check6(); break;
        case 8: button_check7(); break;
        case 9: button_check8(); break;
        case 10: button_check9(); break;
        case 11: button_check10(); break;
        case 12: button_check11(); break;
        case 13: button_check12(); break;
        case 14: button_check13(); break;
        case 15: button_check14(); break;
        case 16: button_check15(); break;
        case 17: button_check16(); break;
        case 18: on_pushButton_2_clicked(); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Child::signalRefresh()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
