module qt.gui.QStyleOptionGroupBox;

public import qt.gui.QStyleOptionGroupBox_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QColor;
public import qt.gui.QStyleOptionComplex;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionGroupBox : QStyleOptionComplex
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 983047
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionGroupBox_QStyleOptionGroupBox();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionGroupBox) other) {
        void* ret = qtd_QStyleOptionGroupBox_QStyleOptionGroupBox_QStyleOptionGroupBox(other is null ? null : (cast(QStyleOptionGroupBox)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionGroupBox_QStyleOptionGroupBox_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setLineWidth(int lineWidth) {
        qtd_QStyleOptionGroupBox_setLineWidth_int(qtdNativeId, lineWidth);
    }

    public final int lineWidth() {
        return qtd_QStyleOptionGroupBox_lineWidth(qtdNativeId);
    }

    public final void setFeatures(int features) {
        qtd_QStyleOptionGroupBox_setFeatures_FrameFeatures(qtdNativeId, features);
    }

    public final int features() {
        return qtd_QStyleOptionGroupBox_features(qtdNativeId);
    }

    public final void setTextAlignment(int textAlignment) {
        qtd_QStyleOptionGroupBox_setTextAlignment_Alignment(qtdNativeId, textAlignment);
    }

    public final int textAlignment() {
        return qtd_QStyleOptionGroupBox_textAlignment(qtdNativeId);
    }

    public final void setMidLineWidth(int midLineWidth) {
        qtd_QStyleOptionGroupBox_setMidLineWidth_int(qtdNativeId, midLineWidth);
    }

    public final int midLineWidth() {
        return qtd_QStyleOptionGroupBox_midLineWidth(qtdNativeId);
    }

    public final void setText(string text) {
        qtd_QStyleOptionGroupBox_setText_string(qtdNativeId, text);
    }

    public final string text() {
        string res;
        qtd_QStyleOptionGroupBox_text(qtdNativeId, &res);
        return res;
    }

    public final void setTextColor(QColor textColor) {
        qtd_QStyleOptionGroupBox_setTextColor_QColor(qtdNativeId, textColor is null ? null : textColor.qtdNativeId);
    }

    public final QColor textColor() {
        void* ret = qtd_QStyleOptionGroupBox_textColor(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }
    public alias void __isQtType_QStyleOptionGroupBox;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionGroupBox_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionGroupBox_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionGroupBox_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionGroupBox_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionGroupBox_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionGroupBox_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionGroupBox_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionGroupBox_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionGroupBox_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionGroupBox_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionGroupBox_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionGroupBox_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionGroupBox_delete(void *ptr);
extern (C) void qtd_QStyleOptionGroupBox_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionGroupBox_QStyleOptionGroupBox();
private extern(C) void* qtd_QStyleOptionGroupBox_QStyleOptionGroupBox_QStyleOptionGroupBox(void* other0);
private extern(C) void* qtd_QStyleOptionGroupBox_QStyleOptionGroupBox_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionGroupBox_setLineWidth_int(void* __this_nativeId,
 int lineWidth0);
private extern(C) int  qtd_QStyleOptionGroupBox_lineWidth(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionGroupBox_setFeatures_FrameFeatures(void* __this_nativeId,
 int features0);
private extern(C) int  qtd_QStyleOptionGroupBox_features(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionGroupBox_setTextAlignment_Alignment(void* __this_nativeId,
 int textAlignment0);
private extern(C) int  qtd_QStyleOptionGroupBox_textAlignment(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionGroupBox_setMidLineWidth_int(void* __this_nativeId,
 int midLineWidth0);
private extern(C) int  qtd_QStyleOptionGroupBox_midLineWidth(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionGroupBox_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QStyleOptionGroupBox_text(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStyleOptionGroupBox_setTextColor_QColor(void* __this_nativeId,
 void* textColor0);
private extern(C) void*  qtd_QStyleOptionGroupBox_textColor(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionGroupBox_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionGroupBox() {
    QStyleOptionGroupBox.QTypeInfo.init();
    qtd_QStyleOptionGroupBox_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionGroupBox_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionGroupBox_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionGroupBox_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionGroupBox_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionGroupBox_QTypeInfo_isDummy();
