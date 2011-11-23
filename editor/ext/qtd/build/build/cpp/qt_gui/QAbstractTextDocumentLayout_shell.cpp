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

#include "QAbstractTextDocumentLayout_shell.h"
#include <iostream>
#include <qabstracttextdocumentlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QAbstractTextDocumentLayoutEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAbstractTextDocumentLayoutEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_createEntity(void *nativeId, void* dId)
{
    new QAbstractTextDocumentLayoutEntity((QObject*)nativeId, dId);
}

QAbstractTextDocumentLayout_QtDShell::QAbstractTextDocumentLayout_QtDShell(void *d_ptr, QTextDocument*  doc0)
    : QAbstractTextDocumentLayout(doc0),
      QObjectLink(this, d_ptr)
{
}

QAbstractTextDocumentLayout_QtDShell::~QAbstractTextDocumentLayout_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAbstractTextDocumentLayout_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAbstractTextDocumentLayout::metaObject();
}

int QAbstractTextDocumentLayout_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAbstractTextDocumentLayout::qt_metacall(_c, _id, _a);
}

int QAbstractTextDocumentLayout_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAbstractTextDocumentLayout::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractTextDocumentLayout_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const_dispatch, (void *dId, QRectF *__d_return_value, void* block0))
QTD_FUNC(GUI, QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const_dispatch)
QRectF  QAbstractTextDocumentLayout_QtDShell::blockBoundingRect(const QTextBlock&  block0) const
{
    QRectF __d_return_value;
    qtd_QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QTextBlock& )block0);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAbstractTextDocumentLayout_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractTextDocumentLayout_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_documentChanged_int_int_int_dispatch, (void *dId, int from0, int charsRemoved1, int charsAdded2))
QTD_FUNC(GUI, QAbstractTextDocumentLayout_documentChanged_int_int_int_dispatch)
void QAbstractTextDocumentLayout_QtDShell::documentChanged(int  from0, int  charsRemoved1, int  charsAdded2)
{
    qtd_QAbstractTextDocumentLayout_documentChanged_int_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )from0, (int )charsRemoved1, (int )charsAdded2);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_documentSize_const_dispatch, (void *dId, QSizeF *__d_return_value))
QTD_FUNC(GUI, QAbstractTextDocumentLayout_documentSize_const_dispatch)
QSizeF  QAbstractTextDocumentLayout_QtDShell::documentSize() const
{
    QSizeF __d_return_value;
    qtd_QAbstractTextDocumentLayout_documentSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext_dispatch, (void *dId, void* painter0, void* context1))
QTD_FUNC(GUI, QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext_dispatch)
void QAbstractTextDocumentLayout_QtDShell::draw(QPainter*  painter0, const QAbstractTextDocumentLayout::PaintContext&  context1)
{
    qtd_QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QAbstractTextDocumentLayout::PaintContext& )context1);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat_dispatch, (void *dId, void* painter0, QRectF* rect1, void* object2, int posInDocument3, void* format4))
QTD_FUNC(GUI, QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat_dispatch)
void QAbstractTextDocumentLayout_QtDShell::drawInlineObject(QPainter*  painter0, const QRectF&  rect1, QTextInlineObject  object2, int  posInDocument3, const QTextFormat&  format4)
{
    qtd_QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRectF& )rect1, &(QTextInlineObject )object2, (int )posInDocument3, &(QTextFormat& )format4);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QAbstractTextDocumentLayout_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAbstractTextDocumentLayout_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const_dispatch, (void *dId, QRectF *__d_return_value, void* frame0))
QTD_FUNC(GUI, QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const_dispatch)
QRectF  QAbstractTextDocumentLayout_QtDShell::frameBoundingRect(QTextFrame*  frame0) const
{
    QRectF __d_return_value;
    qtd_QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QTextFrame* )frame0);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const_dispatch, (void *dId, QPointF* point0, int accuracy1))
QTD_FUNC(GUI, QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const_dispatch)
int  QAbstractTextDocumentLayout_QtDShell::hitTest(const QPointF&  point0, Qt::HitTestAccuracy  accuracy1) const
{
    return qtd_QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const_dispatch(QObjectLink::getLink(this)->dId, &(QPointF& )point0, (Qt::HitTestAccuracy )accuracy1);
}

QTD_FUNC_DECL(GUI, int, QAbstractTextDocumentLayout_pageCount_const_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractTextDocumentLayout_pageCount_const_dispatch)
int  QAbstractTextDocumentLayout_QtDShell::pageCount() const
{
    return qtd_QAbstractTextDocumentLayout_pageCount_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat_dispatch, (void *dId, void* item0, int posInDocument1, void* format2))
QTD_FUNC(GUI, QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat_dispatch)
void QAbstractTextDocumentLayout_QtDShell::positionInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2)
{
    qtd_QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat_dispatch(QObjectLink::getLink(this)->dId, &(QTextInlineObject )item0, (int )posInDocument1, &(QTextFormat& )format2);
}

QTD_FUNC_DECL(GUI, void, QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat_dispatch, (void *dId, void* item0, int posInDocument1, void* format2))
QTD_FUNC(GUI, QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat_dispatch)
void QAbstractTextDocumentLayout_QtDShell::resizeInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2)
{
    qtd_QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat_dispatch(QObjectLink::getLink(this)->dId, &(QTextInlineObject )item0, (int )posInDocument1, &(QTextFormat& )format2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QAbstractTextDocumentLayout_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const_dispatch = (qtd_QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const_dispatch_t) virts[0];
    qtd_QAbstractTextDocumentLayout_documentChanged_int_int_int_dispatch = (qtd_QAbstractTextDocumentLayout_documentChanged_int_int_int_dispatch_t) virts[1];
    qtd_QAbstractTextDocumentLayout_documentSize_const_dispatch = (qtd_QAbstractTextDocumentLayout_documentSize_const_dispatch_t) virts[2];
    qtd_QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext_dispatch = (qtd_QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext_dispatch_t) virts[3];
    qtd_QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat_dispatch = (qtd_QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat_dispatch_t) virts[4];
    qtd_QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const_dispatch = (qtd_QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const_dispatch_t) virts[5];
    qtd_QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const_dispatch = (qtd_QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const_dispatch_t) virts[6];
    qtd_QAbstractTextDocumentLayout_pageCount_const_dispatch = (qtd_QAbstractTextDocumentLayout_pageCount_const_dispatch_t) virts[7];
    qtd_QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat_dispatch = (qtd_QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat_dispatch_t) virts[8];
    qtd_QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat_dispatch = (qtd_QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat_dispatch_t) virts[9];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QTextCharFormat  QAbstractTextDocumentLayout_QtDShell::__public_format(int  pos0)
{
    return QAbstractTextDocumentLayout::format((int )pos0);
}

int  QAbstractTextDocumentLayout_QtDShell::__public_formatIndex(int  pos0)
{
    return QAbstractTextDocumentLayout::formatIndex((int )pos0);
}

QObject*  QAbstractTextDocumentLayout_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QAbstractTextDocumentLayout_QtDShell::__public_documentSizeChanged(const QSizeF&  newSize0)
{
    QAbstractTextDocumentLayout::documentSizeChanged((const QSizeF& )newSize0);
}

void QAbstractTextDocumentLayout_QtDShell::__public_pageCountChanged(int  newPages0)
{
    QAbstractTextDocumentLayout::pageCountChanged((int )newPages0);
}

void QAbstractTextDocumentLayout_QtDShell::__public_update(const QRectF&  arg__1)
{
    QAbstractTextDocumentLayout::update((const QRectF& )arg__1);
}

void QAbstractTextDocumentLayout_QtDShell::__public_updateBlock(const QTextBlock&  block0)
{
    QAbstractTextDocumentLayout::updateBlock((const QTextBlock& )block0);
}

// Write virtual function overries used to decide on static/virtual calls
QRectF  QAbstractTextDocumentLayout_QtDShell::__override_blockBoundingRect(const QTextBlock&  block0, bool static_call) const
{
    if (static_call) {
        return QRectF();
    } else {
        return blockBoundingRect((const QTextBlock& )block0);
    }
}

void QAbstractTextDocumentLayout_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QAbstractTextDocumentLayout_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QAbstractTextDocumentLayout_QtDShell::__override_documentChanged(int  from0, int  charsRemoved1, int  charsAdded2, bool static_call)
{
    if (static_call) {
        return;
    } else {
        documentChanged((int )from0, (int )charsRemoved1, (int )charsAdded2);
    }
}

QSizeF  QAbstractTextDocumentLayout_QtDShell::__override_documentSize(bool static_call) const
{
    if (static_call) {
        return QSizeF();
    } else {
        return documentSize();
    }
}

void QAbstractTextDocumentLayout_QtDShell::__override_draw(QPainter*  painter0, const QAbstractTextDocumentLayout::PaintContext&  context1, bool static_call)
{
    if (static_call) {
        return;
    } else {
        draw((QPainter* )painter0, (const QAbstractTextDocumentLayout::PaintContext& )context1);
    }
}

void QAbstractTextDocumentLayout_QtDShell::__override_drawInlineObject(QPainter*  painter0, const QRectF&  rect1, QTextInlineObject  object2, int  posInDocument3, const QTextFormat&  format4, bool static_call)
{
    if (static_call) {
        QAbstractTextDocumentLayout::drawInlineObject((QPainter* )painter0, (const QRectF& )rect1, (QTextInlineObject )object2, (int )posInDocument3, (const QTextFormat& )format4);
    } else {
        drawInlineObject((QPainter* )painter0, (const QRectF& )rect1, (QTextInlineObject )object2, (int )posInDocument3, (const QTextFormat& )format4);
    }
}

bool  QAbstractTextDocumentLayout_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QAbstractTextDocumentLayout_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QRectF  QAbstractTextDocumentLayout_QtDShell::__override_frameBoundingRect(QTextFrame*  frame0, bool static_call) const
{
    if (static_call) {
        return QRectF();
    } else {
        return frameBoundingRect((QTextFrame* )frame0);
    }
}

int  QAbstractTextDocumentLayout_QtDShell::__override_hitTest(const QPointF&  point0, int  accuracy1, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return hitTest((const QPointF& )point0, (Qt::HitTestAccuracy )accuracy1);
    }
}

int  QAbstractTextDocumentLayout_QtDShell::__override_pageCount(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return pageCount();
    }
}

void QAbstractTextDocumentLayout_QtDShell::__override_positionInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2, bool static_call)
{
    if (static_call) {
        QAbstractTextDocumentLayout::positionInlineObject((QTextInlineObject )item0, (int )posInDocument1, (const QTextFormat& )format2);
    } else {
        positionInlineObject((QTextInlineObject )item0, (int )posInDocument1, (const QTextFormat& )format2);
    }
}

void QAbstractTextDocumentLayout_QtDShell::__override_resizeInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2, bool static_call)
{
    if (static_call) {
        QAbstractTextDocumentLayout::resizeInlineObject((QTextInlineObject )item0, (int )posInDocument1, (const QTextFormat& )format2);
    } else {
        resizeInlineObject((QTextInlineObject )item0, (int )posInDocument1, (const QTextFormat& )format2);
    }
}

void QAbstractTextDocumentLayout_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QAbstractTextDocumentLayout::documentSizeChanged(const QSizeF & newSize)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_documentSizeChanged_QSizeF
(void* __this_nativeId,
 QSizeF newSize0)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_documentSizeChanged((const QSizeF& )newSize0);

}

// QAbstractTextDocumentLayout::pageCountChanged(int newPages)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_pageCountChanged_int
(void* __this_nativeId,
 int newPages0)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_pageCountChanged((int )newPages0);

}

// QAbstractTextDocumentLayout::update(const QRectF & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_update_QRectF
(void* __this_nativeId,
 QRectF arg__1)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_update((const QRectF& )arg__1);

}

// QAbstractTextDocumentLayout::updateBlock(const QTextBlock & block)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_updateBlock_QTextBlock
(void* __this_nativeId,
 void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_updateBlock((const QTextBlock& )__qt_block0);

}

// ---externC---
// QAbstractTextDocumentLayout::QAbstractTextDocumentLayout(QTextDocument * doc)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout_QTextDocument
(void *d_ptr,
 void* doc0)
{
    QTextDocument*  __qt_doc0 = (QTextDocument* ) doc0;
    QAbstractTextDocumentLayout_QtDShell *__qt_this = new QAbstractTextDocumentLayout_QtDShell(d_ptr, (QTextDocument* )__qt_doc0);
    return (void *) __qt_this;

}

// QAbstractTextDocumentLayout::anchorAt(const QPointF & pos) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_anchorAt_QPointF_const
(void* __this_nativeId,
 void* __d_return_value,
 QPointF pos0)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->anchorAt((const QPointF& )pos0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractTextDocumentLayout::document() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_document_const
(void* __this_nativeId)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    QTextDocument*  __qt_return_value = __qt_this->document();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractTextDocumentLayout::format(int pos)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_format_int
(void* __this_nativeId,
 int pos0)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->__public_format((int )pos0);

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QAbstractTextDocumentLayout::formatIndex(int pos)
QTD_EXTERN QTD_EXPORT int qtd_QAbstractTextDocumentLayout_formatIndex_int
(void* __this_nativeId,
 int pos0)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_formatIndex((int )pos0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractTextDocumentLayout::handlerForObject(int objectType) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_handlerForObject_int_const
(void* __this_nativeId,
 int objectType0)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    QTextObjectInterface*  __qt_return_value = __qt_this->handlerForObject((int )objectType0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractTextDocumentLayout::paintDevice() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_paintDevice_const
(void* __this_nativeId)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    QPaintDevice*  __qt_return_value = __qt_this->paintDevice();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractTextDocumentLayout::registerHandler(int objectType, QObject * component)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_registerHandler_int_QObject
(void* __this_nativeId,
 int objectType0,
 void* component1)
{
    QObject*  __qt_component1 = (QObject* ) component1;
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    __qt_this->registerHandler((int )objectType0, (QObject* )__qt_component1);

}

// QAbstractTextDocumentLayout::setPaintDevice(QPaintDevice * device)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_setPaintDevice_QPaintDevice
(void* __this_nativeId,
 void* device0)
{
    QPaintDevice*  __qt_device0 = (QPaintDevice* ) device0;
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    __qt_this->setPaintDevice((QPaintDevice* )__qt_device0);

}

// QAbstractTextDocumentLayout::blockBoundingRect(const QTextBlock & block) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRectF  __qt_return_value = __qt_this->__override_blockBoundingRect((const QTextBlock& )__qt_block0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAbstractTextDocumentLayout::documentChanged(int from, int charsRemoved, int charsAdded)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_documentChanged_int_int_int
(void* __this_nativeId,
 int from0,
 int charsRemoved1,
 int charsAdded2)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_documentChanged((int )from0, (int )charsRemoved1, (int )charsAdded2, __do_static_call);

}

// QAbstractTextDocumentLayout::documentSize() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_documentSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSizeF  __qt_return_value = __qt_this->__override_documentSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAbstractTextDocumentLayout::draw(QPainter * painter, const QAbstractTextDocumentLayout::PaintContext & context)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext
(void* __this_nativeId,
 void* painter0,
 void* context1)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QAbstractTextDocumentLayout::PaintContext&  __qt_context1 = (const QAbstractTextDocumentLayout::PaintContext& ) *(QAbstractTextDocumentLayout::PaintContext *)context1;
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_draw((QPainter* )__qt_painter0, (const QAbstractTextDocumentLayout::PaintContext& )__qt_context1, __do_static_call);

}

// QAbstractTextDocumentLayout::drawInlineObject(QPainter * painter, const QRectF & rect, QTextInlineObject object, int posInDocument, const QTextFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat
(void* __this_nativeId,
 void* painter0,
 QRectF rect1,
 void* object2,
 int posInDocument3,
 void* format4)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QTextInlineObject  __qt_object2 = (QTextInlineObject ) *(QTextInlineObject *)object2;
    const QTextFormat&  __qt_format4 = (const QTextFormat& ) *(QTextFormat *)format4;
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawInlineObject((QPainter* )__qt_painter0, (const QRectF& )rect1, (QTextInlineObject )__qt_object2, (int )posInDocument3, (const QTextFormat& )__qt_format4, __do_static_call);

}

// QAbstractTextDocumentLayout::frameBoundingRect(QTextFrame * frame) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* frame0)
{
    QTextFrame*  __qt_frame0 = (QTextFrame* ) frame0;
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRectF  __qt_return_value = __qt_this->__override_frameBoundingRect((QTextFrame* )__qt_frame0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAbstractTextDocumentLayout::hitTest(const QPointF & point, Qt::HitTestAccuracy accuracy) const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const
(void* __this_nativeId,
 QPointF point0,
 int accuracy1)
{
    Qt::HitTestAccuracy __qt_accuracy1 = (Qt::HitTestAccuracy) accuracy1;
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_hitTest((const QPointF& )point0, (Qt::HitTestAccuracy )__qt_accuracy1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractTextDocumentLayout::pageCount() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractTextDocumentLayout_pageCount_const
(void* __this_nativeId)
{
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_pageCount(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractTextDocumentLayout::positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat
(void* __this_nativeId,
 void* item0,
 int posInDocument1,
 void* format2)
{
    QTextInlineObject  __qt_item0 = (QTextInlineObject ) *(QTextInlineObject *)item0;
    const QTextFormat&  __qt_format2 = (const QTextFormat& ) *(QTextFormat *)format2;
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_positionInlineObject((QTextInlineObject )__qt_item0, (int )posInDocument1, (const QTextFormat& )__qt_format2, __do_static_call);

}

// QAbstractTextDocumentLayout::resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat
(void* __this_nativeId,
 void* item0,
 int posInDocument1,
 void* format2)
{
    QTextInlineObject  __qt_item0 = (QTextInlineObject ) *(QTextInlineObject *)item0;
    const QTextFormat&  __qt_format2 = (const QTextFormat& ) *(QTextFormat *)format2;
    QAbstractTextDocumentLayout_QtDShell *__qt_this = (QAbstractTextDocumentLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeInlineObject((QTextInlineObject )__qt_item0, (int )posInDocument1, (const QTextFormat& )__qt_format2, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextDocumentLayout_staticMetaObject() {
    return (void*)&QAbstractTextDocumentLayout::staticMetaObject;
}


