module qt.gui.QComboBox;

public import qt.gui.QComboBox_aux;
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
public import qt.gui.QAbstractItemDelegate;
public import qt.gui.QDropEvent;
public import qt.core.QAbstractItemModel;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.core.QPoint;
public import qt.core.QModelIndex;
public import qt.core.QChildEvent;
public import qt.gui.QLineEdit;
public import qt.gui.QValidator;
public import qt.gui.QIcon;
public import qt.gui.QKeyEvent;
public import qt.gui.QAbstractItemView;
public import qt.core.QObject;
public import qt.gui.QResizeEvent;
public import qt.gui.QPaintEngine;
public import qt.core.QEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QWheelEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QStyleOptionComboBox;
public import qt.gui.QMouseEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.core.QSize;
public import qt.gui.QCompleter;
public import qt.gui.QContextMenuEvent;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QWidget;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QDragLeaveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QComboBox : QWidget
{
    public enum InsertPolicy {
        NoInsert = 0,
        InsertAtTop = 1,
        InsertAtCurrent = 2,
        InsertAtBottom = 3,
        InsertAfterCurrent = 4,
        InsertBeforeCurrent = 5,
        InsertAlphabetically = 6
    }

    alias InsertPolicy.NoInsert NoInsert;
    alias InsertPolicy.InsertAtTop InsertAtTop;
    alias InsertPolicy.InsertAtCurrent InsertAtCurrent;
    alias InsertPolicy.InsertAtBottom InsertAtBottom;
    alias InsertPolicy.InsertAfterCurrent InsertAfterCurrent;
    alias InsertPolicy.InsertBeforeCurrent InsertBeforeCurrent;
    alias InsertPolicy.InsertAlphabetically InsertAlphabetically;

    public enum SizeAdjustPolicy {
        AdjustToContents = 0,
        AdjustToContentsOnFirstShow = 1,
        AdjustToMinimumContentsLength = 2,
        AdjustToMinimumContentsLengthWithIcon = 3
    }

    alias SizeAdjustPolicy.AdjustToContents AdjustToContents;
    alias SizeAdjustPolicy.AdjustToContentsOnFirstShow AdjustToContentsOnFirstShow;
    alias SizeAdjustPolicy.AdjustToMinimumContentsLength AdjustToMinimumContentsLength;
    alias SizeAdjustPolicy.AdjustToMinimumContentsLengthWithIcon AdjustToMinimumContentsLengthWithIcon;


Object __rcModel = null;

Object __rcCompleter = null;

Object __rcValidator = null;

    private static const string[] __signalSignatures = [
            "activated(QString)", 
            "activated(int)", 
            "currentIndexChanged(QString)", 
            "currentIndexChanged(int)", 
            "editTextChanged(QString)", 
            "highlighted(QString)", 
            "highlighted(int)"    ];

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

    protected final void activated(string arg__1) {
        qtd_QComboBox_activated_string(qtdNativeId, arg__1);
    }

    protected final void activated(int index) {
        qtd_QComboBox_activated_int(qtdNativeId, index);
    }

    protected final void currentIndexChanged(string arg__1) {
        qtd_QComboBox_currentIndexChanged_string(qtdNativeId, arg__1);
    }

    protected final void currentIndexChanged(int index) {
        qtd_QComboBox_currentIndexChanged_int(qtdNativeId, index);
    }

    protected final void editTextChanged(string arg__1) {
        qtd_QComboBox_editTextChanged_string(qtdNativeId, arg__1);
    }

    protected final void highlighted(string arg__1) {
        qtd_QComboBox_highlighted_string(qtdNativeId, arg__1);
    }

    protected final void highlighted(int index) {
        qtd_QComboBox_highlighted_int(qtdNativeId, index);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QComboBox_QComboBox_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addItem(const(QIcon) icon, string text, QVariant userData = null) {
        qtd_QComboBox_addItem_QIcon_string_QVariant(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text, userData is null ? null : userData.qtdNativeId);
    }

    public final void addItem(string text, QVariant userData = null) {
        qtd_QComboBox_addItem_string_QVariant(qtdNativeId, text, userData is null ? null : userData.qtdNativeId);
    }

    public final void addItems(QList!(string) texts) {
        qtd_QComboBox_addItems_QList(qtdNativeId, &texts);
    }

    public final void clear() {
        qtd_QComboBox_clear(qtdNativeId);
    }

    public final void clearEditText() {
        qtd_QComboBox_clearEditText(qtdNativeId);
    }

    public final QCompleter completer() const {
        void *ret = qtd_QComboBox_completer_const(qtdNativeId);
        QCompleter __d_return_value = QCompleter.__getObject(ret);
        return __d_return_value;
    }

    public final int count() const {
        return qtd_QComboBox_count_const(qtdNativeId);
    }

    public final int currentIndex() const {
        return qtd_QComboBox_currentIndex_const(qtdNativeId);
    }

    public final string currentText() const {
        string res;
        qtd_QComboBox_currentText_const(qtdNativeId, &res);
        return res;
    }

    public final bool duplicatesEnabled() const {
        return qtd_QComboBox_duplicatesEnabled_const(qtdNativeId);
    }

    public final int findData(QVariant data, int role = 32, int flags = 0) const {
        return qtd_QComboBox_findData_QVariant_int_MatchFlags_const(qtdNativeId, data is null ? null : data.qtdNativeId, role, flags);
    }

    public final int findText(string text, int flags = 0) const {
        return qtd_QComboBox_findText_string_MatchFlags_const(qtdNativeId, text, flags);
    }

    public final bool hasFrame() const {
        return qtd_QComboBox_hasFrame_const(qtdNativeId);
    }

    public final QSize iconSize() const {
        QSize res;
        qtd_QComboBox_iconSize_const(qtdNativeId, &res);
        return res;
    }

    protected final void initStyleOption(QStyleOptionComboBox option) const {
        qtd_QComboBox_initStyleOption_nativepointerQStyleOptionComboBox_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final void insertItem(int index, const(QIcon) icon, string text, QVariant userData = null) {
        qtd_QComboBox_insertItem_int_QIcon_string_QVariant(qtdNativeId, index, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text, userData is null ? null : userData.qtdNativeId);
    }

    public final void insertItem(int index, string text, QVariant userData = null) {
        qtd_QComboBox_insertItem_int_string_QVariant(qtdNativeId, index, text, userData is null ? null : userData.qtdNativeId);
    }

    public final void insertItems(int index, QList!(string) texts) {
        qtd_QComboBox_insertItems_int_QList(qtdNativeId, index, &texts);
    }

    public final QComboBox.InsertPolicy insertPolicy() const {
        return cast(QComboBox.InsertPolicy) qtd_QComboBox_insertPolicy_const(qtdNativeId);
    }

    public final void insertSeparator(int index) {
        qtd_QComboBox_insertSeparator_int(qtdNativeId, index);
    }

    public final bool isEditable() const {
        return qtd_QComboBox_isEditable_const(qtdNativeId);
    }

    public final QVariant itemData(int index, int role = 32) const {
        void* ret = qtd_QComboBox_itemData_int_int_const(qtdNativeId, index, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final QAbstractItemDelegate itemDelegate() const {
        void *ret = qtd_QComboBox_itemDelegate_const(qtdNativeId);
        QAbstractItemDelegate __d_return_value = QAbstractItemDelegate.__getObject(ret);
        return __d_return_value;
    }

    public final QIcon itemIcon(int index) const {
        void* ret = qtd_QComboBox_itemIcon_int_const(qtdNativeId, index);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final string itemText(int index) const {
        string res;
        qtd_QComboBox_itemText_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final QLineEdit lineEdit() const {
        void *ret = qtd_QComboBox_lineEdit_const(qtdNativeId);
        QLineEdit __d_return_value = QLineEdit.__getObject(ret);
        return __d_return_value;
    }

    public final int maxCount() const {
        return qtd_QComboBox_maxCount_const(qtdNativeId);
    }

    public final int maxVisibleItems() const {
        return qtd_QComboBox_maxVisibleItems_const(qtdNativeId);
    }

    public final int minimumContentsLength() const {
        return qtd_QComboBox_minimumContentsLength_const(qtdNativeId);
    }

    public final QAbstractItemModel model() const {
        void *ret = qtd_QComboBox_model_const(qtdNativeId);
        QAbstractItemModel __d_return_value = QAbstractItemModel.__getObject(ret);
        return __d_return_value;
    }

    public final int modelColumn() const {
        return qtd_QComboBox_modelColumn_const(qtdNativeId);
    }

    public final void removeItem(int index) {
        qtd_QComboBox_removeItem_int(qtdNativeId, index);
    }

    public final QModelIndex rootModelIndex() const {
        QModelIndex res;
        qtd_QComboBox_rootModelIndex_const(qtdNativeId, &res);
        return res;
    }

    public final void setCompleter(QCompleter c) {
        {
            __rcCompleter = cast(Object) c;
        }
        qtd_QComboBox_setCompleter_QCompleter(qtdNativeId, c is null ? null : c.qtdNativeId);
    }

    public final void setCurrentIndex(int index) {
        qtd_QComboBox_setCurrentIndex_int(qtdNativeId, index);
    }

    public final void setDuplicatesEnabled(bool enable) {
        qtd_QComboBox_setDuplicatesEnabled_bool(qtdNativeId, enable);
    }

    public final void setEditText(string text) {
        qtd_QComboBox_setEditText_string(qtdNativeId, text);
    }

    public final void setEditable(bool editable) {
        qtd_QComboBox_setEditable_bool(qtdNativeId, editable);
    }

    public final void setFrame(bool arg__1) {
        qtd_QComboBox_setFrame_bool(qtdNativeId, arg__1);
    }

    public final void setIconSize(const(QSize) size) {
        qtd_QComboBox_setIconSize_QSize(qtdNativeId, size);
    }

    public final void setInsertPolicy(QComboBox.InsertPolicy policy) {
        qtd_QComboBox_setInsertPolicy_InsertPolicy(qtdNativeId, policy);
    }

    public final void setItemData(int index, QVariant value, int role = 32) {
        qtd_QComboBox_setItemData_int_QVariant_int(qtdNativeId, index, value is null ? null : value.qtdNativeId, role);
    }

    public final void setItemDelegate(QAbstractItemDelegate delegate_) {
        if (delegate_ !is null) {
            delegate_.qtdSetOwnership(QtdObjectOwnership.native);
        }
        /*if (delegate_ is null)
            throw new NullPointerException("Argument 'delegate_': null not expected."); */
        qtd_QComboBox_setItemDelegate_QAbstractItemDelegate(qtdNativeId, delegate_ is null ? null : delegate_.qtdNativeId);
    }

    public final void setItemIcon(int index, const(QIcon) icon) {
        qtd_QComboBox_setItemIcon_int_QIcon(qtdNativeId, index, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setItemText(int index, string text) {
        qtd_QComboBox_setItemText_int_string(qtdNativeId, index, text);
    }

    public final void setLineEdit(QLineEdit edit) {
        /*if (edit is null)
            throw new NullPointerException("Argument 'edit': null not expected."); */
        qtd_QComboBox_setLineEdit_QLineEdit(qtdNativeId, edit is null ? null : edit.qtdNativeId);
    }

    public final void setMaxCount(int max) {
        qtd_QComboBox_setMaxCount_int(qtdNativeId, max);
    }

    public final void setMaxVisibleItems(int maxItems) {
        qtd_QComboBox_setMaxVisibleItems_int(qtdNativeId, maxItems);
    }

    public final void setMinimumContentsLength(int characters) {
        qtd_QComboBox_setMinimumContentsLength_int(qtdNativeId, characters);
    }

    public final void setModel(QAbstractItemModel model) {
        /*if (model is null)
            throw new NullPointerException("Argument 'model': null not expected."); */
        {
            __rcModel = cast(Object) model;
        }
        qtd_QComboBox_setModel_QAbstractItemModel(qtdNativeId, model is null ? null : model.qtdNativeId);
    }

    public final void setModelColumn(int visibleColumn) {
        qtd_QComboBox_setModelColumn_int(qtdNativeId, visibleColumn);
    }

    public final void setRootModelIndex(const(QModelIndex) index) {
        qtd_QComboBox_setRootModelIndex_QModelIndex(qtdNativeId, index);
    }

    public final void setSizeAdjustPolicy(QComboBox.SizeAdjustPolicy policy) {
        qtd_QComboBox_setSizeAdjustPolicy_SizeAdjustPolicy(qtdNativeId, policy);
    }

    public final void setValidator(QValidator v) {
        {
            __rcValidator = cast(Object) v;
        }
        qtd_QComboBox_setValidator_QValidator(qtdNativeId, v is null ? null : (cast(QValidator)v).qtdNativeId);
    }

    public final void setView(QAbstractItemView itemView) {
        /*if (itemView is null)
            throw new NullPointerException("Argument 'itemView': null not expected."); */
        qtd_QComboBox_setView_QAbstractItemView(qtdNativeId, itemView is null ? null : itemView.qtdNativeId);
    }

    public final QComboBox.SizeAdjustPolicy sizeAdjustPolicy() const {
        return cast(QComboBox.SizeAdjustPolicy) qtd_QComboBox_sizeAdjustPolicy_const(qtdNativeId);
    }

    public final QValidator validator() const {
        void *ret = qtd_QComboBox_validator_const(qtdNativeId);
        QValidator __d_return_value = QValidator.__getObject(ret);
        return __d_return_value;
    }

    public final QAbstractItemView view() const {
        void *ret = qtd_QComboBox_view_const(qtdNativeId);
        QAbstractItemView __d_return_value = QAbstractItemView.__getObject(ret);
        return __d_return_value;
    }

    protected void changeEvent(QEvent e) {
        qtd_QComboBox_changeEvent_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent e) {
        qtd_QComboBox_contextMenuEvent_QContextMenuEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QComboBox_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent e) {
        qtd_QComboBox_focusInEvent_QFocusEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void focusOutEvent(QFocusEvent e) {
        qtd_QComboBox_focusOutEvent_QFocusEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void hideEvent(QHideEvent e) {
        qtd_QComboBox_hideEvent_QHideEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public void hidePopup() {
        qtd_QComboBox_hidePopup(qtdNativeId);
    }

    protected void inputMethodEvent(QInputMethodEvent arg__1) {
        qtd_QComboBox_inputMethodEvent_QInputMethodEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery arg__1) const {
        void* ret = qtd_QComboBox_inputMethodQuery_InputMethodQuery_const(qtdNativeId, arg__1);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void keyPressEvent(QKeyEvent e) {
        qtd_QComboBox_keyPressEvent_QKeyEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void keyReleaseEvent(QKeyEvent e) {
        qtd_QComboBox_keyReleaseEvent_QKeyEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QComboBox_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mousePressEvent(QMouseEvent e) {
        qtd_QComboBox_mousePressEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent e) {
        qtd_QComboBox_mouseReleaseEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent e) {
        qtd_QComboBox_paintEvent_QPaintEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent e) {
        qtd_QComboBox_resizeEvent_QResizeEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void showEvent(QShowEvent e) {
        qtd_QComboBox_showEvent_QShowEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public void showPopup() {
        qtd_QComboBox_showPopup(qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QComboBox_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void wheelEvent(QWheelEvent e) {
        qtd_QComboBox_wheelEvent_QWheelEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "clear()", 
            "clearEditText()", 
            "setCurrentIndex(int)", 
            "setEditText(QString)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QComboBox_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QComboBox);
    }

    static QComboBox __getObject(void* nativeId) {
        return static_cast!(QComboBox)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QComboBox_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QComboBox_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QComboBox(nativeId, initFlags);
        QComboBox.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(string)("activated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("activated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(string)("currentIndexChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(int)("currentIndexChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(string)("editTextChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(string)("highlighted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(int)("highlighted"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("clearEditText"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(int)("setCurrentIndex"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(string)("setEditText"), index));

    }

    public alias void __isQtType_QComboBox;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

}

// C wrappers for signal emitters
private extern(C) void  qtd_QComboBox_activated_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QComboBox_activated_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QComboBox_currentIndexChanged_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QComboBox_currentIndexChanged_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QComboBox_editTextChanged_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QComboBox_highlighted_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QComboBox_highlighted_int(void* __this_nativeId,
 int index0);

// C wrappers
private extern(C) void* qtd_QComboBox_QComboBox_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QComboBox_addItem_QIcon_string_QVariant(void* __this_nativeId,
 void* icon0,
 string text1,
 void* userData2);
private extern(C) void  qtd_QComboBox_addItem_string_QVariant(void* __this_nativeId,
 string text0,
 void* userData1);
private extern(C) void  qtd_QComboBox_addItems_QList(void* __this_nativeId,
 void* texts0);
private extern(C) void  qtd_QComboBox_clear(void* __this_nativeId);
private extern(C) void  qtd_QComboBox_clearEditText(void* __this_nativeId);
private extern(C) void*  qtd_QComboBox_completer_const(void* __this_nativeId);
private extern(C) int  qtd_QComboBox_count_const(void* __this_nativeId);
private extern(C) int  qtd_QComboBox_currentIndex_const(void* __this_nativeId);
private extern(C) void  qtd_QComboBox_currentText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QComboBox_duplicatesEnabled_const(void* __this_nativeId);
private extern(C) int  qtd_QComboBox_findData_QVariant_int_MatchFlags_const(void* __this_nativeId,
 void* data0,
 int role1,
 int flags2);
private extern(C) int  qtd_QComboBox_findText_string_MatchFlags_const(void* __this_nativeId,
 string text0,
 int flags1);
private extern(C) bool  qtd_QComboBox_hasFrame_const(void* __this_nativeId);
private extern(C) void  qtd_QComboBox_iconSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QComboBox_initStyleOption_nativepointerQStyleOptionComboBox_const(void* __this_nativeId,
 void* option0);
private extern(C) void  qtd_QComboBox_insertItem_int_QIcon_string_QVariant(void* __this_nativeId,
 int index0,
 void* icon1,
 string text2,
 void* userData3);
private extern(C) void  qtd_QComboBox_insertItem_int_string_QVariant(void* __this_nativeId,
 int index0,
 string text1,
 void* userData2);
private extern(C) void  qtd_QComboBox_insertItems_int_QList(void* __this_nativeId,
 int index0,
 void* texts1);
private extern(C) int  qtd_QComboBox_insertPolicy_const(void* __this_nativeId);
private extern(C) void  qtd_QComboBox_insertSeparator_int(void* __this_nativeId,
 int index0);
private extern(C) bool  qtd_QComboBox_isEditable_const(void* __this_nativeId);
private extern(C) void*  qtd_QComboBox_itemData_int_int_const(void* __this_nativeId,
 int index0,
 int role1);
private extern(C) void*  qtd_QComboBox_itemDelegate_const(void* __this_nativeId);
private extern(C) void*  qtd_QComboBox_itemIcon_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QComboBox_itemText_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) void*  qtd_QComboBox_lineEdit_const(void* __this_nativeId);
private extern(C) int  qtd_QComboBox_maxCount_const(void* __this_nativeId);
private extern(C) int  qtd_QComboBox_maxVisibleItems_const(void* __this_nativeId);
private extern(C) int  qtd_QComboBox_minimumContentsLength_const(void* __this_nativeId);
private extern(C) void*  qtd_QComboBox_model_const(void* __this_nativeId);
private extern(C) int  qtd_QComboBox_modelColumn_const(void* __this_nativeId);
private extern(C) void  qtd_QComboBox_removeItem_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QComboBox_rootModelIndex_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) void  qtd_QComboBox_setCompleter_QCompleter(void* __this_nativeId,
 void* c0);
private extern(C) void  qtd_QComboBox_setCurrentIndex_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QComboBox_setDuplicatesEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QComboBox_setEditText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QComboBox_setEditable_bool(void* __this_nativeId,
 bool editable0);
private extern(C) void  qtd_QComboBox_setFrame_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QComboBox_setIconSize_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QComboBox_setInsertPolicy_InsertPolicy(void* __this_nativeId,
 int policy0);
private extern(C) void  qtd_QComboBox_setItemData_int_QVariant_int(void* __this_nativeId,
 int index0,
 void* value1,
 int role2);
private extern(C) void  qtd_QComboBox_setItemDelegate_QAbstractItemDelegate(void* __this_nativeId,
 void* delegate0);
private extern(C) void  qtd_QComboBox_setItemIcon_int_QIcon(void* __this_nativeId,
 int index0,
 void* icon1);
private extern(C) void  qtd_QComboBox_setItemText_int_string(void* __this_nativeId,
 int index0,
 string text1);
private extern(C) void  qtd_QComboBox_setLineEdit_QLineEdit(void* __this_nativeId,
 void* edit0);
private extern(C) void  qtd_QComboBox_setMaxCount_int(void* __this_nativeId,
 int max0);
private extern(C) void  qtd_QComboBox_setMaxVisibleItems_int(void* __this_nativeId,
 int maxItems0);
private extern(C) void  qtd_QComboBox_setMinimumContentsLength_int(void* __this_nativeId,
 int characters0);
private extern(C) void  qtd_QComboBox_setModel_QAbstractItemModel(void* __this_nativeId,
 void* model0);
private extern(C) void  qtd_QComboBox_setModelColumn_int(void* __this_nativeId,
 int visibleColumn0);
private extern(C) void  qtd_QComboBox_setRootModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QComboBox_setSizeAdjustPolicy_SizeAdjustPolicy(void* __this_nativeId,
 int policy0);
private extern(C) void  qtd_QComboBox_setValidator_QValidator(void* __this_nativeId,
 void* v0);
private extern(C) void  qtd_QComboBox_setView_QAbstractItemView(void* __this_nativeId,
 void* itemView0);
private extern(C) int  qtd_QComboBox_sizeAdjustPolicy_const(void* __this_nativeId);
private extern(C) void*  qtd_QComboBox_validator_const(void* __this_nativeId);
private extern(C) void*  qtd_QComboBox_view_const(void* __this_nativeId);
private extern(C) void  qtd_QComboBox_changeEvent_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QComboBox_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QComboBox_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QComboBox_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QComboBox_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QComboBox_hideEvent_QHideEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QComboBox_hidePopup(void* __this_nativeId);
private extern(C) void  qtd_QComboBox_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QComboBox_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QComboBox_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QComboBox_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QComboBox_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QComboBox_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QComboBox_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QComboBox_paintEvent_QPaintEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QComboBox_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QComboBox_showEvent_QShowEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QComboBox_showPopup(void* __this_nativeId);
private extern(C) void  qtd_QComboBox_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QComboBox_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QComboBox_hidePopup_dispatch; }
extern(C) void qtd_export_QComboBox_hidePopup_dispatch(void *dId){
    auto d_object = cast(QComboBox) dId;
    d_object.hidePopup();
}

extern(C){ extern void function(void *dId) qtd_QComboBox_showPopup_dispatch; }
extern(C) void qtd_export_QComboBox_showPopup_dispatch(void *dId){
    auto d_object = cast(QComboBox) dId;
    d_object.showPopup();
}

private extern (C) void qtd_QComboBox_initCallBacks(void* virtuals);

extern(C) void static_init_QComboBox() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QComboBox_hidePopup_dispatch;
    virt_arr[1] = &qtd_export_QComboBox_showPopup_dispatch;
    qtd_QComboBox_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QComboBox_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QComboBox) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QComboBox_activated_handle(void* dId, void** args) {
        auto d_object = cast(QComboBox) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.activated_emit(arg__1);
}*/
/*private extern(C) void qtd_QComboBox_activated_handle(void* dId, void** args) {
        auto d_object = cast(QComboBox) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QComboBox_currentIndexChanged_handle(void* dId, void** args) {
        auto d_object = cast(QComboBox) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.currentIndexChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QComboBox_currentIndexChanged_handle(void* dId, void** args) {
        auto d_object = cast(QComboBox) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.currentIndexChanged_emit(index0);
}*/
/*private extern(C) void qtd_QComboBox_editTextChanged_handle(void* dId, void** args) {
        auto d_object = cast(QComboBox) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.editTextChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QComboBox_highlighted_handle(void* dId, void** args) {
        auto d_object = cast(QComboBox) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.highlighted_emit(arg__1);
}*/
/*private extern(C) void qtd_QComboBox_highlighted_handle(void* dId, void** args) {
        auto d_object = cast(QComboBox) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.highlighted_emit(index0);
}*/

extern(C) QMetaObjectNative* qtd_QComboBox_staticMetaObject();

extern(C) void qtd_QComboBox_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QComboBox_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
