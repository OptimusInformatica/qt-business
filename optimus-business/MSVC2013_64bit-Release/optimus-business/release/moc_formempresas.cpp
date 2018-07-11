/****************************************************************************
** Meta object code from reading C++ file 'formempresas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../optimus-business/empresas/formempresas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formempresas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ThreadAddress_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadAddress_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadAddress_t qt_meta_stringdata_ThreadAddress = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ThreadAddress"
QT_MOC_LITERAL(1, 14, 11), // "resultReday"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "ThreadAddress\0resultReday\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadAddress[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ThreadAddress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThreadAddress *_t = static_cast<ThreadAddress *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultReday(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ThreadAddress::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadAddress::resultReday)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ThreadAddress::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThreadAddress.data,
      qt_meta_data_ThreadAddress,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ThreadAddress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadAddress::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadAddress.stringdata0))
        return static_cast<void*>(const_cast< ThreadAddress*>(this));
    return QThread::qt_metacast(_clname);
}

int ThreadAddress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ThreadAddress::resultReday()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_FormEmpresas_t {
    QByteArrayData data[4];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormEmpresas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormEmpresas_t qt_meta_stringdata_FormEmpresas = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FormEmpresas"
QT_MOC_LITERAL(1, 13, 10), // "addEmpresa"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10) // "getAddress"

    },
    "FormEmpresas\0addEmpresa\0\0getAddress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormEmpresas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormEmpresas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormEmpresas *_t = static_cast<FormEmpresas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addEmpresa(); break;
        case 1: _t->getAddress(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FormEmpresas::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FormEmpresas.data,
      qt_meta_data_FormEmpresas,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormEmpresas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormEmpresas::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormEmpresas.stringdata0))
        return static_cast<void*>(const_cast< FormEmpresas*>(this));
    return QDialog::qt_metacast(_clname);
}

int FormEmpresas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
