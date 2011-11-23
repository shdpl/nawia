#ifndef QWEBPAGE_SHELL_H
#define QWEBPAGE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qwebpage.h>

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

class QWebPage_QtDShell : public QWebPage, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QWebPage_QtDShell(void *d_ptr, QObject*  parent0);
    ~QWebPage_QtDShell();

    bool  acceptNavigationRequest(QWebFrame*  frame0, const QNetworkRequest&  request1, QWebPage::NavigationType  type2);
    void childEvent(QChildEvent*  arg__1);
    QString  chooseFile(QWebFrame*  originatingFrame0, const QString&  oldFile1);
    QObject*  createPlugin(const QString&  classid0, const QUrl&  url1, const QStringList&  paramNames2, const QStringList&  paramValues3);
    QWebPage*  createWindow(QWebPage::WebWindowType  type0);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void javaScriptAlert(QWebFrame*  originatingFrame0, const QString&  msg1);
    bool  javaScriptConfirm(QWebFrame*  originatingFrame0, const QString&  msg1);
    void javaScriptConsoleMessage(const QString&  message0, int  lineNumber1, const QString&  sourceID2);
    bool  javaScriptPrompt(QWebFrame*  originatingFrame0, const QString&  msg1, const QString&  defaultValue2, QString*  result3);
    void timerEvent(QTimerEvent*  arg__1);
    void triggerAction(QWebPage::WebAction  action0, bool  checked1);
    QString  userAgentForUrl(const QUrl&  url0) const;
    QObject*  __public_sender() const;
    void __public_contentsChanged();
    void __public_databaseQuotaExceeded(QWebFrame*  frame0, QString  databaseName1);
    void __public_downloadRequested(const QNetworkRequest&  request0);
    void __public_frameCreated(QWebFrame*  frame0);
    void __public_geometryChangeRequested(const QRect&  geom0);
    void __public_linkClicked(const QUrl&  url0);
    void __public_linkHovered(const QString&  link0, const QString&  title1, const QString&  textContent2);
    void __public_loadFinished(bool  ok0);
    void __public_loadProgress(int  progress0);
    void __public_loadStarted();
    void __public_menuBarVisibilityChangeRequested(bool  visible0);
    void __public_microFocusChanged();
    void __public_printRequested(QWebFrame*  frame0);
    void __public_repaintRequested(const QRect&  dirtyRect0);
    void __public_restoreFrameStateRequested(QWebFrame*  frame0);
    void __public_saveFrameStateRequested(QWebFrame*  frame0, QWebHistoryItem*  item1);
    void __public_scrollRequested(int  dx0, int  dy1, const QRect&  scrollViewRect2);
    void __public_selectionChanged();
    void __public_statusBarMessage(const QString&  text0);
    void __public_statusBarVisibilityChangeRequested(bool  visible0);
    void __public_toolBarVisibilityChangeRequested(bool  visible0);
    void __public_unsupportedContent(QNetworkReply*  reply0);
    void __public_windowCloseRequested();
    bool  __override_acceptNavigationRequest(QWebFrame*  frame0, const QNetworkRequest&  request1, int  type2, bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    QString  __override_chooseFile(QWebFrame*  originatingFrame0, const QString&  oldFile1, bool static_call);
    QObject*  __override_createPlugin(const QString&  classid0, const QUrl&  url1, const QStringList&  paramNames2, const QStringList&  paramValues3, bool static_call);
    QWebPage*  __override_createWindow(int  type0, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_javaScriptAlert(QWebFrame*  originatingFrame0, const QString&  msg1, bool static_call);
    bool  __override_javaScriptConfirm(QWebFrame*  originatingFrame0, const QString&  msg1, bool static_call);
    void __override_javaScriptConsoleMessage(const QString&  message0, int  lineNumber1, const QString&  sourceID2, bool static_call);
    bool  __override_javaScriptPrompt(QWebFrame*  originatingFrame0, const QString&  msg1, const QString&  defaultValue2, QString*  result3, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    void __override_triggerAction(int  action0, bool  checked1, bool static_call);
    QString  __override_userAgentForUrl(const QUrl&  url0, bool static_call) const;
};

#endif // QWEBPAGE_SHELL_H
