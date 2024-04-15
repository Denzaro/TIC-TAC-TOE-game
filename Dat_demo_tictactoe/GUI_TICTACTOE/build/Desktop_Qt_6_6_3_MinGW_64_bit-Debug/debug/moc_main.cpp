/****************************************************************************
** Meta object code from reading C++ file 'main.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../main.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGUI_newsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGUI_newsENDCLASS = QtMocHelpers::stringData(
    "GUI_news",
    "show_GUI_news",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGUI_newsENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[9];
    char stringdata1[14];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGUI_newsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGUI_newsENDCLASS_t qt_meta_stringdata_CLASSGUI_newsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "GUI_news"
        QT_MOC_LITERAL(9, 13),  // "show_GUI_news"
        QT_MOC_LITERAL(23, 0)   // ""
    },
    "GUI_news",
    "show_GUI_news",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGUI_newsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GUI_news::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGUI_newsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGUI_newsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGUI_newsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GUI_news, std::true_type>,
        // method 'show_GUI_news'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GUI_news::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GUI_news *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_GUI_news(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *GUI_news::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUI_news::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGUI_newsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GUI_news::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGUI_optionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGUI_optionENDCLASS = QtMocHelpers::stringData(
    "GUI_option",
    "show_GUI_Option",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGUI_optionENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGUI_optionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGUI_optionENDCLASS_t qt_meta_stringdata_CLASSGUI_optionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "GUI_option"
        QT_MOC_LITERAL(11, 15),  // "show_GUI_Option"
        QT_MOC_LITERAL(27, 0)   // ""
    },
    "GUI_option",
    "show_GUI_Option",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGUI_optionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GUI_option::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGUI_optionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGUI_optionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGUI_optionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GUI_option, std::true_type>,
        // method 'show_GUI_Option'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GUI_option::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GUI_option *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_GUI_Option(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *GUI_option::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUI_option::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGUI_optionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GUI_option::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGUI_ResultENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGUI_ResultENDCLASS = QtMocHelpers::stringData(
    "GUI_Result",
    "show_result",
    "",
    "win",
    "lose"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGUI_ResultENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGUI_ResultENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGUI_ResultENDCLASS_t qt_meta_stringdata_CLASSGUI_ResultENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "GUI_Result"
        QT_MOC_LITERAL(11, 11),  // "show_result"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 3),  // "win"
        QT_MOC_LITERAL(28, 4)   // "lose"
    },
    "GUI_Result",
    "show_result",
    "",
    "win",
    "lose"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGUI_ResultENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject GUI_Result::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGUI_ResultENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGUI_ResultENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGUI_ResultENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GUI_Result, std::true_type>,
        // method 'show_result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void GUI_Result::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GUI_Result *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_result((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *GUI_Result::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUI_Result::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGUI_ResultENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GUI_Result::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGameInterfaceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGameInterfaceENDCLASS = QtMocHelpers::stringData(
    "GameInterface"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGameInterfaceENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGameInterfaceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGameInterfaceENDCLASS_t qt_meta_stringdata_CLASSGameInterfaceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13)   // "GameInterface"
    },
    "GameInterface"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGameInterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject GameInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGameInterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGameInterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGameInterfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GameInterface, std::true_type>
    >,
    nullptr
} };

void GameInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *GameInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGameInterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Rules"))
        return static_cast< Rules*>(this);
    return QObject::qt_metacast(_clname);
}

int GameInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
