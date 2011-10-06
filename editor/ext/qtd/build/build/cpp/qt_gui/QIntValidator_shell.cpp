#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qvalidator.h>
#include <qvariant.h>

#include "QIntValidator_shell.h"
#include <iostream>
#include <qvalidator.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QIntValidatorEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QIntValidatorEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QIntValidator_createEntity(void *nativeId, void* dId)
{
    new QIntValidatorEntity((QObject*)nativeId, dId);
}

QIntValidator_QtDShell::QIntValidator_QtDShell(void *d_ptr, QObject*  parent0)
    : QIntValidator(parent0),
      QObjectLink(this, d_ptr)
{
}

QIntValidator_QtDShell::QIntValidator_QtDShell(void *d_ptr, int  bottom0, int  top1, QObject*  parent2)
    : QIntValidator(bottom0, top1, parent2),
      QObjectLink(this, d_ptr)
{
}

QIntValidator_QtDShell::~QIntValidator_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QIntValidator_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QIntValidator::metaObject();
}

int QIntValidator_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QIntValidator::qt_metacall(_c, _id, _a);
}

int QIntValidator_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QIntValidator::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QIntValidator_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QIntValidator_QtDShell *__qt_this = (QIntValidator_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QIntValidator_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QIntValidator_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QIntValidator_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QIntValidator_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QValidator_fixup_nativepointerstring_const_dispatch, (void *dId, void* input0))
void QIntValidator_QtDShell::fixup(QString&  input0) const
{
    qtd_QValidator_fixup_nativepointerstring_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )input0);
}

QTD_FUNC_DECL(GUI, void, QIntValidator_setRange_int_int_dispatch, (void *dId, int bottom0, int top1))
QTD_FUNC(GUI, QIntValidator_setRange_int_int_dispatch)
void QIntValidator_QtDShell::setRange(int  bottom0, int  top1)
{
    qtd_QIntValidator_setRange_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )bottom0, (int )top1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QIntValidator_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QValidator_validate_nativepointerstring_nativepointerint_const_dispatch, (void *dId, void* arg__1, int * arg__2))
QValidator::State  QIntValidator_QtDShell::validate(QString&  arg__1, int&  arg__2) const
{
    return (QValidator::State) qtd_QValidator_validate_nativepointerstring_nativepointerint_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )arg__1, &(int& )arg__2);
}

QTD_EXTERN QTD_EXPORT void qtd_QIntValidator_initCallBacks(VoidFunc *virts) {
    qtd_QIntValidator_setRange_int_int_dispatch = (qtd_QIntValidator_setRange_int_int_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QIntValidator_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QIntValidator_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QIntValidator_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QIntValidator_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QIntValidator_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QIntValidator_QtDShell::__override_fixup(QString&  input0, bool static_call) const
{
    if (static_call) {
        QIntValidator::fixup((QString& )input0);
    } else {
        fixup((QString& )input0);
    }
}

void QIntValidator_QtDShell::__override_setRange(int  bottom0, int  top1, bool static_call)
{
    if (static_call) {
        QIntValidator::setRange((int )bottom0, (int )top1);
    } else {
        setRange((int )bottom0, (int )top1);
    }
}

void QIntValidator_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

int  QIntValidator_QtDShell::__override_validate(QString&  arg__1, int&  arg__2, bool static_call) const
{
    if (static_call) {
        return QIntValidator::validate((QString& )arg__1, (int& )arg__2);
    } else {
        return validate((QString& )arg__1, (int& )arg__2);
    }
}

// ---externC---
// QIntValidator::QIntValidator(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QIntValidator_QIntValidator_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QIntValidator_QtDShell *__qt_this = new QIntValidator_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QIntValidator::QIntValidator(int bottom, int top, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QIntValidator_QIntValidator_int_int_QObject
(void *d_ptr,
 int bottom0,
 int top1,
 void* parent2)
{
    QObject*  __qt_parent2 = (QObject* ) parent2;
    QIntValidator_QtDShell *__qt_this = new QIntValidator_QtDShell(d_ptr, (int )bottom0, (int )top1, (QObject* )__qt_parent2);
    return (void *) __qt_this;

}

// QIntValidator::bottom() const
QTD_EXTERN QTD_EXPORT int qtd_QIntValidator_bottom_const
(void* __this_nativeId)
{
    QIntValidator_QtDShell *__qt_this = (QIntValidator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->bottom();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIntValidator::setBottom(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QIntValidator_setBottom_int
(void* __this_nativeId,
 int arg__1)
{
    QIntValidator_QtDShell *__qt_this = (QIntValidator_QtDShell *) __this_nativeId;
    __qt_this->setBottom((int )arg__1);

}

// QIntValidator::setTop(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QIntValidator_setTop_int
(void* __this_nativeId,
 int arg__1)
{
    QIntValidator_QtDShell *__qt_this = (QIntValidator_QtDShell *) __this_nativeId;
    __qt_this->setTop((int )arg__1);

}

// QIntValidator::top() const
QTD_EXTERN QTD_EXPORT int qtd_QIntValidator_top_const
(void* __this_nativeId)
{
    QIntValidator_QtDShell *__qt_this = (QIntValidator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->top();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIntValidator::fixup(QString & input) const
QTD_EXTERN QTD_EXPORT void qtd_QIntValidator_fixup_nativepointerstring_const
(void* __this_nativeId,
 DArray input0)
{
    QString __qt_input0 = QString::fromUtf8((const char *)input0.ptr, input0.length);
    QIntValidator_QtDShell *__qt_this = (QIntValidator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_fixup((QString& )__qt_input0, __do_static_call);
    qtd_toUtf8(__qt_input0.utf16(), __qt_input0.size(), &input0);

}

// QIntValidator::setRange(int bottom, int top)
QTD_EXTERN QTD_EXPORT void qtd_QIntValidator_setRange_int_int
(void* __this_nativeId,
 int bottom0,
 int top1)
{
    QIntValidator_QtDShell *__qt_this = (QIntValidator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setRange((int )bottom0, (int )top1, __do_static_call);

}

// QIntValidator::validate(QString & arg__1, int & arg__2) const
QTD_EXTERN QTD_EXPORT int qtd_QIntValidator_validate_nativepointerstring_nativepointerint_const
(void* __this_nativeId,
 DArray arg__1,
 int * arg__2)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    int&  __qt_arg__2 = (int& ) * (int *) arg__2;
    QIntValidator_QtDShell *__qt_this = (QIntValidator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_validate((QString& )__qt_arg__1, (int& )__qt_arg__2, __do_static_call);

    qtd_toUtf8(__qt_arg__1.utf16(), __qt_arg__1.size(), &arg__1);
    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QIntValidator_staticMetaObject() {
    return (void*)&QIntValidator::staticMetaObject;
}


