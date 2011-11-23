#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomDocumentFragment_delete(void* nativeId)
{
    delete (QDomDocumentFragment*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomDocumentFragment_destroy(void* nativeId)
{
    call_destructor((QDomDocumentFragment*)nativeId);
}

// ---externC---
// QDomDocumentFragment::QDomDocumentFragment()
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocumentFragment_QDomDocumentFragment
()
{
    QDomDocumentFragment *__qt_this = new QDomDocumentFragment();
    return (void *) __qt_this;

}

// QDomDocumentFragment::QDomDocumentFragment(const QDomDocumentFragment & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocumentFragment_QDomDocumentFragment_QDomDocumentFragment
(void* x0)
{
    const QDomDocumentFragment&  __qt_x0 = (const QDomDocumentFragment& ) *(QDomDocumentFragment *)x0;
    QDomDocumentFragment *__qt_this = new QDomDocumentFragment((const QDomDocumentFragment& )__qt_x0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocumentFragment_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomDocumentFragment>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocumentFragment_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomDocumentFragment>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocumentFragment_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomDocumentFragment>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocumentFragment_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomDocumentFragment>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocumentFragment_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomDocumentFragment>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomDocumentFragment_placed_copy(void* orig, void* place) {
    const QDomDocumentFragment&  __qt_orig = (const QDomDocumentFragment& ) *(QDomDocumentFragment *)orig;
    QDomDocumentFragment *result = new (place) QDomDocumentFragment (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomDocumentFragment_native_copy(void* orig) {
    const QDomDocumentFragment&  __qt_orig = (const QDomDocumentFragment& ) *(QDomDocumentFragment *)orig;
    QDomDocumentFragment *result = new QDomDocumentFragment (__qt_orig);
    return result;
}

