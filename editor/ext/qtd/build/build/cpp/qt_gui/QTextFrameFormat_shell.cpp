#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qvector.h>

#include "QTextFrameFormat_shell.h"
#include <iostream>
#include <qtextformat.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_delete(void* nativeId)
{
    delete (QTextFrameFormat_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_destroy(void* nativeId)
{
    call_destructor((QTextFrameFormat_QtDShell*)nativeId);
}

QTextFrameFormat_QtDShell::QTextFrameFormat_QtDShell()
    : QTextFrameFormat()
{
}

QTextFrameFormat_QtDShell::QTextFrameFormat_QtDShell(const QTextFormat&  fmt0)
    : QTextFrameFormat(fmt0)
{
}

QTextFrameFormat_QtDShell::~QTextFrameFormat_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextFrameFormat::QTextFrameFormat()
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrameFormat_QTextFrameFormat
()
{
    QTextFrameFormat_QtDShell *__qt_this = new QTextFrameFormat_QtDShell();
    return (void *) __qt_this;

}

// QTextFrameFormat::QTextFrameFormat(const QTextFormat & fmt)
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrameFormat_QTextFrameFormat_QTextFormat
(void* fmt0)
{
    const QTextFormat&  __qt_fmt0 = (const QTextFormat& ) *(QTextFormat *)fmt0;
    QTextFrameFormat_QtDShell *__qt_this = new QTextFrameFormat_QtDShell((const QTextFormat& )__qt_fmt0);
    return (void *) __qt_this;

}

// QTextFrameFormat::border() const
QTD_EXTERN QTD_EXPORT double qtd_QTextFrameFormat_border_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->border();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrameFormat::borderBrush() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrameFormat_borderBrush_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->borderBrush();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QTextFrameFormat::borderStyle() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFrameFormat_borderStyle_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->borderStyle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrameFormat::bottomMargin() const
QTD_EXTERN QTD_EXPORT double qtd_QTextFrameFormat_bottomMargin_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->bottomMargin();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrameFormat::height() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrameFormat_height_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    QTextLength  __qt_return_value = __qt_this->height();

    void* __d_return_value = (void*) new QTextLength(__qt_return_value);

    return __d_return_value;
}

// QTextFrameFormat::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrameFormat_isValid_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrameFormat::leftMargin() const
QTD_EXTERN QTD_EXPORT double qtd_QTextFrameFormat_leftMargin_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->leftMargin();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrameFormat::margin() const
QTD_EXTERN QTD_EXPORT double qtd_QTextFrameFormat_margin_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->margin();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrameFormat::padding() const
QTD_EXTERN QTD_EXPORT double qtd_QTextFrameFormat_padding_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->padding();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrameFormat::pageBreakPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFrameFormat_pageBreakPolicy_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->pageBreakPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrameFormat::position() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFrameFormat_position_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->position();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrameFormat::rightMargin() const
QTD_EXTERN QTD_EXPORT double qtd_QTextFrameFormat_rightMargin_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->rightMargin();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrameFormat::setBorder(double border)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setBorder_double
(void* __this_nativeId,
 double border0)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setBorder((double )border0);

}

// QTextFrameFormat::setBorderBrush(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setBorderBrush_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setBorderBrush((const QBrush& )__qt_brush0);

}

// QTextFrameFormat::setBorderStyle(QTextFrameFormat::BorderStyle style)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setBorderStyle_BorderStyle
(void* __this_nativeId,
 int style0)
{
    QTextFrameFormat::BorderStyle __qt_style0 = (QTextFrameFormat::BorderStyle) style0;
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setBorderStyle((QTextFrameFormat::BorderStyle )__qt_style0);

}

// QTextFrameFormat::setBottomMargin(double margin)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setBottomMargin_double
(void* __this_nativeId,
 double margin0)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setBottomMargin((double )margin0);

}

// QTextFrameFormat::setHeight(const QTextLength & height)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setHeight_QTextLength
(void* __this_nativeId,
 void* height0)
{
    const QTextLength&  __qt_height0 = (const QTextLength& ) *(QTextLength *)height0;
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setHeight((const QTextLength& )__qt_height0);

}

// QTextFrameFormat::setHeight(double height)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setHeight_double
(void* __this_nativeId,
 double height0)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setHeight((double )height0);

}

// QTextFrameFormat::setLeftMargin(double margin)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setLeftMargin_double
(void* __this_nativeId,
 double margin0)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setLeftMargin((double )margin0);

}

// QTextFrameFormat::setMargin(double margin)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setMargin_double
(void* __this_nativeId,
 double margin0)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setMargin((double )margin0);

}

// QTextFrameFormat::setPadding(double padding)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setPadding_double
(void* __this_nativeId,
 double padding0)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setPadding((double )padding0);

}

// QTextFrameFormat::setPageBreakPolicy(QFlags<QTextFormat::PageBreakFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setPageBreakPolicy_PageBreakFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<QTextFormat::PageBreakFlag> __qt_flags0 = (QFlags<QTextFormat::PageBreakFlag>) flags0;
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setPageBreakPolicy((QTextFormat::PageBreakFlags )__qt_flags0);

}

// QTextFrameFormat::setPosition(QTextFrameFormat::Position f)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setPosition_Position
(void* __this_nativeId,
 int f0)
{
    QTextFrameFormat::Position __qt_f0 = (QTextFrameFormat::Position) f0;
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setPosition((QTextFrameFormat::Position )__qt_f0);

}

// QTextFrameFormat::setRightMargin(double margin)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setRightMargin_double
(void* __this_nativeId,
 double margin0)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setRightMargin((double )margin0);

}

// QTextFrameFormat::setTopMargin(double margin)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setTopMargin_double
(void* __this_nativeId,
 double margin0)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setTopMargin((double )margin0);

}

// QTextFrameFormat::setWidth(const QTextLength & length)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setWidth_QTextLength
(void* __this_nativeId,
 void* length0)
{
    const QTextLength&  __qt_length0 = (const QTextLength& ) *(QTextLength *)length0;
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setWidth((const QTextLength& )__qt_length0);

}

// QTextFrameFormat::setWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_setWidth_double
(void* __this_nativeId,
 double width0)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    __qt_this->setWidth((double )width0);

}

// QTextFrameFormat::topMargin() const
QTD_EXTERN QTD_EXPORT double qtd_QTextFrameFormat_topMargin_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->topMargin();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFrameFormat::width() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFrameFormat_width_const
(void* __this_nativeId)
{
    QTextFrameFormat_QtDShell *__qt_this = (QTextFrameFormat_QtDShell *) __this_nativeId;
    QTextLength  __qt_return_value = __qt_this->width();

    void* __d_return_value = (void*) new QTextLength(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrameFormat_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextFrameFormat>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrameFormat_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextFrameFormat>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrameFormat_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextFrameFormat>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrameFormat_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextFrameFormat>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFrameFormat_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextFrameFormat>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextFrameFormat_placed_copy(void* orig, void* place) {
    const QTextFrameFormat_QtDShell&  __qt_orig = (const QTextFrameFormat_QtDShell& ) *(QTextFrameFormat_QtDShell *)orig;
    QTextFrameFormat *result = new (place) QTextFrameFormat (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextFrameFormat_native_copy(void* orig) {
    const QTextFrameFormat_QtDShell&  __qt_orig = (const QTextFrameFormat_QtDShell& ) *(QTextFrameFormat_QtDShell *)orig;
    QTextFrameFormat *result = new QTextFrameFormat (__qt_orig);
    return result;
}

