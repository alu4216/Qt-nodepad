/****************************************************************************
** Meta object code from reading C++ file 'notepadwindows.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Qt-nodepad/notepadwindows.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notepadwindows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NotepadWindows_t {
    QByteArrayData data[7];
    char stringdata[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_NotepadWindows_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_NotepadWindows_t qt_meta_stringdata_NotepadWindows = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 7),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 9),
QT_MOC_LITERAL(4, 34, 8),
QT_MOC_LITERAL(5, 43, 8),
QT_MOC_LITERAL(6, 52, 10)
    },
    "NotepadWindows\0alAbrir\0\0alGuardar\0"
    "alCerrar\0alFuente\0alAcercade\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotepadWindows[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08,
       3,    0,   40,    2, 0x08,
       4,    0,   41,    2, 0x08,
       5,    0,   42,    2, 0x08,
       6,    0,   43,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NotepadWindows::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NotepadWindows *_t = static_cast<NotepadWindows *>(_o);
        switch (_id) {
        case 0: _t->alAbrir(); break;
        case 1: _t->alGuardar(); break;
        case 2: _t->alCerrar(); break;
        case 3: _t->alFuente(); break;
        case 4: _t->alAcercade(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NotepadWindows::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NotepadWindows.data,
      qt_meta_data_NotepadWindows,  qt_static_metacall, 0, 0}
};


const QMetaObject *NotepadWindows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotepadWindows::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NotepadWindows.stringdata))
        return static_cast<void*>(const_cast< NotepadWindows*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NotepadWindows::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
