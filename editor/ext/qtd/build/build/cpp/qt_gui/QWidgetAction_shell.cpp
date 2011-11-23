#include <QVariant>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>
#include <qwidgetaction.h>

#include "QWidgetAction_shell.h"
#include <iostream>
#include <qwidgetaction.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QWidgetActionEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QWidgetActionEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QWidgetAction_createEntity(void *nativeId, void* dId)
{
    new QWidgetActionEntity((QObject*)nativeId, dId);
}

QWidgetAction_QtDShell::QWidgetAction_QtDShell(void *d_ptr, QObject*  parent0)
    : QWidgetAction(parent0),
      QObjectLink(this, d_ptr)
{
}

QWidgetAction_QtDShell::~QWidgetAction_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QWidgetAction_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QWidgetAction::metaObject();
}

int QWidgetAction_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QWidgetAction::qt_metacall(_c, _id, _a);
}

int QWidgetAction_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QWidgetAction::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QWidgetAction_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QWidgetAction_QtDShell *__qt_this = (QWidgetAction_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QWidgetAction_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidgetAction_createWidget_QWidget_dispatch, (void *dId, void* parent0))
QTD_FUNC(GUI, QWidgetAction_createWidget_QWidget_dispatch)
QWidget*  QWidgetAction_QtDShell::createWidget(QWidget*  parent0)
{
    return (QWidget*) qtd_QWidgetAction_createWidget_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )parent0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWidgetAction_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidgetAction_deleteWidget_QWidget_dispatch, (void *dId, void* widget0))
QTD_FUNC(GUI, QWidgetAction_deleteWidget_QWidget_dispatch)
void QWidgetAction_QtDShell::deleteWidget(QWidget*  widget0)
{
    qtd_QWidgetAction_deleteWidget_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )widget0);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QWidgetAction_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QWidgetAction_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QWidgetAction_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QWidgetAction_initCallBacks(VoidFunc *virts) {
    qtd_QWidgetAction_createWidget_QWidget_dispatch = (qtd_QWidgetAction_createWidget_QWidget_dispatch_t) virts[0];
    qtd_QWidgetAction_deleteWidget_QWidget_dispatch = (qtd_QWidgetAction_deleteWidget_QWidget_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QList<QWidget* >  QWidgetAction_QtDShell::__public_createdWidgets() const
{
    return QWidgetAction::createdWidgets();
}

QObject*  QWidgetAction_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QWidgetAction_QtDShell::__public_changed()
{
    QAction::changed();
}

void QWidgetAction_QtDShell::__public_hovered()
{
    QAction::hovered();
}

void QWidgetAction_QtDShell::__public_toggled(bool  arg__1)
{
    QAction::toggled((bool )arg__1);
}

void QWidgetAction_QtDShell::__public_triggered(bool  checked0)
{
    QAction::triggered((bool )checked0);
}

// Write virtual function overries used to decide on static/virtual calls
void QWidgetAction_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QWidget*  QWidgetAction_QtDShell::__override_createWidget(QWidget*  parent0, bool static_call)
{
    if (static_call) {
        return QWidgetAction::createWidget((QWidget* )parent0);
    } else {
        return createWidget((QWidget* )parent0);
    }
}

void QWidgetAction_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QWidgetAction_QtDShell::__override_deleteWidget(QWidget*  widget0, bool static_call)
{
    if (static_call) {
        QWidgetAction::deleteWidget((QWidget* )widget0);
    } else {
        deleteWidget((QWidget* )widget0);
    }
}

bool  QWidgetAction_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QWidgetAction::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QWidgetAction_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QWidgetAction::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QWidgetAction_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QWidgetAction::QWidgetAction(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QWidgetAction_QWidgetAction_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QWidgetAction_QtDShell *__qt_this = new QWidgetAction_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QWidgetAction::createdWidgets() const
QTD_EXTERN QTD_EXPORT void qtd_QWidgetAction_createdWidgets_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidgetAction_QtDShell *__qt_this = (QWidgetAction_QtDShell *) __this_nativeId;
    QList<QWidget* >  __qt_return_value = __qt_this->__public_createdWidgets();

QList<QWidget* > &__d_return_value_tmp = (*(QList<QWidget* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QWidgetAction::defaultWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidgetAction_defaultWidget_const
(void* __this_nativeId)
{
    QWidgetAction_QtDShell *__qt_this = (QWidgetAction_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->defaultWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidgetAction::releaseWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QWidgetAction_releaseWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QWidgetAction_QtDShell *__qt_this = (QWidgetAction_QtDShell *) __this_nativeId;
    __qt_this->releaseWidget((QWidget* )__qt_widget0);

}

// QWidgetAction::requestWidget(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QWidgetAction_requestWidget_QWidget
(void* __this_nativeId,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QWidgetAction_QtDShell *__qt_this = (QWidgetAction_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->requestWidget((QWidget* )__qt_parent0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidgetAction::setDefaultWidget(QWidget * w)
QTD_EXTERN QTD_EXPORT void qtd_QWidgetAction_setDefaultWidget_QWidget
(void* __this_nativeId,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QWidgetAction_QtDShell *__qt_this = (QWidgetAction_QtDShell *) __this_nativeId;
    __qt_this->setDefaultWidget((QWidget* )__qt_w0);

}

// QWidgetAction::createWidget(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QWidgetAction_createWidget_QWidget
(void* __this_nativeId,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QWidgetAction_QtDShell *__qt_this = (QWidgetAction_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QWidget*  __qt_return_value = __qt_this->__override_createWidget((QWidget* )__qt_parent0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidgetAction::deleteWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QWidgetAction_deleteWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QWidgetAction_QtDShell *__qt_this = (QWidgetAction_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_deleteWidget((QWidget* )__qt_widget0, __do_static_call);

}

// QWidgetAction::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QWidgetAction_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QWidgetAction_QtDShell *__qt_this = (QWidgetAction_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidgetAction::eventFilter(QObject * arg__1, QEvent * arg__2)
QTD_EXTERN QTD_EXPORT bool qtd_QWidgetAction_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* arg__1,
 void* arg__2)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QEvent*  __qt_arg__2 = (QEvent* ) arg__2;
    QWidgetAction_QtDShell *__qt_this = (QWidgetAction_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_arg__1, (QEvent* )__qt_arg__2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QWidgetAction_staticMetaObject() {
    return (void*)&QWidgetAction::staticMetaObject;
}


