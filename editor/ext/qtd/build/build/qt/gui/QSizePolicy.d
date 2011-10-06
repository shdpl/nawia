module qt.gui.QSizePolicy;

public import qt.gui.QSizePolicy_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QVariant;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSizePolicy : QtdObject
{
    public enum ControlType {
        DefaultType = 1,
        ButtonBox = 2,
        CheckBox = 4,
        ComboBox = 8,
        Frame = 16,
        GroupBox = 32,
        Label = 64,
        Line = 128,
        LineEdit = 256,
        PushButton = 512,
        RadioButton = 1024,
        Slider = 2048,
        SpinBox = 4096,
        TabWidget = 8192,
        ToolButton = 16384
    }

    alias ControlType.DefaultType DefaultType;
    alias ControlType.ButtonBox ButtonBox;
    alias ControlType.CheckBox CheckBox;
    alias ControlType.ComboBox ComboBox;
    alias ControlType.Frame Frame;
    alias ControlType.GroupBox GroupBox;
    alias ControlType.Label Label;
    alias ControlType.Line Line;
    alias ControlType.LineEdit LineEdit;
    alias ControlType.PushButton PushButton;
    alias ControlType.RadioButton RadioButton;
    alias ControlType.Slider Slider;
    alias ControlType.SpinBox SpinBox;
    alias ControlType.TabWidget TabWidget;
    alias ControlType.ToolButton ToolButton;

    public enum PolicyFlag {
        GrowFlag = 1,
        ExpandFlag = 2,
        ShrinkFlag = 4,
        IgnoreFlag = 8
    }

    alias PolicyFlag.GrowFlag GrowFlag;
    alias PolicyFlag.ExpandFlag ExpandFlag;
    alias PolicyFlag.ShrinkFlag ShrinkFlag;
    alias PolicyFlag.IgnoreFlag IgnoreFlag;

    public enum Policy {
        Fixed = 0,
        Minimum = 1,
        Maximum = 4,
        Preferred = 5,
        MinimumExpanding = 3,
        Expanding = 7,
        Ignored = 13
    }

    alias Policy.Fixed Fixed;
    alias Policy.Minimum Minimum;
    alias Policy.Maximum Maximum;
    alias Policy.Preferred Preferred;
    alias Policy.MinimumExpanding MinimumExpanding;
    alias Policy.Expanding Expanding;
    alias Policy.Ignored Ignored;


// Functions

    public this() {
        void* ret = qtd_QSizePolicy_QSizePolicy();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QSizePolicy.Policy horizontal, QSizePolicy.Policy vertical) {
        void* ret = qtd_QSizePolicy_QSizePolicy_Policy_Policy(horizontal, vertical);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QSizePolicy.Policy horizontal, QSizePolicy.Policy vertical, QSizePolicy.ControlType type) {
        void* ret = qtd_QSizePolicy_QSizePolicy_Policy_Policy_ControlType(horizontal, vertical, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QSizePolicy.ControlType controlType() const {
        return cast(QSizePolicy.ControlType) qtd_QSizePolicy_controlType_const(qtdNativeId);
    }

    public final int expandingDirections() const {
        return qtd_QSizePolicy_expandingDirections_const(qtdNativeId);
    }

    public final bool hasHeightForWidth() const {
        return qtd_QSizePolicy_hasHeightForWidth_const(qtdNativeId);
    }

    public final QSizePolicy.Policy horizontalPolicy() const {
        return cast(QSizePolicy.Policy) qtd_QSizePolicy_horizontalPolicy_const(qtdNativeId);
    }

    public final int horizontalStretch() const {
        return qtd_QSizePolicy_horizontalStretch_const(qtdNativeId);
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QSizePolicy_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QSizePolicy_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QSizePolicy) s) const {
        return qtd_QSizePolicy_operator_equal_QSizePolicy_const(qtdNativeId, s is null ? null : (cast(QSizePolicy)s).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QSizePolicy_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setControlType(QSizePolicy.ControlType type) {
        qtd_QSizePolicy_setControlType_ControlType(qtdNativeId, type);
    }

    public final void setHeightForWidth(bool b) {
        qtd_QSizePolicy_setHeightForWidth_bool(qtdNativeId, b);
    }

    public final void setHorizontalPolicy(QSizePolicy.Policy d) {
        qtd_QSizePolicy_setHorizontalPolicy_Policy(qtdNativeId, d);
    }

    public final void setHorizontalStretch(ubyte stretchFactor) {
        qtd_QSizePolicy_setHorizontalStretch_ubyte(qtdNativeId, stretchFactor);
    }

    public final void setVerticalPolicy(QSizePolicy.Policy d) {
        qtd_QSizePolicy_setVerticalPolicy_Policy(qtdNativeId, d);
    }

    public final void setVerticalStretch(ubyte stretchFactor) {
        qtd_QSizePolicy_setVerticalStretch_ubyte(qtdNativeId, stretchFactor);
    }

    public final void transpose() {
        qtd_QSizePolicy_transpose(qtdNativeId);
    }

    public final QSizePolicy.Policy verticalPolicy() const {
        return cast(QSizePolicy.Policy) qtd_QSizePolicy_verticalPolicy_const(qtdNativeId);
    }

    public final int verticalStretch() const {
        return qtd_QSizePolicy_verticalStretch_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QSizePolicy;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QSizePolicy_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QSizePolicy_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QSizePolicy_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QSizePolicy_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QSizePolicy_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QSizePolicy_QTypeInfo_isComplex();
        isStatic = qtd_QSizePolicy_QTypeInfo_isStatic();
        isLarge = qtd_QSizePolicy_QTypeInfo_isLarge();
        isPointer = qtd_QSizePolicy_QTypeInfo_isPointer();
        isDummy = qtd_QSizePolicy_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QSizePolicy_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QSizePolicy_native_copy(const void* orig);
extern (C) void qtd_QSizePolicy_delete(void *ptr);
extern (C) void qtd_QSizePolicy_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSizePolicy_QSizePolicy();
private extern(C) void* qtd_QSizePolicy_QSizePolicy_Policy_Policy(int horizontal0,
 int vertical1);
private extern(C) void* qtd_QSizePolicy_QSizePolicy_Policy_Policy_ControlType(int horizontal0,
 int vertical1,
 int type2);
private extern(C) int  qtd_QSizePolicy_controlType_const(void* __this_nativeId);
private extern(C) int  qtd_QSizePolicy_expandingDirections_const(void* __this_nativeId);
private extern(C) bool  qtd_QSizePolicy_hasHeightForWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QSizePolicy_horizontalPolicy_const(void* __this_nativeId);
private extern(C) int  qtd_QSizePolicy_horizontalStretch_const(void* __this_nativeId);
private extern(C) void*  qtd_QSizePolicy_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QSizePolicy_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QSizePolicy_operator_equal_QSizePolicy_const(void* __this_nativeId,
 void* s0);
private extern(C) void  qtd_QSizePolicy_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSizePolicy_setControlType_ControlType(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QSizePolicy_setHeightForWidth_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QSizePolicy_setHorizontalPolicy_Policy(void* __this_nativeId,
 int d0);
private extern(C) void  qtd_QSizePolicy_setHorizontalStretch_ubyte(void* __this_nativeId,
 ubyte stretchFactor0);
private extern(C) void  qtd_QSizePolicy_setVerticalPolicy_Policy(void* __this_nativeId,
 int d0);
private extern(C) void  qtd_QSizePolicy_setVerticalStretch_ubyte(void* __this_nativeId,
 ubyte stretchFactor0);
private extern(C) void  qtd_QSizePolicy_transpose(void* __this_nativeId);
private extern(C) int  qtd_QSizePolicy_verticalPolicy_const(void* __this_nativeId);
private extern(C) int  qtd_QSizePolicy_verticalStretch_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QSizePolicy() {
    QSizePolicy.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QSizePolicy_QTypeInfo_isComplex();
private extern (C) bool qtd_QSizePolicy_QTypeInfo_isStatic();
private extern (C) bool qtd_QSizePolicy_QTypeInfo_isLarge();
private extern (C) bool qtd_QSizePolicy_QTypeInfo_isPointer();
private extern (C) bool qtd_QSizePolicy_QTypeInfo_isDummy();
