#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpainter.h>
#include <qprinter.h>
#include <qregion.h>
#include <qurl.h>
#include <qvariant.h>
#include <qwebframe.h>
#include <qwebpage.h>

#include "QWebFrame_shell.h"
#include <iostream>
#include <qwebframe.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_webkit.h"

class QWebFrameEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QWebFrameEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_createEntity(void *nativeId, void* dId)
{
    new QWebFrameEntity((QObject*)nativeId, dId);
}

// ---externC---
// QWebFrame::addToJavaScriptWindowObject(const QString & name, QObject * object)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_addToJavaScriptWindowObject_string_QObject
(void* __this_nativeId,
 DArray name0,
 void* object1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QObject*  __qt_object1 = (QObject* ) object1;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->addToJavaScriptWindowObject((const QString& )__qt_name0, (QObject* )__qt_object1);

}

// QWebFrame::baseUrl() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebFrame_baseUrl_const
(void* __this_nativeId)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->baseUrl();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QWebFrame::childFrames() const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_childFrames_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QList<QWebFrame* >  __qt_return_value = __qt_this->childFrames();

QList<QWebFrame* > &__d_return_value_tmp = (*(QList<QWebFrame* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QWebFrame::contentsSize() const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_contentsSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->contentsSize();

    *__d_return_value = __qt_return_value;

}

// QWebFrame::evaluateJavaScript(const QString & scriptSource)
QTD_EXTERN QTD_EXPORT void* qtd_QWebFrame_evaluateJavaScript_string
(void* __this_nativeId,
 DArray scriptSource0)
{
    QString __qt_scriptSource0 = QString::fromUtf8((const char *)scriptSource0.ptr, scriptSource0.length);
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->evaluateJavaScript((const QString& )__qt_scriptSource0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QWebFrame::frameName() const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_frameName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QString  __qt_return_value = __qt_this->frameName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebFrame::geometry() const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_geometry_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->geometry();

    *__d_return_value = __qt_return_value;

}

// QWebFrame::hasFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QWebFrame_hasFocus_const
(void* __this_nativeId)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebFrame::hitTestContent(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT void* qtd_QWebFrame_hitTestContent_QPoint_const
(void* __this_nativeId,
 QPoint pos0)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QWebHitTestResult  __qt_return_value = __qt_this->hitTestContent((const QPoint& )pos0);

    void* __d_return_value = (void*) new QWebHitTestResult(__qt_return_value);

    return __d_return_value;
}

// QWebFrame::icon() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebFrame_icon_const
(void* __this_nativeId)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->icon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QWebFrame::load(const QNetworkRequest & request, QNetworkAccessManager::Operation operation, const QByteArray & body_)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_load_QNetworkRequest_Operation_QByteArray
(void* __this_nativeId,
 void* request0,
 int operation1,
 void* body2)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    QNetworkAccessManager::Operation __qt_operation1 = (QNetworkAccessManager::Operation) operation1;
    const QByteArray&  __qt_body2 = (const QByteArray& ) *(QByteArray *)body2;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->load((const QNetworkRequest& )__qt_request0, (QNetworkAccessManager::Operation )__qt_operation1, (const QByteArray& )__qt_body2);

}

// QWebFrame::load(const QUrl & url)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_load_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->load((const QUrl& )__qt_url0);

}

// QWebFrame::metaData() const
// QWebFrame::page() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebFrame_page_const
(void* __this_nativeId)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QWebPage*  __qt_return_value = __qt_this->page();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebFrame::parentFrame() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebFrame_parentFrame_const
(void* __this_nativeId)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QWebFrame*  __qt_return_value = __qt_this->parentFrame();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebFrame::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_pos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QWebFrame::print(QPrinter * printer) const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_print_QPrinter_const
(void* __this_nativeId,
 void* printer0)
{
    QPrinter*  __qt_printer0 = (QPrinter* ) printer0;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->print((QPrinter* )__qt_printer0);

}

// QWebFrame::render(QPainter * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_render_QPainter
(void* __this_nativeId,
 void* arg__1)
{
    QPainter*  __qt_arg__1 = (QPainter* ) arg__1;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->render((QPainter* )__qt_arg__1);

}

// QWebFrame::render(QPainter * arg__1, const QRegion & clip)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_render_QPainter_QRegion
(void* __this_nativeId,
 void* arg__1,
 void* clip1)
{
    QPainter*  __qt_arg__1 = (QPainter* ) arg__1;
    const QRegion&  __qt_clip1 = (const QRegion& ) *(QRegion *)clip1;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->render((QPainter* )__qt_arg__1, (const QRegion& )__qt_clip1);

}

// QWebFrame::renderTreeDump() const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_renderTreeDump_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QString  __qt_return_value = __qt_this->renderTreeDump();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebFrame::requestedUrl() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebFrame_requestedUrl_const
(void* __this_nativeId)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->requestedUrl();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QWebFrame::scroll(int arg__1, int arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_scroll_int_int
(void* __this_nativeId,
 int arg__1,
 int arg__2)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->scroll((int )arg__1, (int )arg__2);

}

// QWebFrame::scrollBarGeometry(Qt::Orientation orientation) const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_scrollBarGeometry_Orientation_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int orientation0)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->scrollBarGeometry((Qt::Orientation )__qt_orientation0);

    *__d_return_value = __qt_return_value;

}

// QWebFrame::scrollBarMaximum(Qt::Orientation orientation) const
QTD_EXTERN QTD_EXPORT int qtd_QWebFrame_scrollBarMaximum_Orientation_const
(void* __this_nativeId,
 int orientation0)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    int  __qt_return_value = __qt_this->scrollBarMaximum((Qt::Orientation )__qt_orientation0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebFrame::scrollBarMinimum(Qt::Orientation orientation) const
QTD_EXTERN QTD_EXPORT int qtd_QWebFrame_scrollBarMinimum_Orientation_const
(void* __this_nativeId,
 int orientation0)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    int  __qt_return_value = __qt_this->scrollBarMinimum((Qt::Orientation )__qt_orientation0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebFrame::scrollBarPolicy(Qt::Orientation orientation) const
QTD_EXTERN QTD_EXPORT int qtd_QWebFrame_scrollBarPolicy_Orientation_const
(void* __this_nativeId,
 int orientation0)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    int  __qt_return_value = __qt_this->scrollBarPolicy((Qt::Orientation )__qt_orientation0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebFrame::scrollBarValue(Qt::Orientation orientation) const
QTD_EXTERN QTD_EXPORT int qtd_QWebFrame_scrollBarValue_Orientation_const
(void* __this_nativeId,
 int orientation0)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    int  __qt_return_value = __qt_this->scrollBarValue((Qt::Orientation )__qt_orientation0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebFrame::scrollPosition() const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_scrollPosition_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->scrollPosition();

    *__d_return_value = __qt_return_value;

}

// QWebFrame::scrollToAnchor(const QString & anchor)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_scrollToAnchor_string
(void* __this_nativeId,
 DArray anchor0)
{
    QString __qt_anchor0 = QString::fromUtf8((const char *)anchor0.ptr, anchor0.length);
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->scrollToAnchor((const QString& )__qt_anchor0);

}

// QWebFrame::setContent(const QByteArray & data, const QString & mimeType, const QUrl & baseUrl)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_setContent_QByteArray_string_QUrl
(void* __this_nativeId,
 void* data0,
 DArray mimeType1,
 void* baseUrl2)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    QString __qt_mimeType1 = QString::fromUtf8((const char *)mimeType1.ptr, mimeType1.length);
    const QUrl&  __qt_baseUrl2 = (const QUrl& ) *(QUrl *)baseUrl2;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->setContent((const QByteArray& )__qt_data0, (const QString& )__qt_mimeType1, (const QUrl& )__qt_baseUrl2);

}

// QWebFrame::setFocus()
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_setFocus
(void* __this_nativeId)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->setFocus();

}

// QWebFrame::setHtml(const QString & html, const QUrl & baseUrl)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_setHtml_string_QUrl
(void* __this_nativeId,
 DArray html0,
 void* baseUrl1)
{
    QString __qt_html0 = QString::fromUtf8((const char *)html0.ptr, html0.length);
    const QUrl&  __qt_baseUrl1 = (const QUrl& ) *(QUrl *)baseUrl1;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->setHtml((const QString& )__qt_html0, (const QUrl& )__qt_baseUrl1);

}

// QWebFrame::setScrollBarPolicy(Qt::Orientation orientation, Qt::ScrollBarPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_setScrollBarPolicy_Orientation_ScrollBarPolicy
(void* __this_nativeId,
 int orientation0,
 int policy1)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    Qt::ScrollBarPolicy __qt_policy1 = (Qt::ScrollBarPolicy) policy1;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->setScrollBarPolicy((Qt::Orientation )__qt_orientation0, (Qt::ScrollBarPolicy )__qt_policy1);

}

// QWebFrame::setScrollBarValue(Qt::Orientation orientation, int value)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_setScrollBarValue_Orientation_int
(void* __this_nativeId,
 int orientation0,
 int value1)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->setScrollBarValue((Qt::Orientation )__qt_orientation0, (int )value1);

}

// QWebFrame::setScrollPosition(const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_setScrollPosition_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->setScrollPosition((const QPoint& )pos0);

}

// QWebFrame::setTextSizeMultiplier(double factor)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_setTextSizeMultiplier_double
(void* __this_nativeId,
 double factor0)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->setTextSizeMultiplier((double )factor0);

}

// QWebFrame::setUrl(const QUrl & url)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_setUrl_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->setUrl((const QUrl& )__qt_url0);

}

// QWebFrame::setZoomFactor(double factor)
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_setZoomFactor_double
(void* __this_nativeId,
 double factor0)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    __qt_this->setZoomFactor((double )factor0);

}

// QWebFrame::textSizeMultiplier() const
QTD_EXTERN QTD_EXPORT double qtd_QWebFrame_textSizeMultiplier_const
(void* __this_nativeId)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    double  __qt_return_value = __qt_this->textSizeMultiplier();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebFrame::title() const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_title_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QString  __qt_return_value = __qt_this->title();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebFrame::toHtml() const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_toHtml_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toHtml();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebFrame::toPlainText() const
QTD_EXTERN QTD_EXPORT void qtd_QWebFrame_toPlainText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toPlainText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebFrame::url() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebFrame_url_const
(void* __this_nativeId)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->url();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QWebFrame::zoomFactor() const
QTD_EXTERN QTD_EXPORT double qtd_QWebFrame_zoomFactor_const
(void* __this_nativeId)
{
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    double  __qt_return_value = __qt_this->zoomFactor();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebFrame::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QWebFrame_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QWebFrame *__qt_this = (QWebFrame *) __this_nativeId;
    bool  __qt_return_value = __qt_this->event((QEvent* )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QWebFrame_staticMetaObject() {
    return (void*)&QWebFrame::staticMetaObject;
}


