#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomNotation_delete(void* nativeId)
{
    delete (QDomNotation*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomNotation_destroy(void* nativeId)
{
    call_destructor((QDomNotation*)nativeId);
}

// ---externC---
// QDomNotation::QDomNotation()
QTD_EXTERN QTD_EXPORT void* qtd_QDomNotation_QDomNotation
()
{
    QDomNotation *__qt_this = new QDomNotation();
    return (void *) __qt_this;

}

// QDomNotation::QDomNotation(const QDomNotation & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNotation_QDomNotation_QDomNotation
(void* x0)
{
    const QDomNotation&  __qt_x0 = (const QDomNotation& ) *(QDomNotation *)x0;
    QDomNotation *__qt_this = new QDomNotation((const QDomNotation& )__qt_x0);
    return (void *) __qt_this;

}

// QDomNotation::publicId() const
QTD_EXTERN QTD_EXPORT void qtd_QDomNotation_publicId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomNotation *__qt_this = (QDomNotation *) __this_nativeId;
    QString  __qt_return_value = __qt_this->publicId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomNotation::systemId() const
QTD_EXTERN QTD_EXPORT void qtd_QDomNotation_systemId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomNotation *__qt_this = (QDomNotation *) __this_nativeId;
    QString  __qt_return_value = __qt_this->systemId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomNotation_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomNotation>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNotation_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomNotation>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNotation_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomNotation>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNotation_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomNotation>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNotation_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomNotation>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomNotation_placed_copy(void* orig, void* place) {
    const QDomNotation&  __qt_orig = (const QDomNotation& ) *(QDomNotation *)orig;
    QDomNotation *result = new (place) QDomNotation (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomNotation_native_copy(void* orig) {
    const QDomNotation&  __qt_orig = (const QDomNotation& ) *(QDomNotation *)orig;
    QDomNotation *result = new QDomNotation (__qt_orig);
    return result;
}

