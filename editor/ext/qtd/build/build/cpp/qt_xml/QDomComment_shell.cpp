#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomComment_delete(void* nativeId)
{
    delete (QDomComment*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomComment_destroy(void* nativeId)
{
    call_destructor((QDomComment*)nativeId);
}

// ---externC---
// QDomComment::QDomComment()
QTD_EXTERN QTD_EXPORT void* qtd_QDomComment_QDomComment
()
{
    QDomComment *__qt_this = new QDomComment();
    return (void *) __qt_this;

}

// QDomComment::QDomComment(const QDomComment & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomComment_QDomComment_QDomComment
(void* x0)
{
    const QDomComment&  __qt_x0 = (const QDomComment& ) *(QDomComment *)x0;
    QDomComment *__qt_this = new QDomComment((const QDomComment& )__qt_x0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomComment_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomComment>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomComment_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomComment>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomComment_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomComment>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomComment_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomComment>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomComment_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomComment>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomComment_placed_copy(void* orig, void* place) {
    const QDomComment&  __qt_orig = (const QDomComment& ) *(QDomComment *)orig;
    QDomComment *result = new (place) QDomComment (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomComment_native_copy(void* orig) {
    const QDomComment&  __qt_orig = (const QDomComment& ) *(QDomComment *)orig;
    QDomComment *result = new QDomComment (__qt_orig);
    return result;
}

