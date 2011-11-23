#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qvalidator.h>
#include <qvariant.h>

#include "QDoubleValidator_shell.h"
#include <iostream>
#include <qvalidator.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QDoubleValidatorEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QDoubleValidatorEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QDoubleValidator_createEntity(void *nativeId, void* dId)
{
    new QDoubleValidatorEntity((QObject*)nativeId, dId);
}

QDoubleValidator_QtDShell::QDoubleValidator_QtDShell(void *d_ptr, QObject*  parent0)
    : QDoubleValidator(parent0),
      QObjectLink(this, d_ptr)
{
}

QDoubleValidator_QtDShell::QDoubleValidator_QtDShell(void *d_ptr, double  bottom0, double  top1, int  decimals2, QObject*  parent3)
    : QDoubleValidator(bottom0, top1, decimals2, parent3),
      QObjectLink(this, d_ptr)
{
}

QDoubleValidator_QtDShell::~QDoubleValidator_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QDoubleValidator_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QDoubleValidator::metaObject();
}

int QDoubleValidator_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QDoubleValidator::qt_metacall(_c, _id, _a);
}

int QDoubleValidator_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QDoubleValidator::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QDoubleValidator_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QDoubleValidator_QtDShell *__qt_this = (QDoubleValidator_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QDoubleValidator_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDoubleValidator_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QDoubleValidator_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QDoubleValidator_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QValidator_fixup_nativepointerstring_const_dispatch, (void *dId, void* arg__1))
void QDoubleValidator_QtDShell::fixup(QString&  arg__1) const
{
    qtd_QValidator_fixup_nativepointerstring_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDoubleValidator_setRange_double_double_int_dispatch, (void *dId, double bottom0, double top1, int decimals2))
QTD_FUNC(GUI, QDoubleValidator_setRange_double_double_int_dispatch)
void QDoubleValidator_QtDShell::setRange(double  bottom0, double  top1, int  decimals2)
{
    qtd_QDoubleValidator_setRange_double_double_int_dispatch(QObjectLink::getLink(this)->dId, (double )bottom0, (double )top1, (int )decimals2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QDoubleValidator_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QValidator_validate_nativepointerstring_nativepointerint_const_dispatch, (void *dId, void* arg__1, int * arg__2))
QValidator::State  QDoubleValidator_QtDShell::validate(QString&  arg__1, int&  arg__2) const
{
    return (QValidator::State) qtd_QValidator_validate_nativepointerstring_nativepointerint_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )arg__1, &(int& )arg__2);
}

QTD_EXTERN QTD_EXPORT void qtd_QDoubleValidator_initCallBacks(VoidFunc *virts) {
    qtd_QDoubleValidator_setRange_double_double_int_dispatch = (qtd_QDoubleValidator_setRange_double_double_int_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QDoubleValidator_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QDoubleValidator_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QDoubleValidator_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QDoubleValidator_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QDoubleValidator_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QDoubleValidator_QtDShell::__override_fixup(QString&  arg__1, bool static_call) const
{
    if (static_call) {
        QValidator::fixup((QString& )arg__1);
    } else {
        fixup((QString& )arg__1);
    }
}

void QDoubleValidator_QtDShell::__override_setRange(double  bottom0, double  top1, int  decimals2, bool static_call)
{
    if (static_call) {
        QDoubleValidator::setRange((double )bottom0, (double )top1, (int )decimals2);
    } else {
        setRange((double )bottom0, (double )top1, (int )decimals2);
    }
}

void QDoubleValidator_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

int  QDoubleValidator_QtDShell::__override_validate(QString&  arg__1, int&  arg__2, bool static_call) const
{
    if (static_call) {
        return QDoubleValidator::validate((QString& )arg__1, (int& )arg__2);
    } else {
        return validate((QString& )arg__1, (int& )arg__2);
    }
}

// ---externC---
// QDoubleValidator::QDoubleValidator(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDoubleValidator_QDoubleValidator_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QDoubleValidator_QtDShell *__qt_this = new QDoubleValidator_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QDoubleValidator::QDoubleValidator(double bottom, double top, int decimals, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDoubleValidator_QDoubleValidator_double_double_int_QObject
(void *d_ptr,
 double bottom0,
 double top1,
 int decimals2,
 void* parent3)
{
    QObject*  __qt_parent3 = (QObject* ) parent3;
    QDoubleValidator_QtDShell *__qt_this = new QDoubleValidator_QtDShell(d_ptr, (double )bottom0, (double )top1, (int )decimals2, (QObject* )__qt_parent3);
    return (void *) __qt_this;

}

// QDoubleValidator::bottom() const
QTD_EXTERN QTD_EXPORT double qtd_QDoubleValidator_bottom_const
(void* __this_nativeId)
{
    QDoubleValidator_QtDShell *__qt_this = (QDoubleValidator_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->bottom();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDoubleValidator::decimals() const
QTD_EXTERN QTD_EXPORT int qtd_QDoubleValidator_decimals_const
(void* __this_nativeId)
{
    QDoubleValidator_QtDShell *__qt_this = (QDoubleValidator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->decimals();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDoubleValidator::notation() const
QTD_EXTERN QTD_EXPORT int qtd_QDoubleValidator_notation_const
(void* __this_nativeId)
{
    QDoubleValidator_QtDShell *__qt_this = (QDoubleValidator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->notation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDoubleValidator::setBottom(double arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleValidator_setBottom_double
(void* __this_nativeId,
 double arg__1)
{
    QDoubleValidator_QtDShell *__qt_this = (QDoubleValidator_QtDShell *) __this_nativeId;
    __qt_this->setBottom((double )arg__1);

}

// QDoubleValidator::setDecimals(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleValidator_setDecimals_int
(void* __this_nativeId,
 int arg__1)
{
    QDoubleValidator_QtDShell *__qt_this = (QDoubleValidator_QtDShell *) __this_nativeId;
    __qt_this->setDecimals((int )arg__1);

}

// QDoubleValidator::setNotation(QDoubleValidator::Notation arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleValidator_setNotation_Notation
(void* __this_nativeId,
 int arg__1)
{
    QDoubleValidator::Notation __qt_arg__1 = (QDoubleValidator::Notation) arg__1;
    QDoubleValidator_QtDShell *__qt_this = (QDoubleValidator_QtDShell *) __this_nativeId;
    __qt_this->setNotation((QDoubleValidator::Notation )__qt_arg__1);

}

// QDoubleValidator::setTop(double arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleValidator_setTop_double
(void* __this_nativeId,
 double arg__1)
{
    QDoubleValidator_QtDShell *__qt_this = (QDoubleValidator_QtDShell *) __this_nativeId;
    __qt_this->setTop((double )arg__1);

}

// QDoubleValidator::top() const
QTD_EXTERN QTD_EXPORT double qtd_QDoubleValidator_top_const
(void* __this_nativeId)
{
    QDoubleValidator_QtDShell *__qt_this = (QDoubleValidator_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->top();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDoubleValidator::setRange(double bottom, double top, int decimals)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleValidator_setRange_double_double_int
(void* __this_nativeId,
 double bottom0,
 double top1,
 int decimals2)
{
    QDoubleValidator_QtDShell *__qt_this = (QDoubleValidator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setRange((double )bottom0, (double )top1, (int )decimals2, __do_static_call);

}

// QDoubleValidator::validate(QString & arg__1, int & arg__2) const
QTD_EXTERN QTD_EXPORT int qtd_QDoubleValidator_validate_nativepointerstring_nativepointerint_const
(void* __this_nativeId,
 DArray arg__1,
 int * arg__2)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    int&  __qt_arg__2 = (int& ) * (int *) arg__2;
    QDoubleValidator_QtDShell *__qt_this = (QDoubleValidator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_validate((QString& )__qt_arg__1, (int& )__qt_arg__2, __do_static_call);

    qtd_toUtf8(__qt_arg__1.utf16(), __qt_arg__1.size(), &arg__1);
    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QDoubleValidator_staticMetaObject() {
    return (void*)&QDoubleValidator::staticMetaObject;
}


