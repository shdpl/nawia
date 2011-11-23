#include <QVariant>
#include <qpixmap.h>
#include <qurl.h>
#include <qwebframe.h>

#include <iostream>
#include <qwebframe.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_webkit.h"

QTD_EXTERN QTD_EXPORT void qtd_QWebHitTestResult_delete(void* nativeId)
{
    delete (QWebHitTestResult*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QWebHitTestResult_destroy(void* nativeId)
{
    call_destructor((QWebHitTestResult*)nativeId);
}

// ---externC---
// QWebHitTestResult::QWebHitTestResult()
QTD_EXTERN QTD_EXPORT void* qtd_QWebHitTestResult_QWebHitTestResult
()
{
    QWebHitTestResult *__qt_this = new QWebHitTestResult();
    return (void *) __qt_this;

}

// QWebHitTestResult::QWebHitTestResult(const QWebHitTestResult & other)
QTD_EXTERN QTD_EXPORT void* qtd_QWebHitTestResult_QWebHitTestResult_QWebHitTestResult
(void* other0)
{
    const QWebHitTestResult&  __qt_other0 = (const QWebHitTestResult& ) *(QWebHitTestResult *)other0;
    QWebHitTestResult *__qt_this = new QWebHitTestResult((const QWebHitTestResult& )__qt_other0);
    return (void *) __qt_this;

}

// QWebHitTestResult::alternateText() const
QTD_EXTERN QTD_EXPORT void qtd_QWebHitTestResult_alternateText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    QString  __qt_return_value = __qt_this->alternateText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebHitTestResult::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QWebHitTestResult_boundingRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->boundingRect();

    *__d_return_value = __qt_return_value;

}

// QWebHitTestResult::frame() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHitTestResult_frame_const
(void* __this_nativeId)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    QWebFrame*  __qt_return_value = __qt_this->frame();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebHitTestResult::imageUrl() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHitTestResult_imageUrl_const
(void* __this_nativeId)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->imageUrl();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QWebHitTestResult::isContentEditable() const
QTD_EXTERN QTD_EXPORT bool qtd_QWebHitTestResult_isContentEditable_const
(void* __this_nativeId)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isContentEditable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebHitTestResult::isContentSelected() const
QTD_EXTERN QTD_EXPORT bool qtd_QWebHitTestResult_isContentSelected_const
(void* __this_nativeId)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isContentSelected();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebHitTestResult::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QWebHitTestResult_isNull_const
(void* __this_nativeId)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebHitTestResult::linkTargetFrame() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHitTestResult_linkTargetFrame_const
(void* __this_nativeId)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    QWebFrame*  __qt_return_value = __qt_this->linkTargetFrame();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebHitTestResult::linkText() const
QTD_EXTERN QTD_EXPORT void qtd_QWebHitTestResult_linkText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    QString  __qt_return_value = __qt_this->linkText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebHitTestResult::linkTitle() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHitTestResult_linkTitle_const
(void* __this_nativeId)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->linkTitle();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QWebHitTestResult::linkUrl() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHitTestResult_linkUrl_const
(void* __this_nativeId)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->linkUrl();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QWebHitTestResult::pixmap() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebHitTestResult_pixmap_const
(void* __this_nativeId)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->pixmap();

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QWebHitTestResult::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QWebHitTestResult_pos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QWebHitTestResult::title() const
QTD_EXTERN QTD_EXPORT void qtd_QWebHitTestResult_title_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebHitTestResult *__qt_this = (QWebHitTestResult *) __this_nativeId;
    QString  __qt_return_value = __qt_this->title();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QWebHitTestResult_QTypeInfo_isComplex() { return (bool) QTypeInfo<QWebHitTestResult>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QWebHitTestResult_QTypeInfo_isStatic() { return (bool) QTypeInfo<QWebHitTestResult>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QWebHitTestResult_QTypeInfo_isLarge() { return (bool) QTypeInfo<QWebHitTestResult>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QWebHitTestResult_QTypeInfo_isPointer() { return (bool) QTypeInfo<QWebHitTestResult>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QWebHitTestResult_QTypeInfo_isDummy() { return (bool) QTypeInfo<QWebHitTestResult>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QWebHitTestResult_placed_copy(void* orig, void* place) {
    const QWebHitTestResult&  __qt_orig = (const QWebHitTestResult& ) *(QWebHitTestResult *)orig;
    QWebHitTestResult *result = new (place) QWebHitTestResult (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QWebHitTestResult_native_copy(void* orig) {
    const QWebHitTestResult&  __qt_orig = (const QWebHitTestResult& ) *(QWebHitTestResult *)orig;
    QWebHitTestResult *result = new QWebHitTestResult (__qt_orig);
    return result;
}

