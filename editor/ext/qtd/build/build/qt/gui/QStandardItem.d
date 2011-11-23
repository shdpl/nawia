module qt.gui.QStandardItem;

public import qt.gui.QStandardItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QBrush;
public import qt.core.QList;
public import qt.gui.QIcon;
public import qt.gui.QFont;
public import qt.core.QDataStream;
public import qt.core.QVariant;
public import qt.core.QModelIndex;
public import qt.gui.QStandardItemModel;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStandardItem : QtdObject
{
    public enum ItemType {
        Type = 0,
        UserType = 1000
    }

    alias ItemType.Type Type;
    alias ItemType.UserType UserType;


// Functions

    public this() {
        void* ret = qtd_QStandardItem_QStandardItem(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QIcon) icon, string text) {
        void* ret = qtd_QStandardItem_QStandardItem_QIcon_string(cast(void*) this, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(QStandardItem other) {
        void* ret = qtd_QStandardItem_QStandardItem_QStandardItem(cast(void*) this, other is null ? null : (cast(QStandardItem)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text) {
        void* ret = qtd_QStandardItem_QStandardItem_string(cast(void*) this, text);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int rows, int columns = 1) {
        void* ret = qtd_QStandardItem_QStandardItem_int_int(cast(void*) this, rows, columns);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string accessibleDescription() const {
        string res;
        qtd_QStandardItem_accessibleDescription_const(qtdNativeId, &res);
        return res;
    }

    public final string accessibleText() const {
        string res;
        qtd_QStandardItem_accessibleText_const(qtdNativeId, &res);
        return res;
    }

    public final void appendColumn(QList!(QStandardItem) items) {
        if (items.length != 0) {
        }
        qtd_QStandardItem_appendColumn_QList(qtdNativeId, &items);
    }

    public final void appendRow(QStandardItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStandardItem_appendRow_QStandardItem(qtdNativeId, item is null ? null : item.qtdNativeId);
    }

    public final void appendRow(QList!(QStandardItem) items) {
        if (items.length != 0) {
        }
        qtd_QStandardItem_appendRow_QList(qtdNativeId, &items);
    }

    public final void appendRows(QList!(QStandardItem) items) {
        qtd_QStandardItem_appendRows_QList(qtdNativeId, &items);
    }

    public final QBrush background() const {
        void* ret = qtd_QStandardItem_background_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final Qt.CheckState checkState() const {
        return cast(Qt.CheckState) qtd_QStandardItem_checkState_const(qtdNativeId);
    }

    public final QStandardItem child(int row, int column = 0) const {
        void* ret = qtd_QStandardItem_child_int_int_const(qtdNativeId, row, column);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public final int column() const {
        return qtd_QStandardItem_column_const(qtdNativeId);
    }

    public final int columnCount() const {
        return qtd_QStandardItem_columnCount_const(qtdNativeId);
    }

    protected final void emitDataChanged() {
        qtd_QStandardItem_emitDataChanged(qtdNativeId);
    }

    public final int flags() const {
        return qtd_QStandardItem_flags_const(qtdNativeId);
    }

    public final QFont font() const {
        void* ret = qtd_QStandardItem_font_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final QBrush foreground() const {
        void* ret = qtd_QStandardItem_foreground_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final bool hasChildren() const {
        return qtd_QStandardItem_hasChildren_const(qtdNativeId);
    }

    public final QIcon icon() const {
        void* ret = qtd_QStandardItem_icon_const(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final QModelIndex index() const {
        QModelIndex res;
        qtd_QStandardItem_index_const(qtdNativeId, &res);
        return res;
    }

    public final void insertColumn(int column, QList!(QStandardItem) items) {
        if (items.length != 0) {
        }
        qtd_QStandardItem_insertColumn_int_QList(qtdNativeId, column, &items);
    }

    public final void insertColumns(int column, int count) {
        qtd_QStandardItem_insertColumns_int_int(qtdNativeId, column, count);
    }

    public final void insertRow(int row, QStandardItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStandardItem_insertRow_int_QStandardItem(qtdNativeId, row, item is null ? null : item.qtdNativeId);
    }

    public final void insertRow(int row, QList!(QStandardItem) items) {
        if (items.length != 0) {
        }
        qtd_QStandardItem_insertRow_int_QList(qtdNativeId, row, &items);
    }

    public final void insertRows(int row, QList!(QStandardItem) items) {
        qtd_QStandardItem_insertRows_int_QList(qtdNativeId, row, &items);
    }

    public final void insertRows(int row, int count) {
        qtd_QStandardItem_insertRows_int_int(qtdNativeId, row, count);
    }

    public final bool isCheckable() const {
        return qtd_QStandardItem_isCheckable_const(qtdNativeId);
    }

    public final bool isDragEnabled() const {
        return qtd_QStandardItem_isDragEnabled_const(qtdNativeId);
    }

    public final bool isDropEnabled() const {
        return qtd_QStandardItem_isDropEnabled_const(qtdNativeId);
    }

    public final bool isEditable() const {
        return qtd_QStandardItem_isEditable_const(qtdNativeId);
    }

    public final bool isEnabled() const {
        return qtd_QStandardItem_isEnabled_const(qtdNativeId);
    }

    public final bool isSelectable() const {
        return qtd_QStandardItem_isSelectable_const(qtdNativeId);
    }

    public final bool isTristate() const {
        return qtd_QStandardItem_isTristate_const(qtdNativeId);
    }

    public final QStandardItemModel model() const {
        void *ret = qtd_QStandardItem_model_const(qtdNativeId);
        QStandardItemModel __d_return_value = QStandardItemModel.__getObject(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream out_) {
        qtd_QStandardItem_writeTo_QDataStream(qtdNativeId, out_ is null ? null : out_.qtdNativeId);
    }

    public final void readFrom(QDataStream in_) {
        qtd_QStandardItem_readFrom_QDataStream(qtdNativeId, in_ is null ? null : in_.qtdNativeId);
    }

    public final QStandardItem parent() const {
        void* ret = qtd_QStandardItem_parent_const(qtdNativeId);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public final void removeColumn(int column) {
        qtd_QStandardItem_removeColumn_int(qtdNativeId, column);
    }

    public final void removeColumns(int column, int count) {
        qtd_QStandardItem_removeColumns_int_int(qtdNativeId, column, count);
    }

    public final void removeRow(int row) {
        qtd_QStandardItem_removeRow_int(qtdNativeId, row);
    }

    public final void removeRows(int row, int count) {
        qtd_QStandardItem_removeRows_int_int(qtdNativeId, row, count);
    }

    public final int row() const {
        return qtd_QStandardItem_row_const(qtdNativeId);
    }

    public final int rowCount() const {
        return qtd_QStandardItem_rowCount_const(qtdNativeId);
    }

    public final void setAccessibleDescription(string accessibleDescription) {
        qtd_QStandardItem_setAccessibleDescription_string(qtdNativeId, accessibleDescription);
    }

    public final void setAccessibleText(string accessibleText) {
        qtd_QStandardItem_setAccessibleText_string(qtdNativeId, accessibleText);
    }

    public final void setBackground(const(QBrush) brush) {
        qtd_QStandardItem_setBackground_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setCheckState(Qt.CheckState checkState) {
        qtd_QStandardItem_setCheckState_CheckState(qtdNativeId, checkState);
    }

    public final void setCheckable(bool checkable) {
        qtd_QStandardItem_setCheckable_bool(qtdNativeId, checkable);
    }

    public final void setChild(int row, QStandardItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStandardItem_setChild_int_QStandardItem(qtdNativeId, row, item is null ? null : item.qtdNativeId);
    }

    public final void setChild(int row, int column, QStandardItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStandardItem_setChild_int_int_QStandardItem(qtdNativeId, row, column, item is null ? null : item.qtdNativeId);
    }

    public final void setColumnCount(int columns) {
        qtd_QStandardItem_setColumnCount_int(qtdNativeId, columns);
    }

    public final void setDragEnabled(bool dragEnabled) {
        qtd_QStandardItem_setDragEnabled_bool(qtdNativeId, dragEnabled);
    }

    public final void setDropEnabled(bool dropEnabled) {
        qtd_QStandardItem_setDropEnabled_bool(qtdNativeId, dropEnabled);
    }

    public final void setEditable(bool editable) {
        qtd_QStandardItem_setEditable_bool(qtdNativeId, editable);
    }

    public final void setEnabled(bool enabled) {
        qtd_QStandardItem_setEnabled_bool(qtdNativeId, enabled);
    }

    public final void setFlags(int flags) {
        qtd_QStandardItem_setFlags_ItemFlags(qtdNativeId, flags);
    }

    public final void setFont(const(QFont) font) {
        qtd_QStandardItem_setFont_QFont(qtdNativeId, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    public final void setForeground(const(QBrush) brush) {
        qtd_QStandardItem_setForeground_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setIcon(const(QIcon) icon) {
        qtd_QStandardItem_setIcon_QIcon(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setRowCount(int rows) {
        qtd_QStandardItem_setRowCount_int(qtdNativeId, rows);
    }

    public final void setSelectable(bool selectable) {
        qtd_QStandardItem_setSelectable_bool(qtdNativeId, selectable);
    }

    public final void setSizeHint(const(QSize) sizeHint) {
        qtd_QStandardItem_setSizeHint_QSize(qtdNativeId, sizeHint);
    }

    public final void setStatusTip(string statusTip) {
        qtd_QStandardItem_setStatusTip_string(qtdNativeId, statusTip);
    }

    public final void setText(string text) {
        qtd_QStandardItem_setText_string(qtdNativeId, text);
    }

    public final void setTextAlignment(int textAlignment) {
        qtd_QStandardItem_setTextAlignment_Alignment(qtdNativeId, textAlignment);
    }

    public final void setToolTip(string toolTip) {
        qtd_QStandardItem_setToolTip_string(qtdNativeId, toolTip);
    }

    public final void setTristate(bool tristate) {
        qtd_QStandardItem_setTristate_bool(qtdNativeId, tristate);
    }

    public final void setWhatsThis(string whatsThis) {
        qtd_QStandardItem_setWhatsThis_string(qtdNativeId, whatsThis);
    }

    public final QSize sizeHint() const {
        QSize res;
        qtd_QStandardItem_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public final void sortChildren(int column, Qt.SortOrder order = Qt.SortOrder.AscendingOrder) {
        qtd_QStandardItem_sortChildren_int_SortOrder(qtdNativeId, column, order);
    }

    public final string statusTip() const {
        string res;
        qtd_QStandardItem_statusTip_const(qtdNativeId, &res);
        return res;
    }

    public final QStandardItem takeChild(int row, int column = 0) {
        void* ret = qtd_QStandardItem_takeChild_int_int(qtdNativeId, row, column);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QList!(QStandardItem) takeColumn(int column) {
        auto res = QList!(QStandardItem).opCall();
        qtd_QStandardItem_takeColumn_int(qtdNativeId, &res, column);
        return res;
    }

    public final QList!(QStandardItem) takeRow(int row) {
        auto res = QList!(QStandardItem).opCall();
        qtd_QStandardItem_takeRow_int(qtdNativeId, &res, row);
        return res;
    }

    public final string text() const {
        string res;
        qtd_QStandardItem_text_const(qtdNativeId, &res);
        return res;
    }

    public final int textAlignment() const {
        return qtd_QStandardItem_textAlignment_const(qtdNativeId);
    }

    public final string toolTip() const {
        string res;
        qtd_QStandardItem_toolTip_const(qtdNativeId, &res);
        return res;
    }

    public final string whatsThis() const {
        string res;
        qtd_QStandardItem_whatsThis_const(qtdNativeId, &res);
        return res;
    }

    public QStandardItem clone() const {
        void* ret = qtd_QStandardItem_clone_const(qtdNativeId);
        QStandardItem __d_return_value = qtd_QStandardItem_from_ptr(ret);

        return __d_return_value;
    }

    public QVariant data(int role = 33) const {
        void* ret = qtd_QStandardItem_data_int_const(qtdNativeId, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool operator_less(QStandardItem other) const {
        return qtd_QStandardItem_operator_less_QStandardItem_const(qtdNativeId, other is null ? null : (cast(QStandardItem)other).qtdNativeId);
    }

    public void read(QDataStream in_) {
        qtd_QStandardItem_read_QDataStream(qtdNativeId, in_ is null ? null : in_.qtdNativeId);
    }

    public void setData(QVariant value, int role = 33) {
        qtd_QStandardItem_setData_QVariant_int(qtdNativeId, value is null ? null : value.qtdNativeId, role);
    }

    public int type() const {
        return qtd_QStandardItem_type_const(qtdNativeId);
    }

    public void write(QDataStream out_) const {
        qtd_QStandardItem_write_QDataStream_const(qtdNativeId, out_ is null ? null : out_.qtdNativeId);
    }
// Field accessors
    static QStandardItem __getObject(void* nativeId) {
        return qtd_QStandardItem_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QStandardItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStandardItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStandardItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStandardItem_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QStandardItem_entity(void *q_ptr);

QStandardItem qtd_QStandardItem_from_ptr(void* ret) {
    void* d_obj = __QStandardItem_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QStandardItem) d_obj_ref;
    } else {
        auto return_value = new QStandardItem(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QStandardItem_delete(void *ptr);
extern (C) void qtd_QStandardItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStandardItem_QStandardItem(void *d_ptr);
private extern(C) void* qtd_QStandardItem_QStandardItem_QIcon_string(void *d_ptr,
 void* icon0,
 string text1);
private extern(C) void* qtd_QStandardItem_QStandardItem_QStandardItem(void *d_ptr,
 void* other0);
private extern(C) void* qtd_QStandardItem_QStandardItem_string(void *d_ptr,
 string text0);
private extern(C) void* qtd_QStandardItem_QStandardItem_int_int(void *d_ptr,
 int rows0,
 int columns1);
private extern(C) void  qtd_QStandardItem_accessibleDescription_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStandardItem_accessibleText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStandardItem_appendColumn_QList(void* __this_nativeId,
 void* items0);
private extern(C) void  qtd_QStandardItem_appendRow_QStandardItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QStandardItem_appendRow_QList(void* __this_nativeId,
 void* items0);
private extern(C) void  qtd_QStandardItem_appendRows_QList(void* __this_nativeId,
 void* items0);
private extern(C) void*  qtd_QStandardItem_background_const(void* __this_nativeId);
private extern(C) int  qtd_QStandardItem_checkState_const(void* __this_nativeId);
private extern(C) void*  qtd_QStandardItem_child_int_int_const(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) int  qtd_QStandardItem_column_const(void* __this_nativeId);
private extern(C) int  qtd_QStandardItem_columnCount_const(void* __this_nativeId);
private extern(C) void  qtd_QStandardItem_emitDataChanged(void* __this_nativeId);
private extern(C) int  qtd_QStandardItem_flags_const(void* __this_nativeId);
private extern(C) void*  qtd_QStandardItem_font_const(void* __this_nativeId);
private extern(C) void*  qtd_QStandardItem_foreground_const(void* __this_nativeId);
private extern(C) bool  qtd_QStandardItem_hasChildren_const(void* __this_nativeId);
private extern(C) void*  qtd_QStandardItem_icon_const(void* __this_nativeId);
private extern(C) void  qtd_QStandardItem_index_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) void  qtd_QStandardItem_insertColumn_int_QList(void* __this_nativeId,
 int column0,
 void* items1);
private extern(C) void  qtd_QStandardItem_insertColumns_int_int(void* __this_nativeId,
 int column0,
 int count1);
private extern(C) void  qtd_QStandardItem_insertRow_int_QStandardItem(void* __this_nativeId,
 int row0,
 void* item1);
private extern(C) void  qtd_QStandardItem_insertRow_int_QList(void* __this_nativeId,
 int row0,
 void* items1);
private extern(C) void  qtd_QStandardItem_insertRows_int_QList(void* __this_nativeId,
 int row0,
 void* items1);
private extern(C) void  qtd_QStandardItem_insertRows_int_int(void* __this_nativeId,
 int row0,
 int count1);
private extern(C) bool  qtd_QStandardItem_isCheckable_const(void* __this_nativeId);
private extern(C) bool  qtd_QStandardItem_isDragEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QStandardItem_isDropEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QStandardItem_isEditable_const(void* __this_nativeId);
private extern(C) bool  qtd_QStandardItem_isEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QStandardItem_isSelectable_const(void* __this_nativeId);
private extern(C) bool  qtd_QStandardItem_isTristate_const(void* __this_nativeId);
private extern(C) void*  qtd_QStandardItem_model_const(void* __this_nativeId);
private extern(C) void  qtd_QStandardItem_writeTo_QDataStream(void* __this_nativeId,
 void* out0);
private extern(C) void  qtd_QStandardItem_readFrom_QDataStream(void* __this_nativeId,
 void* in0);
private extern(C) void*  qtd_QStandardItem_parent_const(void* __this_nativeId);
private extern(C) void  qtd_QStandardItem_removeColumn_int(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QStandardItem_removeColumns_int_int(void* __this_nativeId,
 int column0,
 int count1);
private extern(C) void  qtd_QStandardItem_removeRow_int(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QStandardItem_removeRows_int_int(void* __this_nativeId,
 int row0,
 int count1);
private extern(C) int  qtd_QStandardItem_row_const(void* __this_nativeId);
private extern(C) int  qtd_QStandardItem_rowCount_const(void* __this_nativeId);
private extern(C) void  qtd_QStandardItem_setAccessibleDescription_string(void* __this_nativeId,
 string accessibleDescription0);
private extern(C) void  qtd_QStandardItem_setAccessibleText_string(void* __this_nativeId,
 string accessibleText0);
private extern(C) void  qtd_QStandardItem_setBackground_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QStandardItem_setCheckState_CheckState(void* __this_nativeId,
 int checkState0);
private extern(C) void  qtd_QStandardItem_setCheckable_bool(void* __this_nativeId,
 bool checkable0);
private extern(C) void  qtd_QStandardItem_setChild_int_QStandardItem(void* __this_nativeId,
 int row0,
 void* item1);
private extern(C) void  qtd_QStandardItem_setChild_int_int_QStandardItem(void* __this_nativeId,
 int row0,
 int column1,
 void* item2);
private extern(C) void  qtd_QStandardItem_setColumnCount_int(void* __this_nativeId,
 int columns0);
private extern(C) void  qtd_QStandardItem_setDragEnabled_bool(void* __this_nativeId,
 bool dragEnabled0);
private extern(C) void  qtd_QStandardItem_setDropEnabled_bool(void* __this_nativeId,
 bool dropEnabled0);
private extern(C) void  qtd_QStandardItem_setEditable_bool(void* __this_nativeId,
 bool editable0);
private extern(C) void  qtd_QStandardItem_setEnabled_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QStandardItem_setFlags_ItemFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QStandardItem_setFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void  qtd_QStandardItem_setForeground_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QStandardItem_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void  qtd_QStandardItem_setRowCount_int(void* __this_nativeId,
 int rows0);
private extern(C) void  qtd_QStandardItem_setSelectable_bool(void* __this_nativeId,
 bool selectable0);
private extern(C) void  qtd_QStandardItem_setSizeHint_QSize(void* __this_nativeId,
 QSize sizeHint0);
private extern(C) void  qtd_QStandardItem_setStatusTip_string(void* __this_nativeId,
 string statusTip0);
private extern(C) void  qtd_QStandardItem_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QStandardItem_setTextAlignment_Alignment(void* __this_nativeId,
 int textAlignment0);
private extern(C) void  qtd_QStandardItem_setToolTip_string(void* __this_nativeId,
 string toolTip0);
private extern(C) void  qtd_QStandardItem_setTristate_bool(void* __this_nativeId,
 bool tristate0);
private extern(C) void  qtd_QStandardItem_setWhatsThis_string(void* __this_nativeId,
 string whatsThis0);
private extern(C) void  qtd_QStandardItem_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QStandardItem_sortChildren_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) void  qtd_QStandardItem_statusTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QStandardItem_takeChild_int_int(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) void  qtd_QStandardItem_takeColumn_int(void* __this_nativeId,
 void* __d_return_value,
 int column0);
private extern(C) void  qtd_QStandardItem_takeRow_int(void* __this_nativeId,
 void* __d_return_value,
 int row0);
private extern(C) void  qtd_QStandardItem_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QStandardItem_textAlignment_const(void* __this_nativeId);
private extern(C) void  qtd_QStandardItem_toolTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStandardItem_whatsThis_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QStandardItem_clone_const(void* __this_nativeId);
private extern(C) void*  qtd_QStandardItem_data_int_const(void* __this_nativeId,
 int role0);
private extern(C) bool  qtd_QStandardItem_operator_less_QStandardItem_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QStandardItem_read_QDataStream(void* __this_nativeId,
 void* in0);
private extern(C) void  qtd_QStandardItem_setData_QVariant_int(void* __this_nativeId,
 void* value0,
 int role1);
private extern(C) int  qtd_QStandardItem_type_const(void* __this_nativeId);
private extern(C) void  qtd_QStandardItem_write_QDataStream_const(void* __this_nativeId,
 void* out0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId) qtd_QStandardItem_clone_const_dispatch; }
extern(C) void* qtd_export_QStandardItem_clone_const_dispatch(void *dId){
    auto d_object = cast(QStandardItem) dId;
    QStandardItem ret_value = d_object.clone();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId, int role0) qtd_QStandardItem_data_int_const_dispatch; }
extern(C) void* qtd_export_QStandardItem_data_int_const_dispatch(void *dId, int role0){
    auto d_object = cast(QStandardItem) dId;
    QVariant ret_value = d_object.data(role0);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern bool function(void *dId, void* other0) qtd_QStandardItem_operator_less_QStandardItem_const_dispatch; }
extern(C) bool qtd_export_QStandardItem_operator_less_QStandardItem_const_dispatch(void *dId, void* other0){
    auto d_object = cast(QStandardItem) dId;
    scope other0_d_ref = new QStandardItem(other0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.operator_less(other0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, void* in0) qtd_QStandardItem_read_QDataStream_dispatch; }
extern(C) void qtd_export_QStandardItem_read_QDataStream_dispatch(void *dId, void* in0){
    auto d_object = cast(QStandardItem) dId;
    scope in0_d_ref = new QDataStream(in0, QtdObjectInitFlags.onStack);
    d_object.read(in0_d_ref);
}

extern(C){ extern void function(void *dId, void* value0, int role1) qtd_QStandardItem_setData_QVariant_int_dispatch; }
extern(C) void qtd_export_QStandardItem_setData_QVariant_int_dispatch(void *dId, void* value0, int role1){
    auto d_object = cast(QStandardItem) dId;
    scope value0_d_ref = new QVariant(value0, QtdObjectInitFlags.onStack);
    d_object.setData(value0_d_ref, role1);
}

extern(C){ extern int function(void *dId) qtd_QStandardItem_type_const_dispatch; }
extern(C) int qtd_export_QStandardItem_type_const_dispatch(void *dId){
    auto d_object = cast(QStandardItem) dId;
    auto return_value = d_object.type();
    return return_value;
}

extern(C){ extern void function(void *dId, void* out0) qtd_QStandardItem_write_QDataStream_const_dispatch; }
extern(C) void qtd_export_QStandardItem_write_QDataStream_const_dispatch(void *dId, void* out0){
    auto d_object = cast(QStandardItem) dId;
    scope out0_d_ref = new QDataStream(out0, QtdObjectInitFlags.onStack);
    d_object.write(out0_d_ref);
}

private extern (C) void qtd_QStandardItem_initCallBacks(void* virtuals);

extern(C) void static_init_QStandardItem() {
    void*[7] virt_arr;
    virt_arr[0] = &qtd_export_QStandardItem_clone_const_dispatch;
    virt_arr[1] = &qtd_export_QStandardItem_data_int_const_dispatch;
    virt_arr[2] = &qtd_export_QStandardItem_operator_less_QStandardItem_const_dispatch;
    virt_arr[3] = &qtd_export_QStandardItem_read_QDataStream_dispatch;
    virt_arr[4] = &qtd_export_QStandardItem_setData_QVariant_int_dispatch;
    virt_arr[5] = &qtd_export_QStandardItem_type_const_dispatch;
    virt_arr[6] = &qtd_export_QStandardItem_write_QDataStream_const_dispatch;
    qtd_QStandardItem_initCallBacks(virt_arr.ptr);
}

// signal handlers

