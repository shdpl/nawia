module qt.gui.QListWidgetItem;

public import qt.gui.QListWidgetItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QBrush;
public import qt.gui.QListWidget;
public import qt.gui.QIcon;
public import qt.gui.QFont;
public import qt.core.QDataStream;
public import qt.core.QVariant;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QListWidgetItem : QtdObject
{
    public enum ItemType {
        Type = 0,
        UserType = 1000
    }

    alias ItemType.Type Type;
    alias ItemType.UserType UserType;


// Functions

    public this(QListWidget view = null, int type = 0) {
        void* ret = qtd_QListWidgetItem_QListWidgetItem_QListWidget_int(cast(void*) this, view is null ? null : view.qtdNativeId, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QIcon) icon, string text, QListWidget view = null, int type = 0) {
        void* ret = qtd_QListWidgetItem_QListWidgetItem_QIcon_string_QListWidget_int(cast(void*) this, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text, view is null ? null : view.qtdNativeId, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QListWidgetItem other) {
        void* ret = qtd_QListWidgetItem_QListWidgetItem_QListWidgetItem(cast(void*) this, other is null ? null : (cast(QListWidgetItem)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, QListWidget view = null, int type = 0) {
        void* ret = qtd_QListWidgetItem_QListWidgetItem_string_QListWidget_int(cast(void*) this, text, view is null ? null : view.qtdNativeId, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QBrush background() const {
        void* ret = qtd_QListWidgetItem_background_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final Qt.CheckState checkState() const {
        return cast(Qt.CheckState) qtd_QListWidgetItem_checkState_const(qtdNativeId);
    }

    public final int flags() const {
        return qtd_QListWidgetItem_flags_const(qtdNativeId);
    }

    public final QFont font() const {
        void* ret = qtd_QListWidgetItem_font_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final QBrush foreground() const {
        void* ret = qtd_QListWidgetItem_foreground_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final QIcon icon() const {
        void* ret = qtd_QListWidgetItem_icon_const(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final bool isHidden() const {
        return qtd_QListWidgetItem_isHidden_const(qtdNativeId);
    }

    public final bool isSelected() const {
        return qtd_QListWidgetItem_isSelected_const(qtdNativeId);
    }

    public final QListWidget listWidget() const {
        void *ret = qtd_QListWidgetItem_listWidget_const(qtdNativeId);
        QListWidget __d_return_value = QListWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream out_) {
        qtd_QListWidgetItem_writeTo_QDataStream(qtdNativeId, out_ is null ? null : out_.qtdNativeId);
    }

    public final void readFrom(QDataStream in_) {
        qtd_QListWidgetItem_readFrom_QDataStream(qtdNativeId, in_ is null ? null : in_.qtdNativeId);
    }

    public final void setBackground(const(QBrush) brush) {
        qtd_QListWidgetItem_setBackground_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setCheckState(Qt.CheckState state) {
        qtd_QListWidgetItem_setCheckState_CheckState(qtdNativeId, state);
    }

    public final void setFlags(int flags) {
        qtd_QListWidgetItem_setFlags_ItemFlags(qtdNativeId, flags);
    }

    public final void setFont(const(QFont) font) {
        qtd_QListWidgetItem_setFont_QFont(qtdNativeId, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    public final void setForeground(const(QBrush) brush) {
        qtd_QListWidgetItem_setForeground_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setHidden(bool hide) {
        qtd_QListWidgetItem_setHidden_bool(qtdNativeId, hide);
    }

    public final void setIcon(const(QIcon) icon) {
        qtd_QListWidgetItem_setIcon_QIcon(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setSelected(bool select) {
        qtd_QListWidgetItem_setSelected_bool(qtdNativeId, select);
    }

    public final void setSizeHint(const(QSize) size) {
        qtd_QListWidgetItem_setSizeHint_QSize(qtdNativeId, size);
    }

    public final void setStatusTip(string statusTip) {
        qtd_QListWidgetItem_setStatusTip_string(qtdNativeId, statusTip);
    }

    public final void setText(string text) {
        qtd_QListWidgetItem_setText_string(qtdNativeId, text);
    }

    public final void setTextAlignment(int alignment) {
        qtd_QListWidgetItem_setTextAlignment_int(qtdNativeId, alignment);
    }

    public final void setToolTip(string toolTip) {
        qtd_QListWidgetItem_setToolTip_string(qtdNativeId, toolTip);
    }

    public final void setWhatsThis(string whatsThis) {
        qtd_QListWidgetItem_setWhatsThis_string(qtdNativeId, whatsThis);
    }

    public final QSize sizeHint() const {
        QSize res;
        qtd_QListWidgetItem_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public final string statusTip() const {
        string res;
        qtd_QListWidgetItem_statusTip_const(qtdNativeId, &res);
        return res;
    }

    public final string text() const {
        string res;
        qtd_QListWidgetItem_text_const(qtdNativeId, &res);
        return res;
    }

    public final int textAlignment() const {
        return qtd_QListWidgetItem_textAlignment_const(qtdNativeId);
    }

    public final string toolTip() const {
        string res;
        qtd_QListWidgetItem_toolTip_const(qtdNativeId, &res);
        return res;
    }

    public final int type() const {
        return qtd_QListWidgetItem_type_const(qtdNativeId);
    }

    public final string whatsThis() const {
        string res;
        qtd_QListWidgetItem_whatsThis_const(qtdNativeId, &res);
        return res;
    }

    public QListWidgetItem clone() const {
        void* ret = qtd_QListWidgetItem_clone_const(qtdNativeId);
        QListWidgetItem __d_return_value = qtd_QListWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    public QVariant data(int role) const {
        void* ret = qtd_QListWidgetItem_data_int_const(qtdNativeId, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool operator_less(QListWidgetItem other) const {
        return qtd_QListWidgetItem_operator_less_QListWidgetItem_const(qtdNativeId, other is null ? null : (cast(QListWidgetItem)other).qtdNativeId);
    }

    public void read(QDataStream in_) {
        qtd_QListWidgetItem_read_QDataStream(qtdNativeId, in_ is null ? null : in_.qtdNativeId);
    }

    public void setData(int role, QVariant value) {
        qtd_QListWidgetItem_setData_int_QVariant(qtdNativeId, role, value is null ? null : value.qtdNativeId);
    }

    public void write(QDataStream out_) const {
        qtd_QListWidgetItem_write_QDataStream_const(qtdNativeId, out_ is null ? null : out_.qtdNativeId);
    }
// Field accessors
    static QListWidgetItem __getObject(void* nativeId) {
        return qtd_QListWidgetItem_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QListWidgetItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QListWidgetItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QListWidgetItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QListWidgetItem_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QListWidgetItem_entity(void *q_ptr);

QListWidgetItem qtd_QListWidgetItem_from_ptr(void* ret) {
    void* d_obj = __QListWidgetItem_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QListWidgetItem) d_obj_ref;
    } else {
        auto return_value = new QListWidgetItem(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QListWidgetItem_delete(void *ptr);
extern (C) void qtd_QListWidgetItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QListWidgetItem_QListWidgetItem_QListWidget_int(void *d_ptr,
 void* view0,
 int type1);
private extern(C) void* qtd_QListWidgetItem_QListWidgetItem_QIcon_string_QListWidget_int(void *d_ptr,
 void* icon0,
 string text1,
 void* view2,
 int type3);
private extern(C) void* qtd_QListWidgetItem_QListWidgetItem_QListWidgetItem(void *d_ptr,
 void* other0);
private extern(C) void* qtd_QListWidgetItem_QListWidgetItem_string_QListWidget_int(void *d_ptr,
 string text0,
 void* view1,
 int type2);
private extern(C) void*  qtd_QListWidgetItem_background_const(void* __this_nativeId);
private extern(C) int  qtd_QListWidgetItem_checkState_const(void* __this_nativeId);
private extern(C) int  qtd_QListWidgetItem_flags_const(void* __this_nativeId);
private extern(C) void*  qtd_QListWidgetItem_font_const(void* __this_nativeId);
private extern(C) void*  qtd_QListWidgetItem_foreground_const(void* __this_nativeId);
private extern(C) void*  qtd_QListWidgetItem_icon_const(void* __this_nativeId);
private extern(C) bool  qtd_QListWidgetItem_isHidden_const(void* __this_nativeId);
private extern(C) bool  qtd_QListWidgetItem_isSelected_const(void* __this_nativeId);
private extern(C) void*  qtd_QListWidgetItem_listWidget_const(void* __this_nativeId);
private extern(C) void  qtd_QListWidgetItem_writeTo_QDataStream(void* __this_nativeId,
 void* out0);
private extern(C) void  qtd_QListWidgetItem_readFrom_QDataStream(void* __this_nativeId,
 void* in0);
private extern(C) void  qtd_QListWidgetItem_setBackground_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QListWidgetItem_setCheckState_CheckState(void* __this_nativeId,
 int state0);
private extern(C) void  qtd_QListWidgetItem_setFlags_ItemFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QListWidgetItem_setFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void  qtd_QListWidgetItem_setForeground_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QListWidgetItem_setHidden_bool(void* __this_nativeId,
 bool hide0);
private extern(C) void  qtd_QListWidgetItem_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void  qtd_QListWidgetItem_setSelected_bool(void* __this_nativeId,
 bool select0);
private extern(C) void  qtd_QListWidgetItem_setSizeHint_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QListWidgetItem_setStatusTip_string(void* __this_nativeId,
 string statusTip0);
private extern(C) void  qtd_QListWidgetItem_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QListWidgetItem_setTextAlignment_int(void* __this_nativeId,
 int alignment0);
private extern(C) void  qtd_QListWidgetItem_setToolTip_string(void* __this_nativeId,
 string toolTip0);
private extern(C) void  qtd_QListWidgetItem_setWhatsThis_string(void* __this_nativeId,
 string whatsThis0);
private extern(C) void  qtd_QListWidgetItem_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QListWidgetItem_statusTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QListWidgetItem_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QListWidgetItem_textAlignment_const(void* __this_nativeId);
private extern(C) void  qtd_QListWidgetItem_toolTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QListWidgetItem_type_const(void* __this_nativeId);
private extern(C) void  qtd_QListWidgetItem_whatsThis_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QListWidgetItem_clone_const(void* __this_nativeId);
private extern(C) void*  qtd_QListWidgetItem_data_int_const(void* __this_nativeId,
 int role0);
private extern(C) bool  qtd_QListWidgetItem_operator_less_QListWidgetItem_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QListWidgetItem_read_QDataStream(void* __this_nativeId,
 void* in0);
private extern(C) void  qtd_QListWidgetItem_setData_int_QVariant(void* __this_nativeId,
 int role0,
 void* value1);
private extern(C) void  qtd_QListWidgetItem_write_QDataStream_const(void* __this_nativeId,
 void* out0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId) qtd_QListWidgetItem_clone_const_dispatch; }
extern(C) void* qtd_export_QListWidgetItem_clone_const_dispatch(void *dId){
    auto d_object = cast(QListWidgetItem) dId;
    QListWidgetItem ret_value = d_object.clone();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId, int role0) qtd_QListWidgetItem_data_int_const_dispatch; }
extern(C) void* qtd_export_QListWidgetItem_data_int_const_dispatch(void *dId, int role0){
    auto d_object = cast(QListWidgetItem) dId;
    QVariant ret_value = d_object.data(role0);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern bool function(void *dId, void* other0) qtd_QListWidgetItem_operator_less_QListWidgetItem_const_dispatch; }
extern(C) bool qtd_export_QListWidgetItem_operator_less_QListWidgetItem_const_dispatch(void *dId, void* other0){
    auto d_object = cast(QListWidgetItem) dId;
    scope other0_d_ref = new QListWidgetItem(other0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.operator_less(other0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, void* in0) qtd_QListWidgetItem_read_QDataStream_dispatch; }
extern(C) void qtd_export_QListWidgetItem_read_QDataStream_dispatch(void *dId, void* in0){
    auto d_object = cast(QListWidgetItem) dId;
    scope in0_d_ref = new QDataStream(in0, QtdObjectInitFlags.onStack);
    d_object.read(in0_d_ref);
}

extern(C){ extern void function(void *dId, int role0, void* value1) qtd_QListWidgetItem_setData_int_QVariant_dispatch; }
extern(C) void qtd_export_QListWidgetItem_setData_int_QVariant_dispatch(void *dId, int role0, void* value1){
    auto d_object = cast(QListWidgetItem) dId;
    scope value1_d_ref = new QVariant(value1, QtdObjectInitFlags.onStack);
    d_object.setData(role0, value1_d_ref);
}

extern(C){ extern void function(void *dId, void* out0) qtd_QListWidgetItem_write_QDataStream_const_dispatch; }
extern(C) void qtd_export_QListWidgetItem_write_QDataStream_const_dispatch(void *dId, void* out0){
    auto d_object = cast(QListWidgetItem) dId;
    scope out0_d_ref = new QDataStream(out0, QtdObjectInitFlags.onStack);
    d_object.write(out0_d_ref);
}

private extern (C) void qtd_QListWidgetItem_initCallBacks(void* virtuals);

extern(C) void static_init_QListWidgetItem() {
    void*[6] virt_arr;
    virt_arr[0] = &qtd_export_QListWidgetItem_clone_const_dispatch;
    virt_arr[1] = &qtd_export_QListWidgetItem_data_int_const_dispatch;
    virt_arr[2] = &qtd_export_QListWidgetItem_operator_less_QListWidgetItem_const_dispatch;
    virt_arr[3] = &qtd_export_QListWidgetItem_read_QDataStream_dispatch;
    virt_arr[4] = &qtd_export_QListWidgetItem_setData_int_QVariant_dispatch;
    virt_arr[5] = &qtd_export_QListWidgetItem_write_QDataStream_const_dispatch;
    qtd_QListWidgetItem_initCallBacks(virt_arr.ptr);
}

// signal handlers

