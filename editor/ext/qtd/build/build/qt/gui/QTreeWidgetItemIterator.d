module qt.gui.QTreeWidgetItemIterator;

public import qt.gui.QTreeWidgetItemIterator_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTreeWidgetItem;
public import qt.gui.QTreeWidget;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTreeWidgetItemIterator : QtdObject
{
    public enum IteratorFlag {
        All = 0,
        Hidden = 1,
        NotHidden = 2,
        Selected = 4,
        Unselected = 8,
        Selectable = 16,
        NotSelectable = 32,
        DragEnabled = 64,
        DragDisabled = 128,
        DropEnabled = 256,
        DropDisabled = 512,
        HasChildren = 1024,
        NoChildren = 2048,
        Checked = 4096,
        NotChecked = 8192,
        Enabled = 16384,
        Disabled = 32768,
        Editable = 65536,
        NotEditable = 131072,
        UserFlag = 16777216
    }

    alias IteratorFlag.All All;
    alias IteratorFlag.Hidden Hidden;
    alias IteratorFlag.NotHidden NotHidden;
    alias IteratorFlag.Selected Selected;
    alias IteratorFlag.Unselected Unselected;
    alias IteratorFlag.Selectable Selectable;
    alias IteratorFlag.NotSelectable NotSelectable;
    alias IteratorFlag.DragEnabled DragEnabled;
    alias IteratorFlag.DragDisabled DragDisabled;
    alias IteratorFlag.DropEnabled DropEnabled;
    alias IteratorFlag.DropDisabled DropDisabled;
    alias IteratorFlag.HasChildren HasChildren;
    alias IteratorFlag.NoChildren NoChildren;
    alias IteratorFlag.Checked Checked;
    alias IteratorFlag.NotChecked NotChecked;
    alias IteratorFlag.Enabled Enabled;
    alias IteratorFlag.Disabled Disabled;
    alias IteratorFlag.Editable Editable;
    alias IteratorFlag.NotEditable NotEditable;
    alias IteratorFlag.UserFlag UserFlag;


// Functions

    public this(QTreeWidget widget, int flags = 0) {
        void* ret = qtd_QTreeWidgetItemIterator_QTreeWidgetItemIterator_QTreeWidget_IteratorFlags(widget is null ? null : widget.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTreeWidgetItem item, int flags = 0) {
        void* ret = qtd_QTreeWidgetItemIterator_QTreeWidgetItemIterator_QTreeWidgetItem_IteratorFlags(item is null ? null : item.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTreeWidgetItemIterator) it) {
        void* ret = qtd_QTreeWidgetItemIterator_QTreeWidgetItemIterator_QTreeWidgetItemIterator(it is null ? null : (cast(QTreeWidgetItemIterator)it).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private final QTreeWidgetItem operator_multiply() const {
        void* ret = qtd_QTreeWidgetItemIterator_operator_multiply_const(qtdNativeId);
        QTreeWidgetItem __d_return_value = qtd_QTreeWidgetItem_from_ptr(ret);

        return __d_return_value;
    }

    private final QTreeWidgetItemIterator operator_increment() {
        void* ret = qtd_QTreeWidgetItemIterator_operator_increment(qtdNativeId);
        QTreeWidgetItemIterator __d_return_value = new QTreeWidgetItemIterator(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QTreeWidgetItemIterator operator_add_assign(int n) {
        void* ret = qtd_QTreeWidgetItemIterator_operator_add_assign_int(qtdNativeId, n);
        QTreeWidgetItemIterator __d_return_value = new QTreeWidgetItemIterator(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QTreeWidgetItemIterator operator_decrement() {
        void* ret = qtd_QTreeWidgetItemIterator_operator_decrement(qtdNativeId);
        QTreeWidgetItemIterator __d_return_value = new QTreeWidgetItemIterator(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QTreeWidgetItemIterator operator_subtract_assign(int n) {
        void* ret = qtd_QTreeWidgetItemIterator_operator_subtract_assign_int(qtdNativeId, n);
        QTreeWidgetItemIterator __d_return_value = new QTreeWidgetItemIterator(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTreeWidgetItemIterator;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTreeWidgetItemIterator_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTreeWidgetItemIterator_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTreeWidgetItemIterator_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTreeWidgetItemIterator_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTreeWidgetItemIterator_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTreeWidgetItemIterator_QTypeInfo_isComplex();
        isStatic = qtd_QTreeWidgetItemIterator_QTypeInfo_isStatic();
        isLarge = qtd_QTreeWidgetItemIterator_QTypeInfo_isLarge();
        isPointer = qtd_QTreeWidgetItemIterator_QTypeInfo_isPointer();
        isDummy = qtd_QTreeWidgetItemIterator_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public final QTreeWidgetItemIterator opAddAssign(int i) {
        return operator_add_assign(i);
    }

    public final QTreeWidgetItemIterator opSubAssign(int i) {
        return operator_subtract_assign(i);
    }

    public final QTreeWidgetItemIterator next() {
        return operator_increment();
    }

    public final QTreeWidgetItemIterator previous() {
        return operator_decrement();
    }

    public final QTreeWidgetItem current() {
        return operator_multiply();
    }

}
private extern(C) void qtd_QTreeWidgetItemIterator_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTreeWidgetItemIterator_native_copy(const void* orig);
extern (C) void qtd_QTreeWidgetItemIterator_delete(void *ptr);
extern (C) void qtd_QTreeWidgetItemIterator_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTreeWidgetItemIterator_QTreeWidgetItemIterator_QTreeWidget_IteratorFlags(void* widget0,
 int flags1);
private extern(C) void* qtd_QTreeWidgetItemIterator_QTreeWidgetItemIterator_QTreeWidgetItem_IteratorFlags(void* item0,
 int flags1);
private extern(C) void* qtd_QTreeWidgetItemIterator_QTreeWidgetItemIterator_QTreeWidgetItemIterator(void* it0);
private extern(C) void*  qtd_QTreeWidgetItemIterator_operator_multiply_const(void* __this_nativeId);
private extern(C) void*  qtd_QTreeWidgetItemIterator_operator_increment(void* __this_nativeId);
private extern(C) void*  qtd_QTreeWidgetItemIterator_operator_add_assign_int(void* __this_nativeId,
 int n0);
private extern(C) void*  qtd_QTreeWidgetItemIterator_operator_decrement(void* __this_nativeId);
private extern(C) void*  qtd_QTreeWidgetItemIterator_operator_subtract_assign_int(void* __this_nativeId,
 int n0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTreeWidgetItemIterator() {
    QTreeWidgetItemIterator.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTreeWidgetItemIterator_QTypeInfo_isComplex();
private extern (C) bool qtd_QTreeWidgetItemIterator_QTypeInfo_isStatic();
private extern (C) bool qtd_QTreeWidgetItemIterator_QTypeInfo_isLarge();
private extern (C) bool qtd_QTreeWidgetItemIterator_QTypeInfo_isPointer();
private extern (C) bool qtd_QTreeWidgetItemIterator_QTypeInfo_isDummy();
