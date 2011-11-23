#include <QVariant>
#include <qdatastream.h>
#include <qlist.h>
#include <qwebhistory.h>

#include <iostream>
#include <qwebhistory.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_webkit.h"

// ---externC---
// QWebHistory::back()
QTD_EXTERN QTD_EXPORT void qtd_QWebHistory_back
(void* __this_nativeId)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    __qt_this->back();

}

// QWebHistory::backItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistory_backItem_const
(void* __this_nativeId)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    QWebHistoryItem  __qt_return_value = __qt_this->backItem();

    void* __d_return_value = (void*) new QWebHistoryItem(__qt_return_value);

    return __d_return_value;
}

// QWebHistory::backItems(int maxItems) const
QTD_EXTERN QTD_EXPORT void qtd_QWebHistory_backItems_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int maxItems0)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    QList<QWebHistoryItem >  __qt_return_value = __qt_this->backItems((int )maxItems0);

QList<QWebHistoryItem > &__d_return_value_tmp = (*(QList<QWebHistoryItem > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QWebHistory::canGoBack() const
QTD_EXTERN QTD_EXPORT bool qtd_QWebHistory_canGoBack_const
(void* __this_nativeId)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    bool  __qt_return_value = __qt_this->canGoBack();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebHistory::canGoForward() const
QTD_EXTERN QTD_EXPORT bool qtd_QWebHistory_canGoForward_const
(void* __this_nativeId)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    bool  __qt_return_value = __qt_this->canGoForward();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebHistory::clear()
QTD_EXTERN QTD_EXPORT void qtd_QWebHistory_clear
(void* __this_nativeId)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    __qt_this->clear();

}

// QWebHistory::count() const
QTD_EXTERN QTD_EXPORT int qtd_QWebHistory_count_const
(void* __this_nativeId)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebHistory::currentItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistory_currentItem_const
(void* __this_nativeId)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    QWebHistoryItem  __qt_return_value = __qt_this->currentItem();

    void* __d_return_value = (void*) new QWebHistoryItem(__qt_return_value);

    return __d_return_value;
}

// QWebHistory::currentItemIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QWebHistory_currentItemIndex_const
(void* __this_nativeId)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentItemIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebHistory::forward()
QTD_EXTERN QTD_EXPORT void qtd_QWebHistory_forward
(void* __this_nativeId)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    __qt_this->forward();

}

// QWebHistory::forwardItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistory_forwardItem_const
(void* __this_nativeId)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    QWebHistoryItem  __qt_return_value = __qt_this->forwardItem();

    void* __d_return_value = (void*) new QWebHistoryItem(__qt_return_value);

    return __d_return_value;
}

// QWebHistory::forwardItems(int maxItems) const
QTD_EXTERN QTD_EXPORT void qtd_QWebHistory_forwardItems_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int maxItems0)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    QList<QWebHistoryItem >  __qt_return_value = __qt_this->forwardItems((int )maxItems0);

QList<QWebHistoryItem > &__d_return_value_tmp = (*(QList<QWebHistoryItem > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QWebHistory::goToItem(const QWebHistoryItem & item)
QTD_EXTERN QTD_EXPORT void qtd_QWebHistory_goToItem_QWebHistoryItem
(void* __this_nativeId,
 void* item0)
{
    const QWebHistoryItem&  __qt_item0 = (const QWebHistoryItem& ) *(QWebHistoryItem *)item0;
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    __qt_this->goToItem((const QWebHistoryItem& )__qt_item0);

}

// QWebHistory::itemAt(int i) const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistory_itemAt_int_const
(void* __this_nativeId,
 int i0)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    QWebHistoryItem  __qt_return_value = __qt_this->itemAt((int )i0);

    void* __d_return_value = (void*) new QWebHistoryItem(__qt_return_value);

    return __d_return_value;
}

// QWebHistory::items() const
QTD_EXTERN QTD_EXPORT void qtd_QWebHistory_items_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    QList<QWebHistoryItem >  __qt_return_value = __qt_this->items();

QList<QWebHistoryItem > &__d_return_value_tmp = (*(QList<QWebHistoryItem > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QWebHistory::maximumItemCount() const
QTD_EXTERN QTD_EXPORT int qtd_QWebHistory_maximumItemCount_const
(void* __this_nativeId)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    int  __qt_return_value = __qt_this->maximumItemCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebHistory::operator<<(QDataStream & stream)
QTD_EXTERN QTD_EXPORT void qtd_QWebHistory_writeTo_QDataStream
(void* __this_nativeId,
 void* stream0)
{
    QDataStream&  __qt_stream0 = (QDataStream& ) * (QDataStream *) stream0;
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_stream0, *__qt_this);

}

// QWebHistory::operator>>(QDataStream & stream)
QTD_EXTERN QTD_EXPORT void qtd_QWebHistory_readFrom_QDataStream
(void* __this_nativeId,
 void* stream0)
{
    QDataStream&  __qt_stream0 = (QDataStream& ) * (QDataStream *) stream0;
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_stream0, *__qt_this);

}

// QWebHistory::setMaximumItemCount(int count)
QTD_EXTERN QTD_EXPORT void qtd_QWebHistory_setMaximumItemCount_int
(void* __this_nativeId,
 int count0)
{
    QWebHistory *__qt_this = (QWebHistory *) __this_nativeId;
    __qt_this->setMaximumItemCount((int )count0);

}

// ---externC---end
// Field accessors


