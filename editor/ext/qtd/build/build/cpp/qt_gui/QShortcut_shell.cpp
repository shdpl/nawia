#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QShortcut_shell.h"
#include <iostream>
#include <qshortcut.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QShortcutEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QShortcutEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QShortcut_createEntity(void *nativeId, void* dId)
{
    new QShortcutEntity((QObject*)nativeId, dId);
}

QShortcut_QtDShell::QShortcut_QtDShell(void *d_ptr, QWidget*  parent0)
    : QShortcut(parent0),
      QObjectLink(this, d_ptr)
{
}

QShortcut_QtDShell::QShortcut_QtDShell(void *d_ptr, const QKeySequence&  key0, QWidget*  parent1, const char*  member2, const char*  ambiguousMember3, Qt::ShortcutContext  context4)
    : QShortcut(key0, parent1, member2, ambiguousMember3, context4),
      QObjectLink(this, d_ptr)
{
}

QShortcut_QtDShell::~QShortcut_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QShortcut_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QShortcut::metaObject();
}

int QShortcut_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QShortcut::qt_metacall(_c, _id, _a);
}

int QShortcut_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QShortcut::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QShortcut_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QShortcut_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QShortcut_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QShortcut_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QShortcut_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QShortcut_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QShortcut_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QShortcut_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QShortcut_QtDShell::__public_activated()
{
    QShortcut::activated();
}

void QShortcut_QtDShell::__public_activatedAmbiguously()
{
    QShortcut::activatedAmbiguously();
}

// Write virtual function overries used to decide on static/virtual calls
void QShortcut_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QShortcut_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QShortcut_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QShortcut::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QShortcut_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QShortcut_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QShortcut::activated()
QTD_EXTERN QTD_EXPORT void qtd_QShortcut_activated
(void* __this_nativeId)
{
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    __qt_this->__public_activated();

}

// QShortcut::activatedAmbiguously()
QTD_EXTERN QTD_EXPORT void qtd_QShortcut_activatedAmbiguously
(void* __this_nativeId)
{
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    __qt_this->__public_activatedAmbiguously();

}

// ---externC---
// QShortcut::QShortcut(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QShortcut_QShortcut_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QShortcut_QtDShell *__qt_this = new QShortcut_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QShortcut::QShortcut(const QKeySequence & key, QWidget * parent_, const char * member, const char * ambiguousMember, Qt::ShortcutContext context)
QTD_EXTERN QTD_EXPORT void* qtd_QShortcut_QShortcut_QKeySequence_QWidget_nativepointerchar_nativepointerchar_ShortcutContext
(void *d_ptr,
 void* key0,
 void* parent1,
 char* member2,
 char* ambiguousMember3,
 int context4)
{
    const QKeySequence&  __qt_key0 = (const QKeySequence& ) *(QKeySequence *)key0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    const char*  __qt_member2 = (const char* ) member2;
    const char*  __qt_ambiguousMember3 = (const char* ) ambiguousMember3;
    Qt::ShortcutContext __qt_context4 = (Qt::ShortcutContext) context4;
    QShortcut_QtDShell *__qt_this = new QShortcut_QtDShell(d_ptr, (const QKeySequence& )__qt_key0, (QWidget* )__qt_parent1, (const char* )__qt_member2, (const char* )__qt_ambiguousMember3, (Qt::ShortcutContext )__qt_context4);
    return (void *) __qt_this;

}

// QShortcut::autoRepeat() const
QTD_EXTERN QTD_EXPORT bool qtd_QShortcut_autoRepeat_const
(void* __this_nativeId)
{
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoRepeat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QShortcut::context()
QTD_EXTERN QTD_EXPORT int qtd_QShortcut_context
(void* __this_nativeId)
{
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->context();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QShortcut::id() const
QTD_EXTERN QTD_EXPORT int qtd_QShortcut_id_const
(void* __this_nativeId)
{
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->id();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QShortcut::isEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QShortcut_isEnabled_const
(void* __this_nativeId)
{
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QShortcut::key() const
QTD_EXTERN QTD_EXPORT void* qtd_QShortcut_key_const
(void* __this_nativeId)
{
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    QKeySequence  __qt_return_value = __qt_this->key();

    void* __d_return_value = (void*) new QKeySequence(__qt_return_value);

    return __d_return_value;
}

// QShortcut::parentWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QShortcut_parentWidget_const
(void* __this_nativeId)
{
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->parentWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QShortcut::setAutoRepeat(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QShortcut_setAutoRepeat_bool
(void* __this_nativeId,
 bool on0)
{
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    __qt_this->setAutoRepeat((bool )on0);

}

// QShortcut::setContext(Qt::ShortcutContext context)
QTD_EXTERN QTD_EXPORT void qtd_QShortcut_setContext_ShortcutContext
(void* __this_nativeId,
 int context0)
{
    Qt::ShortcutContext __qt_context0 = (Qt::ShortcutContext) context0;
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    __qt_this->setContext((Qt::ShortcutContext )__qt_context0);

}

// QShortcut::setEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QShortcut_setEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    __qt_this->setEnabled((bool )enable0);

}

// QShortcut::setKey(const QKeySequence & key)
QTD_EXTERN QTD_EXPORT void qtd_QShortcut_setKey_QKeySequence
(void* __this_nativeId,
 void* key0)
{
    const QKeySequence&  __qt_key0 = (const QKeySequence& ) *(QKeySequence *)key0;
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    __qt_this->setKey((const QKeySequence& )__qt_key0);

}

// QShortcut::setWhatsThis(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QShortcut_setWhatsThis_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    __qt_this->setWhatsThis((const QString& )__qt_text0);

}

// QShortcut::whatsThis() const
QTD_EXTERN QTD_EXPORT void qtd_QShortcut_whatsThis_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->whatsThis();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QShortcut::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QShortcut_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QShortcut_QtDShell *__qt_this = (QShortcut_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QShortcut_staticMetaObject() {
    return (void*)&QShortcut::staticMetaObject;
}


