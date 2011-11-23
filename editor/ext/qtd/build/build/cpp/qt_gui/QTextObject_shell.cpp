#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qvariant.h>

#include "QTextObject_shell.h"
#include <iostream>
#include <qtextobject.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTextObjectEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTextObjectEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTextObject_createEntity(void *nativeId, void* dId)
{
    new QTextObjectEntity((QObject*)nativeId, dId);
}

QTextObject_QtDShell::QTextObject_QtDShell(void *d_ptr, QTextDocument*  doc0)
    : QTextObject(doc0),
      QObjectLink(this, d_ptr)
{
}

QTextObject_QtDShell::~QTextObject_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTextObject_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTextObject::metaObject();
}

int QTextObject_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTextObject::qt_metacall(_c, _id, _a);
}

int QTextObject_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTextObject::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTextObject_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTextObject_QtDShell *__qt_this = (QTextObject_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTextObject_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextObject_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTextObject_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTextObject_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTextObject_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTextObject_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QTextObject_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTextObject_QtDShell::__public_setFormat(const QTextFormat&  format0)
{
    QTextObject::setFormat((const QTextFormat& )format0);
}

// Write virtual function overries used to decide on static/virtual calls
void QTextObject_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTextObject_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTextObject_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTextObject_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTextObject_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QTextObject::QTextObject(QTextDocument * doc)
QTD_EXTERN QTD_EXPORT void* qtd_QTextObject_QTextObject_QTextDocument
(void *d_ptr,
 void* doc0)
{
    QTextDocument*  __qt_doc0 = (QTextDocument* ) doc0;
    QTextObject_QtDShell *__qt_this = new QTextObject_QtDShell(d_ptr, (QTextDocument* )__qt_doc0);
    return (void *) __qt_this;

}

// QTextObject::document() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextObject_document_const
(void* __this_nativeId)
{
    QTextObject_QtDShell *__qt_this = (QTextObject_QtDShell *) __this_nativeId;
    QTextDocument*  __qt_return_value = __qt_this->document();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextObject::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextObject_format_const
(void* __this_nativeId)
{
    QTextObject_QtDShell *__qt_this = (QTextObject_QtDShell *) __this_nativeId;
    QTextFormat  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QTextFormat(__qt_return_value);

    return __d_return_value;
}

// QTextObject::formatIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QTextObject_formatIndex_const
(void* __this_nativeId)
{
    QTextObject_QtDShell *__qt_this = (QTextObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->formatIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextObject::objectIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QTextObject_objectIndex_const
(void* __this_nativeId)
{
    QTextObject_QtDShell *__qt_this = (QTextObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->objectIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextObject::setFormat(const QTextFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextObject_setFormat_QTextFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextFormat&  __qt_format0 = (const QTextFormat& ) *(QTextFormat *)format0;
    QTextObject_QtDShell *__qt_this = (QTextObject_QtDShell *) __this_nativeId;
    __qt_this->__public_setFormat((const QTextFormat& )__qt_format0);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTextObject_staticMetaObject() {
    return (void*)&QTextObject::staticMetaObject;
}


