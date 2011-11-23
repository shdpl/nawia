#include <QVariant>
#include <qdatetime.h>
#include <qicon.h>
#include <qurl.h>
#include <qvariant.h>
#include <qwebhistory.h>

#include <iostream>
#include <qwebhistory.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_webkit.h"

QTD_EXTERN QTD_EXPORT void qtd_QWebHistoryItem_delete(void* nativeId)
{
    delete (QWebHistoryItem*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QWebHistoryItem_destroy(void* nativeId)
{
    call_destructor((QWebHistoryItem*)nativeId);
}

// ---externC---
// QWebHistoryItem::QWebHistoryItem(const QWebHistoryItem & other)
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistoryItem_QWebHistoryItem_QWebHistoryItem
(void* other0)
{
    const QWebHistoryItem&  __qt_other0 = (const QWebHistoryItem& ) *(QWebHistoryItem *)other0;
    QWebHistoryItem *__qt_this = new QWebHistoryItem((const QWebHistoryItem& )__qt_other0);
    return (void *) __qt_this;

}

// QWebHistoryItem::icon() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistoryItem_icon_const
(void* __this_nativeId)
{
    QWebHistoryItem *__qt_this = (QWebHistoryItem *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->icon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QWebHistoryItem::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QWebHistoryItem_isValid_const
(void* __this_nativeId)
{
    QWebHistoryItem *__qt_this = (QWebHistoryItem *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebHistoryItem::lastVisited() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistoryItem_lastVisited_const
(void* __this_nativeId)
{
    QWebHistoryItem *__qt_this = (QWebHistoryItem *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->lastVisited();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QWebHistoryItem::originalUrl() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistoryItem_originalUrl_const
(void* __this_nativeId)
{
    QWebHistoryItem *__qt_this = (QWebHistoryItem *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->originalUrl();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QWebHistoryItem::setUserData(const QVariant & userData)
QTD_EXTERN QTD_EXPORT void qtd_QWebHistoryItem_setUserData_QVariant
(void* __this_nativeId,
 QVariant* userData0)
{
    QVariant __qt_userData0 = userData0 == NULL ? QVariant() : QVariant(*userData0);
    QWebHistoryItem *__qt_this = (QWebHistoryItem *) __this_nativeId;
    __qt_this->setUserData((const QVariant& )__qt_userData0);

}

// QWebHistoryItem::title() const
QTD_EXTERN QTD_EXPORT void qtd_QWebHistoryItem_title_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebHistoryItem *__qt_this = (QWebHistoryItem *) __this_nativeId;
    QString  __qt_return_value = __qt_this->title();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebHistoryItem::url() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistoryItem_url_const
(void* __this_nativeId)
{
    QWebHistoryItem *__qt_this = (QWebHistoryItem *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->url();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QWebHistoryItem::userData() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistoryItem_userData_const
(void* __this_nativeId)
{
    QWebHistoryItem *__qt_this = (QWebHistoryItem *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->userData();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QWebHistoryItem_QTypeInfo_isComplex() { return (bool) QTypeInfo<QWebHistoryItem>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QWebHistoryItem_QTypeInfo_isStatic() { return (bool) QTypeInfo<QWebHistoryItem>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QWebHistoryItem_QTypeInfo_isLarge() { return (bool) QTypeInfo<QWebHistoryItem>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QWebHistoryItem_QTypeInfo_isPointer() { return (bool) QTypeInfo<QWebHistoryItem>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QWebHistoryItem_QTypeInfo_isDummy() { return (bool) QTypeInfo<QWebHistoryItem>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QWebHistoryItem_placed_copy(void* orig, void* place) {
    const QWebHistoryItem&  __qt_orig = (const QWebHistoryItem& ) *(QWebHistoryItem *)orig;
    QWebHistoryItem *result = new (place) QWebHistoryItem (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QWebHistoryItem_native_copy(void* orig) {
    const QWebHistoryItem&  __qt_orig = (const QWebHistoryItem& ) *(QWebHistoryItem *)orig;
    QWebHistoryItem *result = new QWebHistoryItem (__qt_orig);
    return result;
}

