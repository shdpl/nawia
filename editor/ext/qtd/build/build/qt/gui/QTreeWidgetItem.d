module qt.gui.QTreeWidgetItem;

public import qt.gui.QTreeWidgetItem_aux;
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
public import qt.gui.QFont;
public import qt.gui.QIcon;
public import qt.core.QDataStream;
public import qt.core.QVariant;
public import qt.gui.QTreeWidget;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTreeWidgetItem : QtdObject
{
    public enum ItemType {
        Type = 0,
        UserType = 1000
    }

    alias ItemType.Type Type;
    alias ItemType.UserType UserType;

    public enum ChildIndicatorPolicy {
        ShowIndicator = 0,
        DontShowIndicator = 1,
        DontShowIndicatorWhenChildless = 2
    }

    alias ChildIndicatorPolicy.ShowIndicator ShowIndicator;
    alias ChildIndicatorPolicy.DontShowIndicator DontShowIndicator;
    alias ChildIndicatorPolicy.DontShowIndicatorWhenChildless DontShowIndicatorWhenChildless;


// Functions

    public this(QTreeWidget view, QTreeWidgetItem after, int type = 0) {
        void* ret = qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidget_QTreeWidgetItem_int(cast(void*) this, view is null ? null : view.qtdNativeId, after is null ? null : after.qtdNativeId, type);
        this.qtdSetOwnership(QtdObjectOwnership.native);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTreeWidget view, QList!(string) strings, int type = 0) {
        void* ret = qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidget_QList_int(cast(void*) this, view is null ? null : view.qtdNativeId, &strings, type);
        this.qtdSetOwnership(QtdObjectOwnership.native);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTreeWidget view, int type = 0) {
        void* ret = qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidget_int(cast(void*) this, view is null ? null : view.qtdNativeId, type);
        this.qtdSetOwnership(QtdObjectOwnership.native);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTreeWidgetItem parent_, QTreeWidgetItem after, int type = 0) {
        void* ret = qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_int(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, after is null ? null : after.qtdNativeId, type);
        this.qtdSetOwnership(QtdObjectOwnership.native);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTreeWidgetItem parent_, QList!(string) strings, int type = 0) {
        void* ret = qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_QList_int(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, &strings, type);
        this.qtdSetOwnership(QtdObjectOwnership.native);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTreeWidgetItem parent_, int type = 0) {
        void* ret = qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_int(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, type);
        this.qtdSetOwnership(QtdObjectOwnership.native);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QList!(string) strings, int type = 0) {
        void* ret = qtd_QTreeWidgetItem_QTreeWidgetItem_QList_int(cast(void*) this, &strings, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int type = 0) {
        void* ret = qtd_QTreeWidgetItem_QTreeWidgetItem_int(cast(void*) this, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addChild(QTreeWidgetItem child) {
        if (child !is null) {
            child.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QTreeWidgetItem_addChild_QTreeWidgetItem(qtdNativeId, child is null ? null : child.qtdNativeId);
    }

    public final void addChildren(QList!(QTreeWidgetItem) children) {
        if (children.length != 0) {
        }
        qtd_QTreeWidgetItem_addChildren_QList(qtdNativeId, &children);
    }

    public final QBrush background(int column) const {
        void* ret = qtd_QTreeWidgetItem_background_int_const(qtdNativeId, column);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final Qt.CheckState checkState(int column) const {
        return cast(Qt.CheckState) qtd_QTreeWidgetItem_checkState_int_const(qtdNativeId, column);
    }

    public final QTreeWidgetItem child(int index) const {
        void* ret = qtd_QTreeWidgetItem_child_int_const(qtdNativeId, index);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final int childCount() const {
        return qtd_QTreeWidgetItem_childCount_const(qtdNativeId);
    }

    public final QTreeWidgetItem.ChildIndicatorPolicy childIndicatorPolicy() const {
        return cast(QTreeWidgetItem.ChildIndicatorPolicy) qtd_QTreeWidgetItem_childIndicatorPolicy_const(qtdNativeId);
    }

    public final int columnCount() const {
        return qtd_QTreeWidgetItem_columnCount_const(qtdNativeId);
    }

    protected final void emitDataChanged() {
        qtd_QTreeWidgetItem_emitDataChanged(qtdNativeId);
    }

    public final int flags() const {
        return qtd_QTreeWidgetItem_flags_const(qtdNativeId);
    }

    public final QFont font(int column) const {
        void* ret = qtd_QTreeWidgetItem_font_int_const(qtdNativeId, column);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final QBrush foreground(int column) const {
        void* ret = qtd_QTreeWidgetItem_foreground_int_const(qtdNativeId, column);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final QIcon icon(int column) const {
        void* ret = qtd_QTreeWidgetItem_icon_int_const(qtdNativeId, column);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final int indexOfChild(QTreeWidgetItem child) const {
        return qtd_QTreeWidgetItem_indexOfChild_QTreeWidgetItem_const(qtdNativeId, child is null ? null : child.qtdNativeId);
    }

    public final void insertChild(int index, QTreeWidgetItem child) {
        if (child !is null) {
            child.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QTreeWidgetItem_insertChild_int_QTreeWidgetItem(qtdNativeId, index, child is null ? null : child.qtdNativeId);
    }

    public final void insertChildren(int index, QList!(QTreeWidgetItem) children) {
        if (children.length != 0) {
        }
        qtd_QTreeWidgetItem_insertChildren_int_QList(qtdNativeId, index, &children);
    }

    public final bool isDisabled() const {
        return qtd_QTreeWidgetItem_isDisabled_const(qtdNativeId);
    }

    public final bool isExpanded() const {
        return qtd_QTreeWidgetItem_isExpanded_const(qtdNativeId);
    }

    public final bool isFirstColumnSpanned() const {
        return qtd_QTreeWidgetItem_isFirstColumnSpanned_const(qtdNativeId);
    }

    public final bool isHidden() const {
        return qtd_QTreeWidgetItem_isHidden_const(qtdNativeId);
    }

    public final bool isSelected() const {
        return qtd_QTreeWidgetItem_isSelected_const(qtdNativeId);
    }

    public final void writeTo(QDataStream out_) {
        qtd_QTreeWidgetItem_writeTo_QDataStream(qtdNativeId, out_ is null ? null : out_.qtdNativeId);
    }

    public final void readFrom(QDataStream in_) {
        qtd_QTreeWidgetItem_readFrom_QDataStream(qtdNativeId, in_ is null ? null : in_.qtdNativeId);
    }

    public final QTreeWidgetItem parent() const {
        void* ret = qtd_QTreeWidgetItem_parent_const(qtdNativeId);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final void removeChild(QTreeWidgetItem child) {
        if (child !is null) {
            child.qtdSetOwnership(QtdObjectOwnership.d);
        }
        qtd_QTreeWidgetItem_removeChild_QTreeWidgetItem(qtdNativeId, child is null ? null : child.qtdNativeId);
    }

    public final void setBackground(int column, const(QBrush) brush) {
        qtd_QTreeWidgetItem_setBackground_int_QBrush(qtdNativeId, column, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setCheckState(int column, Qt.CheckState state) {
        qtd_QTreeWidgetItem_setCheckState_int_CheckState(qtdNativeId, column, state);
    }

    public final void setChildIndicatorPolicy(QTreeWidgetItem.ChildIndicatorPolicy policy) {
        qtd_QTreeWidgetItem_setChildIndicatorPolicy_ChildIndicatorPolicy(qtdNativeId, policy);
    }

    public final void setDisabled(bool disabled) {
        qtd_QTreeWidgetItem_setDisabled_bool(qtdNativeId, disabled);
    }

    public final void setExpanded(bool expand) {
        qtd_QTreeWidgetItem_setExpanded_bool(qtdNativeId, expand);
    }

    public final void setFirstColumnSpanned(bool span) {
        qtd_QTreeWidgetItem_setFirstColumnSpanned_bool(qtdNativeId, span);
    }

    public final void setFlags(int flags) {
        qtd_QTreeWidgetItem_setFlags_ItemFlags(qtdNativeId, flags);
    }

    public final void setFont(int column, const(QFont) font) {
        qtd_QTreeWidgetItem_setFont_int_QFont(qtdNativeId, column, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    public final void setForeground(int column, const(QBrush) brush) {
        qtd_QTreeWidgetItem_setForeground_int_QBrush(qtdNativeId, column, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setHidden(bool hide) {
        qtd_QTreeWidgetItem_setHidden_bool(qtdNativeId, hide);
    }

    public final void setIcon(int column, const(QIcon) icon) {
        qtd_QTreeWidgetItem_setIcon_int_QIcon(qtdNativeId, column, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setSelected(bool select) {
        qtd_QTreeWidgetItem_setSelected_bool(qtdNativeId, select);
    }

    public final void setSizeHint(int column, const(QSize) size) {
        qtd_QTreeWidgetItem_setSizeHint_int_QSize(qtdNativeId, column, size);
    }

    public final void setStatusTip(int column, string statusTip) {
        qtd_QTreeWidgetItem_setStatusTip_int_string(qtdNativeId, column, statusTip);
    }

    public final void setText(int column, string text) {
        qtd_QTreeWidgetItem_setText_int_string(qtdNativeId, column, text);
    }

    public final void setTextAlignment(int column, int alignment) {
        qtd_QTreeWidgetItem_setTextAlignment_int_int(qtdNativeId, column, alignment);
    }

    public final void setToolTip(int column, string toolTip) {
        qtd_QTreeWidgetItem_setToolTip_int_string(qtdNativeId, column, toolTip);
    }

    public final void setWhatsThis(int column, string whatsThis) {
        qtd_QTreeWidgetItem_setWhatsThis_int_string(qtdNativeId, column, whatsThis);
    }

    public final QSize sizeHint(int column) const {
        QSize res;
        qtd_QTreeWidgetItem_sizeHint_int_const(qtdNativeId, &res, column);
        return res;
    }

    public final void sortChildren(int column, Qt.SortOrder order) {
        qtd_QTreeWidgetItem_sortChildren_int_SortOrder(qtdNativeId, column, order);
    }

    public final string statusTip(int column) const {
        string res;
        qtd_QTreeWidgetItem_statusTip_int_const(qtdNativeId, &res, column);
        return res;
    }

    public final QTreeWidgetItem takeChild(int index) {
        void* ret = qtd_QTreeWidgetItem_takeChild_int(qtdNativeId, index);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QList!(QTreeWidgetItem) takeChildren() {
        auto res = QList!(QTreeWidgetItem).opCall();
        qtd_QTreeWidgetItem_takeChildren(qtdNativeId, &res);
        return res;
    }

    public final string text(int column) const {
        string res;
        qtd_QTreeWidgetItem_text_int_const(qtdNativeId, &res, column);
        return res;
    }

    public final int textAlignment(int column) const {
        return qtd_QTreeWidgetItem_textAlignment_int_const(qtdNativeId, column);
    }

    public final string toolTip(int column) const {
        string res;
        qtd_QTreeWidgetItem_toolTip_int_const(qtdNativeId, &res, column);
        return res;
    }

    public final QTreeWidget treeWidget() const {
        void *ret = qtd_QTreeWidgetItem_treeWidget_const(qtdNativeId);
        QTreeWidget __d_return_value = QTreeWidget.__getObject(ret);
        return __d_return_value;
    }

    public final int type() const {
        return qtd_QTreeWidgetItem_type_const(qtdNativeId);
    }

    public final string whatsThis(int column) const {
        string res;
        qtd_QTreeWidgetItem_whatsThis_int_const(qtdNativeId, &res, column);
        return res;
    }

    public QTreeWidgetItem clone() const {
        void* ret = qtd_QTreeWidgetItem_clone_const(qtdNativeId);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public QVariant data(int column, int role) const {
        void* ret = qtd_QTreeWidgetItem_data_int_int_const(qtdNativeId, column, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool operator_less(QTreeWidgetItem other) const {
        return qtd_QTreeWidgetItem_operator_less_QTreeWidgetItem_const(qtdNativeId, other is null ? null : (cast(QTreeWidgetItem)other).qtdNativeId);
    }

    public void read(QDataStream in_) {
        qtd_QTreeWidgetItem_read_QDataStream(qtdNativeId, in_ is null ? null : in_.qtdNativeId);
    }

    public void setData(int column, int role, QVariant value) {
        qtd_QTreeWidgetItem_setData_int_int_QVariant(qtdNativeId, column, role, value is null ? null : value.qtdNativeId);
    }

    public void write(QDataStream out_) const {
        qtd_QTreeWidgetItem_write_QDataStream_const(qtdNativeId, out_ is null ? null : out_.qtdNativeId);
    }
// Field accessors
    static QTreeWidgetItem __getObject(void* nativeId) {
        return qtd_QTreeWidgetItem_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QTreeWidgetItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTreeWidgetItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTreeWidgetItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTreeWidgetItem_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QTreeWidgetItem_entity(void *q_ptr);

QTreeWidgetItem qtd_QTreeWidgetItem_from_ptr(void* ret) {
    void* d_obj = __QTreeWidgetItem_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QTreeWidgetItem) d_obj_ref;
    } else {
        auto return_value = new QTreeWidgetItem(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QTreeWidgetItem_delete(void *ptr);
extern (C) void qtd_QTreeWidgetItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidget_QTreeWidgetItem_int(void *d_ptr,
 void* view0,
 void* after1,
 int type2);
private extern(C) void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidget_QList_int(void *d_ptr,
 void* view0,
 void* strings1,
 int type2);
private extern(C) void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidget_int(void *d_ptr,
 void* view0,
 int type1);
private extern(C) void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_int(void *d_ptr,
 void* parent0,
 void* after1,
 int type2);
private extern(C) void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_QList_int(void *d_ptr,
 void* parent0,
 void* strings1,
 int type2);
private extern(C) void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_int(void *d_ptr,
 void* parent0,
 int type1);
private extern(C) void* qtd_QTreeWidgetItem_QTreeWidgetItem_QList_int(void *d_ptr,
 void* strings0,
 int type1);
private extern(C) void* qtd_QTreeWidgetItem_QTreeWidgetItem_int(void *d_ptr,
 int type0);
private extern(C) void  qtd_QTreeWidgetItem_addChild_QTreeWidgetItem(void* __this_nativeId,
 void* child0);
private extern(C) void  qtd_QTreeWidgetItem_addChildren_QList(void* __this_nativeId,
 void* children0);
private extern(C) void*  qtd_QTreeWidgetItem_background_int_const(void* __this_nativeId,
 int column0);
private extern(C) int  qtd_QTreeWidgetItem_checkState_int_const(void* __this_nativeId,
 int column0);
private extern(C) void*  qtd_QTreeWidgetItem_child_int_const(void* __this_nativeId,
 int index0);
private extern(C) int  qtd_QTreeWidgetItem_childCount_const(void* __this_nativeId);
private extern(C) int  qtd_QTreeWidgetItem_childIndicatorPolicy_const(void* __this_nativeId);
private extern(C) int  qtd_QTreeWidgetItem_columnCount_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeWidgetItem_emitDataChanged(void* __this_nativeId);
private extern(C) int  qtd_QTreeWidgetItem_flags_const(void* __this_nativeId);
private extern(C) void*  qtd_QTreeWidgetItem_font_int_const(void* __this_nativeId,
 int column0);
private extern(C) void*  qtd_QTreeWidgetItem_foreground_int_const(void* __this_nativeId,
 int column0);
private extern(C) void*  qtd_QTreeWidgetItem_icon_int_const(void* __this_nativeId,
 int column0);
private extern(C) int  qtd_QTreeWidgetItem_indexOfChild_QTreeWidgetItem_const(void* __this_nativeId,
 void* child0);
private extern(C) void  qtd_QTreeWidgetItem_insertChild_int_QTreeWidgetItem(void* __this_nativeId,
 int index0,
 void* child1);
private extern(C) void  qtd_QTreeWidgetItem_insertChildren_int_QList(void* __this_nativeId,
 int index0,
 void* children1);
private extern(C) bool  qtd_QTreeWidgetItem_isDisabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QTreeWidgetItem_isExpanded_const(void* __this_nativeId);
private extern(C) bool  qtd_QTreeWidgetItem_isFirstColumnSpanned_const(void* __this_nativeId);
private extern(C) bool  qtd_QTreeWidgetItem_isHidden_const(void* __this_nativeId);
private extern(C) bool  qtd_QTreeWidgetItem_isSelected_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeWidgetItem_writeTo_QDataStream(void* __this_nativeId,
 void* out0);
private extern(C) void  qtd_QTreeWidgetItem_readFrom_QDataStream(void* __this_nativeId,
 void* in0);
private extern(C) void*  qtd_QTreeWidgetItem_parent_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeWidgetItem_removeChild_QTreeWidgetItem(void* __this_nativeId,
 void* child0);
private extern(C) void  qtd_QTreeWidgetItem_setBackground_int_QBrush(void* __this_nativeId,
 int column0,
 void* brush1);
private extern(C) void  qtd_QTreeWidgetItem_setCheckState_int_CheckState(void* __this_nativeId,
 int column0,
 int state1);
private extern(C) void  qtd_QTreeWidgetItem_setChildIndicatorPolicy_ChildIndicatorPolicy(void* __this_nativeId,
 int policy0);
private extern(C) void  qtd_QTreeWidgetItem_setDisabled_bool(void* __this_nativeId,
 bool disabled0);
private extern(C) void  qtd_QTreeWidgetItem_setExpanded_bool(void* __this_nativeId,
 bool expand0);
private extern(C) void  qtd_QTreeWidgetItem_setFirstColumnSpanned_bool(void* __this_nativeId,
 bool span0);
private extern(C) void  qtd_QTreeWidgetItem_setFlags_ItemFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QTreeWidgetItem_setFont_int_QFont(void* __this_nativeId,
 int column0,
 void* font1);
private extern(C) void  qtd_QTreeWidgetItem_setForeground_int_QBrush(void* __this_nativeId,
 int column0,
 void* brush1);
private extern(C) void  qtd_QTreeWidgetItem_setHidden_bool(void* __this_nativeId,
 bool hide0);
private extern(C) void  qtd_QTreeWidgetItem_setIcon_int_QIcon(void* __this_nativeId,
 int column0,
 void* icon1);
private extern(C) void  qtd_QTreeWidgetItem_setSelected_bool(void* __this_nativeId,
 bool select0);
private extern(C) void  qtd_QTreeWidgetItem_setSizeHint_int_QSize(void* __this_nativeId,
 int column0,
 QSize size1);
private extern(C) void  qtd_QTreeWidgetItem_setStatusTip_int_string(void* __this_nativeId,
 int column0,
 string statusTip1);
private extern(C) void  qtd_QTreeWidgetItem_setText_int_string(void* __this_nativeId,
 int column0,
 string text1);
private extern(C) void  qtd_QTreeWidgetItem_setTextAlignment_int_int(void* __this_nativeId,
 int column0,
 int alignment1);
private extern(C) void  qtd_QTreeWidgetItem_setToolTip_int_string(void* __this_nativeId,
 int column0,
 string toolTip1);
private extern(C) void  qtd_QTreeWidgetItem_setWhatsThis_int_string(void* __this_nativeId,
 int column0,
 string whatsThis1);
private extern(C) void  qtd_QTreeWidgetItem_sizeHint_int_const(void* __this_nativeId,
 QSize * __d_return_value,
 int column0);
private extern(C) void  qtd_QTreeWidgetItem_sortChildren_int_SortOrder(void* __this_nativeId,
 int column0,
 int order1);
private extern(C) void  qtd_QTreeWidgetItem_statusTip_int_const(void* __this_nativeId,
 void* __d_return_value,
 int column0);
private extern(C) void*  qtd_QTreeWidgetItem_takeChild_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTreeWidgetItem_takeChildren(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTreeWidgetItem_text_int_const(void* __this_nativeId,
 void* __d_return_value,
 int column0);
private extern(C) int  qtd_QTreeWidgetItem_textAlignment_int_const(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QTreeWidgetItem_toolTip_int_const(void* __this_nativeId,
 void* __d_return_value,
 int column0);
private extern(C) void*  qtd_QTreeWidgetItem_treeWidget_const(void* __this_nativeId);
private extern(C) int  qtd_QTreeWidgetItem_type_const(void* __this_nativeId);
private extern(C) void  qtd_QTreeWidgetItem_whatsThis_int_const(void* __this_nativeId,
 void* __d_return_value,
 int column0);
private extern(C) void*  qtd_QTreeWidgetItem_clone_const(void* __this_nativeId);
private extern(C) void*  qtd_QTreeWidgetItem_data_int_int_const(void* __this_nativeId,
 int column0,
 int role1);
private extern(C) bool  qtd_QTreeWidgetItem_operator_less_QTreeWidgetItem_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QTreeWidgetItem_read_QDataStream(void* __this_nativeId,
 void* in0);
private extern(C) void  qtd_QTreeWidgetItem_setData_int_int_QVariant(void* __this_nativeId,
 int column0,
 int role1,
 void* value2);
private extern(C) void  qtd_QTreeWidgetItem_write_QDataStream_const(void* __this_nativeId,
 void* out0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId) qtd_QTreeWidgetItem_clone_const_dispatch; }
extern(C) void* qtd_export_QTreeWidgetItem_clone_const_dispatch(void *dId){
    auto d_object = cast(QTreeWidgetItem) dId;
    QTreeWidgetItem ret_value = d_object.clone();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId, int column0, int role1) qtd_QTreeWidgetItem_data_int_int_const_dispatch; }
extern(C) void* qtd_export_QTreeWidgetItem_data_int_int_const_dispatch(void *dId, int column0, int role1){
    auto d_object = cast(QTreeWidgetItem) dId;
    QVariant ret_value = d_object.data(column0, role1);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern bool function(void *dId, void* other0) qtd_QTreeWidgetItem_operator_less_QTreeWidgetItem_const_dispatch; }
extern(C) bool qtd_export_QTreeWidgetItem_operator_less_QTreeWidgetItem_const_dispatch(void *dId, void* other0){
    auto d_object = cast(QTreeWidgetItem) dId;
    scope other0_d_ref = new QTreeWidgetItem(other0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.operator_less(other0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, void* in0) qtd_QTreeWidgetItem_read_QDataStream_dispatch; }
extern(C) void qtd_export_QTreeWidgetItem_read_QDataStream_dispatch(void *dId, void* in0){
    auto d_object = cast(QTreeWidgetItem) dId;
    scope in0_d_ref = new QDataStream(in0, QtdObjectInitFlags.onStack);
    d_object.read(in0_d_ref);
}

extern(C){ extern void function(void *dId, int column0, int role1, void* value2) qtd_QTreeWidgetItem_setData_int_int_QVariant_dispatch; }
extern(C) void qtd_export_QTreeWidgetItem_setData_int_int_QVariant_dispatch(void *dId, int column0, int role1, void* value2){
    auto d_object = cast(QTreeWidgetItem) dId;
    scope value2_d_ref = new QVariant(value2, QtdObjectInitFlags.onStack);
    d_object.setData(column0, role1, value2_d_ref);
}

extern(C){ extern void function(void *dId, void* out0) qtd_QTreeWidgetItem_write_QDataStream_const_dispatch; }
extern(C) void qtd_export_QTreeWidgetItem_write_QDataStream_const_dispatch(void *dId, void* out0){
    auto d_object = cast(QTreeWidgetItem) dId;
    scope out0_d_ref = new QDataStream(out0, QtdObjectInitFlags.onStack);
    d_object.write(out0_d_ref);
}

private extern (C) void qtd_QTreeWidgetItem_initCallBacks(void* virtuals);

extern(C) void static_init_QTreeWidgetItem() {
    void*[6] virt_arr;
    virt_arr[0] = &qtd_export_QTreeWidgetItem_clone_const_dispatch;
    virt_arr[1] = &qtd_export_QTreeWidgetItem_data_int_int_const_dispatch;
    virt_arr[2] = &qtd_export_QTreeWidgetItem_operator_less_QTreeWidgetItem_const_dispatch;
    virt_arr[3] = &qtd_export_QTreeWidgetItem_read_QDataStream_dispatch;
    virt_arr[4] = &qtd_export_QTreeWidgetItem_setData_int_int_QVariant_dispatch;
    virt_arr[5] = &qtd_export_QTreeWidgetItem_write_QDataStream_const_dispatch;
    qtd_QTreeWidgetItem_initCallBacks(virt_arr.ptr);
}

// signal handlers

