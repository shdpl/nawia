#include <QVariant>
#include <qpainter.h>
#include <qtextdocument.h>
#include <qtextformat.h>

#include "QTextObjectInterface_shell.h"
#include <iostream>
#include <qabstracttextdocumentlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextObjectInterface_delete(void* nativeId)
{
    delete (QTextObjectInterface_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextObjectInterface_destroy(void* nativeId)
{
    call_destructor((QTextObjectInterface_QtDShell*)nativeId);
}

QTextObjectInterface_QtDShell::QTextObjectInterface_QtDShell(void *d_ptr)
    : QTextObjectInterface(),
      QtdObjectLink(d_ptr)
{
}

QTextObjectInterface_QtDShell::~QTextObjectInterface_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QTextObjectInterface_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QTextObjectInterface*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QTextObjectInterface_drawObject_QPainter_QRectF_QTextDocument_int_QTextFormat_dispatch, (void *dId, void* painter0, QRectF* rect1, void* doc2, int posInDocument3, void* format4))
QTD_FUNC(GUI, QTextObjectInterface_drawObject_QPainter_QRectF_QTextDocument_int_QTextFormat_dispatch)
void QTextObjectInterface_QtDShell::drawObject(QPainter*  painter0, const QRectF&  rect1, QTextDocument*  doc2, int  posInDocument3, const QTextFormat&  format4)
{
    qtd_QTextObjectInterface_drawObject_QPainter_QRectF_QTextDocument_int_QTextFormat_dispatch(this->dId, (QPainter* )painter0, &(QRectF& )rect1, (QTextDocument* )doc2, (int )posInDocument3, &(QTextFormat& )format4);
}

QTD_FUNC_DECL(GUI, void, QTextObjectInterface_intrinsicSize_QTextDocument_int_QTextFormat_dispatch, (void *dId, QSizeF *__d_return_value, void* doc0, int posInDocument1, void* format2))
QTD_FUNC(GUI, QTextObjectInterface_intrinsicSize_QTextDocument_int_QTextFormat_dispatch)
QSizeF  QTextObjectInterface_QtDShell::intrinsicSize(QTextDocument*  doc0, int  posInDocument1, const QTextFormat&  format2)
{
    QSizeF __d_return_value;
    qtd_QTextObjectInterface_intrinsicSize_QTextDocument_int_QTextFormat_dispatch(this->dId, &__d_return_value, (QTextDocument* )doc0, (int )posInDocument1, &(QTextFormat& )format2);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextObjectInterface_initCallBacks(VoidFunc *virts) {
    qtd_QTextObjectInterface_drawObject_QPainter_QRectF_QTextDocument_int_QTextFormat_dispatch = (qtd_QTextObjectInterface_drawObject_QPainter_QRectF_QTextDocument_int_QTextFormat_dispatch_t) virts[0];
    qtd_QTextObjectInterface_intrinsicSize_QTextDocument_int_QTextFormat_dispatch = (qtd_QTextObjectInterface_intrinsicSize_QTextDocument_int_QTextFormat_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
void QTextObjectInterface_QtDShell::__override_drawObject(QPainter*  painter0, const QRectF&  rect1, QTextDocument*  doc2, int  posInDocument3, const QTextFormat&  format4, bool static_call)
{
    if (static_call) {
        return;
    } else {
        drawObject((QPainter* )painter0, (const QRectF& )rect1, (QTextDocument* )doc2, (int )posInDocument3, (const QTextFormat& )format4);
    }
}

QSizeF  QTextObjectInterface_QtDShell::__override_intrinsicSize(QTextDocument*  doc0, int  posInDocument1, const QTextFormat&  format2, bool static_call)
{
    if (static_call) {
        return QSizeF();
    } else {
        return intrinsicSize((QTextDocument* )doc0, (int )posInDocument1, (const QTextFormat& )format2);
    }
}

// ---externC---
// QTextObjectInterface::()
QTD_EXTERN QTD_EXPORT void* qtd_QTextObjectInterface_QTextObjectInterface
(void *d_ptr)
{
    QTextObjectInterface_QtDShell *__qt_this = new QTextObjectInterface_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QTextObjectInterface::drawObject(QPainter * painter, const QRectF & rect, QTextDocument * doc, int posInDocument, const QTextFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextObjectInterface_drawObject_QPainter_QRectF_QTextDocument_int_QTextFormat
(void* __this_nativeId,
 void* painter0,
 QRectF rect1,
 void* doc2,
 int posInDocument3,
 void* format4)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QTextDocument*  __qt_doc2 = (QTextDocument* ) doc2;
    const QTextFormat&  __qt_format4 = (const QTextFormat& ) *(QTextFormat *)format4;
    QTextObjectInterface_QtDShell *__qt_this = (QTextObjectInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTextObjectInterface*)__this_nativeId) != NULL;
    __qt_this->__override_drawObject((QPainter* )__qt_painter0, (const QRectF& )rect1, (QTextDocument* )__qt_doc2, (int )posInDocument3, (const QTextFormat& )__qt_format4, __do_static_call);

}

// QTextObjectInterface::intrinsicSize(QTextDocument * doc, int posInDocument, const QTextFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextObjectInterface_intrinsicSize_QTextDocument_int_QTextFormat
(void* __this_nativeId,
 QSizeF * __d_return_value,
 void* doc0,
 int posInDocument1,
 void* format2)
{
    QTextDocument*  __qt_doc0 = (QTextDocument* ) doc0;
    const QTextFormat&  __qt_format2 = (const QTextFormat& ) *(QTextFormat *)format2;
    QTextObjectInterface_QtDShell *__qt_this = (QTextObjectInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTextObjectInterface*)__this_nativeId) != NULL;
    QSizeF  __qt_return_value = __qt_this->__override_intrinsicSize((QTextDocument* )__qt_doc0, (int )posInDocument1, (const QTextFormat& )__qt_format2, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


