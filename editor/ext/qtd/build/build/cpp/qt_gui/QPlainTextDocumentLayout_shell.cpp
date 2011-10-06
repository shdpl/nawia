#include <QAbstractTextDocumentLayout>
#include <QVariant>
#include <qabstracttextdocumentlayout.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpainter.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qvariant.h>

#include "QPlainTextDocumentLayout_shell.h"
#include <iostream>
#include <qplaintextedit.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QPlainTextDocumentLayoutEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QPlainTextDocumentLayoutEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QPlainTextDocumentLayout_createEntity(void *nativeId, void* dId)
{
    new QPlainTextDocumentLayoutEntity((QObject*)nativeId, dId);
}

QPlainTextDocumentLayout_QtDShell::QPlainTextDocumentLayout_QtDShell(void *d_ptr, QTextDocument*  document0)
    : QPlainTextDocumentLayout(document0),
      QObjectLink(this, d_ptr)
{
}

QPlainTextDocumentLayout_QtDShell::~QPlainTextDocumentLayout_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QPlainTextDocumentLayout_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QPlainTextDocumentLayout::metaObject();
}

int QPlainTextDocumentLayout_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QPlainTextDocumentLayout::qt_metacall(_c, _id, _a);
}

int QPlainTextDocumentLayout_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QPlainTextDocumentLayout::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QPlainTextDocumentLayout_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const_dispatch, (void *dId, QRectF *__d_return_value, void* block0))
QRectF  QPlainTextDocumentLayout_QtDShell::blockBoundingRect(const QTextBlock&  block0) const
{
    QRectF __d_return_value;
    qtd_QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QTextBlock& )block0);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextDocumentLayout_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextDocumentLayout_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_documentChanged_int_int_int_dispatch, (void *dId, int from0, int arg__2, int charsAdded2))
void QPlainTextDocumentLayout_QtDShell::documentChanged(int  from0, int  arg__2, int  charsAdded2)
{
    qtd_QAbstractTextDocumentLayout_documentChanged_int_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )from0, (int )arg__2, (int )charsAdded2);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_documentSize_const_dispatch, (void *dId, QSizeF *__d_return_value))
QSizeF  QPlainTextDocumentLayout_QtDShell::documentSize() const
{
    QSizeF __d_return_value;
    qtd_QAbstractTextDocumentLayout_documentSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext_dispatch, (void *dId, void* arg__1, void* arg__2))
void QPlainTextDocumentLayout_QtDShell::draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2)
{
    qtd_QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )arg__1, &(QAbstractTextDocumentLayout::PaintContext& )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat_dispatch, (void *dId, void* painter0, QRectF* rect1, void* object2, int posInDocument3, void* format4))
void QPlainTextDocumentLayout_QtDShell::drawInlineObject(QPainter*  painter0, const QRectF&  rect1, QTextInlineObject  object2, int  posInDocument3, const QTextFormat&  format4)
{
    qtd_QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRectF& )rect1, &(QTextInlineObject )object2, (int )posInDocument3, &(QTextFormat& )format4);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QPlainTextDocumentLayout_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QPlainTextDocumentLayout_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const_dispatch, (void *dId, QRectF *__d_return_value, void* arg__1))
QRectF  QPlainTextDocumentLayout_QtDShell::frameBoundingRect(QTextFrame*  arg__1) const
{
    QRectF __d_return_value;
    qtd_QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QTextFrame* )arg__1);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const_dispatch, (void *dId, QPointF* arg__1, int arg__2))
int  QPlainTextDocumentLayout_QtDShell::hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const
{
    return qtd_QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const_dispatch(QObjectLink::getLink(this)->dId, &(QPointF& )arg__1, (Qt::HitTestAccuracy )arg__2);
}

QTD_FUNC_DECL(GUI, int, QAbstractTextDocumentLayout_pageCount_const_dispatch, (void *dId))
int  QPlainTextDocumentLayout_QtDShell::pageCount() const
{
    return qtd_QAbstractTextDocumentLayout_pageCount_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat_dispatch, (void *dId, void* item0, int posInDocument1, void* format2))
void QPlainTextDocumentLayout_QtDShell::positionInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2)
{
    qtd_QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat_dispatch(QObjectLink::getLink(this)->dId, &(QTextInlineObject )item0, (int )posInDocument1, &(QTextFormat& )format2);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat_dispatch, (void *dId, void* item0, int posInDocument1, void* format2))
void QPlainTextDocumentLayout_QtDShell::resizeInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2)
{
    qtd_QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat_dispatch(QObjectLink::getLink(this)->dId, &(QTextInlineObject )item0, (int )posInDocument1, &(QTextFormat& )format2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextDocumentLayout_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QPlainTextDocumentLayout_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QTextCharFormat  QPlainTextDocumentLayout_QtDShell::__public_format(int  pos0)
{
    return QAbstractTextDocumentLayout::format((int )pos0);
}

int  QPlainTextDocumentLayout_QtDShell::__public_formatIndex(int  pos0)
{
    return QAbstractTextDocumentLayout::formatIndex((int )pos0);
}

QObject*  QPlainTextDocumentLayout_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QPlainTextDocumentLayout_QtDShell::__public_documentSizeChanged(const QSizeF&  newSize0)
{
    QAbstractTextDocumentLayout::documentSizeChanged((const QSizeF& )newSize0);
}

void QPlainTextDocumentLayout_QtDShell::__public_pageCountChanged(int  newPages0)
{
    QAbstractTextDocumentLayout::pageCountChanged((int )newPages0);
}

void QPlainTextDocumentLayout_QtDShell::__public_update(const QRectF&  arg__1)
{
    QAbstractTextDocumentLayout::update((const QRectF& )arg__1);
}

void QPlainTextDocumentLayout_QtDShell::__public_updateBlock(const QTextBlock&  block0)
{
    QAbstractTextDocumentLayout::updateBlock((const QTextBlock& )block0);
}

// Write virtual function overries used to decide on static/virtual calls
QRectF  QPlainTextDocumentLayout_QtDShell::__override_blockBoundingRect(const QTextBlock&  block0, bool static_call) const
{
    if (static_call) {
        return QPlainTextDocumentLayout::blockBoundingRect((const QTextBlock& )block0);
    } else {
        return blockBoundingRect((const QTextBlock& )block0);
    }
}

void QPlainTextDocumentLayout_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QPlainTextDocumentLayout_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QPlainTextDocumentLayout_QtDShell::__override_documentChanged(int  from0, int  arg__2, int  charsAdded2, bool static_call)
{
    if (static_call) {
        QPlainTextDocumentLayout::documentChanged((int )from0, (int )arg__2, (int )charsAdded2);
    } else {
        documentChanged((int )from0, (int )arg__2, (int )charsAdded2);
    }
}

QSizeF  QPlainTextDocumentLayout_QtDShell::__override_documentSize(bool static_call) const
{
    if (static_call) {
        return QPlainTextDocumentLayout::documentSize();
    } else {
        return documentSize();
    }
}

void QPlainTextDocumentLayout_QtDShell::__override_draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2, bool static_call)
{
    if (static_call) {
        QPlainTextDocumentLayout::draw((QPainter* )arg__1, (const QAbstractTextDocumentLayout::PaintContext& )arg__2);
    } else {
        draw((QPainter* )arg__1, (const QAbstractTextDocumentLayout::PaintContext& )arg__2);
    }
}

void QPlainTextDocumentLayout_QtDShell::__override_drawInlineObject(QPainter*  painter0, const QRectF&  rect1, QTextInlineObject  object2, int  posInDocument3, const QTextFormat&  format4, bool static_call)
{
    if (static_call) {
        QAbstractTextDocumentLayout::drawInlineObject((QPainter* )painter0, (const QRectF& )rect1, (QTextInlineObject )object2, (int )posInDocument3, (const QTextFormat& )format4);
    } else {
        drawInlineObject((QPainter* )painter0, (const QRectF& )rect1, (QTextInlineObject )object2, (int )posInDocument3, (const QTextFormat& )format4);
    }
}

bool  QPlainTextDocumentLayout_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QPlainTextDocumentLayout_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QRectF  QPlainTextDocumentLayout_QtDShell::__override_frameBoundingRect(QTextFrame*  arg__1, bool static_call) const
{
    if (static_call) {
        return QPlainTextDocumentLayout::frameBoundingRect((QTextFrame* )arg__1);
    } else {
        return frameBoundingRect((QTextFrame* )arg__1);
    }
}

int  QPlainTextDocumentLayout_QtDShell::__override_hitTest(const QPointF&  arg__1, int  arg__2, bool static_call) const
{
    if (static_call) {
        return QPlainTextDocumentLayout::hitTest((const QPointF& )arg__1, (Qt::HitTestAccuracy )arg__2);
    } else {
        return hitTest((const QPointF& )arg__1, (Qt::HitTestAccuracy )arg__2);
    }
}

int  QPlainTextDocumentLayout_QtDShell::__override_pageCount(bool static_call) const
{
    if (static_call) {
        return QPlainTextDocumentLayout::pageCount();
    } else {
        return pageCount();
    }
}

void QPlainTextDocumentLayout_QtDShell::__override_positionInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2, bool static_call)
{
    if (static_call) {
        QAbstractTextDocumentLayout::positionInlineObject((QTextInlineObject )item0, (int )posInDocument1, (const QTextFormat& )format2);
    } else {
        positionInlineObject((QTextInlineObject )item0, (int )posInDocument1, (const QTextFormat& )format2);
    }
}

void QPlainTextDocumentLayout_QtDShell::__override_resizeInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2, bool static_call)
{
    if (static_call) {
        QAbstractTextDocumentLayout::resizeInlineObject((QTextInlineObject )item0, (int )posInDocument1, (const QTextFormat& )format2);
    } else {
        resizeInlineObject((QTextInlineObject )item0, (int )posInDocument1, (const QTextFormat& )format2);
    }
}

void QPlainTextDocumentLayout_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QPlainTextDocumentLayout::QPlainTextDocumentLayout(QTextDocument * document)
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextDocumentLayout_QPlainTextDocumentLayout_QTextDocument
(void *d_ptr,
 void* document0)
{
    QTextDocument*  __qt_document0 = (QTextDocument* ) document0;
    QPlainTextDocumentLayout_QtDShell *__qt_this = new QPlainTextDocumentLayout_QtDShell(d_ptr, (QTextDocument* )__qt_document0);
    return (void *) __qt_this;

}

// QPlainTextDocumentLayout::cursorWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QPlainTextDocumentLayout_cursorWidth_const
(void* __this_nativeId)
{
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->cursorWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextDocumentLayout::ensureBlockLayout(const QTextBlock & block) const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextDocumentLayout_ensureBlockLayout_QTextBlock_const
(void* __this_nativeId,
 void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    __qt_this->ensureBlockLayout((const QTextBlock& )__qt_block0);

}

// QPlainTextDocumentLayout::requestUpdate()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextDocumentLayout_requestUpdate
(void* __this_nativeId)
{
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    __qt_this->requestUpdate();

}

// QPlainTextDocumentLayout::setCursorWidth(int width)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextDocumentLayout_setCursorWidth_int
(void* __this_nativeId,
 int width0)
{
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    __qt_this->setCursorWidth((int )width0);

}

// QPlainTextDocumentLayout::blockBoundingRect(const QTextBlock & block) const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextDocumentLayout_blockBoundingRect_QTextBlock_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRectF  __qt_return_value = __qt_this->__override_blockBoundingRect((const QTextBlock& )__qt_block0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QPlainTextDocumentLayout::documentChanged(int from, int arg__2, int charsAdded)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextDocumentLayout_documentChanged_int_int_int
(void* __this_nativeId,
 int from0,
 int arg__2,
 int charsAdded2)
{
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_documentChanged((int )from0, (int )arg__2, (int )charsAdded2, __do_static_call);

}

// QPlainTextDocumentLayout::documentSize() const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextDocumentLayout_documentSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSizeF  __qt_return_value = __qt_this->__override_documentSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QPlainTextDocumentLayout::draw(QPainter * arg__1, const QAbstractTextDocumentLayout::PaintContext & arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext
(void* __this_nativeId,
 void* arg__1,
 void* arg__2)
{
    QPainter*  __qt_arg__1 = (QPainter* ) arg__1;
    const QAbstractTextDocumentLayout::PaintContext&  __qt_arg__2 = (const QAbstractTextDocumentLayout::PaintContext& ) *(QAbstractTextDocumentLayout::PaintContext *)arg__2;
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_draw((QPainter* )__qt_arg__1, (const QAbstractTextDocumentLayout::PaintContext& )__qt_arg__2, __do_static_call);

}

// QPlainTextDocumentLayout::frameBoundingRect(QTextFrame * arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextDocumentLayout_frameBoundingRect_QTextFrame_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* arg__1)
{
    QTextFrame*  __qt_arg__1 = (QTextFrame* ) arg__1;
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRectF  __qt_return_value = __qt_this->__override_frameBoundingRect((QTextFrame* )__qt_arg__1, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QPlainTextDocumentLayout::hitTest(const QPointF & arg__1, Qt::HitTestAccuracy arg__2) const
QTD_EXTERN QTD_EXPORT int qtd_QPlainTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const
(void* __this_nativeId,
 QPointF arg__1,
 int arg__2)
{
    Qt::HitTestAccuracy __qt_arg__2 = (Qt::HitTestAccuracy) arg__2;
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_hitTest((const QPointF& )arg__1, (Qt::HitTestAccuracy )__qt_arg__2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextDocumentLayout::pageCount() const
QTD_EXTERN QTD_EXPORT int qtd_QPlainTextDocumentLayout_pageCount_const
(void* __this_nativeId)
{
    QPlainTextDocumentLayout_QtDShell *__qt_this = (QPlainTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_pageCount(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextDocumentLayout_staticMetaObject() {
    return (void*)&QPlainTextDocumentLayout::staticMetaObject;
}


