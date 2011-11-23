module qt.gui.QFormLayout;

public import qt.gui.QFormLayout_aux;
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
public import qt.gui.QLayoutItem;
public import qt.core.QObject;
public import qt.gui.QLayout;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QRect;
public import qt.gui.QSpacerItem;
public import qt.gui.QWidget;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFormLayout : QLayout
{
    public enum FieldGrowthPolicy {
        FieldsStayAtSizeHint = 0,
        ExpandingFieldsGrow = 1,
        AllNonFixedFieldsGrow = 2
    }

    alias FieldGrowthPolicy.FieldsStayAtSizeHint FieldsStayAtSizeHint;
    alias FieldGrowthPolicy.ExpandingFieldsGrow ExpandingFieldsGrow;
    alias FieldGrowthPolicy.AllNonFixedFieldsGrow AllNonFixedFieldsGrow;

    public enum RowWrapPolicy {
        DontWrapRows = 0,
        WrapLongRows = 1,
        WrapAllRows = 2
    }

    alias RowWrapPolicy.DontWrapRows DontWrapRows;
    alias RowWrapPolicy.WrapLongRows WrapLongRows;
    alias RowWrapPolicy.WrapAllRows WrapAllRows;

    public enum ItemRole {
        LabelRole = 0,
        FieldRole = 1,
        SpanningRole = 2
    }

    alias ItemRole.LabelRole LabelRole;
    alias ItemRole.FieldRole FieldRole;
    alias ItemRole.SpanningRole SpanningRole;


    private static const string[] __signalSignatures = [    ];

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
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QFormLayout_QFormLayout_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addRow(QLayout layout) {
        qtd_QFormLayout_addRow_QLayout(qtdNativeId, layout is null ? null : layout.qtdNativeId);
    }

    public final void addRow(QWidget label, QLayout field) {
        qtd_QFormLayout_addRow_QWidget_QLayout(qtdNativeId, label is null ? null : label.qtdNativeId, field is null ? null : field.qtdNativeId);
    }

    public final void addRow(QWidget label, QWidget field) {
        qtd_QFormLayout_addRow_QWidget_QWidget(qtdNativeId, label is null ? null : label.qtdNativeId, field is null ? null : field.qtdNativeId);
    }

    public final void addRow(QWidget widget) {
        qtd_QFormLayout_addRow_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void addRow(string labelText, QLayout field) {
        qtd_QFormLayout_addRow_string_QLayout(qtdNativeId, labelText, field is null ? null : field.qtdNativeId);
    }

    public final void addRow(string labelText, QWidget field) {
        qtd_QFormLayout_addRow_string_QWidget(qtdNativeId, labelText, field is null ? null : field.qtdNativeId);
    }

    public final QFormLayout.FieldGrowthPolicy fieldGrowthPolicy() const {
        return cast(QFormLayout.FieldGrowthPolicy) qtd_QFormLayout_fieldGrowthPolicy_const(qtdNativeId);
    }

    public final int formAlignment() const {
        return qtd_QFormLayout_formAlignment_const(qtdNativeId);
    }

    private final void getItemPosition(int index, int* rowPtr, int* rolePtr) const {
        qtd_QFormLayout_getItemPosition_int_nativepointerint_nativepointerItemRole_const(qtdNativeId, index, rowPtr, rolePtr);
    }

    private final void getLayoutPosition(QLayout layout, int* rowPtr, int* rolePtr) const {
        qtd_QFormLayout_getLayoutPosition_QLayout_nativepointerint_nativepointerItemRole_const(qtdNativeId, layout is null ? null : layout.qtdNativeId, rowPtr, rolePtr);
    }

    private final void getWidgetPosition(QWidget widget, int* rowPtr, int* rolePtr) const {
        qtd_QFormLayout_getWidgetPosition_QWidget_nativepointerint_nativepointerItemRole_const(qtdNativeId, widget is null ? null : widget.qtdNativeId, rowPtr, rolePtr);
    }

    public final int horizontalSpacing() const {
        return qtd_QFormLayout_horizontalSpacing_const(qtdNativeId);
    }

    public final void insertRow(int row, QLayout layout) {
        qtd_QFormLayout_insertRow_int_QLayout(qtdNativeId, row, layout is null ? null : layout.qtdNativeId);
    }

    public final void insertRow(int row, QWidget label, QLayout field) {
        qtd_QFormLayout_insertRow_int_QWidget_QLayout(qtdNativeId, row, label is null ? null : label.qtdNativeId, field is null ? null : field.qtdNativeId);
    }

    public final void insertRow(int row, QWidget label, QWidget field) {
        qtd_QFormLayout_insertRow_int_QWidget_QWidget(qtdNativeId, row, label is null ? null : label.qtdNativeId, field is null ? null : field.qtdNativeId);
    }

    public final void insertRow(int row, QWidget widget) {
        qtd_QFormLayout_insertRow_int_QWidget(qtdNativeId, row, widget is null ? null : widget.qtdNativeId);
    }

    public final void insertRow(int row, string labelText, QLayout field) {
        qtd_QFormLayout_insertRow_int_string_QLayout(qtdNativeId, row, labelText, field is null ? null : field.qtdNativeId);
    }

    public final void insertRow(int row, string labelText, QWidget field) {
        qtd_QFormLayout_insertRow_int_string_QWidget(qtdNativeId, row, labelText, field is null ? null : field.qtdNativeId);
    }

    public final IQLayoutItem itemAt(int row, QFormLayout.ItemRole role) const {
        void* ret = qtd_QFormLayout_itemAt_int_ItemRole_const(qtdNativeId, row, role);
        IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public final int labelAlignment() const {
        return qtd_QFormLayout_labelAlignment_const(qtdNativeId);
    }

    public final QWidget labelForField(QLayout field) const {
        void *ret = qtd_QFormLayout_labelForField_QLayout_const(qtdNativeId, field is null ? null : field.qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QWidget labelForField(QWidget field) const {
        void *ret = qtd_QFormLayout_labelForField_QWidget_const(qtdNativeId, field is null ? null : field.qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final int rowCount() const {
        return qtd_QFormLayout_rowCount_const(qtdNativeId);
    }

    public final QFormLayout.RowWrapPolicy rowWrapPolicy() const {
        return cast(QFormLayout.RowWrapPolicy) qtd_QFormLayout_rowWrapPolicy_const(qtdNativeId);
    }

    public final void setFieldGrowthPolicy(QFormLayout.FieldGrowthPolicy policy) {
        qtd_QFormLayout_setFieldGrowthPolicy_FieldGrowthPolicy(qtdNativeId, policy);
    }

    public final void setFormAlignment(int alignment) {
        qtd_QFormLayout_setFormAlignment_Alignment(qtdNativeId, alignment);
    }

    public final void setHorizontalSpacing(int spacing) {
        qtd_QFormLayout_setHorizontalSpacing_int(qtdNativeId, spacing);
    }

    private final void setItem_private(int row, QFormLayout.ItemRole role, IQLayoutItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QFormLayout_setItem_private_int_ItemRole_QLayoutItem(qtdNativeId, row, role, item is null ? null : item.__ptr_IQLayoutItem);
    }

    public final void setLabelAlignment(int alignment) {
        qtd_QFormLayout_setLabelAlignment_Alignment(qtdNativeId, alignment);
    }

    public final void setLayout(int row, QFormLayout.ItemRole role, QLayout layout) {
        qtd_QFormLayout_setLayout_int_ItemRole_QLayout(qtdNativeId, row, role, layout is null ? null : layout.qtdNativeId);
    }

    public final void setRowWrapPolicy(QFormLayout.RowWrapPolicy policy) {
        qtd_QFormLayout_setRowWrapPolicy_RowWrapPolicy(qtdNativeId, policy);
    }

    public final void setSpacing(int arg__1) {
        qtd_QFormLayout_setSpacing_int(qtdNativeId, arg__1);
    }

    public final void setVerticalSpacing(int spacing) {
        qtd_QFormLayout_setVerticalSpacing_int(qtdNativeId, spacing);
    }

    public final void setWidget(int row, QFormLayout.ItemRole role, QWidget widget) {
        qtd_QFormLayout_setWidget_int_ItemRole_QWidget(qtdNativeId, row, role, widget is null ? null : widget.qtdNativeId);
    }

    public final int spacing() const {
        return qtd_QFormLayout_spacing_const(qtdNativeId);
    }

    public final int verticalSpacing() const {
        return qtd_QFormLayout_verticalSpacing_const(qtdNativeId);
    }

    public void addItem(IQLayoutItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QFormLayout_addItem_QLayoutItem(qtdNativeId, item is null ? null : item.__ptr_IQLayoutItem);
    }

    public int count() const {
        return qtd_QFormLayout_count_const(qtdNativeId);
    }

    public int expandingDirections() const {
        return qtd_QFormLayout_expandingDirections_const(qtdNativeId);
    }

    public bool hasHeightForWidth() const {
        return qtd_QFormLayout_hasHeightForWidth_const(qtdNativeId);
    }

    public int heightForWidth(int width) const {
        return qtd_QFormLayout_heightForWidth_int_const(qtdNativeId, width);
    }

    public void invalidate() {
        qtd_QFormLayout_invalidate(qtdNativeId);
    }

    public IQLayoutItem itemAt(int index) const {
        void* ret = qtd_QFormLayout_itemAt_int_const(qtdNativeId, index);
        IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public QSize minimumSize() const {
        QSize res;
        qtd_QFormLayout_minimumSize_const(qtdNativeId, &res);
        return res;
    }

    public void setGeometry(const(QRect) rect) {
        qtd_QFormLayout_setGeometry_QRect(qtdNativeId, rect);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QFormLayout_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public IQLayoutItem takeAt(int index) {
        void* ret = qtd_QFormLayout_takeAt_int(qtdNativeId, index);
        IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QFormLayout_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QFormLayout);
    }

    static QFormLayout __getObject(void* nativeId) {
        return static_cast!(QFormLayout)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QFormLayout_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QFormLayout_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QFormLayout(nativeId, initFlags);
        QFormLayout.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QFormLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /**
     * Retrieves the row and role (column) of the item at the specified index.
     * If index is out of bounds, -1 is returned in place of the row.
     *
     * @param index The index of the item for which to retrieve the position.
     * @return A pair of an int (row of item) and an ItemRole (role of the item.)
     **/
    /*    @QtBlockedSlot
    public final qt.QPair<Integer, ItemRole> getItemPosition(int index) {
    qt.QNativePointer row = new qt.QNativePointer(qt.QNativePointer.Type.Int);
    qt.QNativePointer role = new qt.QNativePointer(qt.QNativePointer.Type.Int);

    getItemPosition(index, row, role);

    return new qt.QPair<Integer, ItemRole>(row.intValue(), ItemRole.resolve(role.intValue()));
    }
     */
    /**
     * Retrieves the row and role (column) of the specified child layout.
     * If the layout is not in the form layout, -1 is returned in place of the row.
     *
     * @param layout The layout for which to retrieve the position.
     * @return A pair of an int (row of item) and an ItemRole (role of the item.)
     */
    /*    @QtBlockedSlot
    public final qt.QPair<Integer, ItemRole> getLayoutPosition(QLayout layout) {
    qt.QNativePointer row = new qt.QNativePointer(qt.QNativePointer.Type.Int);
    qt.QNativePointer role = new qt.QNativePointer(qt.QNativePointer.Type.Int);

    getLayoutPosition(layout, row, role);

    return new qt.QPair<Integer, ItemRole>(row.intValue(), ItemRole.resolve(role.intValue()));
    }
     */
    /**
     * Retrieves the row and role (column) of the specified widget in the layout.
     * If the widget is not in the form layout, -1 is returned in place of the row.
     *
     * @param widget The widget for which to retrieve the position.
     * @return A pair of an int (row of item) and an ItemRole (role of the item.)
     */
    /*    @QtBlockedSlot
    public final qt.QPair<Integer, ItemRole> getWidgetPosition(QWidget widget) {
    qt.QNativePointer row = new qt.QNativePointer(qt.QNativePointer.Type.Int);
    qt.QNativePointer role = new qt.QNativePointer(qt.QNativePointer.Type.Int);

    getWidgetPosition(widget, row, role);

    return new qt.QPair<Integer, ItemRole>(row.intValue(), ItemRole.resolve(role.intValue()));
    }
     */
    /**
     * Sets the item in the given row for the given role to item, extending the layout with empty rows if necessary.
     * If the cell is already occupied, the item is not inserted and a IllegalArgumentException is thrown.
     */
    /*    @QtBlockedSlot
    public final void setItem(int row, ItemRole role, QLayoutItem item) {
    if (itemAt(row, role) == null)
    setItem_private(row, role, item);
    else
    throw new IllegalArgumentException("Cell in form layout is already occupied");
    }
     */

}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFormLayout_QFormLayout_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QFormLayout_addRow_QLayout(void* __this_nativeId,
 void* layout0);
private extern(C) void  qtd_QFormLayout_addRow_QWidget_QLayout(void* __this_nativeId,
 void* label0,
 void* field1);
private extern(C) void  qtd_QFormLayout_addRow_QWidget_QWidget(void* __this_nativeId,
 void* label0,
 void* field1);
private extern(C) void  qtd_QFormLayout_addRow_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QFormLayout_addRow_string_QLayout(void* __this_nativeId,
 string labelText0,
 void* field1);
private extern(C) void  qtd_QFormLayout_addRow_string_QWidget(void* __this_nativeId,
 string labelText0,
 void* field1);
private extern(C) int  qtd_QFormLayout_fieldGrowthPolicy_const(void* __this_nativeId);
private extern(C) int  qtd_QFormLayout_formAlignment_const(void* __this_nativeId);
private extern(C) void  qtd_QFormLayout_getItemPosition_int_nativepointerint_nativepointerItemRole_const(void* __this_nativeId,
 int index0,
 int* rowPtr1,
 int* rolePtr2);
private extern(C) void  qtd_QFormLayout_getLayoutPosition_QLayout_nativepointerint_nativepointerItemRole_const(void* __this_nativeId,
 void* layout0,
 int* rowPtr1,
 int* rolePtr2);
private extern(C) void  qtd_QFormLayout_getWidgetPosition_QWidget_nativepointerint_nativepointerItemRole_const(void* __this_nativeId,
 void* widget0,
 int* rowPtr1,
 int* rolePtr2);
private extern(C) int  qtd_QFormLayout_horizontalSpacing_const(void* __this_nativeId);
private extern(C) void  qtd_QFormLayout_insertRow_int_QLayout(void* __this_nativeId,
 int row0,
 void* layout1);
private extern(C) void  qtd_QFormLayout_insertRow_int_QWidget_QLayout(void* __this_nativeId,
 int row0,
 void* label1,
 void* field2);
private extern(C) void  qtd_QFormLayout_insertRow_int_QWidget_QWidget(void* __this_nativeId,
 int row0,
 void* label1,
 void* field2);
private extern(C) void  qtd_QFormLayout_insertRow_int_QWidget(void* __this_nativeId,
 int row0,
 void* widget1);
private extern(C) void  qtd_QFormLayout_insertRow_int_string_QLayout(void* __this_nativeId,
 int row0,
 string labelText1,
 void* field2);
private extern(C) void  qtd_QFormLayout_insertRow_int_string_QWidget(void* __this_nativeId,
 int row0,
 string labelText1,
 void* field2);
private extern(C) void*  qtd_QFormLayout_itemAt_int_ItemRole_const(void* __this_nativeId,
 int row0,
 int role1);
private extern(C) int  qtd_QFormLayout_labelAlignment_const(void* __this_nativeId);
private extern(C) void*  qtd_QFormLayout_labelForField_QLayout_const(void* __this_nativeId,
 void* field0);
private extern(C) void*  qtd_QFormLayout_labelForField_QWidget_const(void* __this_nativeId,
 void* field0);
private extern(C) int  qtd_QFormLayout_rowCount_const(void* __this_nativeId);
private extern(C) int  qtd_QFormLayout_rowWrapPolicy_const(void* __this_nativeId);
private extern(C) void  qtd_QFormLayout_setFieldGrowthPolicy_FieldGrowthPolicy(void* __this_nativeId,
 int policy0);
private extern(C) void  qtd_QFormLayout_setFormAlignment_Alignment(void* __this_nativeId,
 int alignment0);
private extern(C) void  qtd_QFormLayout_setHorizontalSpacing_int(void* __this_nativeId,
 int spacing0);
private extern(C) void  qtd_QFormLayout_setItem_private_int_ItemRole_QLayoutItem(void* __this_nativeId,
 int row0,
 int role1,
 void* item2);
private extern(C) void  qtd_QFormLayout_setLabelAlignment_Alignment(void* __this_nativeId,
 int alignment0);
private extern(C) void  qtd_QFormLayout_setLayout_int_ItemRole_QLayout(void* __this_nativeId,
 int row0,
 int role1,
 void* layout2);
private extern(C) void  qtd_QFormLayout_setRowWrapPolicy_RowWrapPolicy(void* __this_nativeId,
 int policy0);
private extern(C) void  qtd_QFormLayout_setSpacing_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFormLayout_setVerticalSpacing_int(void* __this_nativeId,
 int spacing0);
private extern(C) void  qtd_QFormLayout_setWidget_int_ItemRole_QWidget(void* __this_nativeId,
 int row0,
 int role1,
 void* widget2);
private extern(C) int  qtd_QFormLayout_spacing_const(void* __this_nativeId);
private extern(C) int  qtd_QFormLayout_verticalSpacing_const(void* __this_nativeId);
private extern(C) void  qtd_QFormLayout_addItem_QLayoutItem(void* __this_nativeId,
 void* item0);
private extern(C) int  qtd_QFormLayout_count_const(void* __this_nativeId);
private extern(C) int  qtd_QFormLayout_expandingDirections_const(void* __this_nativeId);
private extern(C) bool  qtd_QFormLayout_hasHeightForWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QFormLayout_heightForWidth_int_const(void* __this_nativeId,
 int width0);
private extern(C) void  qtd_QFormLayout_invalidate(void* __this_nativeId);
private extern(C) void*  qtd_QFormLayout_itemAt_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QFormLayout_minimumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QFormLayout_setGeometry_QRect(void* __this_nativeId,
 QRect rect0);
private extern(C) void  qtd_QFormLayout_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QFormLayout_takeAt_int(void* __this_nativeId,
 int index0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFormLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QFormLayout() {
    qtd_QFormLayout_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QFormLayout_staticMetaObject();

extern(C) void qtd_QFormLayout_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QFormLayout_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
