#include <QTextCursor>
#include <QTextFrame>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qvariant.h>

#include "QTextFrame_shell.h"
#include <iostream>
#include <qtextobject.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTextFrameEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTextFrameEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTextFrame_createEntity(void *nativeId, void* dId)
{
    new QTextFrameEntity((QObject*)nativeId, dId);
}

QTextFrame_QtDShell::QTextFrame_QtDShell(void *d_ptr, QTextDocument*  doc0)
    : QTextFrame(doc0),
      QObjectLink(this, d_ptr)
{
}

QTextFrame_QtDShell::~QTextFrame_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTextFrame_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTextFrame::metaObject();
}

int QTextFrame_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTextFrame::qt_metacall(_c, _id, _a);
}

int QTextFrame_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTextFrame::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTextFrame_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTextFrame_QtDShell *__qt_this = (QTextFrame_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTextFrame_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextFrame_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTextFrame_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTextFrame_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTextFrame_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTextFrame_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QTextFrame_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTextFrame_QtDShell::__public_setFormat(const QTextFormat&  format0)
{
    QTextObject::setFormat((const QTextFormat& )format0);
}

// Write virtual function overries used to decide on static/virtual calls
void QTextFrame_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTextFrame_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTextFrame_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTextFrame_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTextFrame_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QTextFrame::QTextFrame(QTextDocument * doc)
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_QTextFrame_QTextDocument
(void *d_ptr,
 void* doc0)
{
    QTextDocument*  __qt_doc0 = (QTextDocument* ) doc0;
    QTextFrame_QtDShell *__qt_this = new QTextFrame_QtDShell(d_ptr, (QTextDocument* )__qt_doc0);
    return (void *) __qt_this;

}

// QTextFrame::begin() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_begin_const
(void* __this_nativeId)
{
    QTextFrame_QtDShell *__qt_this = (QTextFrame_QtDShell *) __this_nativeId;
    QTextFrame::iterator  __qt_return_value = __qt_this->begin();

    void* __d_return_value = (void*) new QTextFrame::iterator(__qt_return_value);

    return __d_return_value;
}

// QTextFrame::childFrames() const
QTD_EXTERN QTD_EXPORT void qtd_QTextFrame_childFrames_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextFrame_QtDShell *__qt_this = (QTextFrame_QtDShell *) __this_nativeId;
    QList<QTextFrame* >  __qt_return_value = __qt_this->childFrames();

QList<QTextFrame* > &__d_return_value_tmp = (*(QList<QTextFrame* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextFrame::end() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_end_const
(void* __this_nativeId)
{
    QTextFrame_QtDShell *__qt_this = (QTextFrame_QtDShell *) __this_nativeId;
    QTextFrame::iterator  __qt_return_value = __qt_this->end();

    void* __d_return_value = (void*) new QTextFrame::iterator(__qt_return_value);

    return __d_return_value;
}

// QTextFrame::firstCursorPosition() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_firstCursorPosition_const
(void* __this_nativeId)
{
    QTextFrame_QtDShell *__qt_this = (QTextFrame_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->firstCursorPosition();

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextFrame::firstPosition() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFrame_firstPosition_const
(void* __this_nativeId)
{
    QTextFrame_QtDShell *__qt_this = (QTextFrame_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->firstPosition();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrame::frameFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_frameFormat_const
(void* __this_nativeId)
{
    QTextFrame_QtDShell *__qt_this = (QTextFrame_QtDShell *) __this_nativeId;
    QTextFrameFormat  __qt_return_value = __qt_this->frameFormat();

    void* __d_return_value = (void*) new QTextFrameFormat(__qt_return_value);

    return __d_return_value;
}

// QTextFrame::lastCursorPosition() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_lastCursorPosition_const
(void* __this_nativeId)
{
    QTextFrame_QtDShell *__qt_this = (QTextFrame_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->lastCursorPosition();

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextFrame::lastPosition() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFrame_lastPosition_const
(void* __this_nativeId)
{
    QTextFrame_QtDShell *__qt_this = (QTextFrame_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->lastPosition();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrame::parentFrame() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_parentFrame_const
(void* __this_nativeId)
{
    QTextFrame_QtDShell *__qt_this = (QTextFrame_QtDShell *) __this_nativeId;
    QTextFrame*  __qt_return_value = __qt_this->parentFrame();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextFrame::setFrameFormat(const QTextFrameFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrame_setFrameFormat_QTextFrameFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextFrameFormat&  __qt_format0 = (const QTextFrameFormat& ) *(QTextFrameFormat *)format0;
    QTextFrame_QtDShell *__qt_this = (QTextFrame_QtDShell *) __this_nativeId;
    __qt_this->setFrameFormat((const QTextFrameFormat& )__qt_format0);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTextFrame_staticMetaObject() {
    return (void*)&QTextFrame::staticMetaObject;
}


