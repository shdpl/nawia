#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomEntity_delete(void* nativeId)
{
    delete (QDomEntity*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomEntity_destroy(void* nativeId)
{
    call_destructor((QDomEntity*)nativeId);
}

// ---externC---
// QDomEntity::QDomEntity()
QTD_EXTERN QTD_EXPORT void* qtd_QDomEntity_QDomEntity
()
{
    QDomEntity *__qt_this = new QDomEntity();
    return (void *) __qt_this;

}

// QDomEntity::QDomEntity(const QDomEntity & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomEntity_QDomEntity_QDomEntity
(void* x0)
{
    const QDomEntity&  __qt_x0 = (const QDomEntity& ) *(QDomEntity *)x0;
    QDomEntity *__qt_this = new QDomEntity((const QDomEntity& )__qt_x0);
    return (void *) __qt_this;

}

// QDomEntity::notationName() const
QTD_EXTERN QTD_EXPORT void qtd_QDomEntity_notationName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomEntity *__qt_this = (QDomEntity *) __this_nativeId;
    QString  __qt_return_value = __qt_this->notationName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomEntity::publicId() const
QTD_EXTERN QTD_EXPORT void qtd_QDomEntity_publicId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomEntity *__qt_this = (QDomEntity *) __this_nativeId;
    QString  __qt_return_value = __qt_this->publicId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomEntity::systemId() const
QTD_EXTERN QTD_EXPORT void qtd_QDomEntity_systemId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomEntity *__qt_this = (QDomEntity *) __this_nativeId;
    QString  __qt_return_value = __qt_this->systemId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomEntity_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomEntity>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomEntity_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomEntity>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomEntity_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomEntity>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomEntity_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomEntity>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomEntity_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomEntity>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomEntity_placed_copy(void* orig, void* place) {
    const QDomEntity&  __qt_orig = (const QDomEntity& ) *(QDomEntity *)orig;
    QDomEntity *result = new (place) QDomEntity (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomEntity_native_copy(void* orig) {
    const QDomEntity&  __qt_orig = (const QDomEntity& ) *(QDomEntity *)orig;
    QDomEntity *result = new QDomEntity (__qt_orig);
    return result;
}

