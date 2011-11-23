module qt.gui.QWizardPage;

public import qt.gui.QWizardPage_aux;
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
public import qt.gui.QWizard;
public import qt.gui.QPaintDevice;
public import qt.gui.QWizard;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QActionEvent;
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
public import qt.core.QVariant;
public import qt.core.QObject;
public import qt.gui.QPaintEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QPixmap;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QWizardPage : QWidget
{

    private static const string[] __signalSignatures = [
            "completeChanged()"    ];

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

    protected final void completeChanged() {
        qtd_QWizardPage_completeChanged(qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QWizardPage_QWizardPage_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string buttonText(QWizard.WizardButton which) const {
        string res;
        qtd_QWizardPage_buttonText_WizardButton_const(qtdNativeId, &res, which);
        return res;
    }

    protected final QVariant field(string name) const {
        void* ret = qtd_QWizardPage_field_string_const(qtdNativeId, name);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final bool isCommitPage() const {
        return qtd_QWizardPage_isCommitPage_const(qtdNativeId);
    }

    public final bool isFinalPage() const {
        return qtd_QWizardPage_isFinalPage_const(qtdNativeId);
    }

    public final QPixmap pixmap(QWizard.WizardPixmap which) const {
        void* ret = qtd_QWizardPage_pixmap_WizardPixmap_const(qtdNativeId, which);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    private final void registerField(string name, QWidget widget, const(char*) property, const(char*) changedSignal) {
        qtd_QWizardPage_registerField_string_QWidget_nativepointerchar_nativepointerchar(qtdNativeId, name, widget is null ? null : widget.qtdNativeId, property, changedSignal);
    }

    public final void setButtonText(QWizard.WizardButton which, string text) {
        qtd_QWizardPage_setButtonText_WizardButton_string(qtdNativeId, which, text);
    }

    public final void setCommitPage(bool commitPage) {
        qtd_QWizardPage_setCommitPage_bool(qtdNativeId, commitPage);
    }

    protected final void setField(string name, QVariant value) {
        qtd_QWizardPage_setField_string_QVariant(qtdNativeId, name, value is null ? null : value.qtdNativeId);
    }

    public final void setFinalPage(bool finalPage) {
        qtd_QWizardPage_setFinalPage_bool(qtdNativeId, finalPage);
    }

    public final void setPixmap(QWizard.WizardPixmap which, const(QPixmap) pixmap) {
        qtd_QWizardPage_setPixmap_WizardPixmap_QPixmap(qtdNativeId, which, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
    }

    public final void setSubTitle(string subTitle) {
        qtd_QWizardPage_setSubTitle_string(qtdNativeId, subTitle);
    }

    public final void setTitle(string title) {
        qtd_QWizardPage_setTitle_string(qtdNativeId, title);
    }

    public final string subTitle() const {
        string res;
        qtd_QWizardPage_subTitle_const(qtdNativeId, &res);
        return res;
    }

    public final string title() const {
        string res;
        qtd_QWizardPage_title_const(qtdNativeId, &res);
        return res;
    }

    protected final QWizard wizard() const {
        void *ret = qtd_QWizardPage_wizard_const(qtdNativeId);
        QWizard __d_return_value = QWizard.__getObject(ret);
        return __d_return_value;
    }

    public void cleanupPage() {
        qtd_QWizardPage_cleanupPage(qtdNativeId);
    }

    public void initializePage() {
        qtd_QWizardPage_initializePage(qtdNativeId);
    }

    public bool isComplete() const {
        return qtd_QWizardPage_isComplete_const(qtdNativeId);
    }

    public int nextId() const {
        return qtd_QWizardPage_nextId_const(qtdNativeId);
    }

    public bool validatePage() {
        return qtd_QWizardPage_validatePage(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QWizardPage_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QWizardPage);
    }

    static QWizardPage __getObject(void* nativeId) {
        return static_cast!(QWizardPage)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QWizardPage_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QWizardPage_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QWizardPage(nativeId, initFlags);
        QWizardPage.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("completeChanged"), index));

    }

    public alias void __isQtType_QWizardPage;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    protected final void registerField(string name, QWidget widget, string property = null) {
        registerField(name, widget, property is null ? null : toStringz(property), null);
    }

    /**
     * Creates a field called <code>name</code> associated with the given
     * property of the given widget. From then on, that property becomes
     * accessible using <code>field()</code> and <code>setField()</code>.
     * Fields are global to the entire wizard and make it easy for any single
     * page to access information stored by another page, without having to put
     * all the logic in <code>QWizard</code> or having the pages know
     * explicitly about each other. If name ends with an asterisk (*), the field
     * is a mandatory field. When a page has mandatory fields, the Next and/or
     * Finish buttons are enabled only when all mandatory fields are filled.
     * This requires a <code>changedSignal</code> to be specified, to tell
     * QWizard to recheck the value stored by the mandatory field.
     *
     * QWizard knows the most common Qt widgets. For these (or their
     * subclasses), you don't need to specify a <code>property</code> or a
     * <code>changedSignal</code>. The table below lists these widgets:
     *
     * <code>QAbstractButton</code> (for which the relevant property is the
     * <code>checked</code> property), <code>QAbstractSlider</code> (the
     * <code>value</code> property), <code>QComboBox</code> (<code>currentIndex</code>
     * property), <code>QDateTimeEdit</code>(<code>dateTime</code>
     * property), <code>QLineEdit</code>(<code>text</code> property),
     * <code>QListWidget</code>(<code>currentRow</code> property), or
     * <code>QSpinBox</code>(<code>value</code> property).
     *
     * @param name
     *            The name which will be used to access the field. Names ending
     *            with an asterisk signify mandatory fields.
     * @param widget
     *            The widget whose property will be accessed using this field.
     * @param property
     *            The name of the property associated with the field.
     * @param changedSignal
     *            The name of a signal which is emitted when the associated
     *            property's value changes.
     *
     * @see qt.gui.QWizardPage#field
     * @see qt.gui.QWizardPage#setField
     */
    /*    protected final void registerField(String name, QWidget widget, String property, String changedSignal) {
    String signalSignature = qt.internal.MetaObjectTools.cppSignalSignature(widget, changedSignal);
    if (signalSignature.length() == 0)
    throw new QNoSuchSignalException("Signal '" + changedSignal
    + "' does not exist or has argument types that cannot be converted to Qt Jambi or java.lang types.");
    registerField(name, widget, qt.QNativePointer.createCharPointer(property), qt.QNativePointer
    .createCharPointer(qt.internal.QtJambiInternal.SignalPrefix + signalSignature));
    }
     */

}

// C wrappers for signal emitters
private extern(C) void  qtd_QWizardPage_completeChanged(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QWizardPage_QWizardPage_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QWizardPage_buttonText_WizardButton_const(void* __this_nativeId,
 void* __d_return_value,
 int which0);
private extern(C) void*  qtd_QWizardPage_field_string_const(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QWizardPage_isCommitPage_const(void* __this_nativeId);
private extern(C) bool  qtd_QWizardPage_isFinalPage_const(void* __this_nativeId);
private extern(C) void*  qtd_QWizardPage_pixmap_WizardPixmap_const(void* __this_nativeId,
 int which0);
private extern(C) void  qtd_QWizardPage_registerField_string_QWidget_nativepointerchar_nativepointerchar(void* __this_nativeId,
 string name0,
 void* widget1,
 const (char*) property2,
 const (char*) changedSignal3);
private extern(C) void  qtd_QWizardPage_setButtonText_WizardButton_string(void* __this_nativeId,
 int which0,
 string text1);
private extern(C) void  qtd_QWizardPage_setCommitPage_bool(void* __this_nativeId,
 bool commitPage0);
private extern(C) void  qtd_QWizardPage_setField_string_QVariant(void* __this_nativeId,
 string name0,
 void* value1);
private extern(C) void  qtd_QWizardPage_setFinalPage_bool(void* __this_nativeId,
 bool finalPage0);
private extern(C) void  qtd_QWizardPage_setPixmap_WizardPixmap_QPixmap(void* __this_nativeId,
 int which0,
 void* pixmap1);
private extern(C) void  qtd_QWizardPage_setSubTitle_string(void* __this_nativeId,
 string subTitle0);
private extern(C) void  qtd_QWizardPage_setTitle_string(void* __this_nativeId,
 string title0);
private extern(C) void  qtd_QWizardPage_subTitle_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWizardPage_title_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QWizardPage_wizard_const(void* __this_nativeId);
private extern(C) void  qtd_QWizardPage_cleanupPage(void* __this_nativeId);
private extern(C) void  qtd_QWizardPage_initializePage(void* __this_nativeId);
private extern(C) bool  qtd_QWizardPage_isComplete_const(void* __this_nativeId);
private extern(C) int  qtd_QWizardPage_nextId_const(void* __this_nativeId);
private extern(C) bool  qtd_QWizardPage_validatePage(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QWizardPage_cleanupPage_dispatch; }
extern(C) void qtd_export_QWizardPage_cleanupPage_dispatch(void *dId){
    auto d_object = cast(QWizardPage) dId;
    d_object.cleanupPage();
}

extern(C){ extern void function(void *dId) qtd_QWizardPage_initializePage_dispatch; }
extern(C) void qtd_export_QWizardPage_initializePage_dispatch(void *dId){
    auto d_object = cast(QWizardPage) dId;
    d_object.initializePage();
}

extern(C){ extern bool function(void *dId) qtd_QWizardPage_isComplete_const_dispatch; }
extern(C) bool qtd_export_QWizardPage_isComplete_const_dispatch(void *dId){
    auto d_object = cast(QWizardPage) dId;
    auto return_value = d_object.isComplete();
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QWizardPage_nextId_const_dispatch; }
extern(C) int qtd_export_QWizardPage_nextId_const_dispatch(void *dId){
    auto d_object = cast(QWizardPage) dId;
    auto return_value = d_object.nextId();
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QWizardPage_validatePage_dispatch; }
extern(C) bool qtd_export_QWizardPage_validatePage_dispatch(void *dId){
    auto d_object = cast(QWizardPage) dId;
    auto return_value = d_object.validatePage();
    return return_value;
}

private extern (C) void qtd_QWizardPage_initCallBacks(void* virtuals);

extern(C) void static_init_QWizardPage() {
    void*[5] virt_arr;
    virt_arr[0] = &qtd_export_QWizardPage_cleanupPage_dispatch;
    virt_arr[1] = &qtd_export_QWizardPage_initializePage_dispatch;
    virt_arr[2] = &qtd_export_QWizardPage_isComplete_const_dispatch;
    virt_arr[3] = &qtd_export_QWizardPage_nextId_const_dispatch;
    virt_arr[4] = &qtd_export_QWizardPage_validatePage_dispatch;
    qtd_QWizardPage_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QWizardPage_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWizardPage) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QWizardPage_completeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QWizardPage) dId;
        //d_object.completeChanged_emit();
}*/

extern(C) QMetaObjectNative* qtd_QWizardPage_staticMetaObject();

extern(C) void qtd_QWizardPage_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QWizardPage_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
