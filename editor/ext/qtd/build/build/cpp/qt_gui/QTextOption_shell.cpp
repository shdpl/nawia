#include <QVariant>
#include <qlist.h>
#include <qtextoption.h>

#include <iostream>
#include <qtextoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextOption_delete(void* nativeId)
{
    delete (QTextOption*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextOption_destroy(void* nativeId)
{
    call_destructor((QTextOption*)nativeId);
}

// ---externC---
// QTextOption::QTextOption()
QTD_EXTERN QTD_EXPORT void* qtd_QTextOption_QTextOption
()
{
    QTextOption *__qt_this = new QTextOption();
    return (void *) __qt_this;

}

// QTextOption::QTextOption(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void* qtd_QTextOption_QTextOption_Alignment
(int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QTextOption *__qt_this = new QTextOption((Qt::Alignment )__qt_alignment0);
    return (void *) __qt_this;

}

// QTextOption::QTextOption(const QTextOption & o)
QTD_EXTERN QTD_EXPORT void* qtd_QTextOption_QTextOption_QTextOption
(void* o0)
{
    const QTextOption&  __qt_o0 = (const QTextOption& ) *(QTextOption *)o0;
    QTextOption *__qt_this = new QTextOption((const QTextOption& )__qt_o0);
    return (void *) __qt_this;

}

// QTextOption::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QTextOption_alignment_const
(void* __this_nativeId)
{
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextOption::flags() const
QTD_EXTERN QTD_EXPORT int qtd_QTextOption_flags_const
(void* __this_nativeId)
{
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    int  __qt_return_value = __qt_this->flags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextOption::setAlignment(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QTextOption_setAlignment_Alignment
(void* __this_nativeId,
 int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    __qt_this->setAlignment((Qt::Alignment )__qt_alignment0);

}

// QTextOption::setFlags(QFlags<QTextOption::Flag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QTextOption_setFlags_Flags
(void* __this_nativeId,
 int flags0)
{
    QFlags<QTextOption::Flag> __qt_flags0 = (QFlags<QTextOption::Flag>) flags0;
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    __qt_this->setFlags((QTextOption::Flags )__qt_flags0);

}

// QTextOption::setTabArray(QList<double > tabStops)
QTD_EXTERN QTD_EXPORT void qtd_QTextOption_setTabArray_QList
(void* __this_nativeId,
 void* tabStops0)
{
QList<double > __qt_tabStops0 = (*(QList<double > *)tabStops0);
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    __qt_this->setTabArray((QList<double > )__qt_tabStops0);

}

// QTextOption::setTabStop(double tabStop)
QTD_EXTERN QTD_EXPORT void qtd_QTextOption_setTabStop_double
(void* __this_nativeId,
 double tabStop0)
{
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    __qt_this->setTabStop((double )tabStop0);

}

// QTextOption::setTabs(QList<QTextOption::Tab > tabStops)
QTD_EXTERN QTD_EXPORT void qtd_QTextOption_setTabs_QList
(void* __this_nativeId,
 void* tabStops0)
{
QList<QTextOption::Tab > __qt_tabStops0 = (*(QList<QTextOption::Tab > *)tabStops0);
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    __qt_this->setTabs((QList<QTextOption::Tab > )__qt_tabStops0);

}

// QTextOption::setTextDirection(Qt::LayoutDirection aDirection)
QTD_EXTERN QTD_EXPORT void qtd_QTextOption_setTextDirection_LayoutDirection
(void* __this_nativeId,
 int aDirection0)
{
    Qt::LayoutDirection __qt_aDirection0 = (Qt::LayoutDirection) aDirection0;
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    __qt_this->setTextDirection((Qt::LayoutDirection )__qt_aDirection0);

}

// QTextOption::setUseDesignMetrics(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTextOption_setUseDesignMetrics_bool
(void* __this_nativeId,
 bool b0)
{
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    __qt_this->setUseDesignMetrics((bool )b0);

}

// QTextOption::setWrapMode(QTextOption::WrapMode wrap)
QTD_EXTERN QTD_EXPORT void qtd_QTextOption_setWrapMode_WrapMode
(void* __this_nativeId,
 int wrap0)
{
    QTextOption::WrapMode __qt_wrap0 = (QTextOption::WrapMode) wrap0;
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    __qt_this->setWrapMode((QTextOption::WrapMode )__qt_wrap0);

}

// QTextOption::tabArray() const
QTD_EXTERN QTD_EXPORT void qtd_QTextOption_tabArray_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    QList<double >  __qt_return_value = __qt_this->tabArray();

QList<double > &__d_return_value_tmp = (*(QList<double > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextOption::tabStop() const
QTD_EXTERN QTD_EXPORT double qtd_QTextOption_tabStop_const
(void* __this_nativeId)
{
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    double  __qt_return_value = __qt_this->tabStop();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextOption::tabs() const
QTD_EXTERN QTD_EXPORT void qtd_QTextOption_tabs_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    QList<QTextOption::Tab >  __qt_return_value = __qt_this->tabs();

QList<QTextOption::Tab > &__d_return_value_tmp = (*(QList<QTextOption::Tab > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextOption::textDirection() const
QTD_EXTERN QTD_EXPORT int qtd_QTextOption_textDirection_const
(void* __this_nativeId)
{
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    int  __qt_return_value = __qt_this->textDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextOption::useDesignMetrics() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_useDesignMetrics_const
(void* __this_nativeId)
{
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    bool  __qt_return_value = __qt_this->useDesignMetrics();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextOption::wrapMode() const
QTD_EXTERN QTD_EXPORT int qtd_QTextOption_wrapMode_const
(void* __this_nativeId)
{
    QTextOption *__qt_this = (QTextOption *) __this_nativeId;
    int  __qt_return_value = __qt_this->wrapMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextOption>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextOption>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextOption>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextOption>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextOption>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextOption_placed_copy(void* orig, void* place) {
    const QTextOption&  __qt_orig = (const QTextOption& ) *(QTextOption *)orig;
    QTextOption *result = new (place) QTextOption (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextOption_native_copy(void* orig) {
    const QTextOption&  __qt_orig = (const QTextOption& ) *(QTextOption *)orig;
    QTextOption *result = new QTextOption (__qt_orig);
    return result;
}

