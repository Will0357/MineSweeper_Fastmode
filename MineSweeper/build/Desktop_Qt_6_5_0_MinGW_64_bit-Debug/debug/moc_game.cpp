/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../game.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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
struct qt_meta_stringdata_CLASSgameENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSgameENDCLASS = QtMocHelpers::stringData(
    "game",
    "s_start",
    "",
    "s_victory",
    "s_gameover",
    "s_changeLcdNum",
    "d",
    "s_notFound",
    "onGameOver",
    "r",
    "c",
    "onFindOthers",
    "onChangeMarkNum",
    "onCheckGame",
    "onAddDugNum"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSgameENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[5];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[11];
    char stringdata5[15];
    char stringdata6[2];
    char stringdata7[11];
    char stringdata8[11];
    char stringdata9[2];
    char stringdata10[2];
    char stringdata11[13];
    char stringdata12[16];
    char stringdata13[12];
    char stringdata14[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSgameENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSgameENDCLASS_t qt_meta_stringdata_CLASSgameENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "game"
        QT_MOC_LITERAL(5, 7),  // "s_start"
        QT_MOC_LITERAL(13, 0),  // ""
        QT_MOC_LITERAL(14, 9),  // "s_victory"
        QT_MOC_LITERAL(24, 10),  // "s_gameover"
        QT_MOC_LITERAL(35, 14),  // "s_changeLcdNum"
        QT_MOC_LITERAL(50, 1),  // "d"
        QT_MOC_LITERAL(52, 10),  // "s_notFound"
        QT_MOC_LITERAL(63, 10),  // "onGameOver"
        QT_MOC_LITERAL(74, 1),  // "r"
        QT_MOC_LITERAL(76, 1),  // "c"
        QT_MOC_LITERAL(78, 12),  // "onFindOthers"
        QT_MOC_LITERAL(91, 15),  // "onChangeMarkNum"
        QT_MOC_LITERAL(107, 11),  // "onCheckGame"
        QT_MOC_LITERAL(119, 11)   // "onAddDugNum"
    },
    "game",
    "s_start",
    "",
    "s_victory",
    "s_gameover",
    "s_changeLcdNum",
    "d",
    "s_notFound",
    "onGameOver",
    "r",
    "c",
    "onFindOthers",
    "onChangeMarkNum",
    "onCheckGame",
    "onAddDugNum"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSgameENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,
       4,    0,   76,    2, 0x06,    3 /* Public */,
       5,    1,   77,    2, 0x06,    4 /* Public */,
       7,    0,   80,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    2,   81,    2, 0x0a,    7 /* Public */,
      11,    2,   86,    2, 0x0a,   10 /* Public */,
      12,    1,   91,    2, 0x0a,   13 /* Public */,
      13,    0,   94,    2, 0x0a,   15 /* Public */,
      14,    0,   95,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject game::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_CLASSgameENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSgameENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSgameENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<game, std::true_type>,
        // method 's_start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 's_victory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 's_gameover'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 's_changeLcdNum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 's_notFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onGameOver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onFindOthers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onChangeMarkNum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onCheckGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAddDugNum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<game *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->s_start(); break;
        case 1: _t->s_victory(); break;
        case 2: _t->s_gameover(); break;
        case 3: _t->s_changeLcdNum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->s_notFound(); break;
        case 5: _t->onGameOver((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->onFindOthers((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->onChangeMarkNum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->onCheckGame(); break;
        case 9: _t->onAddDugNum(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (game::*)();
            if (_t _q_method = &game::s_start; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (game::*)();
            if (_t _q_method = &game::s_victory; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (game::*)();
            if (_t _q_method = &game::s_gameover; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (game::*)(int );
            if (_t _q_method = &game::s_changeLcdNum; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (game::*)();
            if (_t _q_method = &game::s_notFound; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSgameENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void game::s_start()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void game::s_victory()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void game::s_gameover()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void game::s_changeLcdNum(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void game::s_notFound()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
