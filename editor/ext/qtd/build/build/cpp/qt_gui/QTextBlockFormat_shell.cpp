#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qlist.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qtextoption.h>
#include <qvariant.h>
#include <qvector.h>

#include "QTextBlockFormat_shell.h"
#include <iostream>
#include <qtextformat.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_delete(void* nativeId)
{
    delete (QTextBlockFormat_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_destroy(void* nativeId)
{
    call_destructor((QTextBlockFormat_QtDShell*)nativeId);
}

QTextBlockFormat_QtDShell::QTextBlockFormat_QtDShell()
    : QTextBlockFormat()
{
}

QTextBlockFormat_QtDShell::QTextBlockFormat_QtDShell(const QTextFormat&  fmt0)
    : QTextBlockFormat(fmt0)
{
}

QTextBlockFormat_QtDShell::~QTextBlockFormat_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextBlockFormat::QTextBlockFormat()
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlockFormat_QTextBlockFormat
()
{
    QTextBlockFormat_QtDShell *__qt_this = new QTextBlockFormat_QtDShell();
    return (void *) __qt_this;

}

// QTextBlockFormat::QTextBlockFormat(const QTextFormat & fmt)
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlockFormat_QTextBlockFormat_QTextFormat
(void* fmt0)
{
    const QTextFormat&  __qt_fmt0 = (const QTextFormat& ) *(QTextFormat *)fmt0;
    QTextBlockFormat_QtDShell *__qt_this = new QTextBlockFormat_QtDShell((const QTextFormat& )__qt_fmt0);
    return (void *) __qt_this;

}

// QTextBlockFormat::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlockFormat_alignment_const
(void* __this_nativeId)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlockFormat::bottomMargin() const
QTD_EXTERN QTD_EXPORT double qtd_QTextBlockFormat_bottomMargin_const
(void* __this_nativeId)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->bottomMargin();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlockFormat::indent() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlockFormat_indent_const
(void* __this_nativeId)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->indent();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlockFormat::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlockFormat_isValid_const
(void* __this_nativeId)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlockFormat::leftMargin() const
QTD_EXTERN QTD_EXPORT double qtd_QTextBlockFormat_leftMargin_const
(void* __this_nativeId)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->leftMargin();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlockFormat::nonBreakableLines() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlockFormat_nonBreakableLines_const
(void* __this_nativeId)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->nonBreakableLines();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlockFormat::pageBreakPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlockFormat_pageBreakPolicy_const
(void* __this_nativeId)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->pageBreakPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlockFormat::rightMargin() const
QTD_EXTERN QTD_EXPORT double qtd_QTextBlockFormat_rightMargin_const
(void* __this_nativeId)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->rightMargin();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlockFormat::setAlignment(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_setAlignment_Alignment
(void* __this_nativeId,
 int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((Qt::Alignment )__qt_alignment0);

}

// QTextBlockFormat::setBottomMargin(double margin)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_setBottomMargin_double
(void* __this_nativeId,
 double margin0)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    __qt_this->setBottomMargin((double )margin0);

}

// QTextBlockFormat::setIndent(int indent)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_setIndent_int
(void* __this_nativeId,
 int indent0)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    __qt_this->setIndent((int )indent0);

}

// QTextBlockFormat::setLeftMargin(double margin)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_setLeftMargin_double
(void* __this_nativeId,
 double margin0)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    __qt_this->setLeftMargin((double )margin0);

}

// QTextBlockFormat::setNonBreakableLines(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_setNonBreakableLines_bool
(void* __this_nativeId,
 bool b0)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    __qt_this->setNonBreakableLines((bool )b0);

}

// QTextBlockFormat::setPageBreakPolicy(QFlags<QTextFormat::PageBreakFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_setPageBreakPolicy_PageBreakFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<QTextFormat::PageBreakFlag> __qt_flags0 = (QFlags<QTextFormat::PageBreakFlag>) flags0;
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    __qt_this->setPageBreakPolicy((QTextFormat::PageBreakFlags )__qt_flags0);

}

// QTextBlockFormat::setRightMargin(double margin)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_setRightMargin_double
(void* __this_nativeId,
 double margin0)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    __qt_this->setRightMargin((double )margin0);

}

// QTextBlockFormat::setTabPositions(const QList<QTextOption::Tab > & tabs)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_setTabPositions_QList
(void* __this_nativeId,
 void* tabs0)
{
QList<QTextOption::Tab > __qt_tabs0 = (*(QList<QTextOption::Tab > *)tabs0);
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    __qt_this->setTabPositions((const QList<QTextOption::Tab >& )__qt_tabs0);

}

// QTextBlockFormat::setTextIndent(double aindent)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_setTextIndent_double
(void* __this_nativeId,
 double aindent0)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    __qt_this->setTextIndent((double )aindent0);

}

// QTextBlockFormat::setTopMargin(double margin)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_setTopMargin_double
(void* __this_nativeId,
 double margin0)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    __qt_this->setTopMargin((double )margin0);

}

// QTextBlockFormat::tabPositions() const
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_tabPositions_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    QList<QTextOption::Tab >  __qt_return_value = __qt_this->tabPositions();

QList<QTextOption::Tab > &__d_return_value_tmp = (*(QList<QTextOption::Tab > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextBlockFormat::textIndent() const
QTD_EXTERN QTD_EXPORT double qtd_QTextBlockFormat_textIndent_const
(void* __this_nativeId)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->textIndent();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlockFormat::topMargin() const
QTD_EXTERN QTD_EXPORT double qtd_QTextBlockFormat_topMargin_const
(void* __this_nativeId)
{
    QTextBlockFormat_QtDShell *__qt_this = (QTextBlockFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->topMargin();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlockFormat_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextBlockFormat>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlockFormat_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextBlockFormat>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlockFormat_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextBlockFormat>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlockFormat_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextBlockFormat>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlockFormat_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextBlockFormat>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextBlockFormat_placed_copy(void* orig, void* place) {
    const QTextBlockFormat_QtDShell&  __qt_orig = (const QTextBlockFormat_QtDShell& ) *(QTextBlockFormat_QtDShell *)orig;
    QTextBlockFormat *result = new (place) QTextBlockFormat (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextBlockFormat_native_copy(void* orig) {
    const QTextBlockFormat_QtDShell&  __qt_orig = (const QTextBlockFormat_QtDShell& ) *(QTextBlockFormat_QtDShell *)orig;
    QTextBlockFormat *result = new QTextBlockFormat (__qt_orig);
    return result;
}

