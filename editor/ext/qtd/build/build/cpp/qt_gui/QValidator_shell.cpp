#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qvalidator.h>
#include <qvariant.h>

#include "QValidator_shell.h"
#include <iostream>
#include <qvalidator.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QValidatorEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QValidatorEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QValidator_createEntity(void *nativeId, void* dId)
{
    new QValidatorEntity((QObject*)nativeId, dId);
}

QValidator_QtDShell::QValidator_QtDShell(void *d_ptr, QObject*  parent0)
    : QValidator(parent0),
      QObjectLink(this, d_ptr)
{
}

QValidator_QtDShell::~QValidator_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QValidator_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QValidator::metaObject();
}

int QValidator_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QValidator::qt_metacall(_c, _id, _a);
}

int QValidator_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QValidator::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QValidator_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QValidator_QtDShell *__qt_this = (QValidator_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QValidator_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QValidator_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QValidator_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QValidator_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QValidator_fixup_nativepointerstring_const_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QValidator_fixup_nativepointerstring_const_dispatch)
void QValidator_QtDShell::fixup(QString&  arg__1) const
{
    qtd_QValidator_fixup_nativepointerstring_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QValidator_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QValidator_validate_nativepointerstring_nativepointerint_const_dispatch, (void *dId, void* arg__1, int * arg__2))
QTD_FUNC(GUI, QValidator_validate_nativepointerstring_nativepointerint_const_dispatch)
QValidator::State  QValidator_QtDShell::validate(QString&  arg__1, int&  arg__2) const
{
    return (QValidator::State) qtd_QValidator_validate_nativepointerstring_nativepointerint_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )arg__1, &(int& )arg__2);
}

QTD_EXTERN QTD_EXPORT void qtd_QValidator_initCallBacks(VoidFunc *virts) {
    qtd_QValidator_fixup_nativepointerstring_const_dispatch = (qtd_QValidator_fixup_nativepointerstring_const_dispatch_t) virts[0];
    qtd_QValidator_validate_nativepointerstring_nativepointerint_const_dispatch = (qtd_QValidator_validate_nativepointerstring_nativepointerint_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QValidator_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QValidator_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QValidator_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QValidator_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QValidator_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QValidator_QtDShell::__override_fixup(QString&  arg__1, bool static_call) const
{
    if (static_call) {
        QValidator::fixup((QString& )arg__1);
    } else {
        fixup((QString& )arg__1);
    }
}

void QValidator_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

int  QValidator_QtDShell::__override_validate(QString&  arg__1, int&  arg__2, bool static_call) const
{
    if (static_call) {
        return QValidator::State(0);
    } else {
        return validate((QString& )arg__1, (int& )arg__2);
    }
}

// ---externC---
// QValidator::QValidator(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QValidator_QValidator_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QValidator_QtDShell *__qt_this = new QValidator_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QValidator::locale() const
QTD_EXTERN QTD_EXPORT void* qtd_QValidator_locale_const
(void* __this_nativeId)
{
    QValidator_QtDShell *__qt_this = (QValidator_QtDShell *) __this_nativeId;
    QLocale  __qt_return_value = __qt_this->locale();

    void* __d_return_value = (void*) new QLocale(__qt_return_value);

    return __d_return_value;
}

// QValidator::setLocale(const QLocale & locale)
QTD_EXTERN QTD_EXPORT void qtd_QValidator_setLocale_QLocale
(void* __this_nativeId,
 void* locale0)
{
    const QLocale&  __qt_locale0 = (const QLocale& ) *(QLocale *)locale0;
    QValidator_QtDShell *__qt_this = (QValidator_QtDShell *) __this_nativeId;
    __qt_this->setLocale((const QLocale& )__qt_locale0);

}

// QValidator::fixup(QString & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QValidator_fixup_nativepointerstring_const
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QValidator_QtDShell *__qt_this = (QValidator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_fixup((QString& )__qt_arg__1, __do_static_call);
    qtd_toUtf8(__qt_arg__1.utf16(), __qt_arg__1.size(), &arg__1);

}

// QValidator::validate(QString & arg__1, int & arg__2) const
QTD_EXTERN QTD_EXPORT int qtd_QValidator_validate_nativepointerstring_nativepointerint_const
(void* __this_nativeId,
 DArray arg__1,
 int * arg__2)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    int&  __qt_arg__2 = (int& ) * (int *) arg__2;
    QValidator_QtDShell *__qt_this = (QValidator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_validate((QString& )__qt_arg__1, (int& )__qt_arg__2, __do_static_call);

    qtd_toUtf8(__qt_arg__1.utf16(), __qt_arg__1.size(), &arg__1);
    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QValidator_staticMetaObject() {
    return (void*)&QValidator::staticMetaObject;
}


