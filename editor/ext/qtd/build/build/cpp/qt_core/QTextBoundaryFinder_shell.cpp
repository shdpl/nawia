#include <QVariant>
#include <qtextboundaryfinder.h>

#include <iostream>
#include <qtextboundaryfinder.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextBoundaryFinder_delete(void* nativeId)
{
    delete (QTextBoundaryFinder*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextBoundaryFinder_destroy(void* nativeId)
{
    call_destructor((QTextBoundaryFinder*)nativeId);
}

// ---externC---
// QTextBoundaryFinder::QTextBoundaryFinder()
QTD_EXTERN QTD_EXPORT void* qtd_QTextBoundaryFinder_QTextBoundaryFinder
()
{
    QTextBoundaryFinder *__qt_this = new QTextBoundaryFinder();
    return (void *) __qt_this;

}

// QTextBoundaryFinder::QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType type, const QString & string)
QTD_EXTERN QTD_EXPORT void* qtd_QTextBoundaryFinder_QTextBoundaryFinder_BoundaryType_string
(int type0,
 DArray string1)
{
    QTextBoundaryFinder::BoundaryType __qt_type0 = (QTextBoundaryFinder::BoundaryType) type0;
    QString __qt_string1 = QString::fromUtf8((const char *)string1.ptr, string1.length);
    QTextBoundaryFinder *__qt_this = new QTextBoundaryFinder((QTextBoundaryFinder::BoundaryType )__qt_type0, (const QString& )__qt_string1);
    return (void *) __qt_this;

}

// QTextBoundaryFinder::QTextBoundaryFinder(const QTextBoundaryFinder & other)
QTD_EXTERN QTD_EXPORT void* qtd_QTextBoundaryFinder_QTextBoundaryFinder_QTextBoundaryFinder
(void* other0)
{
    const QTextBoundaryFinder&  __qt_other0 = (const QTextBoundaryFinder& ) *(QTextBoundaryFinder *)other0;
    QTextBoundaryFinder *__qt_this = new QTextBoundaryFinder((const QTextBoundaryFinder& )__qt_other0);
    return (void *) __qt_this;

}

// QTextBoundaryFinder::boundaryReasons() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBoundaryFinder_boundaryReasons_const
(void* __this_nativeId)
{
    QTextBoundaryFinder *__qt_this = (QTextBoundaryFinder *) __this_nativeId;
    int  __qt_return_value = __qt_this->boundaryReasons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBoundaryFinder::isAtBoundary() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBoundaryFinder_isAtBoundary_const
(void* __this_nativeId)
{
    QTextBoundaryFinder *__qt_this = (QTextBoundaryFinder *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAtBoundary();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBoundaryFinder::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBoundaryFinder_isValid_const
(void* __this_nativeId)
{
    QTextBoundaryFinder *__qt_this = (QTextBoundaryFinder *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBoundaryFinder::position() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBoundaryFinder_position_const
(void* __this_nativeId)
{
    QTextBoundaryFinder *__qt_this = (QTextBoundaryFinder *) __this_nativeId;
    int  __qt_return_value = __qt_this->position();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBoundaryFinder::setPosition(int position)
QTD_EXTERN QTD_EXPORT void qtd_QTextBoundaryFinder_setPosition_int
(void* __this_nativeId,
 int position0)
{
    QTextBoundaryFinder *__qt_this = (QTextBoundaryFinder *) __this_nativeId;
    __qt_this->setPosition((int )position0);

}

// QTextBoundaryFinder::string() const
QTD_EXTERN QTD_EXPORT void qtd_QTextBoundaryFinder_string_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextBoundaryFinder *__qt_this = (QTextBoundaryFinder *) __this_nativeId;
    QString  __qt_return_value = __qt_this->string();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextBoundaryFinder::toEnd()
QTD_EXTERN QTD_EXPORT void qtd_QTextBoundaryFinder_toEnd
(void* __this_nativeId)
{
    QTextBoundaryFinder *__qt_this = (QTextBoundaryFinder *) __this_nativeId;
    __qt_this->toEnd();

}

// QTextBoundaryFinder::toNextBoundary()
QTD_EXTERN QTD_EXPORT int qtd_QTextBoundaryFinder_toNextBoundary
(void* __this_nativeId)
{
    QTextBoundaryFinder *__qt_this = (QTextBoundaryFinder *) __this_nativeId;
    int  __qt_return_value = __qt_this->toNextBoundary();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBoundaryFinder::toPreviousBoundary()
QTD_EXTERN QTD_EXPORT int qtd_QTextBoundaryFinder_toPreviousBoundary
(void* __this_nativeId)
{
    QTextBoundaryFinder *__qt_this = (QTextBoundaryFinder *) __this_nativeId;
    int  __qt_return_value = __qt_this->toPreviousBoundary();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBoundaryFinder::toStart()
QTD_EXTERN QTD_EXPORT void qtd_QTextBoundaryFinder_toStart
(void* __this_nativeId)
{
    QTextBoundaryFinder *__qt_this = (QTextBoundaryFinder *) __this_nativeId;
    __qt_this->toStart();

}

// QTextBoundaryFinder::type() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBoundaryFinder_type_const
(void* __this_nativeId)
{
    QTextBoundaryFinder *__qt_this = (QTextBoundaryFinder *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextBoundaryFinder_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextBoundaryFinder>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBoundaryFinder_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextBoundaryFinder>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBoundaryFinder_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextBoundaryFinder>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBoundaryFinder_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextBoundaryFinder>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBoundaryFinder_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextBoundaryFinder>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextBoundaryFinder_placed_copy(void* orig, void* place) {
    const QTextBoundaryFinder&  __qt_orig = (const QTextBoundaryFinder& ) *(QTextBoundaryFinder *)orig;
    QTextBoundaryFinder *result = new (place) QTextBoundaryFinder (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextBoundaryFinder_native_copy(void* orig) {
    const QTextBoundaryFinder&  __qt_orig = (const QTextBoundaryFinder& ) *(QTextBoundaryFinder *)orig;
    QTextBoundaryFinder *result = new QTextBoundaryFinder (__qt_orig);
    return result;
}

