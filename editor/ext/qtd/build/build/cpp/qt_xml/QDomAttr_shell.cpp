#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomAttr_delete(void* nativeId)
{
    delete (QDomAttr*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomAttr_destroy(void* nativeId)
{
    call_destructor((QDomAttr*)nativeId);
}

// ---externC---
// QDomAttr::QDomAttr()
QTD_EXTERN QTD_EXPORT void* qtd_QDomAttr_QDomAttr
()
{
    QDomAttr *__qt_this = new QDomAttr();
    return (void *) __qt_this;

}

// QDomAttr::QDomAttr(const QDomAttr & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomAttr_QDomAttr_QDomAttr
(void* x0)
{
    const QDomAttr&  __qt_x0 = (const QDomAttr& ) *(QDomAttr *)x0;
    QDomAttr *__qt_this = new QDomAttr((const QDomAttr& )__qt_x0);
    return (void *) __qt_this;

}

// QDomAttr::name() const
QTD_EXTERN QTD_EXPORT void qtd_QDomAttr_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomAttr *__qt_this = (QDomAttr *) __this_nativeId;
    QString  __qt_return_value = __qt_this->name();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomAttr::ownerElement() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomAttr_ownerElement_const
(void* __this_nativeId)
{
    QDomAttr *__qt_this = (QDomAttr *) __this_nativeId;
    QDomElement  __qt_return_value = __qt_this->ownerElement();

    void* __d_return_value = (void*) new QDomElement(__qt_return_value);

    return __d_return_value;
}

// QDomAttr::setValue(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDomAttr_setValue_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QDomAttr *__qt_this = (QDomAttr *) __this_nativeId;
    __qt_this->setValue((const QString& )__qt_arg__1);

}

// QDomAttr::specified() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomAttr_specified_const
(void* __this_nativeId)
{
    QDomAttr *__qt_this = (QDomAttr *) __this_nativeId;
    bool  __qt_return_value = __qt_this->specified();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomAttr::value() const
QTD_EXTERN QTD_EXPORT void qtd_QDomAttr_value_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomAttr *__qt_this = (QDomAttr *) __this_nativeId;
    QString  __qt_return_value = __qt_this->value();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomAttr_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomAttr>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomAttr_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomAttr>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomAttr_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomAttr>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomAttr_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomAttr>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomAttr_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomAttr>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomAttr_placed_copy(void* orig, void* place) {
    const QDomAttr&  __qt_orig = (const QDomAttr& ) *(QDomAttr *)orig;
    QDomAttr *result = new (place) QDomAttr (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomAttr_native_copy(void* orig) {
    const QDomAttr&  __qt_orig = (const QDomAttr& ) *(QDomAttr *)orig;
    QDomAttr *result = new QDomAttr (__qt_orig);
    return result;
}

