module qt.gui.QWizard;

public import qt.gui.QWizard_aux;
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
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.core.QList;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QDialog;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.gui.QHideEvent;
public import qt.gui.QWizardPage;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QPixmap;
public import qt.gui.QAbstractButton;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QWizard : QDialog
{
    public enum WizardButton {
        BackButton = 0,
        NextButton = 1,
        CommitButton = 2,
        FinishButton = 3,
        CancelButton = 4,
        HelpButton = 5,
        CustomButton1 = 6,
        CustomButton2 = 7,
        CustomButton3 = 8,
        Stretch = 9,
        NoButton = -1,

    }

    alias WizardButton.BackButton BackButton;
    alias WizardButton.NextButton NextButton;
    alias WizardButton.CommitButton CommitButton;
    alias WizardButton.FinishButton FinishButton;
    alias WizardButton.CancelButton CancelButton;
    alias WizardButton.HelpButton HelpButton;
    alias WizardButton.CustomButton1 CustomButton1;
    alias WizardButton.CustomButton2 CustomButton2;
    alias WizardButton.CustomButton3 CustomButton3;
    alias WizardButton.Stretch Stretch;
    alias WizardButton.NoButton NoButton;

    public enum WizardStyle {
        ClassicStyle = 0,
        ModernStyle = 1,
        MacStyle = 2,
        AeroStyle = 3,
        NStyles = 4
    }

    alias WizardStyle.ClassicStyle ClassicStyle;
    alias WizardStyle.ModernStyle ModernStyle;
    alias WizardStyle.MacStyle MacStyle;
    alias WizardStyle.AeroStyle AeroStyle;
    alias WizardStyle.NStyles NStyles;

    public enum WizardPixmap {
        WatermarkPixmap = 0,
        LogoPixmap = 1,
        BannerPixmap = 2,
        BackgroundPixmap = 3,
        NPixmaps = 4
    }

    alias WizardPixmap.WatermarkPixmap WatermarkPixmap;
    alias WizardPixmap.LogoPixmap LogoPixmap;
    alias WizardPixmap.BannerPixmap BannerPixmap;
    alias WizardPixmap.BackgroundPixmap BackgroundPixmap;
    alias WizardPixmap.NPixmaps NPixmaps;

    public enum WizardOption {
        IndependentPages = 1,
        IgnoreSubTitles = 2,
        ExtendedWatermarkPixmap = 4,
        NoDefaultButton = 8,
        NoBackButtonOnStartPage = 16,
        NoBackButtonOnLastPage = 32,
        DisabledBackButtonOnLastPage = 64,
        HaveNextButtonOnLastPage = 128,
        HaveFinishButtonOnEarlyPages = 256,
        NoCancelButton = 512,
        CancelButtonOnLeft = 1024,
        HaveHelpButton = 2048,
        HelpButtonOnRight = 4096,
        HaveCustomButton1 = 8192,
        HaveCustomButton2 = 16384,
        HaveCustomButton3 = 32768
    }

    alias WizardOption.IndependentPages IndependentPages;
    alias WizardOption.IgnoreSubTitles IgnoreSubTitles;
    alias WizardOption.ExtendedWatermarkPixmap ExtendedWatermarkPixmap;
    alias WizardOption.NoDefaultButton NoDefaultButton;
    alias WizardOption.NoBackButtonOnStartPage NoBackButtonOnStartPage;
    alias WizardOption.NoBackButtonOnLastPage NoBackButtonOnLastPage;
    alias WizardOption.DisabledBackButtonOnLastPage DisabledBackButtonOnLastPage;
    alias WizardOption.HaveNextButtonOnLastPage HaveNextButtonOnLastPage;
    alias WizardOption.HaveFinishButtonOnEarlyPages HaveFinishButtonOnEarlyPages;
    alias WizardOption.NoCancelButton NoCancelButton;
    alias WizardOption.CancelButtonOnLeft CancelButtonOnLeft;
    alias WizardOption.HaveHelpButton HaveHelpButton;
    alias WizardOption.HelpButtonOnRight HelpButtonOnRight;
    alias WizardOption.HaveCustomButton1 HaveCustomButton1;
    alias WizardOption.HaveCustomButton2 HaveCustomButton2;
    alias WizardOption.HaveCustomButton3 HaveCustomButton3;


    private static const string[] __signalSignatures = [
            "currentIdChanged(int)", 
            "customButtonClicked(int)", 
            "helpRequested()", 
            "pageAdded(int)", 
            "pageRemoved(int)"    ];

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

    protected final void currentIdChanged(int id) {
        qtd_QWizard_currentIdChanged_int(qtdNativeId, id);
    }

    protected final void customButtonClicked(int which) {
        qtd_QWizard_customButtonClicked_int(qtdNativeId, which);
    }

    protected final void helpRequested() {
        qtd_QWizard_helpRequested(qtdNativeId);
    }

    protected final void pageAdded(int id) {
        qtd_QWizard_pageAdded_int(qtdNativeId, id);
    }

    protected final void pageRemoved(int id) {
        qtd_QWizard_pageRemoved_int(qtdNativeId, id);
    }
// Functions

    public this(QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QWizard_QWizard_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int addPage(QWizardPage page) {
        /*if (page is null)
            throw new NullPointerException("Argument 'page': null not expected."); */
        return qtd_QWizard_addPage_QWizardPage(qtdNativeId, page is null ? null : page.qtdNativeId);
    }

    public final void back() {
        qtd_QWizard_back(qtdNativeId);
    }

    public final QAbstractButton button(QWizard.WizardButton which) const {
        void *ret = qtd_QWizard_button_WizardButton_const(qtdNativeId, which);
        QAbstractButton __d_return_value = QAbstractButton.__getObject(ret);
        return __d_return_value;
    }

    public final string buttonText(QWizard.WizardButton which) const {
        string res;
        qtd_QWizard_buttonText_WizardButton_const(qtdNativeId, &res, which);
        return res;
    }

    public final int currentId() const {
        return qtd_QWizard_currentId_const(qtdNativeId);
    }

    public final QWizardPage currentPage() const {
        void *ret = qtd_QWizard_currentPage_const(qtdNativeId);
        QWizardPage __d_return_value = QWizardPage.__getObject(ret);
        return __d_return_value;
    }

    public final QVariant field(string name) const {
        void* ret = qtd_QWizard_field_string_const(qtdNativeId, name);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final bool hasVisitedPage(int id) const {
        return qtd_QWizard_hasVisitedPage_int_const(qtdNativeId, id);
    }

    public final void next() {
        qtd_QWizard_next(qtdNativeId);
    }

    public final int options() const {
        return qtd_QWizard_options_const(qtdNativeId);
    }

    public final QWizardPage page(int id) const {
        void *ret = qtd_QWizard_page_int_const(qtdNativeId, id);
        QWizardPage __d_return_value = QWizardPage.__getObject(ret);
        return __d_return_value;
    }

    public final QList!(int) pageIds() const {
        auto res = QList!(int).opCall();
        qtd_QWizard_pageIds_const(qtdNativeId, &res);
        return res;
    }

    public final QPixmap pixmap(QWizard.WizardPixmap which) const {
        void* ret = qtd_QWizard_pixmap_WizardPixmap_const(qtdNativeId, which);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final void removePage(int id) {
        qtd_QWizard_removePage_int(qtdNativeId, id);
    }

    public final void restart() {
        qtd_QWizard_restart(qtdNativeId);
    }

    public final void setButton(QWizard.WizardButton which, QAbstractButton button) {
        qtd_QWizard_setButton_WizardButton_QAbstractButton(qtdNativeId, which, button is null ? null : button.qtdNativeId);
    }

    public final void setButtonLayout(QList!(QWizard.WizardButton) layout) {
        qtd_QWizard_setButtonLayout_QList(qtdNativeId, &layout);
    }

    public final void setButtonText(QWizard.WizardButton which, string text) {
        qtd_QWizard_setButtonText_WizardButton_string(qtdNativeId, which, text);
    }

    public final void setField(string name, QVariant value) {
        qtd_QWizard_setField_string_QVariant(qtdNativeId, name, value is null ? null : value.qtdNativeId);
    }

    public final void setOption(QWizard.WizardOption option, bool on = true) {
        qtd_QWizard_setOption_WizardOption_bool(qtdNativeId, option, on);
    }

    public final void setOptions(int options) {
        qtd_QWizard_setOptions_WizardOptions(qtdNativeId, options);
    }

    public final void setPage(int id, QWizardPage page) {
        /*if (page is null)
            throw new NullPointerException("Argument 'page': null not expected."); */
        qtd_QWizard_setPage_int_QWizardPage(qtdNativeId, id, page is null ? null : page.qtdNativeId);
    }

    public final void setPixmap(QWizard.WizardPixmap which, const(QPixmap) pixmap) {
        qtd_QWizard_setPixmap_WizardPixmap_QPixmap(qtdNativeId, which, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
    }

    public final void setSideWidget(QWidget widget) {
        qtd_QWizard_setSideWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setStartId(int id) {
        qtd_QWizard_setStartId_int(qtdNativeId, id);
    }

    public final void setSubTitleFormat(Qt.TextFormat format) {
        qtd_QWizard_setSubTitleFormat_TextFormat(qtdNativeId, format);
    }

    public final void setTitleFormat(Qt.TextFormat format) {
        qtd_QWizard_setTitleFormat_TextFormat(qtdNativeId, format);
    }

    public final void setWizardStyle(QWizard.WizardStyle style) {
        qtd_QWizard_setWizardStyle_WizardStyle(qtdNativeId, style);
    }

    public final QWidget sideWidget() const {
        void *ret = qtd_QWizard_sideWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final int startId() const {
        return qtd_QWizard_startId_const(qtdNativeId);
    }

    public final Qt.TextFormat subTitleFormat() const {
        return cast(Qt.TextFormat) qtd_QWizard_subTitleFormat_const(qtdNativeId);
    }

    public final bool testOption(QWizard.WizardOption option) const {
        return qtd_QWizard_testOption_WizardOption_const(qtdNativeId, option);
    }

    public final Qt.TextFormat titleFormat() const {
        return cast(Qt.TextFormat) qtd_QWizard_titleFormat_const(qtdNativeId);
    }

    public final QList!(int) visitedPages() const {
        auto res = QList!(int).opCall();
        qtd_QWizard_visitedPages_const(qtdNativeId, &res);
        return res;
    }

    public final QWizard.WizardStyle wizardStyle() const {
        return cast(QWizard.WizardStyle) qtd_QWizard_wizardStyle_const(qtdNativeId);
    }

    protected void cleanupPage(int id) {
        qtd_QWizard_cleanupPage_int(qtdNativeId, id);
    }

    public void done(int result) {
        qtd_QWizard_done_int(qtdNativeId, result);
    }

    public bool event(QEvent event) {
        return qtd_QWizard_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void initializePage(int id) {
        qtd_QWizard_initializePage_int(qtdNativeId, id);
    }

    public int nextId() const {
        return qtd_QWizard_nextId_const(qtdNativeId);
    }

    protected void paintEvent(QPaintEvent event) {
        qtd_QWizard_paintEvent_QPaintEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent event) {
        qtd_QWizard_resizeEvent_QResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void setVisible(bool visible) {
        qtd_QWizard_setVisible_bool(qtdNativeId, visible);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QWizard_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public bool validateCurrentPage() {
        return qtd_QWizard_validateCurrentPage(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "back()", 
            "next()", 
            "restart()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QWizard_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QWizard);
    }

    static QWizard __getObject(void* nativeId) {
        return static_cast!(QWizard)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QWizard_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QWizard_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QWizard(nativeId, initFlags);
        QWizard.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("currentIdChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("customButtonClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("helpRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(int)("pageAdded"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(int)("pageRemoved"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("back"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("next"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("restart"), index));

    }

    public alias void __isQtType_QWizard;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QWizard_currentIdChanged_int(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QWizard_customButtonClicked_int(void* __this_nativeId,
 int which0);
private extern(C) void  qtd_QWizard_helpRequested(void* __this_nativeId);
private extern(C) void  qtd_QWizard_pageAdded_int(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QWizard_pageRemoved_int(void* __this_nativeId,
 int id0);

// C wrappers
private extern(C) void* qtd_QWizard_QWizard_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int flags1);
private extern(C) int  qtd_QWizard_addPage_QWizardPage(void* __this_nativeId,
 void* page0);
private extern(C) void  qtd_QWizard_back(void* __this_nativeId);
private extern(C) void*  qtd_QWizard_button_WizardButton_const(void* __this_nativeId,
 int which0);
private extern(C) void  qtd_QWizard_buttonText_WizardButton_const(void* __this_nativeId,
 void* __d_return_value,
 int which0);
private extern(C) int  qtd_QWizard_currentId_const(void* __this_nativeId);
private extern(C) void*  qtd_QWizard_currentPage_const(void* __this_nativeId);
private extern(C) void*  qtd_QWizard_field_string_const(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QWizard_hasVisitedPage_int_const(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QWizard_next(void* __this_nativeId);
private extern(C) int  qtd_QWizard_options_const(void* __this_nativeId);
private extern(C) void*  qtd_QWizard_page_int_const(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QWizard_pageIds_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QWizard_pixmap_WizardPixmap_const(void* __this_nativeId,
 int which0);
private extern(C) void  qtd_QWizard_removePage_int(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QWizard_restart(void* __this_nativeId);
private extern(C) void  qtd_QWizard_setButton_WizardButton_QAbstractButton(void* __this_nativeId,
 int which0,
 void* button1);
private extern(C) void  qtd_QWizard_setButtonLayout_QList(void* __this_nativeId,
 void* layout0);
private extern(C) void  qtd_QWizard_setButtonText_WizardButton_string(void* __this_nativeId,
 int which0,
 string text1);
private extern(C) void  qtd_QWizard_setField_string_QVariant(void* __this_nativeId,
 string name0,
 void* value1);
private extern(C) void  qtd_QWizard_setOption_WizardOption_bool(void* __this_nativeId,
 int option0,
 bool on1);
private extern(C) void  qtd_QWizard_setOptions_WizardOptions(void* __this_nativeId,
 int options0);
private extern(C) void  qtd_QWizard_setPage_int_QWizardPage(void* __this_nativeId,
 int id0,
 void* page1);
private extern(C) void  qtd_QWizard_setPixmap_WizardPixmap_QPixmap(void* __this_nativeId,
 int which0,
 void* pixmap1);
private extern(C) void  qtd_QWizard_setSideWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QWizard_setStartId_int(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QWizard_setSubTitleFormat_TextFormat(void* __this_nativeId,
 int format0);
private extern(C) void  qtd_QWizard_setTitleFormat_TextFormat(void* __this_nativeId,
 int format0);
private extern(C) void  qtd_QWizard_setWizardStyle_WizardStyle(void* __this_nativeId,
 int style0);
private extern(C) void*  qtd_QWizard_sideWidget_const(void* __this_nativeId);
private extern(C) int  qtd_QWizard_startId_const(void* __this_nativeId);
private extern(C) int  qtd_QWizard_subTitleFormat_const(void* __this_nativeId);
private extern(C) bool  qtd_QWizard_testOption_WizardOption_const(void* __this_nativeId,
 int option0);
private extern(C) int  qtd_QWizard_titleFormat_const(void* __this_nativeId);
private extern(C) void  qtd_QWizard_visitedPages_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QWizard_wizardStyle_const(void* __this_nativeId);
private extern(C) void  qtd_QWizard_cleanupPage_int(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QWizard_done_int(void* __this_nativeId,
 int result0);
private extern(C) bool  qtd_QWizard_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QWizard_initializePage_int(void* __this_nativeId,
 int id0);
private extern(C) int  qtd_QWizard_nextId_const(void* __this_nativeId);
private extern(C) void  qtd_QWizard_paintEvent_QPaintEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QWizard_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QWizard_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QWizard_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) bool  qtd_QWizard_validateCurrentPage(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, int id0) qtd_QWizard_cleanupPage_int_dispatch; }
extern(C) void qtd_export_QWizard_cleanupPage_int_dispatch(void *dId, int id0){
    auto d_object = cast(QWizard) dId;
    d_object.cleanupPage(id0);
}

extern(C){ extern void function(void *dId, int id0) qtd_QWizard_initializePage_int_dispatch; }
extern(C) void qtd_export_QWizard_initializePage_int_dispatch(void *dId, int id0){
    auto d_object = cast(QWizard) dId;
    d_object.initializePage(id0);
}

extern(C){ extern int function(void *dId) qtd_QWizard_nextId_const_dispatch; }
extern(C) int qtd_export_QWizard_nextId_const_dispatch(void *dId){
    auto d_object = cast(QWizard) dId;
    auto return_value = d_object.nextId();
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QWizard_validateCurrentPage_dispatch; }
extern(C) bool qtd_export_QWizard_validateCurrentPage_dispatch(void *dId){
    auto d_object = cast(QWizard) dId;
    auto return_value = d_object.validateCurrentPage();
    return return_value;
}

private extern (C) void qtd_QWizard_initCallBacks(void* virtuals);

extern(C) void static_init_QWizard() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QWizard_cleanupPage_int_dispatch;
    virt_arr[1] = &qtd_export_QWizard_initializePage_int_dispatch;
    virt_arr[2] = &qtd_export_QWizard_nextId_const_dispatch;
    virt_arr[3] = &qtd_export_QWizard_validateCurrentPage_dispatch;
    qtd_QWizard_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QWizard_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWizard) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QWizard_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QWizard) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QWizard_finished_handle(void* dId, void** args) {
        auto d_object = cast(QWizard) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QWizard_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QWizard) dId;
        //d_object.rejected_emit();
}*/
/*private extern(C) void qtd_QWizard_currentIdChanged_handle(void* dId, void** args) {
        auto d_object = cast(QWizard) dId;
        auto id0 = *(cast(int*)args[1]);
        //d_object.currentIdChanged_emit(id0);
}*/
/*private extern(C) void qtd_QWizard_customButtonClicked_handle(void* dId, void** args) {
        auto d_object = cast(QWizard) dId;
        auto which0 = *(cast(int*)args[1]);
        //d_object.customButtonClicked_emit(which0);
}*/
/*private extern(C) void qtd_QWizard_helpRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWizard) dId;
        //d_object.helpRequested_emit();
}*/
/*private extern(C) void qtd_QWizard_pageAdded_handle(void* dId, void** args) {
        auto d_object = cast(QWizard) dId;
        auto id0 = *(cast(int*)args[1]);
        //d_object.pageAdded_emit(id0);
}*/
/*private extern(C) void qtd_QWizard_pageRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QWizard) dId;
        auto id0 = *(cast(int*)args[1]);
        //d_object.pageRemoved_emit(id0);
}*/

extern(C) QMetaObjectNative* qtd_QWizard_staticMetaObject();

extern(C) void qtd_QWizard_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QWizard_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
