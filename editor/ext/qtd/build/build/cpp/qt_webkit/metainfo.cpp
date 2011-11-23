#include "metainfo.h"
#include <QMetaType>
#include <QString>
#include <QLatin1String>
#include <QHash>
#include <QReadWriteLock>
#include <QReadLocker>
#include <QWriteLocker>
#include <qtjambi_cache.h>
#include <qtjambi_core.h>

#include <qwebframe.h>
#include <qwebhistory.h>
#include <qwebhistoryinterface.h>
#include <qwebhistory.h>
#include <qwebframe.h>
#include <qwebpage.h>
#include <qwebsettings.h>
#include <qwebview.h>
#include <qwebsettings.h>

// Custom constructor and destructor for QWebHistoryItem
static void *qwebhistoryitem_create(const QWebHistoryItem *copy)
{
    
    return new QWebHistoryItem(*copy);
    
}

static void qwebhistoryitem_delete(const QWebHistoryItem *copy)
{
    
    delete copy;
    
}

static int sns_count = 50;
static const char *qtNames[] = {
    "QWebFrame::contentsSizeChanged(QSize)",
    "QWebFrame::evaluateJavaScript(QString)",
    "QWebFrame::iconChanged()",
    "QWebFrame::initialLayoutCompleted()",
    "QWebFrame::javaScriptWindowObjectCleared()",
    "QWebFrame::loadFinished(bool)",
    "QWebFrame::loadStarted()",
    "QWebFrame::pageChanged()",
    "QWebFrame::print(QPrinter*)const",
    "QWebFrame::provisionalLoad()",
    "QWebFrame::titleChanged(QString)",
    "QWebFrame::urlChanged(QUrl)",
    "QWebPage::contentsChanged()",
    "QWebPage::databaseQuotaExceeded(QWebFrame*,QString)",
    "QWebPage::downloadRequested(QNetworkRequest)",
    "QWebPage::frameCreated(QWebFrame*)",
    "QWebPage::geometryChangeRequested(QRect)",
    "QWebPage::linkClicked(QUrl)",
    "QWebPage::linkHovered(QString,QString,QString)",
    "QWebPage::loadFinished(bool)",
    "QWebPage::loadProgress(int)",
    "QWebPage::loadStarted()",
    "QWebPage::menuBarVisibilityChangeRequested(bool)",
    "QWebPage::microFocusChanged()",
    "QWebPage::printRequested(QWebFrame*)",
    "QWebPage::repaintRequested(QRect)",
    "QWebPage::restoreFrameStateRequested(QWebFrame*)",
    "QWebPage::saveFrameStateRequested(QWebFrame*,QWebHistoryItem*)",
    "QWebPage::scrollRequested(int,int,QRect)",
    "QWebPage::selectionChanged()",
    "QWebPage::shouldInterruptJavaScript()",
    "QWebPage::statusBarMessage(QString)",
    "QWebPage::statusBarVisibilityChangeRequested(bool)",
    "QWebPage::toolBarVisibilityChangeRequested(bool)",
    "QWebPage::unsupportedContent(QNetworkReply*)",
    "QWebPage::windowCloseRequested()",
    "QWebView::back()",
    "QWebView::forward()",
    "QWebView::iconChanged()",
    "QWebView::linkClicked(QUrl)",
    "QWebView::loadFinished(bool)",
    "QWebView::loadProgress(int)",
    "QWebView::loadStarted()",
    "QWebView::print(QPrinter*)const",
    "QWebView::reload()",
    "QWebView::selectionChanged()",
    "QWebView::statusBarMessage(QString)",
    "QWebView::stop()",
    "QWebView::titleChanged(QString)",
    "QWebView::urlChanged(QUrl)",
};

static const char *javaFunctionNames[] = {
    "qt.webkit.QWebFrame.contentsSizeChanged(const(QSize))",
    "qt.webkit.QWebFrame.evaluateJavaScript(string)",
    "qt.webkit.QWebFrame.iconChanged()",
    "qt.webkit.QWebFrame.initialLayoutCompleted()",
    "qt.webkit.QWebFrame.javaScriptWindowObjectCleared()",
    "qt.webkit.QWebFrame.loadFinished(bool)",
    "qt.webkit.QWebFrame.loadStarted()",
    "qt.webkit.QWebFrame.pageChanged()",
    "qt.webkit.QWebFrame.print(QPrinter) const",
    "qt.webkit.QWebFrame.provisionalLoad()",
    "qt.webkit.QWebFrame.titleChanged(string)",
    "qt.webkit.QWebFrame.urlChanged(const(QUrl))",
    "qt.webkit.QWebPage.contentsChanged()",
    "qt.webkit.QWebPage.databaseQuotaExceeded(QWebFrame, string)",
    "qt.webkit.QWebPage.downloadRequested(const(QNetworkRequest))",
    "qt.webkit.QWebPage.frameCreated(QWebFrame)",
    "qt.webkit.QWebPage.geometryChangeRequested(const(QRect))",
    "qt.webkit.QWebPage.linkClicked(const(QUrl))",
    "qt.webkit.QWebPage.linkHovered(string, string, string)",
    "qt.webkit.QWebPage.loadFinished(bool)",
    "qt.webkit.QWebPage.loadProgress(int)",
    "qt.webkit.QWebPage.loadStarted()",
    "qt.webkit.QWebPage.menuBarVisibilityChangeRequested(bool)",
    "qt.webkit.QWebPage.microFocusChanged()",
    "qt.webkit.QWebPage.printRequested(QWebFrame)",
    "qt.webkit.QWebPage.repaintRequested(const(QRect))",
    "qt.webkit.QWebPage.restoreFrameStateRequested(QWebFrame)",
    "qt.webkit.QWebPage.saveFrameStateRequested(QWebFrame, QWebHistoryItem)",
    "qt.webkit.QWebPage.scrollRequested(int, int, const(QRect))",
    "qt.webkit.QWebPage.selectionChanged()",
    "qt.webkit.QWebPage.shouldInterruptJavaScript()",
    "qt.webkit.QWebPage.statusBarMessage(string)",
    "qt.webkit.QWebPage.statusBarVisibilityChangeRequested(bool)",
    "qt.webkit.QWebPage.toolBarVisibilityChangeRequested(bool)",
    "qt.webkit.QWebPage.unsupportedContent(QNetworkReply)",
    "qt.webkit.QWebPage.windowCloseRequested()",
    "qt.webkit.QWebView.back()",
    "qt.webkit.QWebView.forward()",
    "qt.webkit.QWebView.iconChanged()",
    "qt.webkit.QWebView.linkClicked(const(QUrl))",
    "qt.webkit.QWebView.loadFinished(bool)",
    "qt.webkit.QWebView.loadProgress(int)",
    "qt.webkit.QWebView.loadStarted()",
    "qt.webkit.QWebView.print(QPrinter) const",
    "qt.webkit.QWebView.reload()",
    "qt.webkit.QWebView.selectionChanged()",
    "qt.webkit.QWebView.statusBarMessage(string)",
    "qt.webkit.QWebView.stop()",
    "qt.webkit.QWebView.titleChanged(string)",
    "qt.webkit.QWebView.urlChanged(const(QUrl))",
};

static const char *javaObjectNames[] = {
    "qt.webkit.QWebFrame.contentsSizeChanged",
    "qt.webkit.QWebFrame.evaluateJavaScript(string)",
    "qt.webkit.QWebFrame.iconChanged",
    "qt.webkit.QWebFrame.initialLayoutCompleted",
    "qt.webkit.QWebFrame.javaScriptWindowObjectCleared",
    "qt.webkit.QWebFrame.loadFinished",
    "qt.webkit.QWebFrame.loadStarted",
    "qt.webkit.QWebFrame.pageChanged",
    "qt.webkit.QWebFrame.print(QPrinter) const",
    "qt.webkit.QWebFrame.provisionalLoad",
    "qt.webkit.QWebFrame.titleChanged",
    "qt.webkit.QWebFrame.urlChanged",
    "qt.webkit.QWebPage.contentsChanged",
    "qt.webkit.QWebPage.databaseQuotaExceeded",
    "qt.webkit.QWebPage.downloadRequested",
    "qt.webkit.QWebPage.frameCreated",
    "qt.webkit.QWebPage.geometryChangeRequested",
    "qt.webkit.QWebPage.linkClicked",
    "qt.webkit.QWebPage.linkHovered",
    "qt.webkit.QWebPage.loadFinished",
    "qt.webkit.QWebPage.loadProgress",
    "qt.webkit.QWebPage.loadStarted",
    "qt.webkit.QWebPage.menuBarVisibilityChangeRequested",
    "qt.webkit.QWebPage.microFocusChanged",
    "qt.webkit.QWebPage.printRequested",
    "qt.webkit.QWebPage.repaintRequested",
    "qt.webkit.QWebPage.restoreFrameStateRequested",
    "qt.webkit.QWebPage.saveFrameStateRequested",
    "qt.webkit.QWebPage.scrollRequested",
    "qt.webkit.QWebPage.selectionChanged",
    "qt.webkit.QWebPage.shouldInterruptJavaScript()",
    "qt.webkit.QWebPage.statusBarMessage",
    "qt.webkit.QWebPage.statusBarVisibilityChangeRequested",
    "qt.webkit.QWebPage.toolBarVisibilityChangeRequested",
    "qt.webkit.QWebPage.unsupportedContent",
    "qt.webkit.QWebPage.windowCloseRequested",
    "qt.webkit.QWebView.back()",
    "qt.webkit.QWebView.forward()",
    "qt.webkit.QWebView.iconChanged",
    "qt.webkit.QWebView.linkClicked",
    "qt.webkit.QWebView.loadFinished",
    "qt.webkit.QWebView.loadProgress",
    "qt.webkit.QWebView.loadStarted",
    "qt.webkit.QWebView.print(QPrinter) const",
    "qt.webkit.QWebView.reload()",
    "qt.webkit.QWebView.selectionChanged",
    "qt.webkit.QWebView.statusBarMessage",
    "qt.webkit.QWebView.stop()",
    "qt.webkit.QWebView.titleChanged",
    "qt.webkit.QWebView.urlChanged",
};

static const char *javaSignatures[] = {
    "(Lqt/core/QSize;)V",
    "(Ljava/lang/string;)Lqt/core/QVariant;",
    "()V",
    "()V",
    "()V",
    "(Lbool;)V",
    "()V",
    "()V",
    "(Lqt/gui/QPrinter;)V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Lqt/core/QUrl;)V",
    "()V",
    "(Lqt/webkit/QWebFrame;Ljava/lang/string;)V",
    "(Lqt/network/QNetworkRequest;)V",
    "(Lqt/webkit/QWebFrame;)V",
    "(Lqt/core/QRect;)V",
    "(Lqt/core/QUrl;)V",
    "(Ljava/lang/string;Ljava/lang/string;Ljava/lang/string;)V",
    "(Lbool;)V",
    "(I)V",
    "()V",
    "(Lbool;)V",
    "()V",
    "(Lqt/webkit/QWebFrame;)V",
    "(Lqt/core/QRect;)V",
    "(Lqt/webkit/QWebFrame;)V",
    "(Lqt/webkit/QWebFrame;Lcom/trolltech/qt/QNativePointer;)V",
    "(IILqt/core/QRect;)V",
    "()V",
    "()Lbool;",
    "(Ljava/lang/string;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lqt/network/QNetworkReply;)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lqt/core/QUrl;)V",
    "(Lbool;)V",
    "(I)V",
    "()V",
    "(Lqt/gui/QPrinter;)V",
    "()V",
    "()V",
    "(Ljava/lang/string;)V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Lqt/core/QUrl;)V"
};

static int enum_count = 10;
static const char *enumJavaNames[] = {
    "qt/webkit/QWebSettings$WebAttribute",
    "qt/webkit/QWebPage$FindFlag",
    "qt/webkit/QWebPage$WebAction",
    "qt/webkit/QWebSettings$FontSize",
    "qt/webkit/QWebSettings$WebGraphic",
    "qt/webkit/QWebPage$LinkDelegationPolicy",
    "qt/webkit/QWebPage$FindFlag",
    "qt/webkit/QWebPage$NavigationType",
    "qt/webkit/QWebSettings$FontFamily",
    "qt/webkit/QWebPage$WebWindowType",
};

static const char *enumCppNames[] = {
    "QWebSettings::WebAttribute",
    "QWebPage::FindFlag",
    "QWebPage::WebAction",
    "QWebSettings::FontSize",
    "QWebSettings::WebGraphic",
    "QWebPage::LinkDelegationPolicy",
    "QWebPage::FindFlags",
    "QWebPage::NavigationType",
    "QWebSettings::FontFamily",
    "QWebPage::WebWindowType"
};

void __metainfo_init_qt_webkit()
{
    registerQtToJava("unsigned char", "ubyte");
    registerQtToJava("int", "int");
    registerJavaToQt("int", "int");
    registerQtToJava("QString", "java/lang/string");
    registerJavaToQt("java/lang/string", "QString");
    registerQtToJava("QStringRef", "java/lang/string");
    registerQtToJava("QLatin1String", "java/lang/string");
    registerQtToJava("GLint", "int");
    registerQtToJava("ulong", "ulong");
    registerQtToJava("QBool", "bool");
    registerQtToJava("QChar", "char");
    registerJavaToQt("char", "QChar");
    registerQtToJava("signed char", "byte");
    registerQtToJava("float", "float");
    registerJavaToQt("float", "float");
    registerQtToJava("double", "double");
    registerJavaToQt("double", "double");
    registerQtToJava("signed int", "int");
    registerQtToJava("unsigned int", "uint");
    registerQtToJava("Qt::HANDLE", "long");
    registerQtToJava("size_t", "size_t");
    registerJavaToQt("size_t", "size_t");
    qRegisterMetaType<size_t>("size_t");
    registerQtToJava("long", "int");
    registerQtToJava("quintptr", "quintptr");
    registerQtToJava("bool", "bool");
    registerJavaToQt("bool", "bool");
    registerQtToJava("qint64", "long");
    registerQtToJava("signed long", "int");
    registerQtToJava("unsigned short", "ushort");
    registerQtToJava("char", "char");
    registerJavaToQt("char", "char");
    registerQtToJava("unsigned __int64", "long");
    registerQtToJava("short", "short");
    registerJavaToQt("short", "short");
    registerQtToJava("QXmlStreamStringRef", "java/lang/string");
    registerQtToJava("uint", "uint");
    registerJavaToQt("uint", "uint");
    registerQtToJava("WId", "long");
    registerQtToJava("unsigned long long", "ulong");
    registerQtToJava("QLatin1Char", "char");
    registerQtToJava("jobject", "java.lang.Object");
    registerJavaToQt("java.lang.Object", "jobject");
    qRegisterMetaType<jobject>("jobject");
    registerQtToJava("__int64", "long");
    registerQtToJava("QVariant", "QVariant");
    registerJavaToQt("QVariant", "QVariant");
    registerQtToJava("GLenum", "int");
    registerQtToJava("QByteRef", "byte");
    registerQtToJava("unsigned long", "uint");
    registerQtToJava("signed short", "short");
    registerQtToJava("GLuint", "int");
    registerQtToJava("QBitRef", "bool");
    for (int i=0;i<sns_count; ++i) {
        registerQtToJava(qtNames[i], javaFunctionNames[i]);
        if (getQtName(javaObjectNames[i]).length() < QByteArray(qtNames[i]).size())
            registerJavaToQt(javaObjectNames[i], qtNames[i]);
        registerJavaSignature(qtNames[i], javaSignatures[i]);
    }
    for (int i=0;i<enum_count; ++i) {
        registerQtToJava(enumCppNames[i], enumJavaNames[i]);
        registerJavaToQt(enumJavaNames[i], enumCppNames[i]);
    }
    registerQtToJava("QWebFrame", "qt/webkit/QWebFrame");
    registerJavaToQt("qt/webkit/QWebFrame", "QWebFrame");
    registerQtToJava("QWebHistory", "qt/webkit/QWebHistory");
    registerJavaToQt("qt/webkit/QWebHistory", "QWebHistory");
    registerQtToJava("QWebHistoryInterface", "qt/webkit/QWebHistoryInterface_ConcreteWrapper");
    registerJavaToQt("qt/webkit/QWebHistoryInterface_ConcreteWrapper", "QWebHistoryInterface");
    registerQtToJava("QWebHistoryItem", "qt/webkit/QWebHistoryItem");
    registerJavaToQt("qt/webkit/QWebHistoryItem", "QWebHistoryItem");
    QMetaType::registerType("QWebHistoryItem",
                            reinterpret_cast<QMetaType::Destructor>(qwebhistoryitem_delete),
                            reinterpret_cast<QMetaType::Constructor>(qwebhistoryitem_create));
    registerQtToJava("QWebHitTestResult", "qt/webkit/QWebHitTestResult");
    registerJavaToQt("qt/webkit/QWebHitTestResult", "QWebHitTestResult");
    qRegisterMetaType<QWebHitTestResult>("QWebHitTestResult");
    registerQtToJava("QWebPage", "qt/webkit/QWebPage");
    registerJavaToQt("qt/webkit/QWebPage", "QWebPage");
    registerQtToJava("QWebSettings", "qt/webkit/QWebSettings");
    registerJavaToQt("qt/webkit/QWebSettings", "QWebSettings");
    registerQtToJava("QWebView", "qt/webkit/QWebView");
    registerJavaToQt("qt/webkit/QWebView", "QWebView");
    registerQtToJava("WebCore", "qt/webkit/WebCore");
    registerJavaToQt("qt/webkit/WebCore", "WebCore");
}

