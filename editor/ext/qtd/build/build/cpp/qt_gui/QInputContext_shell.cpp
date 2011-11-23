#include <QTextFormat>
#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QInputContext_shell.h"
#include <iostream>
#include <qinputcontext.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QInputContextEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QInputContextEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QInputContext_createEntity(void *nativeId, void* dId)
{
    new QInputContextEntity((QObject*)nativeId, dId);
}

QInputContext_QtDShell::QInputContext_QtDShell(void *d_ptr, QObject*  parent0)
    : QInputContext(parent0),
      QObjectLink(this, d_ptr)
{
}

QInputContext_QtDShell::~QInputContext_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QInputContext_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QInputContext::metaObject();
}

int QInputContext_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QInputContext::qt_metacall(_c, _id, _a);
}

int QInputContext_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QInputContext::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QInputContext_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QInputContext_actions_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(GUI, QInputContext_actions_dispatch)
QList<QAction* >  QInputContext_QtDShell::actions()
{
    QList<QAction* > __d_return_value;
    qtd_QInputContext_actions_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QInputContext_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QInputContext_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QInputContext_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QInputContext_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, bool, QInputContext_filterEvent_QEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QInputContext_filterEvent_QEvent_dispatch)
bool  QInputContext_QtDShell::filterEvent(const QEvent*  event0)
{
    return qtd_QInputContext_filterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QInputContext_font_const_dispatch, (void *dId))
QTD_FUNC(GUI, QInputContext_font_const_dispatch)
QFont  QInputContext_QtDShell::font() const
{
    QFont *__qt_return_value = (QFont*) qtd_QInputContext_font_const_dispatch(QObjectLink::getLink(this)->dId);
    return QFont(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QInputContext_identifierName_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(GUI, QInputContext_identifierName_dispatch)
QString  QInputContext_QtDShell::identifierName()
{
    DArray ret_str;
    qtd_QInputContext_identifierName_dispatch(QObjectLink::getLink(this)->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, bool, QInputContext_isComposing_const_dispatch, (void *dId))
QTD_FUNC(GUI, QInputContext_isComposing_const_dispatch)
bool  QInputContext_QtDShell::isComposing() const
{
    return qtd_QInputContext_isComposing_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QInputContext_language_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(GUI, QInputContext_language_dispatch)
QString  QInputContext_QtDShell::language()
{
    DArray ret_str;
    qtd_QInputContext_language_dispatch(QObjectLink::getLink(this)->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, void, QInputContext_mouseHandler_int_QMouseEvent_dispatch, (void *dId, int x0, void* event1))
QTD_FUNC(GUI, QInputContext_mouseHandler_int_QMouseEvent_dispatch)
void QInputContext_QtDShell::mouseHandler(int  x0, QMouseEvent*  event1)
{
    qtd_QInputContext_mouseHandler_int_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (int )x0, (QMouseEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QInputContext_reset_dispatch, (void *dId))
QTD_FUNC(GUI, QInputContext_reset_dispatch)
void QInputContext_QtDShell::reset()
{
    qtd_QInputContext_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QInputContext_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QInputContext_update_dispatch, (void *dId))
QTD_FUNC(GUI, QInputContext_update_dispatch)
void QInputContext_QtDShell::update()
{
    qtd_QInputContext_update_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QInputContext_widgetDestroyed_QWidget_dispatch, (void *dId, void* w0))
QTD_FUNC(GUI, QInputContext_widgetDestroyed_QWidget_dispatch)
void QInputContext_QtDShell::widgetDestroyed(QWidget*  w0)
{
    qtd_QInputContext_widgetDestroyed_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )w0);
}

QTD_EXTERN QTD_EXPORT void qtd_QInputContext_initCallBacks(VoidFunc *virts) {
    qtd_QInputContext_actions_dispatch = (qtd_QInputContext_actions_dispatch_t) virts[0];
    qtd_QInputContext_filterEvent_QEvent_dispatch = (qtd_QInputContext_filterEvent_QEvent_dispatch_t) virts[1];
    qtd_QInputContext_font_const_dispatch = (qtd_QInputContext_font_const_dispatch_t) virts[2];
    qtd_QInputContext_identifierName_dispatch = (qtd_QInputContext_identifierName_dispatch_t) virts[3];
    qtd_QInputContext_isComposing_const_dispatch = (qtd_QInputContext_isComposing_const_dispatch_t) virts[4];
    qtd_QInputContext_language_dispatch = (qtd_QInputContext_language_dispatch_t) virts[5];
    qtd_QInputContext_mouseHandler_int_QMouseEvent_dispatch = (qtd_QInputContext_mouseHandler_int_QMouseEvent_dispatch_t) virts[6];
    qtd_QInputContext_reset_dispatch = (qtd_QInputContext_reset_dispatch_t) virts[7];
    qtd_QInputContext_update_dispatch = (qtd_QInputContext_update_dispatch_t) virts[8];
    qtd_QInputContext_widgetDestroyed_QWidget_dispatch = (qtd_QInputContext_widgetDestroyed_QWidget_dispatch_t) virts[9];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QInputContext_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
QList<QAction* >  QInputContext_QtDShell::__override_actions(bool static_call)
{
    if (static_call) {
        return QInputContext::actions();
    } else {
        return actions();
    }
}

void QInputContext_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QInputContext_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QInputContext_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QInputContext_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QInputContext_QtDShell::__override_filterEvent(const QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QInputContext::filterEvent((const QEvent* )event0);
    } else {
        return filterEvent((const QEvent* )event0);
    }
}

QFont  QInputContext_QtDShell::__override_font(bool static_call) const
{
    if (static_call) {
        return QInputContext::font();
    } else {
        return font();
    }
}

QString  QInputContext_QtDShell::__override_identifierName(bool static_call)
{
    if (static_call) {
        return QString();
    } else {
        return identifierName();
    }
}

bool  QInputContext_QtDShell::__override_isComposing(bool static_call) const
{
    if (static_call) {
        return false;
    } else {
        return isComposing();
    }
}

QString  QInputContext_QtDShell::__override_language(bool static_call)
{
    if (static_call) {
        return QString();
    } else {
        return language();
    }
}

void QInputContext_QtDShell::__override_mouseHandler(int  x0, QMouseEvent*  event1, bool static_call)
{
    if (static_call) {
        QInputContext::mouseHandler((int )x0, (QMouseEvent* )event1);
    } else {
        mouseHandler((int )x0, (QMouseEvent* )event1);
    }
}

void QInputContext_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        return;
    } else {
        reset();
    }
}

void QInputContext_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QInputContext_QtDShell::__override_update(bool static_call)
{
    if (static_call) {
        QInputContext::update();
    } else {
        update();
    }
}

void QInputContext_QtDShell::__override_widgetDestroyed(QWidget*  w0, bool static_call)
{
    if (static_call) {
        QInputContext::widgetDestroyed((QWidget* )w0);
    } else {
        widgetDestroyed((QWidget* )w0);
    }
}

// ---externC---
// QInputContext::QInputContext(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QInputContext_QInputContext_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QInputContext_QtDShell *__qt_this = new QInputContext_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QInputContext::focusWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QInputContext_focusWidget_const
(void* __this_nativeId)
{
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->focusWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QInputContext::sendEvent(const QInputMethodEvent & event)
QTD_EXTERN QTD_EXPORT void qtd_QInputContext_sendEvent_QInputMethodEvent
(void* __this_nativeId,
 void* event0)
{
    const QInputMethodEvent&  __qt_event0 = (const QInputMethodEvent& ) * (QInputMethodEvent *) event0;
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    __qt_this->sendEvent((const QInputMethodEvent& )__qt_event0);

}

// QInputContext::standardFormat(QInputContext::StandardFormat s) const
QTD_EXTERN QTD_EXPORT void* qtd_QInputContext_standardFormat_StandardFormat_const
(void* __this_nativeId,
 int s0)
{
    QInputContext::StandardFormat __qt_s0 = (QInputContext::StandardFormat) s0;
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    QTextFormat  __qt_return_value = __qt_this->standardFormat((QInputContext::StandardFormat )__qt_s0);

    void* __d_return_value = (void*) new QTextFormat(__qt_return_value);

    return __d_return_value;
}

// QInputContext::actions()
QTD_EXTERN QTD_EXPORT void qtd_QInputContext_actions
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QList<QAction* >  __qt_return_value = __qt_this->__override_actions(__do_static_call);

QList<QAction* > &__d_return_value_tmp = (*(QList<QAction* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QInputContext::filterEvent(const QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QInputContext_filterEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    const QEvent*  __qt_event0 = (const QEvent* ) event0;
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_filterEvent((const QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputContext::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QInputContext_font_const
(void* __this_nativeId)
{
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QFont  __qt_return_value = __qt_this->__override_font(__do_static_call);

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QInputContext::identifierName()
QTD_EXTERN QTD_EXPORT void qtd_QInputContext_identifierName
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_identifierName(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputContext::isComposing() const
QTD_EXTERN QTD_EXPORT bool qtd_QInputContext_isComposing_const
(void* __this_nativeId)
{
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isComposing(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputContext::language()
QTD_EXTERN QTD_EXPORT void qtd_QInputContext_language
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_language(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputContext::mouseHandler(int x, QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QInputContext_mouseHandler_int_QMouseEvent
(void* __this_nativeId,
 int x0,
 void* event1)
{
    QMouseEvent*  __qt_event1 = (QMouseEvent* ) event1;
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseHandler((int )x0, (QMouseEvent* )__qt_event1, __do_static_call);

}

// QInputContext::reset()
QTD_EXTERN QTD_EXPORT void qtd_QInputContext_reset
(void* __this_nativeId)
{
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_reset(__do_static_call);

}

// QInputContext::update()
QTD_EXTERN QTD_EXPORT void qtd_QInputContext_update
(void* __this_nativeId)
{
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_update(__do_static_call);

}

// QInputContext::widgetDestroyed(QWidget * w)
QTD_EXTERN QTD_EXPORT void qtd_QInputContext_widgetDestroyed_QWidget
(void* __this_nativeId,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QInputContext_QtDShell *__qt_this = (QInputContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_widgetDestroyed((QWidget* )__qt_w0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QInputContext_staticMetaObject() {
    return (void*)&QInputContext::staticMetaObject;
}


