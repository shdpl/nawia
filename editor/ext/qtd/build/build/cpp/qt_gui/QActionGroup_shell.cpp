#include <QVariant>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QActionGroup_shell.h"
#include <iostream>
#include <qactiongroup.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QActionGroupEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QActionGroupEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QActionGroup_createEntity(void *nativeId, void* dId)
{
    new QActionGroupEntity((QObject*)nativeId, dId);
}

QActionGroup_QtDShell::QActionGroup_QtDShell(void *d_ptr, QObject*  parent0)
    : QActionGroup(parent0),
      QObjectLink(this, d_ptr)
{
}

QActionGroup_QtDShell::~QActionGroup_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QActionGroup_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QActionGroup::metaObject();
}

int QActionGroup_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QActionGroup::qt_metacall(_c, _id, _a);
}

int QActionGroup_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QActionGroup::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QActionGroup_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QActionGroup_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QActionGroup_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QActionGroup_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QActionGroup_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QActionGroup_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QActionGroup_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QActionGroup_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QActionGroup_QtDShell::__public_hovered(QAction*  arg__1)
{
    QActionGroup::hovered((QAction* )arg__1);
}

void QActionGroup_QtDShell::__public_triggered(QAction*  arg__1)
{
    QActionGroup::triggered((QAction* )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QActionGroup_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QActionGroup_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QActionGroup_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QActionGroup_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QActionGroup_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QActionGroup::hovered(QAction * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QActionGroup_hovered_QAction
(void* __this_nativeId,
 void* arg__1)
{
    QAction*  __qt_arg__1 = (QAction* ) arg__1;
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_hovered((QAction* )__qt_arg__1);

}

// QActionGroup::triggered(QAction * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QActionGroup_triggered_QAction
(void* __this_nativeId,
 void* arg__1)
{
    QAction*  __qt_arg__1 = (QAction* ) arg__1;
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_triggered((QAction* )__qt_arg__1);

}

// ---externC---
// QActionGroup::QActionGroup(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QActionGroup_QActionGroup_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QActionGroup_QtDShell *__qt_this = new QActionGroup_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QActionGroup::actions() const
QTD_EXTERN QTD_EXPORT void qtd_QActionGroup_actions_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    QList<QAction* >  __qt_return_value = __qt_this->actions();

QList<QAction* > &__d_return_value_tmp = (*(QList<QAction* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QActionGroup::addAction(QAction * a)
QTD_EXTERN QTD_EXPORT void* qtd_QActionGroup_addAction_QAction
(void* __this_nativeId,
 void* a0)
{
    QAction*  __qt_a0 = (QAction* ) a0;
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addAction((QAction* )__qt_a0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QActionGroup::addAction(const QIcon & icon, const QString & text)
QTD_EXTERN QTD_EXPORT void* qtd_QActionGroup_addAction_QIcon_string
(void* __this_nativeId,
 void* icon0,
 DArray text1)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addAction((const QIcon& )__qt_icon0, (const QString& )__qt_text1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QActionGroup::addAction(const QString & text)
QTD_EXTERN QTD_EXPORT void* qtd_QActionGroup_addAction_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addAction((const QString& )__qt_text0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QActionGroup::checkedAction() const
QTD_EXTERN QTD_EXPORT void* qtd_QActionGroup_checkedAction_const
(void* __this_nativeId)
{
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->checkedAction();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QActionGroup::isEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QActionGroup_isEnabled_const
(void* __this_nativeId)
{
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QActionGroup::isExclusive() const
QTD_EXTERN QTD_EXPORT bool qtd_QActionGroup_isExclusive_const
(void* __this_nativeId)
{
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isExclusive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QActionGroup::isVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QActionGroup_isVisible_const
(void* __this_nativeId)
{
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QActionGroup::removeAction(QAction * a)
QTD_EXTERN QTD_EXPORT void qtd_QActionGroup_removeAction_QAction
(void* __this_nativeId,
 void* a0)
{
    QAction*  __qt_a0 = (QAction* ) a0;
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    __qt_this->removeAction((QAction* )__qt_a0);

}

// QActionGroup::setDisabled(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QActionGroup_setDisabled_bool
(void* __this_nativeId,
 bool b0)
{
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    __qt_this->setDisabled((bool )b0);

}

// QActionGroup::setEnabled(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QActionGroup_setEnabled_bool
(void* __this_nativeId,
 bool arg__1)
{
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    __qt_this->setEnabled((bool )arg__1);

}

// QActionGroup::setExclusive(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QActionGroup_setExclusive_bool
(void* __this_nativeId,
 bool arg__1)
{
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    __qt_this->setExclusive((bool )arg__1);

}

// QActionGroup::setVisible(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QActionGroup_setVisible_bool
(void* __this_nativeId,
 bool arg__1)
{
    QActionGroup_QtDShell *__qt_this = (QActionGroup_QtDShell *) __this_nativeId;
    __qt_this->setVisible((bool )arg__1);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QActionGroup_staticMetaObject() {
    return (void*)&QActionGroup::staticMetaObject;
}


