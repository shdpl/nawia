#include <QVariant>
#include <qtextformat.h>

#include <iostream>
#include <qtextlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextInlineObject_delete(void* nativeId)
{
    delete (QTextInlineObject*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextInlineObject_destroy(void* nativeId)
{
    call_destructor((QTextInlineObject*)nativeId);
}

// ---externC---
// QTextInlineObject::QTextInlineObject()
QTD_EXTERN QTD_EXPORT void* qtd_QTextInlineObject_QTextInlineObject
()
{
    QTextInlineObject *__qt_this = new QTextInlineObject();
    return (void *) __qt_this;

}

// QTextInlineObject::ascent() const
QTD_EXTERN QTD_EXPORT double qtd_QTextInlineObject_ascent_const
(void* __this_nativeId)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    double  __qt_return_value = __qt_this->ascent();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextInlineObject::descent() const
QTD_EXTERN QTD_EXPORT double qtd_QTextInlineObject_descent_const
(void* __this_nativeId)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    double  __qt_return_value = __qt_this->descent();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextInlineObject::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextInlineObject_format_const
(void* __this_nativeId)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    QTextFormat  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QTextFormat(__qt_return_value);

    return __d_return_value;
}

// QTextInlineObject::formatIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QTextInlineObject_formatIndex_const
(void* __this_nativeId)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    int  __qt_return_value = __qt_this->formatIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextInlineObject::height() const
QTD_EXTERN QTD_EXPORT double qtd_QTextInlineObject_height_const
(void* __this_nativeId)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    double  __qt_return_value = __qt_this->height();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextInlineObject::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextInlineObject_isValid_const
(void* __this_nativeId)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextInlineObject::rect() const
QTD_EXTERN QTD_EXPORT void qtd_QTextInlineObject_rect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->rect();

    *__d_return_value = __qt_return_value;

}

// QTextInlineObject::setAscent(double a)
QTD_EXTERN QTD_EXPORT void qtd_QTextInlineObject_setAscent_double
(void* __this_nativeId,
 double a0)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    __qt_this->setAscent((double )a0);

}

// QTextInlineObject::setDescent(double d)
QTD_EXTERN QTD_EXPORT void qtd_QTextInlineObject_setDescent_double
(void* __this_nativeId,
 double d0)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    __qt_this->setDescent((double )d0);

}

// QTextInlineObject::setWidth(double w)
QTD_EXTERN QTD_EXPORT void qtd_QTextInlineObject_setWidth_double
(void* __this_nativeId,
 double w0)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    __qt_this->setWidth((double )w0);

}

// QTextInlineObject::textDirection() const
QTD_EXTERN QTD_EXPORT int qtd_QTextInlineObject_textDirection_const
(void* __this_nativeId)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    int  __qt_return_value = __qt_this->textDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextInlineObject::textPosition() const
QTD_EXTERN QTD_EXPORT int qtd_QTextInlineObject_textPosition_const
(void* __this_nativeId)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    int  __qt_return_value = __qt_this->textPosition();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextInlineObject::width() const
QTD_EXTERN QTD_EXPORT double qtd_QTextInlineObject_width_const
(void* __this_nativeId)
{
    QTextInlineObject *__qt_this = (QTextInlineObject *) __this_nativeId;
    double  __qt_return_value = __qt_this->width();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextInlineObject_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextInlineObject>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextInlineObject_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextInlineObject>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextInlineObject_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextInlineObject>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextInlineObject_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextInlineObject>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextInlineObject_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextInlineObject>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextInlineObject_placed_copy(void* orig, void* place) {
    const QTextInlineObject&  __qt_orig = (const QTextInlineObject& ) *(QTextInlineObject *)orig;
    QTextInlineObject *result = new (place) QTextInlineObject (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextInlineObject_native_copy(void* orig) {
    const QTextInlineObject&  __qt_orig = (const QTextInlineObject& ) *(QTextInlineObject *)orig;
    QTextInlineObject *result = new QTextInlineObject (__qt_orig);
    return result;
}

