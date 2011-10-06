#include <QTextLayout>
#include <QVariant>
#include <qpainter.h>

#include <iostream>
#include <qtextlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextLine_delete(void* nativeId)
{
    delete (QTextLine*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextLine_destroy(void* nativeId)
{
    call_destructor((QTextLine*)nativeId);
}

// ---externC---
// QTextLine::QTextLine()
QTD_EXTERN QTD_EXPORT void* qtd_QTextLine_QTextLine
()
{
    QTextLine *__qt_this = new QTextLine();
    return (void *) __qt_this;

}

// QTextLine::ascent() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLine_ascent_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    double  __qt_return_value = __qt_this->ascent();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::cursorToX(int cursorPos, QTextLine::Edge edge) const
QTD_EXTERN QTD_EXPORT double qtd_QTextLine_cursorToX_int_Edge_const
(void* __this_nativeId,
 int cursorPos0,
 int edge1)
{
    QTextLine::Edge __qt_edge1 = (QTextLine::Edge) edge1;
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    double  __qt_return_value = __qt_this->cursorToX((int )cursorPos0, (QTextLine::Edge )__qt_edge1);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::descent() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLine_descent_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    double  __qt_return_value = __qt_this->descent();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::draw(QPainter * p, const QPointF & point, const QTextLayout::FormatRange * selection) const
QTD_EXTERN QTD_EXPORT void qtd_QTextLine_draw_QPainter_QPointF_nativepointerQTextLayout_FormatRange_const
(void* __this_nativeId,
 void* p0,
 QPointF point1,
 void* selection2)
{
    QPainter*  __qt_p0 = (QPainter* ) p0;
    const QTextLayout::FormatRange*  __qt_selection2 = (const QTextLayout::FormatRange* ) selection2;
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    __qt_this->draw((QPainter* )__qt_p0, (const QPointF& )point1, (const QTextLayout::FormatRange* )__qt_selection2);

}

// QTextLine::height() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLine_height_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    double  __qt_return_value = __qt_this->height();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::horizontalAdvance() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLine_horizontalAdvance_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    double  __qt_return_value = __qt_this->horizontalAdvance();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextLine_isValid_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::leading() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLine_leading_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    double  __qt_return_value = __qt_this->leading();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::leadingIncluded() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextLine_leadingIncluded_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    bool  __qt_return_value = __qt_this->leadingIncluded();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::lineNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QTextLine_lineNumber_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    int  __qt_return_value = __qt_this->lineNumber();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::naturalTextRect() const
QTD_EXTERN QTD_EXPORT void qtd_QTextLine_naturalTextRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->naturalTextRect();

    *__d_return_value = __qt_return_value;

}

// QTextLine::naturalTextWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLine_naturalTextWidth_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    double  __qt_return_value = __qt_this->naturalTextWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::position() const
QTD_EXTERN QTD_EXPORT void qtd_QTextLine_position_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->position();

    *__d_return_value = __qt_return_value;

}

// QTextLine::rect() const
QTD_EXTERN QTD_EXPORT void qtd_QTextLine_rect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->rect();

    *__d_return_value = __qt_return_value;

}

// QTextLine::setLeadingIncluded(bool included)
QTD_EXTERN QTD_EXPORT void qtd_QTextLine_setLeadingIncluded_bool
(void* __this_nativeId,
 bool included0)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    __qt_this->setLeadingIncluded((bool )included0);

}

// QTextLine::setLineWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QTextLine_setLineWidth_double
(void* __this_nativeId,
 double width0)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    __qt_this->setLineWidth((double )width0);

}

// QTextLine::setNumColumns(int columns)
QTD_EXTERN QTD_EXPORT void qtd_QTextLine_setNumColumns_int
(void* __this_nativeId,
 int columns0)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    __qt_this->setNumColumns((int )columns0);

}

// QTextLine::setNumColumns(int columns, double alignmentWidth)
QTD_EXTERN QTD_EXPORT void qtd_QTextLine_setNumColumns_int_double
(void* __this_nativeId,
 int columns0,
 double alignmentWidth1)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    __qt_this->setNumColumns((int )columns0, (double )alignmentWidth1);

}

// QTextLine::setPosition(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QTextLine_setPosition_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    __qt_this->setPosition((const QPointF& )pos0);

}

// QTextLine::textLength() const
QTD_EXTERN QTD_EXPORT int qtd_QTextLine_textLength_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    int  __qt_return_value = __qt_this->textLength();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::textStart() const
QTD_EXTERN QTD_EXPORT int qtd_QTextLine_textStart_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    int  __qt_return_value = __qt_this->textStart();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::width() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLine_width_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    double  __qt_return_value = __qt_this->width();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::x() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLine_x_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    double  __qt_return_value = __qt_this->x();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::xToCursor(double x, QTextLine::CursorPosition arg__2) const
QTD_EXTERN QTD_EXPORT int qtd_QTextLine_xToCursor_double_CursorPosition_const
(void* __this_nativeId,
 double x0,
 int arg__2)
{
    QTextLine::CursorPosition __qt_arg__2 = (QTextLine::CursorPosition) arg__2;
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    int  __qt_return_value = __qt_this->xToCursor((double )x0, (QTextLine::CursorPosition )__qt_arg__2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLine::y() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLine_y_const
(void* __this_nativeId)
{
    QTextLine *__qt_this = (QTextLine *) __this_nativeId;
    double  __qt_return_value = __qt_this->y();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextLine_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextLine>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLine_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextLine>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLine_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextLine>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLine_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextLine>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextLine_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextLine>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextLine_placed_copy(void* orig, void* place) {
    const QTextLine&  __qt_orig = (const QTextLine& ) *(QTextLine *)orig;
    QTextLine *result = new (place) QTextLine (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextLine_native_copy(void* orig) {
    const QTextLine&  __qt_orig = (const QTextLine& ) *(QTextLine *)orig;
    QTextLine *result = new QTextLine (__qt_orig);
    return result;
}

