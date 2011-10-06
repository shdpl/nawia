#include <QVariant>
#include <qstringlist.h>
#include <qxml.h>

#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_delete(void* nativeId)
{
    delete (QXmlNamespaceSupport*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_destroy(void* nativeId)
{
    call_destructor((QXmlNamespaceSupport*)nativeId);
}

// ---externC---
// QXmlNamespaceSupport::QXmlNamespaceSupport()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlNamespaceSupport_QXmlNamespaceSupport
()
{
    QXmlNamespaceSupport *__qt_this = new QXmlNamespaceSupport();
    return (void *) __qt_this;

}

// QXmlNamespaceSupport::popContext()
QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_popContext
(void* __this_nativeId)
{
    QXmlNamespaceSupport *__qt_this = (QXmlNamespaceSupport *) __this_nativeId;
    __qt_this->popContext();

}

// QXmlNamespaceSupport::prefix(const QString & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_prefix_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QXmlNamespaceSupport *__qt_this = (QXmlNamespaceSupport *) __this_nativeId;
    QString  __qt_return_value = __qt_this->prefix((const QString& )__qt_arg__1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlNamespaceSupport::prefixes() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_prefixes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlNamespaceSupport *__qt_this = (QXmlNamespaceSupport *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->prefixes();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QXmlNamespaceSupport::prefixes(const QString & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_prefixes_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QXmlNamespaceSupport *__qt_this = (QXmlNamespaceSupport *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->prefixes((const QString& )__qt_arg__1);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QXmlNamespaceSupport::processName(const QString & arg__1, bool arg__2, QString & arg__3, QString & arg__4) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_processName_string_bool_nativepointerstring_nativepointerstring_const
(void* __this_nativeId,
 DArray arg__1,
 bool arg__2,
 DArray arg__3,
 DArray arg__4)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QString __qt_arg__3 = QString::fromUtf8((const char *)arg__3.ptr, arg__3.length);
    QString __qt_arg__4 = QString::fromUtf8((const char *)arg__4.ptr, arg__4.length);
    QXmlNamespaceSupport *__qt_this = (QXmlNamespaceSupport *) __this_nativeId;
    __qt_this->processName((const QString& )__qt_arg__1, (bool )arg__2, (QString& )__qt_arg__3, (QString& )__qt_arg__4);
    qtd_toUtf8(__qt_arg__3.utf16(), __qt_arg__3.size(), &arg__3);
    qtd_toUtf8(__qt_arg__4.utf16(), __qt_arg__4.size(), &arg__4);

}

// QXmlNamespaceSupport::pushContext()
QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_pushContext
(void* __this_nativeId)
{
    QXmlNamespaceSupport *__qt_this = (QXmlNamespaceSupport *) __this_nativeId;
    __qt_this->pushContext();

}

// QXmlNamespaceSupport::reset()
QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_reset
(void* __this_nativeId)
{
    QXmlNamespaceSupport *__qt_this = (QXmlNamespaceSupport *) __this_nativeId;
    __qt_this->reset();

}

// QXmlNamespaceSupport::setPrefix(const QString & arg__1, const QString & arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_setPrefix_string_string
(void* __this_nativeId,
 DArray arg__1,
 DArray arg__2)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QString __qt_arg__2 = QString::fromUtf8((const char *)arg__2.ptr, arg__2.length);
    QXmlNamespaceSupport *__qt_this = (QXmlNamespaceSupport *) __this_nativeId;
    __qt_this->setPrefix((const QString& )__qt_arg__1, (const QString& )__qt_arg__2);

}

// QXmlNamespaceSupport::splitName(const QString & arg__1, QString & arg__2, QString & arg__3) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_splitName_string_nativepointerstring_nativepointerstring_const
(void* __this_nativeId,
 DArray arg__1,
 DArray arg__2,
 DArray arg__3)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QString __qt_arg__2 = QString::fromUtf8((const char *)arg__2.ptr, arg__2.length);
    QString __qt_arg__3 = QString::fromUtf8((const char *)arg__3.ptr, arg__3.length);
    QXmlNamespaceSupport *__qt_this = (QXmlNamespaceSupport *) __this_nativeId;
    __qt_this->splitName((const QString& )__qt_arg__1, (QString& )__qt_arg__2, (QString& )__qt_arg__3);
    qtd_toUtf8(__qt_arg__2.utf16(), __qt_arg__2.size(), &arg__2);
    qtd_toUtf8(__qt_arg__3.utf16(), __qt_arg__3.size(), &arg__3);

}

// QXmlNamespaceSupport::uri(const QString & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QXmlNamespaceSupport_uri_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QXmlNamespaceSupport *__qt_this = (QXmlNamespaceSupport *) __this_nativeId;
    QString  __qt_return_value = __qt_this->uri((const QString& )__qt_arg__1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QXmlNamespaceSupport_QTypeInfo_isComplex() { return (bool) QTypeInfo<QXmlNamespaceSupport>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlNamespaceSupport_QTypeInfo_isStatic() { return (bool) QTypeInfo<QXmlNamespaceSupport>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlNamespaceSupport_QTypeInfo_isLarge() { return (bool) QTypeInfo<QXmlNamespaceSupport>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlNamespaceSupport_QTypeInfo_isPointer() { return (bool) QTypeInfo<QXmlNamespaceSupport>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QXmlNamespaceSupport_QTypeInfo_isDummy() { return (bool) QTypeInfo<QXmlNamespaceSupport>::isDummy; }


