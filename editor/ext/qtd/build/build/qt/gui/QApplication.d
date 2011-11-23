module qt.gui.QApplication;

import qtd.String;
public import qt.gui.QApplication_aux;
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
private import qt.gui.ArrayOps;
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QList;
public import qt.gui.QDesktopWidget;
public import qt.gui.QFontMetrics;
public import qt.core.QCoreApplication;
public import qt.core.QLocale;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.gui.QClipboard;
public import qt.core.QTimerEvent;
public import qt.gui.QFont;
public import qt.gui.QInputContext;
public import qt.gui.QPalette;
public import qt.gui.QIcon;
public import qt.gui.QStyle;
public import qt.gui.QCursor;
public import qt.gui.QSessionManager;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QApplication : QCoreApplication
{
    public enum Type {
        Tty = 0,
        GuiClient = 1,
        GuiServer = 2
    }

    alias Type.Tty Tty;
    alias Type.GuiClient GuiClient;
    alias Type.GuiServer GuiServer;

    public enum ColorSpec {
        NormalColor = 0,
        CustomColor = 1,
        ManyColor = 2
    }

    alias ColorSpec.NormalColor NormalColor;
    alias ColorSpec.CustomColor CustomColor;
    alias ColorSpec.ManyColor ManyColor;


    private static const string[] __signalSignatures = [
            "commitDataRequest(QSessionManager&)", 
            "focusChanged(QWidget*,QWidget*)", 
            "fontDatabaseChanged()", 
            "lastWindowClosed()", 
            "saveStateRequest(QSessionManager&)"    ];

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

    protected final void commitDataRequest(QSessionManager sessionManager) {
        qtd_QApplication_commitDataRequest_QSessionManager(qtdNativeId, sessionManager is null ? null : sessionManager.qtdNativeId);
    }

    protected final void focusChanged(QWidget old, QWidget now) {
        qtd_QApplication_focusChanged_QWidget_QWidget(qtdNativeId, old is null ? null : old.qtdNativeId, now is null ? null : now.qtdNativeId);
    }

    protected final void fontDatabaseChanged() {
        qtd_QApplication_fontDatabaseChanged(qtdNativeId);
    }

    protected final void lastWindowClosed() {
        qtd_QApplication_lastWindowClosed(qtdNativeId);
    }

    protected final void saveStateRequest(QSessionManager sessionManager) {
        qtd_QApplication_saveStateRequest_QSessionManager(qtdNativeId, sessionManager is null ? null : sessionManager.qtdNativeId);
    }
// Functions

    private this(int* argc, char** argv, int arg__3 = 0x040703) {
        void* ret = qtd_QApplication_QApplication_nativepointerint_nativepointerchar_int(cast(void*) this, argc, argv, arg__3);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool autoSipEnabled() const {
        return qtd_QApplication_autoSipEnabled_const(qtdNativeId);
    }

    public final QInputContext inputContext() const {
        void *ret = qtd_QApplication_inputContext_const(qtdNativeId);
        QInputContext __d_return_value = QInputContext.__getObject(ret);
        return __d_return_value;
    }

    public final bool isSessionRestored() const {
        return qtd_QApplication_isSessionRestored_const(qtdNativeId);
    }

    public final string sessionId() const {
        string res;
        qtd_QApplication_sessionId_const(qtdNativeId, &res);
        return res;
    }

    public final string sessionKey() const {
        string res;
        qtd_QApplication_sessionKey_const(qtdNativeId, &res);
        return res;
    }

    public final void setAutoSipEnabled(bool enabled) {
        qtd_QApplication_setAutoSipEnabled_bool(qtdNativeId, enabled);
    }

    public final void setInputContext(QInputContext arg__1) {
        if (arg__1 !is null) {
            arg__1.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QApplication_setInputContext_QInputContext(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setStyleSheet(string sheet) {
        qtd_QApplication_setStyleSheet_string(qtdNativeId, sheet);
    }

    public final string styleSheet() const {
        string res;
        qtd_QApplication_styleSheet_const(qtdNativeId, &res);
        return res;
    }

    public void commitData(QSessionManager sm) {
        qtd_QApplication_commitData_QSessionManager(qtdNativeId, sm is null ? null : sm.qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QApplication_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool notify(QObject arg__1, QEvent arg__2) {
        return qtd_QApplication_notify_QObject_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }

    public void saveState(QSessionManager sm) {
        qtd_QApplication_saveState_QSessionManager(qtdNativeId, sm is null ? null : sm.qtdNativeId);
    }

    public static void aboutQt() {
        qtd_QApplication_aboutQt();
    }

    public static QWidget activeModalWidget() {
        void *ret = qtd_QApplication_activeModalWidget();
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public static QWidget activePopupWidget() {
        void *ret = qtd_QApplication_activePopupWidget();
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public static QWidget activeWindow() {
        void *ret = qtd_QApplication_activeWindow();
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public static void alert(QWidget widget, int duration = 0) {
        qtd_QApplication_alert_QWidget_int(widget is null ? null : widget.qtdNativeId, duration);
    }

    public static QList!(QWidget) allWidgets() {
        auto res = QList!(QWidget).opCall();
        qtd_QApplication_allWidgets(&res);
        return res;
    }

    public static void beep() {
        qtd_QApplication_beep();
    }

    public static void changeOverrideCursor(const(QCursor) arg__1) {
        qtd_QApplication_changeOverrideCursor_QCursor(arg__1 is null ? null : (cast(QCursor)arg__1).qtdNativeId);
    }

    public static QClipboard clipboard() {
        void *ret = qtd_QApplication_clipboard();
        QClipboard __d_return_value = QClipboard.__getObject(ret);
        return __d_return_value;
    }

    public static void closeAllWindows() {
        qtd_QApplication_closeAllWindows();
    }

    public static int colorSpec() {
        return qtd_QApplication_colorSpec();
    }

    public static int cursorFlashTime() {
        return qtd_QApplication_cursorFlashTime();
    }

    public static QDesktopWidget desktop() {
        void *ret = qtd_QApplication_desktop();
        QDesktopWidget __d_return_value = QDesktopWidget.__getObject(ret);
        return __d_return_value;
    }

    public static bool desktopSettingsAware() {
        return qtd_QApplication_desktopSettingsAware();
    }

    public static int doubleClickInterval() {
        return qtd_QApplication_doubleClickInterval();
    }

    public static int exec() {
        return qtd_QApplication_exec();
    }

    public static QWidget focusWidget() {
        void *ret = qtd_QApplication_focusWidget();
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public static QFont font() {
        void* ret = qtd_QApplication_font();
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public static QFont font(QWidget arg__1) {
        void* ret = qtd_QApplication_font_QWidget(arg__1 is null ? null : (cast(QWidget)arg__1).qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public static QFontMetrics fontMetrics() {
        void* ret = qtd_QApplication_fontMetrics();
        QFontMetrics __d_return_value = new QFontMetrics(ret);
        return __d_return_value;
    }

    public static QSize globalStrut() {
        QSize res;
        qtd_QApplication_globalStrut(&res);
        return res;
    }

    public static bool isEffectEnabled(Qt.UIEffect arg__1) {
        return qtd_QApplication_isEffectEnabled_UIEffect(arg__1);
    }

    public static bool isLeftToRight() {
        return qtd_QApplication_isLeftToRight();
    }

    public static bool isRightToLeft() {
        return qtd_QApplication_isRightToLeft();
    }

    public static Qt.LayoutDirection keyboardInputDirection() {
        return cast(Qt.LayoutDirection) qtd_QApplication_keyboardInputDirection();
    }

    public static int keyboardInputInterval() {
        return qtd_QApplication_keyboardInputInterval();
    }

    public static QLocale keyboardInputLocale() {
        void* ret = qtd_QApplication_keyboardInputLocale();
        QLocale __d_return_value = new QLocale(ret);
        return __d_return_value;
    }

    public static int keyboardModifiers() {
        return qtd_QApplication_keyboardModifiers();
    }

    public static Qt.LayoutDirection layoutDirection() {
        return cast(Qt.LayoutDirection) qtd_QApplication_layoutDirection();
    }

    public static int mouseButtons() {
        return qtd_QApplication_mouseButtons();
    }

    public static QCursor overrideCursor() {
        void* ret = qtd_QApplication_overrideCursor();
        QCursor __d_return_value = new QCursor(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public static QPalette palette() {
        void* ret = qtd_QApplication_palette();
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public static QPalette palette(QWidget arg__1) {
        void* ret = qtd_QApplication_palette_QWidget(arg__1 is null ? null : (cast(QWidget)arg__1).qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public static bool quitOnLastWindowClosed() {
        return qtd_QApplication_quitOnLastWindowClosed();
    }

    public static void restoreOverrideCursor() {
        qtd_QApplication_restoreOverrideCursor();
    }

    public static void setActiveWindow(QWidget act) {
        qtd_QApplication_setActiveWindow_QWidget(act is null ? null : act.qtdNativeId);
    }

    public static void setColorSpec(int arg__1) {
        qtd_QApplication_setColorSpec_int(arg__1);
    }

    public static void setCursorFlashTime(int arg__1) {
        qtd_QApplication_setCursorFlashTime_int(arg__1);
    }

    public static void setDesktopSettingsAware(bool arg__1) {
        qtd_QApplication_setDesktopSettingsAware_bool(arg__1);
    }

    public static void setDoubleClickInterval(int arg__1) {
        qtd_QApplication_setDoubleClickInterval_int(arg__1);
    }

    public static void setEffectEnabled(Qt.UIEffect arg__1, bool enable = true) {
        qtd_QApplication_setEffectEnabled_UIEffect_bool(arg__1, enable);
    }

    private static void setFont_private(const(QFont) arg__1, const(char*) className) {
        qtd_QApplication_setFont_private_QFont_nativepointerchar(arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId, className);
    }

    public static void setGlobalStrut(const(QSize) arg__1) {
        qtd_QApplication_setGlobalStrut_QSize(arg__1);
    }

    public static void setGraphicsSystem(string arg__1) {
        qtd_QApplication_setGraphicsSystem_string(arg__1);
    }

    public static void setKeyboardInputInterval(int arg__1) {
        qtd_QApplication_setKeyboardInputInterval_int(arg__1);
    }

    public static void setLayoutDirection(Qt.LayoutDirection direction) {
        qtd_QApplication_setLayoutDirection_LayoutDirection(direction);
    }

    public static void setOverrideCursor(const(QCursor) arg__1) {
        qtd_QApplication_setOverrideCursor_QCursor(arg__1 is null ? null : (cast(QCursor)arg__1).qtdNativeId);
    }

    private static void setPalette_private(const(QPalette) arg__1, const(char*) className) {
        qtd_QApplication_setPalette_private_QPalette_nativepointerchar(arg__1 is null ? null : (cast(QPalette)arg__1).qtdNativeId, className);
    }

    public static void setQuitOnLastWindowClosed(bool quit) {
        qtd_QApplication_setQuitOnLastWindowClosed_bool(quit);
    }

    public static void setStartDragDistance(int l) {
        qtd_QApplication_setStartDragDistance_int(l);
    }

    public static void setStartDragTime(int ms) {
        qtd_QApplication_setStartDragTime_int(ms);
    }

    public static void setStyle(QStyle arg__1) {
        qtd_QApplication_setStyle_QStyle(arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public static QStyle setStyle(string arg__1) {
        void *ret = qtd_QApplication_setStyle_string(arg__1);
        QStyle __d_return_value = QStyle.__getObject(ret);
        return __d_return_value;
    }

    public static void setWheelScrollLines(int arg__1) {
        qtd_QApplication_setWheelScrollLines_int(arg__1);
    }

    public static void setWindowIcon(const(QIcon) icon) {
        qtd_QApplication_setWindowIcon_QIcon(icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public static int startDragDistance() {
        return qtd_QApplication_startDragDistance();
    }

    public static int startDragTime() {
        return qtd_QApplication_startDragTime();
    }

    public static QStyle style() {
        void *ret = qtd_QApplication_style();
        QStyle __d_return_value = QStyle.__getObject(ret);
        return __d_return_value;
    }

    public static void syncX() {
        qtd_QApplication_syncX();
    }

    public static QWidget topLevelAt(const(QPoint) p) {
        void *ret = qtd_QApplication_topLevelAt_QPoint(p);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public static QWidget topLevelAt(int x, int y) {
        void *ret = qtd_QApplication_topLevelAt_int_int(x, y);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public static QList!(QWidget) topLevelWidgets() {
        auto res = QList!(QWidget).opCall();
        qtd_QApplication_topLevelWidgets(&res);
        return res;
    }

    public static QApplication.Type type() {
        return cast(QApplication.Type) qtd_QApplication_type();
    }

    public static int wheelScrollLines() {
        return qtd_QApplication_wheelScrollLines();
    }

    public static QWidget widgetAt(const(QPoint) p) {
        void *ret = qtd_QApplication_widgetAt_QPoint(p);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public static QWidget widgetAt(int x, int y) {
        void *ret = qtd_QApplication_widgetAt_int_int(x, y);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public static QIcon windowIcon() {
        void* ret = qtd_QApplication_windowIcon();
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "autoSipEnabled()const", 
            "setAutoSipEnabled(bool)", 
            "setStyleSheet(QString)", 
            "aboutQt()", 
            "closeAllWindows()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QApplication_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QApplication);
    }

    static QApplication __getObject(void* nativeId) {
        return static_cast!(QApplication)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QApplication_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QApplication_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QApplication(nativeId, initFlags);
        QApplication.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QSessionManager)("commitDataRequest"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(QWidget,QWidget)("focusChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("fontDatabaseChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("lastWindowClosed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(QSessionManager)("saveStateRequest"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("autoSipEnabled"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setAutoSipEnabled"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(string)("setStyleSheet"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("aboutQt"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("closeAllWindows"), index));

    }

    public alias void __isQtType_QApplication;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    this(string[] args)
    {
        //        if (m_instance != null)
        //            throw new RuntimeException("QCoreApplication can only be initialized once");

        argc = cast(int)args.length;
        argv = toStringzArray(args);
        this(&argc, argv);

        //        m_instance.aboutToQuit.connect(m_instance, "disposeOfMyself()");
    }

    private int argc;
    private char **argv;

    /*    public static QApplication instance() {
    if (type() != Type.Tty)
    return (QApplication) qt.core.QCoreApplication.instance();
    return null;
    }

    public QApplication(String args[]) {
    this(argc(args), argv(args));
    }*/

    public static void setFont(QFont font, string className = null) {
        setFont_private(font, className !is null ? toStringz(className) : null);
    }

    public static void setPalette(QPalette palette, string className = null) {
        setPalette_private(palette, className !is null ? toStringz(className) : null);
    }
    /*
    public static QCursor overrideCursor() {
    QNativePointer np = overrideCursor_private();
    return np == null ? null : QCursor.fromNativePointer(np);
    }
     */

}

    QApplication qApp()
    {
        return cast(QApplication) QCoreApplication.instance();
    }


// C wrappers for signal emitters
private extern(C) void  qtd_QApplication_commitDataRequest_QSessionManager(void* __this_nativeId,
 void* sessionManager0);
private extern(C) void  qtd_QApplication_focusChanged_QWidget_QWidget(void* __this_nativeId,
 void* old0,
 void* now1);
private extern(C) void  qtd_QApplication_fontDatabaseChanged(void* __this_nativeId);
private extern(C) void  qtd_QApplication_lastWindowClosed(void* __this_nativeId);
private extern(C) void  qtd_QApplication_saveStateRequest_QSessionManager(void* __this_nativeId,
 void* sessionManager0);

// C wrappers
private extern(C) void* qtd_QApplication_QApplication_nativepointerint_nativepointerchar_int(void *d_ptr,
 int * argc0,
 char** argv1,
 int arg__3);
private extern(C) bool  qtd_QApplication_autoSipEnabled_const(void* __this_nativeId);
private extern(C) void*  qtd_QApplication_inputContext_const(void* __this_nativeId);
private extern(C) bool  qtd_QApplication_isSessionRestored_const(void* __this_nativeId);
private extern(C) void  qtd_QApplication_sessionId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QApplication_sessionKey_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QApplication_setAutoSipEnabled_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QApplication_setInputContext_QInputContext(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QApplication_setStyleSheet_string(void* __this_nativeId,
 string sheet0);
private extern(C) void  qtd_QApplication_styleSheet_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QApplication_commitData_QSessionManager(void* __this_nativeId,
 void* sm0);
private extern(C) bool  qtd_QApplication_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QApplication_notify_QObject_QEvent(void* __this_nativeId,
 void* arg__1,
 void* arg__2);
private extern(C) void  qtd_QApplication_saveState_QSessionManager(void* __this_nativeId,
 void* sm0);
private extern(C) void  qtd_QApplication_aboutQt();
private extern(C) void*  qtd_QApplication_activeModalWidget();
private extern(C) void*  qtd_QApplication_activePopupWidget();
private extern(C) void*  qtd_QApplication_activeWindow();
private extern(C) void  qtd_QApplication_alert_QWidget_int(void* widget0,
 int duration1);
private extern(C) void  qtd_QApplication_allWidgets(void* __d_return_value);
private extern(C) void  qtd_QApplication_beep();
private extern(C) void  qtd_QApplication_changeOverrideCursor_QCursor(void* arg__1);
private extern(C) void*  qtd_QApplication_clipboard();
private extern(C) void  qtd_QApplication_closeAllWindows();
private extern(C) int  qtd_QApplication_colorSpec();
private extern(C) int  qtd_QApplication_cursorFlashTime();
private extern(C) void*  qtd_QApplication_desktop();
private extern(C) bool  qtd_QApplication_desktopSettingsAware();
private extern(C) int  qtd_QApplication_doubleClickInterval();
private extern(C) int  qtd_QApplication_exec();
private extern(C) void*  qtd_QApplication_focusWidget();
private extern(C) void*  qtd_QApplication_font();
private extern(C) void*  qtd_QApplication_font_QWidget(void* arg__1);
private extern(C) void*  qtd_QApplication_fontMetrics();
private extern(C) void  qtd_QApplication_globalStrut(QSize * __d_return_value);
private extern(C) bool  qtd_QApplication_isEffectEnabled_UIEffect(int arg__1);
private extern(C) bool  qtd_QApplication_isLeftToRight();
private extern(C) bool  qtd_QApplication_isRightToLeft();
private extern(C) int  qtd_QApplication_keyboardInputDirection();
private extern(C) int  qtd_QApplication_keyboardInputInterval();
private extern(C) void*  qtd_QApplication_keyboardInputLocale();
private extern(C) int  qtd_QApplication_keyboardModifiers();
private extern(C) int  qtd_QApplication_layoutDirection();
private extern(C) int  qtd_QApplication_mouseButtons();
private extern(C) void*  qtd_QApplication_overrideCursor();
private extern(C) void*  qtd_QApplication_palette();
private extern(C) void*  qtd_QApplication_palette_QWidget(void* arg__1);
private extern(C) bool  qtd_QApplication_quitOnLastWindowClosed();
private extern(C) void  qtd_QApplication_restoreOverrideCursor();
private extern(C) void  qtd_QApplication_setActiveWindow_QWidget(void* act0);
private extern(C) void  qtd_QApplication_setColorSpec_int(int arg__1);
private extern(C) void  qtd_QApplication_setCursorFlashTime_int(int arg__1);
private extern(C) void  qtd_QApplication_setDesktopSettingsAware_bool(bool arg__1);
private extern(C) void  qtd_QApplication_setDoubleClickInterval_int(int arg__1);
private extern(C) void  qtd_QApplication_setEffectEnabled_UIEffect_bool(int arg__1,
 bool enable1);
private extern(C) void  qtd_QApplication_setFont_private_QFont_nativepointerchar(void* arg__1,
 const (char*) className1);
private extern(C) void  qtd_QApplication_setGlobalStrut_QSize(QSize arg__1);
private extern(C) void  qtd_QApplication_setGraphicsSystem_string(string arg__1);
private extern(C) void  qtd_QApplication_setKeyboardInputInterval_int(int arg__1);
private extern(C) void  qtd_QApplication_setLayoutDirection_LayoutDirection(int direction0);
private extern(C) void  qtd_QApplication_setOverrideCursor_QCursor(void* arg__1);
private extern(C) void  qtd_QApplication_setPalette_private_QPalette_nativepointerchar(void* arg__1,
 const (char*) className1);
private extern(C) void  qtd_QApplication_setQuitOnLastWindowClosed_bool(bool quit0);
private extern(C) void  qtd_QApplication_setStartDragDistance_int(int l0);
private extern(C) void  qtd_QApplication_setStartDragTime_int(int ms0);
private extern(C) void  qtd_QApplication_setStyle_QStyle(void* arg__1);
private extern(C) void*  qtd_QApplication_setStyle_string(string arg__1);
private extern(C) void  qtd_QApplication_setWheelScrollLines_int(int arg__1);
private extern(C) void  qtd_QApplication_setWindowIcon_QIcon(void* icon0);
private extern(C) int  qtd_QApplication_startDragDistance();
private extern(C) int  qtd_QApplication_startDragTime();
private extern(C) void*  qtd_QApplication_style();
private extern(C) void  qtd_QApplication_syncX();
private extern(C) void*  qtd_QApplication_topLevelAt_QPoint(QPoint p0);
private extern(C) void*  qtd_QApplication_topLevelAt_int_int(int x0,
 int y1);
private extern(C) void  qtd_QApplication_topLevelWidgets(void* __d_return_value);
private extern(C) int  qtd_QApplication_type();
private extern(C) int  qtd_QApplication_wheelScrollLines();
private extern(C) void*  qtd_QApplication_widgetAt_QPoint(QPoint p0);
private extern(C) void*  qtd_QApplication_widgetAt_int_int(int x0,
 int y1);
private extern(C) void*  qtd_QApplication_windowIcon();
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* sm0) qtd_QApplication_commitData_QSessionManager_dispatch; }
extern(C) void qtd_export_QApplication_commitData_QSessionManager_dispatch(void *dId, void* sm0){
    auto d_object = cast(QApplication) dId;
    scope sm0_d_ref = new QSessionManager(sm0, QtdObjectInitFlags.onStack);

    d_object.commitData(sm0_d_ref);
}

extern(C){ extern void function(void *dId, void* sm0) qtd_QApplication_saveState_QSessionManager_dispatch; }
extern(C) void qtd_export_QApplication_saveState_QSessionManager_dispatch(void *dId, void* sm0){
    auto d_object = cast(QApplication) dId;
    scope sm0_d_ref = new QSessionManager(sm0, QtdObjectInitFlags.onStack);

    d_object.saveState(sm0_d_ref);
}

private extern (C) void qtd_QApplication_initCallBacks(void* virtuals);

extern(C) void static_init_QApplication() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QApplication_commitData_QSessionManager_dispatch;
    virt_arr[1] = &qtd_export_QApplication_saveState_QSessionManager_dispatch;
    qtd_QApplication_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QApplication_aboutToQuit_handle(void* dId, void** args) {
        auto d_object = cast(QApplication) dId;
        //d_object.aboutToQuit_emit();
}*/
/*private extern(C) void qtd_QApplication_unixSignal_handle(void* dId, void** args) {
        auto d_object = cast(QApplication) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.unixSignal_emit(arg__1);
}*/
/*private extern(C) void qtd_QApplication_commitDataRequest_handle(void* dId, void** args) {
        auto d_object = cast(QApplication) dId;
        scope sessionManager0 = new QSessionManager(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.commitDataRequest_emit(sessionManager0);
}*/
/*private extern(C) void qtd_QApplication_focusChanged_handle(void* dId, void** args) {
        auto d_object = cast(QApplication) dId;
        scope old0 = new QWidget(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope now1 = new QWidget(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.focusChanged_emit(old0, now1);
}*/
/*private extern(C) void qtd_QApplication_fontDatabaseChanged_handle(void* dId, void** args) {
        auto d_object = cast(QApplication) dId;
        //d_object.fontDatabaseChanged_emit();
}*/
/*private extern(C) void qtd_QApplication_lastWindowClosed_handle(void* dId, void** args) {
        auto d_object = cast(QApplication) dId;
        //d_object.lastWindowClosed_emit();
}*/
/*private extern(C) void qtd_QApplication_saveStateRequest_handle(void* dId, void** args) {
        auto d_object = cast(QApplication) dId;
        scope sessionManager0 = new QSessionManager(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.saveStateRequest_emit(sessionManager0);
}*/

extern(C) QMetaObjectNative* qtd_QApplication_staticMetaObject();

extern(C) void qtd_QApplication_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QApplication_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
