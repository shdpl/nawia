#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qregexp.h>
#include <qvalidator.h>
#include <qvariant.h>

#include "QRegExpValidator_shell.h"
#include <iostream>
#include <qvalidator.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QRegExpValidatorEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QRegExpValidatorEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QRegExpValidator_createEntity(void *nativeId, void* dId)
{
    new QRegExpValidatorEntity((QObject*)nativeId, dId);
}

QRegExpValidator_QtDShell::QRegExpValidator_QtDShell(void *d_ptr, QObject*  parent0)
    : QRegExpValidator(parent0),
      QObjectLink(this, d_ptr)
{
}

QRegExpValidator_QtDShell::QRegExpValidator_QtDShell(void *d_ptr, const QRegExp&  rx0, QObject*  parent1)
    : QRegExpValidator(rx0, parent1),
      QObjectLink(this, d_ptr)
{
}

QRegExpValidator_QtDShell::~QRegExpValidator_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QRegExpValidator_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QRegExpValidator::metaObject();
}

int QRegExpValidator_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QRegExpValidator::qt_metacall(_c, _id, _a);
}

int QRegExpValidator_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QRegExpValidator::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QRegExpValidator_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QRegExpValidator_QtDShell *__qt_this = (QRegExpValidator_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QRegExpValidator_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QRegExpValidator_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QRegExpValidator_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QRegExpValidator_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QValidator_fixup_nativepointerstring_const_dispatch, (void *dId, void* arg__1))
void QRegExpValidator_QtDShell::fixup(QString&  arg__1) const
{
    qtd_QValidator_fixup_nativepointerstring_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QRegExpValidator_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QValidator_validate_nativepointerstring_nativepointerint_const_dispatch, (void *dId, void* input0, int * pos1))
QValidator::State  QRegExpValidator_QtDShell::validate(QString&  input0, int&  pos1) const
{
    return (QValidator::State) qtd_QValidator_validate_nativepointerstring_nativepointerint_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )input0, &(int& )pos1);
}

QTD_EXTERN QTD_EXPORT void qtd_QRegExpValidator_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QRegExpValidator_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QRegExpValidator_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QRegExpValidator_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QRegExpValidator_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QRegExpValidator_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QRegExpValidator_QtDShell::__override_fixup(QString&  arg__1, bool static_call) const
{
    if (static_call) {
        QValidator::fixup((QString& )arg__1);
    } else {
        fixup((QString& )arg__1);
    }
}

void QRegExpValidator_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

int  QRegExpValidator_QtDShell::__override_validate(QString&  input0, int&  pos1, bool static_call) const
{
    if (static_call) {
        return QRegExpValidator::validate((QString& )input0, (int& )pos1);
    } else {
        return validate((QString& )input0, (int& )pos1);
    }
}

// ---externC---
// QRegExpValidator::QRegExpValidator(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QRegExpValidator_QRegExpValidator_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QRegExpValidator_QtDShell *__qt_this = new QRegExpValidator_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QRegExpValidator::QRegExpValidator(const QRegExp & rx, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QRegExpValidator_QRegExpValidator_QRegExp_QObject
(void *d_ptr,
 void* rx0,
 void* parent1)
{
    const QRegExp&  __qt_rx0 = (const QRegExp& ) *(QRegExp *)rx0;
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QRegExpValidator_QtDShell *__qt_this = new QRegExpValidator_QtDShell(d_ptr, (const QRegExp& )__qt_rx0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QRegExpValidator::regExp() const
QTD_EXTERN QTD_EXPORT void* qtd_QRegExpValidator_regExp_const
(void* __this_nativeId)
{
    QRegExpValidator_QtDShell *__qt_this = (QRegExpValidator_QtDShell *) __this_nativeId;
    const QRegExp&  __qt_return_value = __qt_this->regExp();

    void* __d_return_value = (void*) new QRegExp(__qt_return_value);

    return __d_return_value;
}

// QRegExpValidator::setRegExp(const QRegExp & rx)
QTD_EXTERN QTD_EXPORT void qtd_QRegExpValidator_setRegExp_QRegExp
(void* __this_nativeId,
 void* rx0)
{
    const QRegExp&  __qt_rx0 = (const QRegExp& ) *(QRegExp *)rx0;
    QRegExpValidator_QtDShell *__qt_this = (QRegExpValidator_QtDShell *) __this_nativeId;
    __qt_this->setRegExp((const QRegExp& )__qt_rx0);

}

// QRegExpValidator::validate(QString & input, int & pos) const
QTD_EXTERN QTD_EXPORT int qtd_QRegExpValidator_validate_nativepointerstring_nativepointerint_const
(void* __this_nativeId,
 DArray input0,
 int * pos1)
{
    QString __qt_input0 = QString::fromUtf8((const char *)input0.ptr, input0.length);
    int&  __qt_pos1 = (int& ) * (int *) pos1;
    QRegExpValidator_QtDShell *__qt_this = (QRegExpValidator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_validate((QString& )__qt_input0, (int& )__qt_pos1, __do_static_call);

    qtd_toUtf8(__qt_input0.utf16(), __qt_input0.size(), &input0);
    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QRegExpValidator_staticMetaObject() {
    return (void*)&QRegExpValidator::staticMetaObject;
}


