#include <QVariant>
#include <qstringmatcher.h>

#include <iostream>
#include <qstringmatcher.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QStringMatcher_delete(void* nativeId)
{
    delete (QStringMatcher*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStringMatcher_destroy(void* nativeId)
{
    call_destructor((QStringMatcher*)nativeId);
}

// ---externC---
// QStringMatcher::QStringMatcher()
QTD_EXTERN QTD_EXPORT void* qtd_QStringMatcher_QStringMatcher
()
{
    QStringMatcher *__qt_this = new QStringMatcher();
    return (void *) __qt_this;

}

// QStringMatcher::QStringMatcher(const QChar * uc, int len, Qt::CaseSensitivity cs)
QTD_EXTERN QTD_EXPORT void* qtd_QStringMatcher_QStringMatcher_nativepointerchar_int_CaseSensitivity
(void* uc0,
 int len1,
 int cs2)
{
    const QChar*  __qt_uc0 = (const QChar* ) uc0;
    Qt::CaseSensitivity __qt_cs2 = (Qt::CaseSensitivity) cs2;
    QStringMatcher *__qt_this = new QStringMatcher((const QChar* )__qt_uc0, (int )len1, (Qt::CaseSensitivity )__qt_cs2);
    return (void *) __qt_this;

}

// QStringMatcher::QStringMatcher(const QString & pattern, Qt::CaseSensitivity cs)
QTD_EXTERN QTD_EXPORT void* qtd_QStringMatcher_QStringMatcher_string_CaseSensitivity
(DArray pattern0,
 int cs1)
{
    QString __qt_pattern0 = QString::fromUtf8((const char *)pattern0.ptr, pattern0.length);
    Qt::CaseSensitivity __qt_cs1 = (Qt::CaseSensitivity) cs1;
    QStringMatcher *__qt_this = new QStringMatcher((const QString& )__qt_pattern0, (Qt::CaseSensitivity )__qt_cs1);
    return (void *) __qt_this;

}

// QStringMatcher::QStringMatcher(const QStringMatcher & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStringMatcher_QStringMatcher_QStringMatcher
(void* other0)
{
    const QStringMatcher&  __qt_other0 = (const QStringMatcher& ) *(QStringMatcher *)other0;
    QStringMatcher *__qt_this = new QStringMatcher((const QStringMatcher& )__qt_other0);
    return (void *) __qt_this;

}

// QStringMatcher::caseSensitivity() const
QTD_EXTERN QTD_EXPORT int qtd_QStringMatcher_caseSensitivity_const
(void* __this_nativeId)
{
    QStringMatcher *__qt_this = (QStringMatcher *) __this_nativeId;
    int  __qt_return_value = __qt_this->caseSensitivity();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStringMatcher::indexIn(const QChar * str, int length, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QStringMatcher_indexIn_nativepointerchar_int_int_const
(void* __this_nativeId,
 void* str0,
 int length1,
 int from2)
{
    const QChar*  __qt_str0 = (const QChar* ) str0;
    QStringMatcher *__qt_this = (QStringMatcher *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexIn((const QChar* )__qt_str0, (int )length1, (int )from2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStringMatcher::indexIn(const QString & str, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QStringMatcher_indexIn_string_int_const
(void* __this_nativeId,
 DArray str0,
 int from1)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QStringMatcher *__qt_this = (QStringMatcher *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexIn((const QString& )__qt_str0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStringMatcher::pattern() const
QTD_EXTERN QTD_EXPORT void qtd_QStringMatcher_pattern_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QStringMatcher *__qt_this = (QStringMatcher *) __this_nativeId;
    QString  __qt_return_value = __qt_this->pattern();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QStringMatcher::setCaseSensitivity(Qt::CaseSensitivity cs)
QTD_EXTERN QTD_EXPORT void qtd_QStringMatcher_setCaseSensitivity_CaseSensitivity
(void* __this_nativeId,
 int cs0)
{
    Qt::CaseSensitivity __qt_cs0 = (Qt::CaseSensitivity) cs0;
    QStringMatcher *__qt_this = (QStringMatcher *) __this_nativeId;
    __qt_this->setCaseSensitivity((Qt::CaseSensitivity )__qt_cs0);

}

// QStringMatcher::setPattern(const QString & pattern)
QTD_EXTERN QTD_EXPORT void qtd_QStringMatcher_setPattern_string
(void* __this_nativeId,
 DArray pattern0)
{
    QString __qt_pattern0 = QString::fromUtf8((const char *)pattern0.ptr, pattern0.length);
    QStringMatcher *__qt_this = (QStringMatcher *) __this_nativeId;
    __qt_this->setPattern((const QString& )__qt_pattern0);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QStringMatcher_QTypeInfo_isComplex() { return (bool) QTypeInfo<QStringMatcher>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QStringMatcher_QTypeInfo_isStatic() { return (bool) QTypeInfo<QStringMatcher>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QStringMatcher_QTypeInfo_isLarge() { return (bool) QTypeInfo<QStringMatcher>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QStringMatcher_QTypeInfo_isPointer() { return (bool) QTypeInfo<QStringMatcher>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QStringMatcher_QTypeInfo_isDummy() { return (bool) QTypeInfo<QStringMatcher>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QStringMatcher_placed_copy(void* orig, void* place) {
    const QStringMatcher&  __qt_orig = (const QStringMatcher& ) *(QStringMatcher *)orig;
    QStringMatcher *result = new (place) QStringMatcher (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QStringMatcher_native_copy(void* orig) {
    const QStringMatcher&  __qt_orig = (const QStringMatcher& ) *(QStringMatcher *)orig;
    QStringMatcher *result = new QStringMatcher (__qt_orig);
    return result;
}

