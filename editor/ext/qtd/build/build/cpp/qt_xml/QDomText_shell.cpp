#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomText_delete(void* nativeId)
{
    delete (QDomText*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomText_destroy(void* nativeId)
{
    call_destructor((QDomText*)nativeId);
}

// ---externC---
// QDomText::QDomText()
QTD_EXTERN QTD_EXPORT void* qtd_QDomText_QDomText
()
{
    QDomText *__qt_this = new QDomText();
    return (void *) __qt_this;

}

// QDomText::QDomText(const QDomText & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomText_QDomText_QDomText
(void* x0)
{
    const QDomText&  __qt_x0 = (const QDomText& ) *(QDomText *)x0;
    QDomText *__qt_this = new QDomText((const QDomText& )__qt_x0);
    return (void *) __qt_this;

}

// QDomText::splitText(int offset)
QTD_EXTERN QTD_EXPORT void* qtd_QDomText_splitText_int
(void* __this_nativeId,
 int offset0)
{
    QDomText *__qt_this = (QDomText *) __this_nativeId;
    QDomText  __qt_return_value = __qt_this->splitText((int )offset0);

    void* __d_return_value = (void*) new QDomText(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomText_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomText>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomText_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomText>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomText_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomText>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomText_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomText>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomText_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomText>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomText_placed_copy(void* orig, void* place) {
    const QDomText&  __qt_orig = (const QDomText& ) *(QDomText *)orig;
    QDomText *result = new (place) QDomText (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomText_native_copy(void* orig) {
    const QDomText&  __qt_orig = (const QDomText& ) *(QDomText *)orig;
    QDomText *result = new QDomText (__qt_orig);
    return result;
}

