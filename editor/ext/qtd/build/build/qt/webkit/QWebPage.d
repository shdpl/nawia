module qt.webkit.QWebPage;

public import qt.webkit.QWebPage_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.webkit.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QContextMenuEvent;
public import qt.webkit.QWebHistoryItem;
public import qt.core.QUrl;
public import qt.gui.QUndoStack;
public import qt.core.QRect;
public import qt.network.QNetworkAccessManager;
public import qt.network.QNetworkReply;
public import qt.core.QPoint;
public import qt.webkit.QWebHistory;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QAction;
public import qt.webkit.QWebSettings;
public import qt.core.QEvent;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.core.QTimerEvent;
public import qt.network.QNetworkRequest;
public import qt.gui.QPalette;
public import qt.webkit.QWebFrame;
public import qt.gui.QMenu;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QWebPage : QObject
{
    public enum NavigationType {
        NavigationTypeLinkClicked = 0,
        NavigationTypeFormSubmitted = 1,
        NavigationTypeBackOrForward = 2,
        NavigationTypeReload = 3,
        NavigationTypeFormResubmitted = 4,
        NavigationTypeOther = 5
    }

    alias NavigationType.NavigationTypeLinkClicked NavigationTypeLinkClicked;
    alias NavigationType.NavigationTypeFormSubmitted NavigationTypeFormSubmitted;
    alias NavigationType.NavigationTypeBackOrForward NavigationTypeBackOrForward;
    alias NavigationType.NavigationTypeReload NavigationTypeReload;
    alias NavigationType.NavigationTypeFormResubmitted NavigationTypeFormResubmitted;
    alias NavigationType.NavigationTypeOther NavigationTypeOther;

    public enum WebAction {
        NoWebAction = -1,
        OpenLink = 0,
        OpenLinkInNewWindow = 1,
        OpenFrameInNewWindow = 2,
        DownloadLinkToDisk = 3,
        CopyLinkToClipboard = 4,
        OpenImageInNewWindow = 5,
        DownloadImageToDisk = 6,
        CopyImageToClipboard = 7,
        Back = 8,
        Forward = 9,
        Stop = 10,
        Reload = 11,
        Cut = 12,
        Copy = 13,
        Paste = 14,
        Undo = 15,
        Redo = 16,
        MoveToNextChar = 17,
        MoveToPreviousChar = 18,
        MoveToNextWord = 19,
        MoveToPreviousWord = 20,
        MoveToNextLine = 21,
        MoveToPreviousLine = 22,
        MoveToStartOfLine = 23,
        MoveToEndOfLine = 24,
        MoveToStartOfBlock = 25,
        MoveToEndOfBlock = 26,
        MoveToStartOfDocument = 27,
        MoveToEndOfDocument = 28,
        SelectNextChar = 29,
        SelectPreviousChar = 30,
        SelectNextWord = 31,
        SelectPreviousWord = 32,
        SelectNextLine = 33,
        SelectPreviousLine = 34,
        SelectStartOfLine = 35,
        SelectEndOfLine = 36,
        SelectStartOfBlock = 37,
        SelectEndOfBlock = 38,
        SelectStartOfDocument = 39,
        SelectEndOfDocument = 40,
        DeleteStartOfWord = 41,
        DeleteEndOfWord = 42,
        SetTextDirectionDefault = 43,
        SetTextDirectionLeftToRight = 44,
        SetTextDirectionRightToLeft = 45,
        ToggleBold = 46,
        ToggleItalic = 47,
        ToggleUnderline = 48,
        InspectElement = 49,
        InsertParagraphSeparator = 50,
        InsertLineSeparator = 51,
        SelectAll = 52,
        ReloadAndBypassCache = 53,
        PasteAndMatchStyle = 54,
        RemoveFormat = 55,
        ToggleStrikethrough = 56,
        ToggleSubscript = 57,
        ToggleSuperscript = 58,
        InsertUnorderedList = 59,
        InsertOrderedList = 60,
        Indent = 61,
        Outdent = 62,
        AlignCenter = 63,
        AlignJustified = 64,
        AlignLeft = 65,
        AlignRight = 66,
        StopScheduledPageRefresh = 67,
        WebActionCount = 68
    }

    alias WebAction.NoWebAction NoWebAction;
    alias WebAction.OpenLink OpenLink;
    alias WebAction.OpenLinkInNewWindow OpenLinkInNewWindow;
    alias WebAction.OpenFrameInNewWindow OpenFrameInNewWindow;
    alias WebAction.DownloadLinkToDisk DownloadLinkToDisk;
    alias WebAction.CopyLinkToClipboard CopyLinkToClipboard;
    alias WebAction.OpenImageInNewWindow OpenImageInNewWindow;
    alias WebAction.DownloadImageToDisk DownloadImageToDisk;
    alias WebAction.CopyImageToClipboard CopyImageToClipboard;
    alias WebAction.Back Back;
    alias WebAction.Forward Forward;
    alias WebAction.Stop Stop;
    alias WebAction.Reload Reload;
    alias WebAction.Cut Cut;
    alias WebAction.Copy Copy;
    alias WebAction.Paste Paste;
    alias WebAction.Undo Undo;
    alias WebAction.Redo Redo;
    alias WebAction.MoveToNextChar MoveToNextChar;
    alias WebAction.MoveToPreviousChar MoveToPreviousChar;
    alias WebAction.MoveToNextWord MoveToNextWord;
    alias WebAction.MoveToPreviousWord MoveToPreviousWord;
    alias WebAction.MoveToNextLine MoveToNextLine;
    alias WebAction.MoveToPreviousLine MoveToPreviousLine;
    alias WebAction.MoveToStartOfLine MoveToStartOfLine;
    alias WebAction.MoveToEndOfLine MoveToEndOfLine;
    alias WebAction.MoveToStartOfBlock MoveToStartOfBlock;
    alias WebAction.MoveToEndOfBlock MoveToEndOfBlock;
    alias WebAction.MoveToStartOfDocument MoveToStartOfDocument;
    alias WebAction.MoveToEndOfDocument MoveToEndOfDocument;
    alias WebAction.SelectNextChar SelectNextChar;
    alias WebAction.SelectPreviousChar SelectPreviousChar;
    alias WebAction.SelectNextWord SelectNextWord;
    alias WebAction.SelectPreviousWord SelectPreviousWord;
    alias WebAction.SelectNextLine SelectNextLine;
    alias WebAction.SelectPreviousLine SelectPreviousLine;
    alias WebAction.SelectStartOfLine SelectStartOfLine;
    alias WebAction.SelectEndOfLine SelectEndOfLine;
    alias WebAction.SelectStartOfBlock SelectStartOfBlock;
    alias WebAction.SelectEndOfBlock SelectEndOfBlock;
    alias WebAction.SelectStartOfDocument SelectStartOfDocument;
    alias WebAction.SelectEndOfDocument SelectEndOfDocument;
    alias WebAction.DeleteStartOfWord DeleteStartOfWord;
    alias WebAction.DeleteEndOfWord DeleteEndOfWord;
    alias WebAction.SetTextDirectionDefault SetTextDirectionDefault;
    alias WebAction.SetTextDirectionLeftToRight SetTextDirectionLeftToRight;
    alias WebAction.SetTextDirectionRightToLeft SetTextDirectionRightToLeft;
    alias WebAction.ToggleBold ToggleBold;
    alias WebAction.ToggleItalic ToggleItalic;
    alias WebAction.ToggleUnderline ToggleUnderline;
    alias WebAction.InspectElement InspectElement;
    alias WebAction.InsertParagraphSeparator InsertParagraphSeparator;
    alias WebAction.InsertLineSeparator InsertLineSeparator;
    alias WebAction.SelectAll SelectAll;
    alias WebAction.ReloadAndBypassCache ReloadAndBypassCache;
    alias WebAction.PasteAndMatchStyle PasteAndMatchStyle;
    alias WebAction.RemoveFormat RemoveFormat;
    alias WebAction.ToggleStrikethrough ToggleStrikethrough;
    alias WebAction.ToggleSubscript ToggleSubscript;
    alias WebAction.ToggleSuperscript ToggleSuperscript;
    alias WebAction.InsertUnorderedList InsertUnorderedList;
    alias WebAction.InsertOrderedList InsertOrderedList;
    alias WebAction.Indent Indent;
    alias WebAction.Outdent Outdent;
    alias WebAction.AlignCenter AlignCenter;
    alias WebAction.AlignJustified AlignJustified;
    alias WebAction.AlignLeft AlignLeft;
    alias WebAction.AlignRight AlignRight;
    alias WebAction.StopScheduledPageRefresh StopScheduledPageRefresh;
    alias WebAction.WebActionCount WebActionCount;

    public enum WebWindowType {
        WebBrowserWindow = 0,
        WebModalDialog = 1
    }

    alias WebWindowType.WebBrowserWindow WebBrowserWindow;
    alias WebWindowType.WebModalDialog WebModalDialog;

    public enum FindFlag {
        FindBackward = 1,
        FindCaseSensitively = 2,
        FindWrapsAroundDocument = 4,
        HighlightAllOccurrences = 8
    }

    alias FindFlag.FindBackward FindBackward;
    alias FindFlag.FindCaseSensitively FindCaseSensitively;
    alias FindFlag.FindWrapsAroundDocument FindWrapsAroundDocument;
    alias FindFlag.HighlightAllOccurrences HighlightAllOccurrences;

    public enum LinkDelegationPolicy {
        DontDelegateLinks = 0,
        DelegateExternalLinks = 1,
        DelegateAllLinks = 2
    }

    alias LinkDelegationPolicy.DontDelegateLinks DontDelegateLinks;
    alias LinkDelegationPolicy.DelegateExternalLinks DelegateExternalLinks;
    alias LinkDelegationPolicy.DelegateAllLinks DelegateAllLinks;


Object __rcView = null;

    private static const string[] __signalSignatures = [
            "contentsChanged()", 
            "databaseQuotaExceeded(QWebFrame*,QString)", 
            "downloadRequested(QNetworkRequest)", 
            "frameCreated(QWebFrame*)", 
            "geometryChangeRequested(QRect)", 
            "linkClicked(QUrl)", 
            "linkHovered(QString,QString,QString)", 
            "loadFinished(bool)", 
            "loadProgress(int)", 
            "loadStarted()", 
            "menuBarVisibilityChangeRequested(bool)", 
            "microFocusChanged()", 
            "printRequested(QWebFrame*)", 
            "repaintRequested(QRect)", 
            "restoreFrameStateRequested(QWebFrame*)", 
            "saveFrameStateRequested(QWebFrame*,QWebHistoryItem*)", 
            "scrollRequested(int,int,QRect)", 
            "selectionChanged()", 
            "statusBarMessage(QString)", 
            "statusBarVisibilityChangeRequested(bool)", 
            "toolBarVisibilityChangeRequested(bool)", 
            "unsupportedContent(QNetworkReply*)", 
            "windowCloseRequested()"    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }

    protected final void contentsChanged() {
        qtd_QWebPage_contentsChanged(qtdNativeId);
    }

    protected final void databaseQuotaExceeded(QWebFrame frame, string databaseName) {
        qtd_QWebPage_databaseQuotaExceeded_QWebFrame_string(qtdNativeId, frame is null ? null : frame.qtdNativeId, databaseName);
    }

    protected final void downloadRequested(const(QNetworkRequest) request) {
        qtd_QWebPage_downloadRequested_QNetworkRequest(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId);
    }

    protected final void frameCreated(QWebFrame frame) {
        qtd_QWebPage_frameCreated_QWebFrame(qtdNativeId, frame is null ? null : frame.qtdNativeId);
    }

    protected final void geometryChangeRequested(const(QRect) geom) {
        qtd_QWebPage_geometryChangeRequested_QRect(qtdNativeId, geom);
    }

    protected final void linkClicked(const(QUrl) url) {
        qtd_QWebPage_linkClicked_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    protected final void linkHovered(string link, string title, string textContent) {
        qtd_QWebPage_linkHovered_string_string_string(qtdNativeId, link, title, textContent);
    }

    protected final void loadFinished(bool ok) {
        qtd_QWebPage_loadFinished_bool(qtdNativeId, ok);
    }

    protected final void loadProgress(int progress) {
        qtd_QWebPage_loadProgress_int(qtdNativeId, progress);
    }

    protected final void loadStarted() {
        qtd_QWebPage_loadStarted(qtdNativeId);
    }

    protected final void menuBarVisibilityChangeRequested(bool visible) {
        qtd_QWebPage_menuBarVisibilityChangeRequested_bool(qtdNativeId, visible);
    }

    protected final void microFocusChanged() {
        qtd_QWebPage_microFocusChanged(qtdNativeId);
    }

    protected final void printRequested(QWebFrame frame) {
        qtd_QWebPage_printRequested_QWebFrame(qtdNativeId, frame is null ? null : frame.qtdNativeId);
    }

    protected final void repaintRequested(const(QRect) dirtyRect) {
        qtd_QWebPage_repaintRequested_QRect(qtdNativeId, dirtyRect);
    }

    protected final void restoreFrameStateRequested(QWebFrame frame) {
        qtd_QWebPage_restoreFrameStateRequested_QWebFrame(qtdNativeId, frame is null ? null : frame.qtdNativeId);
    }

    protected final void saveFrameStateRequested(QWebFrame frame, QWebHistoryItem item) {
        qtd_QWebPage_saveFrameStateRequested_QWebFrame_nativepointerQWebHistoryItem(qtdNativeId, frame is null ? null : frame.qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    protected final void scrollRequested(int dx, int dy, const(QRect) scrollViewRect) {
        qtd_QWebPage_scrollRequested_int_int_QRect(qtdNativeId, dx, dy, scrollViewRect);
    }

    protected final void selectionChanged() {
        qtd_QWebPage_selectionChanged(qtdNativeId);
    }

    protected final void statusBarMessage(string text) {
        qtd_QWebPage_statusBarMessage_string(qtdNativeId, text);
    }

    protected final void statusBarVisibilityChangeRequested(bool visible) {
        qtd_QWebPage_statusBarVisibilityChangeRequested_bool(qtdNativeId, visible);
    }

    protected final void toolBarVisibilityChangeRequested(bool visible) {
        qtd_QWebPage_toolBarVisibilityChangeRequested_bool(qtdNativeId, visible);
    }

    protected final void unsupportedContent(QNetworkReply reply) {
        qtd_QWebPage_unsupportedContent_QNetworkReply(qtdNativeId, reply is null ? null : reply.qtdNativeId);
    }

    protected final void windowCloseRequested() {
        qtd_QWebPage_windowCloseRequested(qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QWebPage_QWebPage_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QAction action(QWebPage.WebAction action) const {
        void *ret = qtd_QWebPage_action_WebAction_const(qtdNativeId, action);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final ulong bytesReceived() const {
        return qtd_QWebPage_bytesReceived_const(qtdNativeId);
    }

    public final QMenu createStandardContextMenu() {
        void *ret = qtd_QWebPage_createStandardContextMenu(qtdNativeId);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final QWebFrame currentFrame() const {
        void *ret = qtd_QWebPage_currentFrame_const(qtdNativeId);
        QWebFrame __d_return_value = QWebFrame.__getObject(ret);
        return __d_return_value;
    }

    public final bool findText(string subString, int options = 0) {
        return qtd_QWebPage_findText_string_FindFlags(qtdNativeId, subString, options);
    }

    public final bool focusNextPrevChild(bool next) {
        return qtd_QWebPage_focusNextPrevChild_bool(qtdNativeId, next);
    }

    public final bool forwardUnsupportedContent() const {
        return qtd_QWebPage_forwardUnsupportedContent_const(qtdNativeId);
    }

    public final QWebFrame frameAt(const(QPoint) pos) const {
        void *ret = qtd_QWebPage_frameAt_QPoint_const(qtdNativeId, pos);
        QWebFrame __d_return_value = QWebFrame.__getObject(ret);
        return __d_return_value;
    }

    public final QWebHistory history() const {
        void* ret = qtd_QWebPage_history_const(qtdNativeId);
        QWebHistory __d_return_value = qtd_QWebHistory_from_ptr(ret);

        return __d_return_value;
    }

    public final QVariant inputMethodQuery(Qt.InputMethodQuery property) const {
        void* ret = qtd_QWebPage_inputMethodQuery_InputMethodQuery_const(qtdNativeId, property);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final bool isContentEditable() const {
        return qtd_QWebPage_isContentEditable_const(qtdNativeId);
    }

    public final bool isModified() const {
        return qtd_QWebPage_isModified_const(qtdNativeId);
    }

    public final QWebPage.LinkDelegationPolicy linkDelegationPolicy() const {
        return cast(QWebPage.LinkDelegationPolicy) qtd_QWebPage_linkDelegationPolicy_const(qtdNativeId);
    }

    public final QWebFrame mainFrame() const {
        void *ret = qtd_QWebPage_mainFrame_const(qtdNativeId);
        QWebFrame __d_return_value = QWebFrame.__getObject(ret);
        return __d_return_value;
    }

    public final QNetworkAccessManager networkAccessManager() const {
        void *ret = qtd_QWebPage_networkAccessManager_const(qtdNativeId);
        QNetworkAccessManager __d_return_value = QNetworkAccessManager.__getObject(ret);
        return __d_return_value;
    }

    public final QPalette palette() const {
        void* ret = qtd_QWebPage_palette_const(qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public final QSize preferredContentsSize() const {
        QSize res;
        qtd_QWebPage_preferredContentsSize_const(qtdNativeId, &res);
        return res;
    }

    public final string selectedText() const {
        string res;
        qtd_QWebPage_selectedText_const(qtdNativeId, &res);
        return res;
    }

    public final void setContentEditable(bool editable) {
        qtd_QWebPage_setContentEditable_bool(qtdNativeId, editable);
    }

    public final void setForwardUnsupportedContent(bool forward) {
        qtd_QWebPage_setForwardUnsupportedContent_bool(qtdNativeId, forward);
    }

    public final void setLinkDelegationPolicy(QWebPage.LinkDelegationPolicy policy) {
        qtd_QWebPage_setLinkDelegationPolicy_LinkDelegationPolicy(qtdNativeId, policy);
    }

    public final void setNetworkAccessManager(QNetworkAccessManager manager) {
        if (manager !is null) {
            manager.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QWebPage_setNetworkAccessManager_QNetworkAccessManager(qtdNativeId, manager is null ? null : manager.qtdNativeId);
    }

    public final void setPalette(const(QPalette) palette) {
        qtd_QWebPage_setPalette_QPalette(qtdNativeId, palette is null ? null : (cast(QPalette)palette).qtdNativeId);
    }

    public final void setPreferredContentsSize(const(QSize) size) const {
        qtd_QWebPage_setPreferredContentsSize_QSize_const(qtdNativeId, size);
    }

    public final void setView(QWidget view) {
        {
            __rcView = cast(Object) view;
        }
        qtd_QWebPage_setView_QWidget(qtdNativeId, view is null ? null : view.qtdNativeId);
    }

    public final void setViewportSize(const(QSize) size) const {
        qtd_QWebPage_setViewportSize_QSize_const(qtdNativeId, size);
    }

    public final QWebSettings settings() const {
        void* ret = qtd_QWebPage_settings_const(qtdNativeId);
        QWebSettings __d_return_value = qtd_QWebSettings_from_ptr(ret);

        return __d_return_value;
    }

    public final bool shouldInterruptJavaScript() {
        return qtd_QWebPage_shouldInterruptJavaScript(qtdNativeId);
    }

    public final bool swallowContextMenuEvent(QContextMenuEvent event) {
        return qtd_QWebPage_swallowContextMenuEvent_QContextMenuEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public final ulong totalBytes() const {
        return qtd_QWebPage_totalBytes_const(qtdNativeId);
    }

    public final QUndoStack undoStack() const {
        void *ret = qtd_QWebPage_undoStack_const(qtdNativeId);
        QUndoStack __d_return_value = QUndoStack.__getObject(ret);
        return __d_return_value;
    }

    public final void updatePositionDependentActions(const(QPoint) pos) {
        qtd_QWebPage_updatePositionDependentActions_QPoint(qtdNativeId, pos);
    }

    public final QWidget view() const {
        void *ret = qtd_QWebPage_view_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QSize viewportSize() const {
        QSize res;
        qtd_QWebPage_viewportSize_const(qtdNativeId, &res);
        return res;
    }

    protected bool acceptNavigationRequest(QWebFrame frame, const(QNetworkRequest) request, QWebPage.NavigationType type) {
        return qtd_QWebPage_acceptNavigationRequest_QWebFrame_QNetworkRequest_NavigationType(qtdNativeId, frame is null ? null : frame.qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId, type);
    }

    protected string chooseFile(QWebFrame originatingFrame, string oldFile) {
        string res;
        qtd_QWebPage_chooseFile_QWebFrame_string(qtdNativeId, &res, originatingFrame is null ? null : originatingFrame.qtdNativeId, oldFile);
        return res;
    }

    protected QObject createPlugin(string classid, const(QUrl) url, QList!(string) paramNames, QList!(string) paramValues) {
        void *ret = qtd_QWebPage_createPlugin_string_QUrl_QList_QList(qtdNativeId, classid, url is null ? null : (cast(QUrl)url).qtdNativeId, &paramNames, &paramValues);
        QObject __d_return_value = QObject.__getObject(ret);
        return __d_return_value;
    }

    protected QWebPage createWindow(QWebPage.WebWindowType type) {
        void *ret = qtd_QWebPage_createWindow_WebWindowType(qtdNativeId, type);
        QWebPage __d_return_value = QWebPage.__getObject(ret);
        return __d_return_value;
    }

    public bool event(QEvent arg__1) {
        return qtd_QWebPage_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void javaScriptAlert(QWebFrame originatingFrame, string msg) {
        qtd_QWebPage_javaScriptAlert_QWebFrame_string(qtdNativeId, originatingFrame is null ? null : originatingFrame.qtdNativeId, msg);
    }

    protected bool javaScriptConfirm(QWebFrame originatingFrame, string msg) {
        return qtd_QWebPage_javaScriptConfirm_QWebFrame_string(qtdNativeId, originatingFrame is null ? null : originatingFrame.qtdNativeId, msg);
    }

    protected void javaScriptConsoleMessage(string message, int lineNumber, string sourceID) {
        qtd_QWebPage_javaScriptConsoleMessage_string_int_string(qtdNativeId, message, lineNumber, sourceID);
    }

    protected bool javaScriptPrompt(QWebFrame originatingFrame, string msg, string defaultValue, ref string result) {
        return qtd_QWebPage_javaScriptPrompt_QWebFrame_string_string_nativepointerstring(qtdNativeId, originatingFrame is null ? null : originatingFrame.qtdNativeId, msg, defaultValue, result);
    }

    public void triggerAction(QWebPage.WebAction action, bool checked = false) {
        qtd_QWebPage_triggerAction_WebAction_bool(qtdNativeId, action, checked);
    }

    protected string userAgentForUrl(const(QUrl) url) const {
        string res;
        qtd_QWebPage_userAgentForUrl_QUrl_const(qtdNativeId, &res, url is null ? null : (cast(QUrl)url).qtdNativeId);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "shouldInterruptJavaScript()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QWebPage_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QWebPage);
    }

    static QWebPage __getObject(void* nativeId) {
        return static_cast!(QWebPage)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QWebPage_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QWebPage_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QWebPage(nativeId, initFlags);
        QWebPage.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("contentsChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(QWebFrame,string)("databaseQuotaExceeded"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(const(QNetworkRequest))("downloadRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(QWebFrame)("frameCreated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(const(QRect))("geometryChangeRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(const(QUrl))("linkClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(string,string,string)("linkHovered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(bool)("loadFinished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!(int)("loadProgress"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[9]);
        mo.addMethod(new QMetaSignal(signature!()("loadStarted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[10]);
        mo.addMethod(new QMetaSignal(signature!(bool)("menuBarVisibilityChangeRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[11]);
        mo.addMethod(new QMetaSignal(signature!()("microFocusChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[12]);
        mo.addMethod(new QMetaSignal(signature!(QWebFrame)("printRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[13]);
        mo.addMethod(new QMetaSignal(signature!(const(QRect))("repaintRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[14]);
        mo.addMethod(new QMetaSignal(signature!(QWebFrame)("restoreFrameStateRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[15]);
        mo.addMethod(new QMetaSignal(signature!(QWebFrame,QWebHistoryItem)("saveFrameStateRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[16]);
        mo.addMethod(new QMetaSignal(signature!(int,int,const(QRect))("scrollRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[17]);
        mo.addMethod(new QMetaSignal(signature!()("selectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[18]);
        mo.addMethod(new QMetaSignal(signature!(string)("statusBarMessage"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[19]);
        mo.addMethod(new QMetaSignal(signature!(bool)("statusBarVisibilityChangeRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[20]);
        mo.addMethod(new QMetaSignal(signature!(bool)("toolBarVisibilityChangeRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[21]);
        mo.addMethod(new QMetaSignal(signature!(QNetworkReply)("unsupportedContent"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[22]);
        mo.addMethod(new QMetaSignal(signature!()("windowCloseRequested"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("shouldInterruptJavaScript"), index));

    }

    public alias void __isQtType_QWebPage;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QWebPage_contentsChanged(void* __this_nativeId);
private extern(C) void  qtd_QWebPage_databaseQuotaExceeded_QWebFrame_string(void* __this_nativeId,
 void* frame0,
 string databaseName1);
private extern(C) void  qtd_QWebPage_downloadRequested_QNetworkRequest(void* __this_nativeId,
 void* request0);
private extern(C) void  qtd_QWebPage_frameCreated_QWebFrame(void* __this_nativeId,
 void* frame0);
private extern(C) void  qtd_QWebPage_geometryChangeRequested_QRect(void* __this_nativeId,
 QRect geom0);
private extern(C) void  qtd_QWebPage_linkClicked_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void  qtd_QWebPage_linkHovered_string_string_string(void* __this_nativeId,
 string link0,
 string title1,
 string textContent2);
private extern(C) void  qtd_QWebPage_loadFinished_bool(void* __this_nativeId,
 bool ok0);
private extern(C) void  qtd_QWebPage_loadProgress_int(void* __this_nativeId,
 int progress0);
private extern(C) void  qtd_QWebPage_loadStarted(void* __this_nativeId);
private extern(C) void  qtd_QWebPage_menuBarVisibilityChangeRequested_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QWebPage_microFocusChanged(void* __this_nativeId);
private extern(C) void  qtd_QWebPage_printRequested_QWebFrame(void* __this_nativeId,
 void* frame0);
private extern(C) void  qtd_QWebPage_repaintRequested_QRect(void* __this_nativeId,
 QRect dirtyRect0);
private extern(C) void  qtd_QWebPage_restoreFrameStateRequested_QWebFrame(void* __this_nativeId,
 void* frame0);
private extern(C) void  qtd_QWebPage_saveFrameStateRequested_QWebFrame_nativepointerQWebHistoryItem(void* __this_nativeId,
 void* frame0,
 void* item1);
private extern(C) void  qtd_QWebPage_scrollRequested_int_int_QRect(void* __this_nativeId,
 int dx0,
 int dy1,
 QRect scrollViewRect2);
private extern(C) void  qtd_QWebPage_selectionChanged(void* __this_nativeId);
private extern(C) void  qtd_QWebPage_statusBarMessage_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QWebPage_statusBarVisibilityChangeRequested_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QWebPage_toolBarVisibilityChangeRequested_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QWebPage_unsupportedContent_QNetworkReply(void* __this_nativeId,
 void* reply0);
private extern(C) void  qtd_QWebPage_windowCloseRequested(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QWebPage_QWebPage_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QWebPage_action_WebAction_const(void* __this_nativeId,
 int action0);
private extern(C) ulong  qtd_QWebPage_bytesReceived_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebPage_createStandardContextMenu(void* __this_nativeId);
private extern(C) void*  qtd_QWebPage_currentFrame_const(void* __this_nativeId);
private extern(C) bool  qtd_QWebPage_findText_string_FindFlags(void* __this_nativeId,
 string subString0,
 int options1);
private extern(C) bool  qtd_QWebPage_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) bool  qtd_QWebPage_forwardUnsupportedContent_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebPage_frameAt_QPoint_const(void* __this_nativeId,
 QPoint pos0);
private extern(C) void*  qtd_QWebPage_history_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebPage_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int property0);
private extern(C) bool  qtd_QWebPage_isContentEditable_const(void* __this_nativeId);
private extern(C) bool  qtd_QWebPage_isModified_const(void* __this_nativeId);
private extern(C) int  qtd_QWebPage_linkDelegationPolicy_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebPage_mainFrame_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebPage_networkAccessManager_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebPage_palette_const(void* __this_nativeId);
private extern(C) void  qtd_QWebPage_preferredContentsSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QWebPage_selectedText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWebPage_setContentEditable_bool(void* __this_nativeId,
 bool editable0);
private extern(C) void  qtd_QWebPage_setForwardUnsupportedContent_bool(void* __this_nativeId,
 bool forward0);
private extern(C) void  qtd_QWebPage_setLinkDelegationPolicy_LinkDelegationPolicy(void* __this_nativeId,
 int policy0);
private extern(C) void  qtd_QWebPage_setNetworkAccessManager_QNetworkAccessManager(void* __this_nativeId,
 void* manager0);
private extern(C) void  qtd_QWebPage_setPalette_QPalette(void* __this_nativeId,
 void* palette0);
private extern(C) void  qtd_QWebPage_setPreferredContentsSize_QSize_const(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QWebPage_setView_QWidget(void* __this_nativeId,
 void* view0);
private extern(C) void  qtd_QWebPage_setViewportSize_QSize_const(void* __this_nativeId,
 QSize size0);
private extern(C) void*  qtd_QWebPage_settings_const(void* __this_nativeId);
private extern(C) bool  qtd_QWebPage_shouldInterruptJavaScript(void* __this_nativeId);
private extern(C) bool  qtd_QWebPage_swallowContextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* event0);
private extern(C) ulong  qtd_QWebPage_totalBytes_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebPage_undoStack_const(void* __this_nativeId);
private extern(C) void  qtd_QWebPage_updatePositionDependentActions_QPoint(void* __this_nativeId,
 QPoint pos0);
private extern(C) void*  qtd_QWebPage_view_const(void* __this_nativeId);
private extern(C) void  qtd_QWebPage_viewportSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) bool  qtd_QWebPage_acceptNavigationRequest_QWebFrame_QNetworkRequest_NavigationType(void* __this_nativeId,
 void* frame0,
 void* request1,
 int type2);
private extern(C) void  qtd_QWebPage_chooseFile_QWebFrame_string(void* __this_nativeId,
 void* __d_return_value,
 void* originatingFrame0,
 string oldFile1);
private extern(C) void*  qtd_QWebPage_createPlugin_string_QUrl_QList_QList(void* __this_nativeId,
 string classid0,
 void* url1,
 void* paramNames2,
 void* paramValues3);
private extern(C) void*  qtd_QWebPage_createWindow_WebWindowType(void* __this_nativeId,
 int type0);
private extern(C) bool  qtd_QWebPage_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebPage_javaScriptAlert_QWebFrame_string(void* __this_nativeId,
 void* originatingFrame0,
 string msg1);
private extern(C) bool  qtd_QWebPage_javaScriptConfirm_QWebFrame_string(void* __this_nativeId,
 void* originatingFrame0,
 string msg1);
private extern(C) void  qtd_QWebPage_javaScriptConsoleMessage_string_int_string(void* __this_nativeId,
 string message0,
 int lineNumber1,
 string sourceID2);
private extern(C) bool  qtd_QWebPage_javaScriptPrompt_QWebFrame_string_string_nativepointerstring(void* __this_nativeId,
 void* originatingFrame0,
 string msg1,
 string defaultValue2,
 string result3);
private extern(C) void  qtd_QWebPage_triggerAction_WebAction_bool(void* __this_nativeId,
 int action0,
 bool checked1);
private extern(C) void  qtd_QWebPage_userAgentForUrl_QUrl_const(void* __this_nativeId,
 void* __d_return_value,
 void* url0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, void* frame0, void* request1, int type2) qtd_QWebPage_acceptNavigationRequest_QWebFrame_QNetworkRequest_NavigationType_dispatch; }
extern(C) bool qtd_export_QWebPage_acceptNavigationRequest_QWebFrame_QNetworkRequest_NavigationType_dispatch(void *dId, void* frame0, void* request1, int type2){
    auto d_object = cast(QWebPage) dId;
    scope frame0_d_ref = new QWebFrame(frame0, QtdObjectInitFlags.onStack);

    scope request1_d_ref = new QNetworkRequest(request1, QtdObjectInitFlags.onStack);
    auto type2_enum = cast(QWebPage.NavigationType) type2;
    auto return_value = d_object.acceptNavigationRequest(frame0_d_ref, request1_d_ref, type2_enum);
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str, void* originatingFrame0, wchar* oldFile1, int oldFile1_size) qtd_QWebPage_chooseFile_QWebFrame_string_dispatch; }
extern(C) void qtd_export_QWebPage_chooseFile_QWebFrame_string_dispatch(void *dId, string* ret_str, void* originatingFrame0, wchar* oldFile1, int oldFile1_size){
    auto d_object = cast(QWebPage) dId;
    scope originatingFrame0_d_ref = new QWebFrame(originatingFrame0, QtdObjectInitFlags.onStack);

    string oldFile1_d_ref = toUTF8(oldFile1[0..oldFile1_size]);
    string _d_str = d_object.chooseFile(originatingFrame0_d_ref, oldFile1_d_ref);
    *ret_str = _d_str;
}

extern(C){ extern void* function(void *dId, wchar* classid0, int classid0_size, void* url1, void* paramNames2, void* paramValues3) qtd_QWebPage_createPlugin_string_QUrl_QList_QList_dispatch; }
extern(C) void* qtd_export_QWebPage_createPlugin_string_QUrl_QList_QList_dispatch(void *dId, wchar* classid0, int classid0_size, void* url1, void* paramNames2, void* paramValues3){
    auto d_object = cast(QWebPage) dId;
    string classid0_d_ref = toUTF8(classid0[0..classid0_size]);
    scope url1_d_ref = new QUrl(url1, QtdObjectInitFlags.onStack);
    auto paramNames2_d_ref = cast(QList!(string)*)paramNames2;

    auto paramValues3_d_ref = cast(QList!(string)*)paramValues3;

    QObject ret_value = d_object.createPlugin(classid0_d_ref, url1_d_ref, *paramNames2_d_ref, *paramValues3_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId, int type0) qtd_QWebPage_createWindow_WebWindowType_dispatch; }
extern(C) void* qtd_export_QWebPage_createWindow_WebWindowType_dispatch(void *dId, int type0){
    auto d_object = cast(QWebPage) dId;
    auto type0_enum = cast(QWebPage.WebWindowType) type0;
    QWebPage ret_value = d_object.createWindow(type0_enum);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, void* originatingFrame0, wchar* msg1, int msg1_size) qtd_QWebPage_javaScriptAlert_QWebFrame_string_dispatch; }
extern(C) void qtd_export_QWebPage_javaScriptAlert_QWebFrame_string_dispatch(void *dId, void* originatingFrame0, wchar* msg1, int msg1_size){
    auto d_object = cast(QWebPage) dId;
    scope originatingFrame0_d_ref = new QWebFrame(originatingFrame0, QtdObjectInitFlags.onStack);

    string msg1_d_ref = toUTF8(msg1[0..msg1_size]);
    d_object.javaScriptAlert(originatingFrame0_d_ref, msg1_d_ref);
}

extern(C){ extern bool function(void *dId, void* originatingFrame0, wchar* msg1, int msg1_size) qtd_QWebPage_javaScriptConfirm_QWebFrame_string_dispatch; }
extern(C) bool qtd_export_QWebPage_javaScriptConfirm_QWebFrame_string_dispatch(void *dId, void* originatingFrame0, wchar* msg1, int msg1_size){
    auto d_object = cast(QWebPage) dId;
    scope originatingFrame0_d_ref = new QWebFrame(originatingFrame0, QtdObjectInitFlags.onStack);

    string msg1_d_ref = toUTF8(msg1[0..msg1_size]);
    auto return_value = d_object.javaScriptConfirm(originatingFrame0_d_ref, msg1_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, wchar* message0, int message0_size, int lineNumber1, wchar* sourceID2, int sourceID2_size) qtd_QWebPage_javaScriptConsoleMessage_string_int_string_dispatch; }
extern(C) void qtd_export_QWebPage_javaScriptConsoleMessage_string_int_string_dispatch(void *dId, wchar* message0, int message0_size, int lineNumber1, wchar* sourceID2, int sourceID2_size){
    auto d_object = cast(QWebPage) dId;
    string message0_d_ref = toUTF8(message0[0..message0_size]);
    string sourceID2_d_ref = toUTF8(sourceID2[0..sourceID2_size]);
    d_object.javaScriptConsoleMessage(message0_d_ref, lineNumber1, sourceID2_d_ref);
}

extern(C){ extern bool function(void *dId, void* originatingFrame0, wchar* msg1, int msg1_size, wchar* defaultValue2, int defaultValue2_size, void* result3) qtd_QWebPage_javaScriptPrompt_QWebFrame_string_string_nativepointerstring_dispatch; }
extern(C) bool qtd_export_QWebPage_javaScriptPrompt_QWebFrame_string_string_nativepointerstring_dispatch(void *dId, void* originatingFrame0, wchar* msg1, int msg1_size, wchar* defaultValue2, int defaultValue2_size, void* result3){
    auto d_object = cast(QWebPage) dId;
    scope originatingFrame0_d_ref = new QWebFrame(originatingFrame0, QtdObjectInitFlags.onStack);

    string msg1_d_ref = toUTF8(msg1[0..msg1_size]);
    string defaultValue2_d_ref = toUTF8(defaultValue2[0..defaultValue2_size]);
    auto result3_d_qstr = QStringUtil(result3, true);
    string result3_d_ref = result3_d_qstr.toNativeString();
    auto return_value = d_object.javaScriptPrompt(originatingFrame0_d_ref, msg1_d_ref, defaultValue2_d_ref, result3_d_ref);
    result3_d_qstr.assign(result3_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, int action0, bool checked1) qtd_QWebPage_triggerAction_WebAction_bool_dispatch; }
extern(C) void qtd_export_QWebPage_triggerAction_WebAction_bool_dispatch(void *dId, int action0, bool checked1){
    auto d_object = cast(QWebPage) dId;
    auto action0_enum = cast(QWebPage.WebAction) action0;
    d_object.triggerAction(action0_enum, checked1);
}

extern(C){ extern void function(void *dId, string* ret_str, void* url0) qtd_QWebPage_userAgentForUrl_QUrl_const_dispatch; }
extern(C) void qtd_export_QWebPage_userAgentForUrl_QUrl_const_dispatch(void *dId, string* ret_str, void* url0){
    auto d_object = cast(QWebPage) dId;
    scope url0_d_ref = new QUrl(url0, QtdObjectInitFlags.onStack);
    string _d_str = d_object.userAgentForUrl(url0_d_ref);
    *ret_str = _d_str;
}

private extern (C) void qtd_QWebPage_initCallBacks(void* virtuals);

extern(C) void static_init_QWebPage() {
    void*[10] virt_arr;
    virt_arr[0] = &qtd_export_QWebPage_acceptNavigationRequest_QWebFrame_QNetworkRequest_NavigationType_dispatch;
    virt_arr[1] = &qtd_export_QWebPage_chooseFile_QWebFrame_string_dispatch;
    virt_arr[2] = &qtd_export_QWebPage_createPlugin_string_QUrl_QList_QList_dispatch;
    virt_arr[3] = &qtd_export_QWebPage_createWindow_WebWindowType_dispatch;
    virt_arr[4] = &qtd_export_QWebPage_javaScriptAlert_QWebFrame_string_dispatch;
    virt_arr[5] = &qtd_export_QWebPage_javaScriptConfirm_QWebFrame_string_dispatch;
    virt_arr[6] = &qtd_export_QWebPage_javaScriptConsoleMessage_string_int_string_dispatch;
    virt_arr[7] = &qtd_export_QWebPage_javaScriptPrompt_QWebFrame_string_string_nativepointerstring_dispatch;
    virt_arr[8] = &qtd_export_QWebPage_triggerAction_WebAction_bool_dispatch;
    virt_arr[9] = &qtd_export_QWebPage_userAgentForUrl_QUrl_const_dispatch;
    qtd_QWebPage_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QWebPage_contentsChanged_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        //d_object.contentsChanged_emit();
}*/
/*private extern(C) void qtd_QWebPage_databaseQuotaExceeded_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        scope frame0 = new QWebFrame(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        auto databaseName1_ptr = args[2];
        string databaseName1 = QStringUtil.toNativeString(databaseName1_ptr);
        //d_object.databaseQuotaExceeded_emit(frame0, databaseName1);
}*/
/*private extern(C) void qtd_QWebPage_downloadRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        scope request0 = new QNetworkRequest(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.downloadRequested_emit(request0);
}*/
/*private extern(C) void qtd_QWebPage_frameCreated_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        scope frame0 = new QWebFrame(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.frameCreated_emit(frame0);
}*/
/*private extern(C) void qtd_QWebPage_geometryChangeRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        auto geom0 = *(cast(QRect*)args[1]);
        //d_object.geometryChangeRequested_emit(geom0);
}*/
/*private extern(C) void qtd_QWebPage_linkClicked_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        scope url0 = new QUrl(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.linkClicked_emit(url0);
}*/
/*private extern(C) void qtd_QWebPage_linkHovered_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        auto link0_ptr = args[1];
        string link0 = QStringUtil.toNativeString(link0_ptr);
        auto title1_ptr = args[2];
        string title1 = QStringUtil.toNativeString(title1_ptr);
        auto textContent2_ptr = args[3];
        string textContent2 = QStringUtil.toNativeString(textContent2_ptr);
        //d_object.linkHovered_emit(link0, title1, textContent2);
}*/
/*private extern(C) void qtd_QWebPage_loadFinished_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        auto ok0 = *(cast(bool*)args[1]);
        //d_object.loadFinished_emit(ok0);
}*/
/*private extern(C) void qtd_QWebPage_loadProgress_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        auto progress0 = *(cast(int*)args[1]);
        //d_object.loadProgress_emit(progress0);
}*/
/*private extern(C) void qtd_QWebPage_loadStarted_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        //d_object.loadStarted_emit();
}*/
/*private extern(C) void qtd_QWebPage_menuBarVisibilityChangeRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        auto visible0 = *(cast(bool*)args[1]);
        //d_object.menuBarVisibilityChangeRequested_emit(visible0);
}*/
/*private extern(C) void qtd_QWebPage_microFocusChanged_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        //d_object.microFocusChanged_emit();
}*/
/*private extern(C) void qtd_QWebPage_printRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        scope frame0 = new QWebFrame(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.printRequested_emit(frame0);
}*/
/*private extern(C) void qtd_QWebPage_repaintRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        auto dirtyRect0 = *(cast(QRect*)args[1]);
        //d_object.repaintRequested_emit(dirtyRect0);
}*/
/*private extern(C) void qtd_QWebPage_restoreFrameStateRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        scope frame0 = new QWebFrame(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.restoreFrameStateRequested_emit(frame0);
}*/
/*private extern(C) void qtd_QWebPage_saveFrameStateRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        scope frame0 = new QWebFrame(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope item1 = new QWebHistoryItem(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.saveFrameStateRequested_emit(frame0, item1);
}*/
/*private extern(C) void qtd_QWebPage_scrollRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        auto dx0 = *(cast(int*)args[1]);
        auto dy1 = *(cast(int*)args[2]);
        auto scrollViewRect2 = *(cast(QRect*)args[3]);
        //d_object.scrollRequested_emit(dx0, dy1, scrollViewRect2);
}*/
/*private extern(C) void qtd_QWebPage_selectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        //d_object.selectionChanged_emit();
}*/
/*private extern(C) void qtd_QWebPage_statusBarMessage_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        auto text0_ptr = args[1];
        string text0 = QStringUtil.toNativeString(text0_ptr);
        //d_object.statusBarMessage_emit(text0);
}*/
/*private extern(C) void qtd_QWebPage_statusBarVisibilityChangeRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        auto visible0 = *(cast(bool*)args[1]);
        //d_object.statusBarVisibilityChangeRequested_emit(visible0);
}*/
/*private extern(C) void qtd_QWebPage_toolBarVisibilityChangeRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        auto visible0 = *(cast(bool*)args[1]);
        //d_object.toolBarVisibilityChangeRequested_emit(visible0);
}*/
/*private extern(C) void qtd_QWebPage_unsupportedContent_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        scope reply0 = new QNetworkReply_ConcreteWrapper(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.unsupportedContent_emit(reply0);
}*/
/*private extern(C) void qtd_QWebPage_windowCloseRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebPage) dId;
        //d_object.windowCloseRequested_emit();
}*/

extern(C) QMetaObjectNative* qtd_QWebPage_staticMetaObject();

extern(C) void qtd_QWebPage_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QWebPage_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
