#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qlist.h>
#include <qmenu.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpalette.h>
#include <qstringlist.h>
#include <qundostack.h>
#include <qurl.h>
#include <qvariant.h>
#include <qwebframe.h>
#include <qwebhistory.h>
#include <qwebpage.h>
#include <qwebsettings.h>
#include <qwidget.h>

#include "QWebPage_shell.h"
#include <iostream>
#include <qwebpage.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_webkit.h"

class QWebPageEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QWebPageEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QWebPage_createEntity(void *nativeId, void* dId)
{
    new QWebPageEntity((QObject*)nativeId, dId);
}

QWebPage_QtDShell::QWebPage_QtDShell(void *d_ptr, QObject*  parent0)
    : QWebPage(parent0),
      QObjectLink(this, d_ptr)
{
}

QWebPage_QtDShell::~QWebPage_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(WEBKIT, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(WEBKIT, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QWebPage_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QWebPage::metaObject();
}

int QWebPage_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QWebPage::qt_metacall(_c, _id, _a);
}

int QWebPage_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QWebPage::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QWebPage_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(WEBKIT, bool, QWebPage_acceptNavigationRequest_QWebFrame_QNetworkRequest_NavigationType_dispatch, (void *dId, void* frame0, void* request1, int type2))
QTD_FUNC(WEBKIT, QWebPage_acceptNavigationRequest_QWebFrame_QNetworkRequest_NavigationType_dispatch)
bool  QWebPage_QtDShell::acceptNavigationRequest(QWebFrame*  frame0, const QNetworkRequest&  request1, QWebPage::NavigationType  type2)
{
    return qtd_QWebPage_acceptNavigationRequest_QWebFrame_QNetworkRequest_NavigationType_dispatch(QObjectLink::getLink(this)->dId, (QWebFrame* )frame0, &(QNetworkRequest& )request1, (QWebPage::NavigationType )type2);
}

QTD_FUNC_DECL(WEBKIT, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QWebPage_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWebPage_chooseFile_QWebFrame_string_dispatch, (void *dId, DArray* ret_str, void* originatingFrame0, const unsigned short* oldFile1, int oldFile1_size))
QTD_FUNC(WEBKIT, QWebPage_chooseFile_QWebFrame_string_dispatch)
QString  QWebPage_QtDShell::chooseFile(QWebFrame*  originatingFrame0, const QString&  oldFile1)
{
    DArray ret_str;
    qtd_QWebPage_chooseFile_QWebFrame_string_dispatch(QObjectLink::getLink(this)->dId, &ret_str, (QWebFrame* )originatingFrame0, oldFile1.utf16(), oldFile1.size());
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(WEBKIT, void*, QWebPage_createPlugin_string_QUrl_QList_QList_dispatch, (void *dId, const unsigned short* classid0, int classid0_size, void* url1, void* paramNames2, void* paramValues3))
QTD_FUNC(WEBKIT, QWebPage_createPlugin_string_QUrl_QList_QList_dispatch)
QObject*  QWebPage_QtDShell::createPlugin(const QString&  classid0, const QUrl&  url1, const QStringList&  paramNames2, const QStringList&  paramValues3)
{
    return (QObject*) qtd_QWebPage_createPlugin_string_QUrl_QList_QList_dispatch(QObjectLink::getLink(this)->dId, classid0.utf16(), classid0.size(), &(QUrl& )url1, (void*)&paramNames2, (void*)&paramValues3);
}

QTD_FUNC_DECL(WEBKIT, void*, QWebPage_createWindow_WebWindowType_dispatch, (void *dId, int type0))
QTD_FUNC(WEBKIT, QWebPage_createWindow_WebWindowType_dispatch)
QWebPage*  QWebPage_QtDShell::createWindow(QWebPage::WebWindowType  type0)
{
    return (QWebPage*) qtd_QWebPage_createWindow_WebWindowType_dispatch(QObjectLink::getLink(this)->dId, (QWebPage::WebWindowType )type0);
}

QTD_FUNC_DECL(WEBKIT, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWebPage_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QWebPage_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QWebPage_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(WEBKIT, void, QWebPage_javaScriptAlert_QWebFrame_string_dispatch, (void *dId, void* originatingFrame0, const unsigned short* msg1, int msg1_size))
QTD_FUNC(WEBKIT, QWebPage_javaScriptAlert_QWebFrame_string_dispatch)
void QWebPage_QtDShell::javaScriptAlert(QWebFrame*  originatingFrame0, const QString&  msg1)
{
    qtd_QWebPage_javaScriptAlert_QWebFrame_string_dispatch(QObjectLink::getLink(this)->dId, (QWebFrame* )originatingFrame0, msg1.utf16(), msg1.size());
}

QTD_FUNC_DECL(WEBKIT, bool, QWebPage_javaScriptConfirm_QWebFrame_string_dispatch, (void *dId, void* originatingFrame0, const unsigned short* msg1, int msg1_size))
QTD_FUNC(WEBKIT, QWebPage_javaScriptConfirm_QWebFrame_string_dispatch)
bool  QWebPage_QtDShell::javaScriptConfirm(QWebFrame*  originatingFrame0, const QString&  msg1)
{
    return qtd_QWebPage_javaScriptConfirm_QWebFrame_string_dispatch(QObjectLink::getLink(this)->dId, (QWebFrame* )originatingFrame0, msg1.utf16(), msg1.size());
}

QTD_FUNC_DECL(WEBKIT, void, QWebPage_javaScriptConsoleMessage_string_int_string_dispatch, (void *dId, const unsigned short* message0, int message0_size, int lineNumber1, const unsigned short* sourceID2, int sourceID2_size))
QTD_FUNC(WEBKIT, QWebPage_javaScriptConsoleMessage_string_int_string_dispatch)
void QWebPage_QtDShell::javaScriptConsoleMessage(const QString&  message0, int  lineNumber1, const QString&  sourceID2)
{
    qtd_QWebPage_javaScriptConsoleMessage_string_int_string_dispatch(QObjectLink::getLink(this)->dId, message0.utf16(), message0.size(), (int )lineNumber1, sourceID2.utf16(), sourceID2.size());
}

QTD_FUNC_DECL(WEBKIT, bool, QWebPage_javaScriptPrompt_QWebFrame_string_string_nativepointerstring_dispatch, (void *dId, void* originatingFrame0, const unsigned short* msg1, int msg1_size, const unsigned short* defaultValue2, int defaultValue2_size, void* result3))
QTD_FUNC(WEBKIT, QWebPage_javaScriptPrompt_QWebFrame_string_string_nativepointerstring_dispatch)
bool  QWebPage_QtDShell::javaScriptPrompt(QWebFrame*  originatingFrame0, const QString&  msg1, const QString&  defaultValue2, QString*  result3)
{
    return qtd_QWebPage_javaScriptPrompt_QWebFrame_string_string_nativepointerstring_dispatch(QObjectLink::getLink(this)->dId, (QWebFrame* )originatingFrame0, msg1.utf16(), msg1.size(), defaultValue2.utf16(), defaultValue2.size(), (QString* )&result3);
}

QTD_FUNC_DECL(WEBKIT, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QWebPage_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWebPage_triggerAction_WebAction_bool_dispatch, (void *dId, int action0, bool checked1))
QTD_FUNC(WEBKIT, QWebPage_triggerAction_WebAction_bool_dispatch)
void QWebPage_QtDShell::triggerAction(QWebPage::WebAction  action0, bool  checked1)
{
    qtd_QWebPage_triggerAction_WebAction_bool_dispatch(QObjectLink::getLink(this)->dId, (QWebPage::WebAction )action0, (bool )checked1);
}

QTD_FUNC_DECL(WEBKIT, void, QWebPage_userAgentForUrl_QUrl_const_dispatch, (void *dId, DArray* ret_str, void* url0))
QTD_FUNC(WEBKIT, QWebPage_userAgentForUrl_QUrl_const_dispatch)
QString  QWebPage_QtDShell::userAgentForUrl(const QUrl&  url0) const
{
    DArray ret_str;
    qtd_QWebPage_userAgentForUrl_QUrl_const_dispatch(QObjectLink::getLink(this)->dId, &ret_str, &(QUrl& )url0);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_EXTERN QTD_EXPORT void qtd_QWebPage_initCallBacks(VoidFunc *virts) {
    qtd_QWebPage_acceptNavigationRequest_QWebFrame_QNetworkRequest_NavigationType_dispatch = (qtd_QWebPage_acceptNavigationRequest_QWebFrame_QNetworkRequest_NavigationType_dispatch_t) virts[0];
    qtd_QWebPage_chooseFile_QWebFrame_string_dispatch = (qtd_QWebPage_chooseFile_QWebFrame_string_dispatch_t) virts[1];
    qtd_QWebPage_createPlugin_string_QUrl_QList_QList_dispatch = (qtd_QWebPage_createPlugin_string_QUrl_QList_QList_dispatch_t) virts[2];
    qtd_QWebPage_createWindow_WebWindowType_dispatch = (qtd_QWebPage_createWindow_WebWindowType_dispatch_t) virts[3];
    qtd_QWebPage_javaScriptAlert_QWebFrame_string_dispatch = (qtd_QWebPage_javaScriptAlert_QWebFrame_string_dispatch_t) virts[4];
    qtd_QWebPage_javaScriptConfirm_QWebFrame_string_dispatch = (qtd_QWebPage_javaScriptConfirm_QWebFrame_string_dispatch_t) virts[5];
    qtd_QWebPage_javaScriptConsoleMessage_string_int_string_dispatch = (qtd_QWebPage_javaScriptConsoleMessage_string_int_string_dispatch_t) virts[6];
    qtd_QWebPage_javaScriptPrompt_QWebFrame_string_string_nativepointerstring_dispatch = (qtd_QWebPage_javaScriptPrompt_QWebFrame_string_string_nativepointerstring_dispatch_t) virts[7];
    qtd_QWebPage_triggerAction_WebAction_bool_dispatch = (qtd_QWebPage_triggerAction_WebAction_bool_dispatch_t) virts[8];
    qtd_QWebPage_userAgentForUrl_QUrl_const_dispatch = (qtd_QWebPage_userAgentForUrl_QUrl_const_dispatch_t) virts[9];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QWebPage_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QWebPage_QtDShell::__public_contentsChanged()
{
    QWebPage::contentsChanged();
}

void QWebPage_QtDShell::__public_databaseQuotaExceeded(QWebFrame*  frame0, QString  databaseName1)
{
    QWebPage::databaseQuotaExceeded((QWebFrame* )frame0, (QString )databaseName1);
}

void QWebPage_QtDShell::__public_downloadRequested(const QNetworkRequest&  request0)
{
    QWebPage::downloadRequested((const QNetworkRequest& )request0);
}

void QWebPage_QtDShell::__public_frameCreated(QWebFrame*  frame0)
{
    QWebPage::frameCreated((QWebFrame* )frame0);
}

void QWebPage_QtDShell::__public_geometryChangeRequested(const QRect&  geom0)
{
    QWebPage::geometryChangeRequested((const QRect& )geom0);
}

void QWebPage_QtDShell::__public_linkClicked(const QUrl&  url0)
{
    QWebPage::linkClicked((const QUrl& )url0);
}

void QWebPage_QtDShell::__public_linkHovered(const QString&  link0, const QString&  title1, const QString&  textContent2)
{
    QWebPage::linkHovered((const QString& )link0, (const QString& )title1, (const QString& )textContent2);
}

void QWebPage_QtDShell::__public_loadFinished(bool  ok0)
{
    QWebPage::loadFinished((bool )ok0);
}

void QWebPage_QtDShell::__public_loadProgress(int  progress0)
{
    QWebPage::loadProgress((int )progress0);
}

void QWebPage_QtDShell::__public_loadStarted()
{
    QWebPage::loadStarted();
}

void QWebPage_QtDShell::__public_menuBarVisibilityChangeRequested(bool  visible0)
{
    QWebPage::menuBarVisibilityChangeRequested((bool )visible0);
}

void QWebPage_QtDShell::__public_microFocusChanged()
{
    QWebPage::microFocusChanged();
}

void QWebPage_QtDShell::__public_printRequested(QWebFrame*  frame0)
{
    QWebPage::printRequested((QWebFrame* )frame0);
}

void QWebPage_QtDShell::__public_repaintRequested(const QRect&  dirtyRect0)
{
    QWebPage::repaintRequested((const QRect& )dirtyRect0);
}

void QWebPage_QtDShell::__public_restoreFrameStateRequested(QWebFrame*  frame0)
{
    QWebPage::restoreFrameStateRequested((QWebFrame* )frame0);
}

void QWebPage_QtDShell::__public_saveFrameStateRequested(QWebFrame*  frame0, QWebHistoryItem*  item1)
{
    QWebPage::saveFrameStateRequested((QWebFrame* )frame0, (QWebHistoryItem* )item1);
}

void QWebPage_QtDShell::__public_scrollRequested(int  dx0, int  dy1, const QRect&  scrollViewRect2)
{
    QWebPage::scrollRequested((int )dx0, (int )dy1, (const QRect& )scrollViewRect2);
}

void QWebPage_QtDShell::__public_selectionChanged()
{
    QWebPage::selectionChanged();
}

void QWebPage_QtDShell::__public_statusBarMessage(const QString&  text0)
{
    QWebPage::statusBarMessage((const QString& )text0);
}

void QWebPage_QtDShell::__public_statusBarVisibilityChangeRequested(bool  visible0)
{
    QWebPage::statusBarVisibilityChangeRequested((bool )visible0);
}

void QWebPage_QtDShell::__public_toolBarVisibilityChangeRequested(bool  visible0)
{
    QWebPage::toolBarVisibilityChangeRequested((bool )visible0);
}

void QWebPage_QtDShell::__public_unsupportedContent(QNetworkReply*  reply0)
{
    QWebPage::unsupportedContent((QNetworkReply* )reply0);
}

void QWebPage_QtDShell::__public_windowCloseRequested()
{
    QWebPage::windowCloseRequested();
}

// Write virtual function overries used to decide on static/virtual calls
bool  QWebPage_QtDShell::__override_acceptNavigationRequest(QWebFrame*  frame0, const QNetworkRequest&  request1, int  type2, bool static_call)
{
    if (static_call) {
        return QWebPage::acceptNavigationRequest((QWebFrame* )frame0, (const QNetworkRequest& )request1, (QWebPage::NavigationType )type2);
    } else {
        return acceptNavigationRequest((QWebFrame* )frame0, (const QNetworkRequest& )request1, (QWebPage::NavigationType )type2);
    }
}

void QWebPage_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QString  QWebPage_QtDShell::__override_chooseFile(QWebFrame*  originatingFrame0, const QString&  oldFile1, bool static_call)
{
    if (static_call) {
        return QWebPage::chooseFile((QWebFrame* )originatingFrame0, (const QString& )oldFile1);
    } else {
        return chooseFile((QWebFrame* )originatingFrame0, (const QString& )oldFile1);
    }
}

QObject*  QWebPage_QtDShell::__override_createPlugin(const QString&  classid0, const QUrl&  url1, const QStringList&  paramNames2, const QStringList&  paramValues3, bool static_call)
{
    if (static_call) {
        return QWebPage::createPlugin((const QString& )classid0, (const QUrl& )url1, (const QStringList& )paramNames2, (const QStringList& )paramValues3);
    } else {
        return createPlugin((const QString& )classid0, (const QUrl& )url1, (const QStringList& )paramNames2, (const QStringList& )paramValues3);
    }
}

QWebPage*  QWebPage_QtDShell::__override_createWindow(int  type0, bool static_call)
{
    if (static_call) {
        return QWebPage::createWindow((QWebPage::WebWindowType )type0);
    } else {
        return createWindow((QWebPage::WebWindowType )type0);
    }
}

void QWebPage_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QWebPage_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QWebPage::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QWebPage_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QWebPage_QtDShell::__override_javaScriptAlert(QWebFrame*  originatingFrame0, const QString&  msg1, bool static_call)
{
    if (static_call) {
        QWebPage::javaScriptAlert((QWebFrame* )originatingFrame0, (const QString& )msg1);
    } else {
        javaScriptAlert((QWebFrame* )originatingFrame0, (const QString& )msg1);
    }
}

bool  QWebPage_QtDShell::__override_javaScriptConfirm(QWebFrame*  originatingFrame0, const QString&  msg1, bool static_call)
{
    if (static_call) {
        return QWebPage::javaScriptConfirm((QWebFrame* )originatingFrame0, (const QString& )msg1);
    } else {
        return javaScriptConfirm((QWebFrame* )originatingFrame0, (const QString& )msg1);
    }
}

void QWebPage_QtDShell::__override_javaScriptConsoleMessage(const QString&  message0, int  lineNumber1, const QString&  sourceID2, bool static_call)
{
    if (static_call) {
        QWebPage::javaScriptConsoleMessage((const QString& )message0, (int )lineNumber1, (const QString& )sourceID2);
    } else {
        javaScriptConsoleMessage((const QString& )message0, (int )lineNumber1, (const QString& )sourceID2);
    }
}

bool  QWebPage_QtDShell::__override_javaScriptPrompt(QWebFrame*  originatingFrame0, const QString&  msg1, const QString&  defaultValue2, QString*  result3, bool static_call)
{
    if (static_call) {
        return QWebPage::javaScriptPrompt((QWebFrame* )originatingFrame0, (const QString& )msg1, (const QString& )defaultValue2, (QString* )&result3);
    } else {
        return javaScriptPrompt((QWebFrame* )originatingFrame0, (const QString& )msg1, (const QString& )defaultValue2, (QString* )&result3);
    }
}

void QWebPage_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QWebPage_QtDShell::__override_triggerAction(int  action0, bool  checked1, bool static_call)
{
    if (static_call) {
        QWebPage::triggerAction((QWebPage::WebAction )action0, (bool )checked1);
    } else {
        triggerAction((QWebPage::WebAction )action0, (bool )checked1);
    }
}

QString  QWebPage_QtDShell::__override_userAgentForUrl(const QUrl&  url0, bool static_call) const
{
    if (static_call) {
        return QWebPage::userAgentForUrl((const QUrl& )url0);
    } else {
        return userAgentForUrl((const QUrl& )url0);
    }
}

// QWebPage::contentsChanged()
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_contentsChanged
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_contentsChanged();

}

// QWebPage::databaseQuotaExceeded(QWebFrame * frame, QString databaseName)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_databaseQuotaExceeded_QWebFrame_string
(void* __this_nativeId,
 void* frame0,
 DArray databaseName1)
{
    QWebFrame*  __qt_frame0 = (QWebFrame* ) frame0;
    QString __qt_databaseName1 = QString::fromUtf8((const char *)databaseName1.ptr, databaseName1.length);
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_databaseQuotaExceeded((QWebFrame* )__qt_frame0, (QString )__qt_databaseName1);

}

// QWebPage::downloadRequested(const QNetworkRequest & request)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_downloadRequested_QNetworkRequest
(void* __this_nativeId,
 void* request0)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_downloadRequested((const QNetworkRequest& )__qt_request0);

}

// QWebPage::frameCreated(QWebFrame * frame)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_frameCreated_QWebFrame
(void* __this_nativeId,
 void* frame0)
{
    QWebFrame*  __qt_frame0 = (QWebFrame* ) frame0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_frameCreated((QWebFrame* )__qt_frame0);

}

// QWebPage::geometryChangeRequested(const QRect & geom)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_geometryChangeRequested_QRect
(void* __this_nativeId,
 QRect geom0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_geometryChangeRequested((const QRect& )geom0);

}

// QWebPage::linkClicked(const QUrl & url)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_linkClicked_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_linkClicked((const QUrl& )__qt_url0);

}

// QWebPage::linkHovered(const QString & link, const QString & title, const QString & textContent)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_linkHovered_string_string_string
(void* __this_nativeId,
 DArray link0,
 DArray title1,
 DArray textContent2)
{
    QString __qt_link0 = QString::fromUtf8((const char *)link0.ptr, link0.length);
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_textContent2 = QString::fromUtf8((const char *)textContent2.ptr, textContent2.length);
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_linkHovered((const QString& )__qt_link0, (const QString& )__qt_title1, (const QString& )__qt_textContent2);

}

// QWebPage::loadFinished(bool ok)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_loadFinished_bool
(void* __this_nativeId,
 bool ok0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_loadFinished((bool )ok0);

}

// QWebPage::loadProgress(int progress)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_loadProgress_int
(void* __this_nativeId,
 int progress0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_loadProgress((int )progress0);

}

// QWebPage::loadStarted()
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_loadStarted
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_loadStarted();

}

// QWebPage::menuBarVisibilityChangeRequested(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_menuBarVisibilityChangeRequested_bool
(void* __this_nativeId,
 bool visible0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_menuBarVisibilityChangeRequested((bool )visible0);

}

// QWebPage::microFocusChanged()
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_microFocusChanged
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_microFocusChanged();

}

// QWebPage::printRequested(QWebFrame * frame)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_printRequested_QWebFrame
(void* __this_nativeId,
 void* frame0)
{
    QWebFrame*  __qt_frame0 = (QWebFrame* ) frame0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_printRequested((QWebFrame* )__qt_frame0);

}

// QWebPage::repaintRequested(const QRect & dirtyRect)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_repaintRequested_QRect
(void* __this_nativeId,
 QRect dirtyRect0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_repaintRequested((const QRect& )dirtyRect0);

}

// QWebPage::restoreFrameStateRequested(QWebFrame * frame)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_restoreFrameStateRequested_QWebFrame
(void* __this_nativeId,
 void* frame0)
{
    QWebFrame*  __qt_frame0 = (QWebFrame* ) frame0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_restoreFrameStateRequested((QWebFrame* )__qt_frame0);

}

// QWebPage::saveFrameStateRequested(QWebFrame * frame, QWebHistoryItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_saveFrameStateRequested_QWebFrame_nativepointerQWebHistoryItem
(void* __this_nativeId,
 void* frame0,
 void* item1)
{
    QWebFrame*  __qt_frame0 = (QWebFrame* ) frame0;
    QWebHistoryItem*  __qt_item1 = (QWebHistoryItem* ) item1;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_saveFrameStateRequested((QWebFrame* )__qt_frame0, (QWebHistoryItem* )__qt_item1);

}

// QWebPage::scrollRequested(int dx, int dy, const QRect & scrollViewRect)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_scrollRequested_int_int_QRect
(void* __this_nativeId,
 int dx0,
 int dy1,
 QRect scrollViewRect2)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_scrollRequested((int )dx0, (int )dy1, (const QRect& )scrollViewRect2);

}

// QWebPage::selectionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_selectionChanged
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_selectionChanged();

}

// QWebPage::statusBarMessage(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_statusBarMessage_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_statusBarMessage((const QString& )__qt_text0);

}

// QWebPage::statusBarVisibilityChangeRequested(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_statusBarVisibilityChangeRequested_bool
(void* __this_nativeId,
 bool visible0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_statusBarVisibilityChangeRequested((bool )visible0);

}

// QWebPage::toolBarVisibilityChangeRequested(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_toolBarVisibilityChangeRequested_bool
(void* __this_nativeId,
 bool visible0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_toolBarVisibilityChangeRequested((bool )visible0);

}

// QWebPage::unsupportedContent(QNetworkReply * reply)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_unsupportedContent_QNetworkReply
(void* __this_nativeId,
 void* reply0)
{
    QNetworkReply*  __qt_reply0 = (QNetworkReply* ) reply0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_unsupportedContent((QNetworkReply* )__qt_reply0);

}

// QWebPage::windowCloseRequested()
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_windowCloseRequested
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->__public_windowCloseRequested();

}

// ---externC---
// QWebPage::QWebPage(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_QWebPage_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QWebPage_QtDShell *__qt_this = new QWebPage_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QWebPage::action(QWebPage::WebAction action) const
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_action_WebAction_const
(void* __this_nativeId,
 int action0)
{
    QWebPage::WebAction __qt_action0 = (QWebPage::WebAction) action0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->action((QWebPage::WebAction )__qt_action0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::bytesReceived() const
QTD_EXTERN QTD_EXPORT quint64 qtd_QWebPage_bytesReceived_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    quint64  __qt_return_value = __qt_this->bytesReceived();

    quint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::createStandardContextMenu()
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_createStandardContextMenu
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->createStandardContextMenu();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::currentFrame() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_currentFrame_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QWebFrame*  __qt_return_value = __qt_this->currentFrame();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::findText(const QString & subString, QFlags<QWebPage::FindFlag> options)
QTD_EXTERN QTD_EXPORT bool qtd_QWebPage_findText_string_FindFlags
(void* __this_nativeId,
 DArray subString0,
 int options1)
{
    QString __qt_subString0 = QString::fromUtf8((const char *)subString0.ptr, subString0.length);
    QFlags<QWebPage::FindFlag> __qt_options1 = (QFlags<QWebPage::FindFlag>) options1;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->findText((const QString& )__qt_subString0, (QWebPage::FindFlags )__qt_options1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QWebPage_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->focusNextPrevChild((bool )next0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::forwardUnsupportedContent() const
QTD_EXTERN QTD_EXPORT bool qtd_QWebPage_forwardUnsupportedContent_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->forwardUnsupportedContent();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::frameAt(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_frameAt_QPoint_const
(void* __this_nativeId,
 QPoint pos0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QWebFrame*  __qt_return_value = __qt_this->frameAt((const QPoint& )pos0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::history() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_history_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QWebHistory*  __qt_return_value = __qt_this->history();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::inputMethodQuery(Qt::InputMethodQuery property) const
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int property0)
{
    Qt::InputMethodQuery __qt_property0 = (Qt::InputMethodQuery) property0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->inputMethodQuery((Qt::InputMethodQuery )__qt_property0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QWebPage::isContentEditable() const
QTD_EXTERN QTD_EXPORT bool qtd_QWebPage_isContentEditable_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isContentEditable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::isModified() const
QTD_EXTERN QTD_EXPORT bool qtd_QWebPage_isModified_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isModified();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::linkDelegationPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QWebPage_linkDelegationPolicy_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->linkDelegationPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::mainFrame() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_mainFrame_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QWebFrame*  __qt_return_value = __qt_this->mainFrame();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::networkAccessManager() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_networkAccessManager_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QNetworkAccessManager*  __qt_return_value = __qt_this->networkAccessManager();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::palette() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_palette_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QPalette  __qt_return_value = __qt_this->palette();

    void* __d_return_value = (void*) new QPalette(__qt_return_value);

    return __d_return_value;
}

// QWebPage::preferredContentsSize() const
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_preferredContentsSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->preferredContentsSize();

    *__d_return_value = __qt_return_value;

}

// QWebPage::selectedText() const
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_selectedText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->selectedText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebPage::setContentEditable(bool editable)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_setContentEditable_bool
(void* __this_nativeId,
 bool editable0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->setContentEditable((bool )editable0);

}

// QWebPage::setForwardUnsupportedContent(bool forward)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_setForwardUnsupportedContent_bool
(void* __this_nativeId,
 bool forward0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->setForwardUnsupportedContent((bool )forward0);

}

// QWebPage::setLinkDelegationPolicy(QWebPage::LinkDelegationPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_setLinkDelegationPolicy_LinkDelegationPolicy
(void* __this_nativeId,
 int policy0)
{
    QWebPage::LinkDelegationPolicy __qt_policy0 = (QWebPage::LinkDelegationPolicy) policy0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->setLinkDelegationPolicy((QWebPage::LinkDelegationPolicy )__qt_policy0);

}

// QWebPage::setNetworkAccessManager(QNetworkAccessManager * manager)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_setNetworkAccessManager_QNetworkAccessManager
(void* __this_nativeId,
 void* manager0)
{
    QNetworkAccessManager*  __qt_manager0 = (QNetworkAccessManager* ) manager0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->setNetworkAccessManager((QNetworkAccessManager* )__qt_manager0);

}

// QWebPage::setPalette(const QPalette & palette)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_setPalette_QPalette
(void* __this_nativeId,
 void* palette0)
{
    const QPalette&  __qt_palette0 = (const QPalette& ) *(QPalette *)palette0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->setPalette((const QPalette& )__qt_palette0);

}

// QWebPage::setPreferredContentsSize(const QSize & size) const
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_setPreferredContentsSize_QSize_const
(void* __this_nativeId,
 QSize size0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->setPreferredContentsSize((const QSize& )size0);

}

// QWebPage::setView(QWidget * view)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_setView_QWidget
(void* __this_nativeId,
 void* view0)
{
    QWidget*  __qt_view0 = (QWidget* ) view0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->setView((QWidget* )__qt_view0);

}

// QWebPage::setViewportSize(const QSize & size) const
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_setViewportSize_QSize_const
(void* __this_nativeId,
 QSize size0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->setViewportSize((const QSize& )size0);

}

// QWebPage::settings() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_settings_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QWebSettings*  __qt_return_value = __qt_this->settings();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::shouldInterruptJavaScript()
QTD_EXTERN QTD_EXPORT bool qtd_QWebPage_shouldInterruptJavaScript
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->shouldInterruptJavaScript();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::swallowContextMenuEvent(QContextMenuEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QWebPage_swallowContextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* event0)
{
    QContextMenuEvent*  __qt_event0 = (QContextMenuEvent* ) event0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->swallowContextMenuEvent((QContextMenuEvent* )__qt_event0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::totalBytes() const
QTD_EXTERN QTD_EXPORT quint64 qtd_QWebPage_totalBytes_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    quint64  __qt_return_value = __qt_this->totalBytes();

    quint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::undoStack() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_undoStack_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QUndoStack*  __qt_return_value = __qt_this->undoStack();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::updatePositionDependentActions(const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_updatePositionDependentActions_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    __qt_this->updatePositionDependentActions((const QPoint& )pos0);

}

// QWebPage::view() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_view_const
(void* __this_nativeId)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->view();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::viewportSize() const
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_viewportSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->viewportSize();

    *__d_return_value = __qt_return_value;

}

// QWebPage::acceptNavigationRequest(QWebFrame * frame, const QNetworkRequest & request, QWebPage::NavigationType type)
QTD_EXTERN QTD_EXPORT bool qtd_QWebPage_acceptNavigationRequest_QWebFrame_QNetworkRequest_NavigationType
(void* __this_nativeId,
 void* frame0,
 void* request1,
 int type2)
{
    QWebFrame*  __qt_frame0 = (QWebFrame* ) frame0;
    const QNetworkRequest&  __qt_request1 = (const QNetworkRequest& ) *(QNetworkRequest *)request1;
    QWebPage::NavigationType __qt_type2 = (QWebPage::NavigationType) type2;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_acceptNavigationRequest((QWebFrame* )__qt_frame0, (const QNetworkRequest& )__qt_request1, (QWebPage::NavigationType )__qt_type2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::chooseFile(QWebFrame * originatingFrame, const QString & oldFile)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_chooseFile_QWebFrame_string
(void* __this_nativeId,
 void* __d_return_value,
 void* originatingFrame0,
 DArray oldFile1)
{
    QWebFrame*  __qt_originatingFrame0 = (QWebFrame* ) originatingFrame0;
    QString __qt_oldFile1 = QString::fromUtf8((const char *)oldFile1.ptr, oldFile1.length);
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_chooseFile((QWebFrame* )__qt_originatingFrame0, (const QString& )__qt_oldFile1, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebPage::createPlugin(const QString & classid, const QUrl & url, const QStringList & paramNames, const QStringList & paramValues)
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_createPlugin_string_QUrl_QList_QList
(void* __this_nativeId,
 DArray classid0,
 void* url1,
 void* paramNames2,
 void* paramValues3)
{
    QString __qt_classid0 = QString::fromUtf8((const char *)classid0.ptr, classid0.length);
    const QUrl&  __qt_url1 = (const QUrl& ) *(QUrl *)url1;
QStringList __qt_paramNames2 = (*(QStringList *)paramNames2);
QStringList __qt_paramValues3 = (*(QStringList *)paramValues3);
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QObject*  __qt_return_value = __qt_this->__override_createPlugin((const QString& )__qt_classid0, (const QUrl& )__qt_url1, (const QStringList& )__qt_paramNames2, (const QStringList& )__qt_paramValues3, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::createWindow(QWebPage::WebWindowType type)
QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_createWindow_WebWindowType
(void* __this_nativeId,
 int type0)
{
    QWebPage::WebWindowType __qt_type0 = (QWebPage::WebWindowType) type0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QWebPage*  __qt_return_value = __qt_this->__override_createWindow((QWebPage::WebWindowType )__qt_type0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebPage::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QWebPage_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::javaScriptAlert(QWebFrame * originatingFrame, const QString & msg)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_javaScriptAlert_QWebFrame_string
(void* __this_nativeId,
 void* originatingFrame0,
 DArray msg1)
{
    QWebFrame*  __qt_originatingFrame0 = (QWebFrame* ) originatingFrame0;
    QString __qt_msg1 = QString::fromUtf8((const char *)msg1.ptr, msg1.length);
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_javaScriptAlert((QWebFrame* )__qt_originatingFrame0, (const QString& )__qt_msg1, __do_static_call);

}

// QWebPage::javaScriptConfirm(QWebFrame * originatingFrame, const QString & msg)
QTD_EXTERN QTD_EXPORT bool qtd_QWebPage_javaScriptConfirm_QWebFrame_string
(void* __this_nativeId,
 void* originatingFrame0,
 DArray msg1)
{
    QWebFrame*  __qt_originatingFrame0 = (QWebFrame* ) originatingFrame0;
    QString __qt_msg1 = QString::fromUtf8((const char *)msg1.ptr, msg1.length);
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_javaScriptConfirm((QWebFrame* )__qt_originatingFrame0, (const QString& )__qt_msg1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::javaScriptConsoleMessage(const QString & message, int lineNumber, const QString & sourceID)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_javaScriptConsoleMessage_string_int_string
(void* __this_nativeId,
 DArray message0,
 int lineNumber1,
 DArray sourceID2)
{
    QString __qt_message0 = QString::fromUtf8((const char *)message0.ptr, message0.length);
    QString __qt_sourceID2 = QString::fromUtf8((const char *)sourceID2.ptr, sourceID2.length);
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_javaScriptConsoleMessage((const QString& )__qt_message0, (int )lineNumber1, (const QString& )__qt_sourceID2, __do_static_call);

}

// QWebPage::javaScriptPrompt(QWebFrame * originatingFrame, const QString & msg, const QString & defaultValue, QString * result)
QTD_EXTERN QTD_EXPORT bool qtd_QWebPage_javaScriptPrompt_QWebFrame_string_string_nativepointerstring
(void* __this_nativeId,
 void* originatingFrame0,
 DArray msg1,
 DArray defaultValue2,
 DArray result3)
{
    QWebFrame*  __qt_originatingFrame0 = (QWebFrame* ) originatingFrame0;
    QString __qt_msg1 = QString::fromUtf8((const char *)msg1.ptr, msg1.length);
    QString __qt_defaultValue2 = QString::fromUtf8((const char *)defaultValue2.ptr, defaultValue2.length);
    QString __qt_result3 = QString::fromUtf8((const char *)result3.ptr, result3.length);
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_javaScriptPrompt((QWebFrame* )__qt_originatingFrame0, (const QString& )__qt_msg1, (const QString& )__qt_defaultValue2, (QString* )&__qt_result3, __do_static_call);

    qtd_toUtf8(__qt_result3.utf16(), __qt_result3.size(), &result3);
    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebPage::triggerAction(QWebPage::WebAction action, bool checked)
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_triggerAction_WebAction_bool
(void* __this_nativeId,
 int action0,
 bool checked1)
{
    QWebPage::WebAction __qt_action0 = (QWebPage::WebAction) action0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_triggerAction((QWebPage::WebAction )__qt_action0, (bool )checked1, __do_static_call);

}

// QWebPage::userAgentForUrl(const QUrl & url) const
QTD_EXTERN QTD_EXPORT void qtd_QWebPage_userAgentForUrl_QUrl_const
(void* __this_nativeId,
 void* __d_return_value,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QWebPage_QtDShell *__qt_this = (QWebPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_userAgentForUrl((const QUrl& )__qt_url0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QWebPage_staticMetaObject() {
    return (void*)&QWebPage::staticMetaObject;
}


