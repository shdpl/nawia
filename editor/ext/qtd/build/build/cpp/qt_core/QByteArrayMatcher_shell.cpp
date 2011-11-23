#include <QVariant>
#include <qbytearray.h>
#include <qbytearraymatcher.h>

#include <iostream>
#include <qbytearraymatcher.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QByteArrayMatcher_delete(void* nativeId)
{
    delete (QByteArrayMatcher*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QByteArrayMatcher_destroy(void* nativeId)
{
    call_destructor((QByteArrayMatcher*)nativeId);
}

// ---externC---
// QByteArrayMatcher::QByteArrayMatcher()
QTD_EXTERN QTD_EXPORT void* qtd_QByteArrayMatcher_QByteArrayMatcher
()
{
    QByteArrayMatcher *__qt_this = new QByteArrayMatcher();
    return (void *) __qt_this;

}

// QByteArrayMatcher::QByteArrayMatcher(const QByteArray & pattern)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArrayMatcher_QByteArrayMatcher_QByteArray
(void* pattern0)
{
    const QByteArray&  __qt_pattern0 = (const QByteArray& ) *(QByteArray *)pattern0;
    QByteArrayMatcher *__qt_this = new QByteArrayMatcher((const QByteArray& )__qt_pattern0);
    return (void *) __qt_this;

}

// QByteArrayMatcher::QByteArrayMatcher(const QByteArrayMatcher & other)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArrayMatcher_QByteArrayMatcher_QByteArrayMatcher
(void* other0)
{
    const QByteArrayMatcher&  __qt_other0 = (const QByteArrayMatcher& ) *(QByteArrayMatcher *)other0;
    QByteArrayMatcher *__qt_this = new QByteArrayMatcher((const QByteArrayMatcher& )__qt_other0);
    return (void *) __qt_this;

}

// QByteArrayMatcher::QByteArrayMatcher(const char * pattern, int length)
QTD_EXTERN QTD_EXPORT void* qtd_QByteArrayMatcher_QByteArrayMatcher_nativepointerchar_int
(char* pattern0,
 int length1)
{
    const char*  __qt_pattern0 = (const char* ) pattern0;
    QByteArrayMatcher *__qt_this = new QByteArrayMatcher((const char* )__qt_pattern0, (int )length1);
    return (void *) __qt_this;

}

// QByteArrayMatcher::indexIn(const QByteArray & ba, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QByteArrayMatcher_indexIn_QByteArray_int_const
(void* __this_nativeId,
 void* ba0,
 int from1)
{
    const QByteArray&  __qt_ba0 = (const QByteArray& ) *(QByteArray *)ba0;
    QByteArrayMatcher *__qt_this = (QByteArrayMatcher *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexIn((const QByteArray& )__qt_ba0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArrayMatcher::indexIn(const char * str, int len, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QByteArrayMatcher_indexIn_nativepointerchar_int_int_const
(void* __this_nativeId,
 char* str0,
 int len1,
 int from2)
{
    const char*  __qt_str0 = (const char* ) str0;
    QByteArrayMatcher *__qt_this = (QByteArrayMatcher *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexIn((const char* )__qt_str0, (int )len1, (int )from2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QByteArrayMatcher::pattern() const
QTD_EXTERN QTD_EXPORT void* qtd_QByteArrayMatcher_pattern_const
(void* __this_nativeId)
{
    QByteArrayMatcher *__qt_this = (QByteArrayMatcher *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->pattern();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QByteArrayMatcher::setPattern(const QByteArray & pattern)
QTD_EXTERN QTD_EXPORT void qtd_QByteArrayMatcher_setPattern_QByteArray
(void* __this_nativeId,
 void* pattern0)
{
    const QByteArray&  __qt_pattern0 = (const QByteArray& ) *(QByteArray *)pattern0;
    QByteArrayMatcher *__qt_this = (QByteArrayMatcher *) __this_nativeId;
    __qt_this->setPattern((const QByteArray& )__qt_pattern0);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QByteArrayMatcher_QTypeInfo_isComplex() { return (bool) QTypeInfo<QByteArrayMatcher>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QByteArrayMatcher_QTypeInfo_isStatic() { return (bool) QTypeInfo<QByteArrayMatcher>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QByteArrayMatcher_QTypeInfo_isLarge() { return (bool) QTypeInfo<QByteArrayMatcher>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QByteArrayMatcher_QTypeInfo_isPointer() { return (bool) QTypeInfo<QByteArrayMatcher>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QByteArrayMatcher_QTypeInfo_isDummy() { return (bool) QTypeInfo<QByteArrayMatcher>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QByteArrayMatcher_placed_copy(void* orig, void* place) {
    const QByteArrayMatcher&  __qt_orig = (const QByteArrayMatcher& ) *(QByteArrayMatcher *)orig;
    QByteArrayMatcher *result = new (place) QByteArrayMatcher (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QByteArrayMatcher_native_copy(void* orig) {
    const QByteArrayMatcher&  __qt_orig = (const QByteArrayMatcher& ) *(QByteArrayMatcher *)orig;
    QByteArrayMatcher *result = new QByteArrayMatcher (__qt_orig);
    return result;
}

