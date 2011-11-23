module qt.gui.QStyleOptionComboBox;

public import qt.gui.QStyleOptionComboBox_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QIcon;
public import qt.gui.QStyleOptionComplex;
public import qt.core.QRect;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionComboBox : QStyleOptionComplex
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 983044
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionComboBox_QStyleOptionComboBox();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionComboBox) other) {
        void* ret = qtd_QStyleOptionComboBox_QStyleOptionComboBox_QStyleOptionComboBox(other is null ? null : (cast(QStyleOptionComboBox)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionComboBox_QStyleOptionComboBox_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setCurrentText(string currentText) {
        qtd_QStyleOptionComboBox_setCurrentText_string(qtdNativeId, currentText);
    }

    public final string currentText() {
        string res;
        qtd_QStyleOptionComboBox_currentText(qtdNativeId, &res);
        return res;
    }

    public final void setIconSize(QSize iconSize) {
        qtd_QStyleOptionComboBox_setIconSize_QSize(qtdNativeId, iconSize);
    }

    public final QSize iconSize() {
        QSize res;
        qtd_QStyleOptionComboBox_iconSize(qtdNativeId, &res);
        return res;
    }

    public final void setEditable(bool editable) {
        qtd_QStyleOptionComboBox_setEditable_bool(qtdNativeId, editable);
    }

    public final bool editable() {
        return qtd_QStyleOptionComboBox_editable(qtdNativeId);
    }

    public final void setFrame(bool frame) {
        qtd_QStyleOptionComboBox_setFrame_bool(qtdNativeId, frame);
    }

    public final bool frame() {
        return qtd_QStyleOptionComboBox_frame(qtdNativeId);
    }

    public final void setPopupRect(QRect popupRect) {
        qtd_QStyleOptionComboBox_setPopupRect_QRect(qtdNativeId, popupRect);
    }

    public final QRect popupRect() {
        QRect res;
        qtd_QStyleOptionComboBox_popupRect(qtdNativeId, &res);
        return res;
    }

    public final void setCurrentIcon(QIcon currentIcon) {
        qtd_QStyleOptionComboBox_setCurrentIcon_QIcon(qtdNativeId, currentIcon is null ? null : currentIcon.qtdNativeId);
    }

    public final QIcon currentIcon() {
        void* ret = qtd_QStyleOptionComboBox_currentIcon(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }
    public alias void __isQtType_QStyleOptionComboBox;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionComboBox_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionComboBox_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionComboBox_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionComboBox_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionComboBox_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionComboBox_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionComboBox_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionComboBox_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionComboBox_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionComboBox_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionComboBox_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionComboBox_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionComboBox_delete(void *ptr);
extern (C) void qtd_QStyleOptionComboBox_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionComboBox_QStyleOptionComboBox();
private extern(C) void* qtd_QStyleOptionComboBox_QStyleOptionComboBox_QStyleOptionComboBox(void* other0);
private extern(C) void* qtd_QStyleOptionComboBox_QStyleOptionComboBox_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionComboBox_setCurrentText_string(void* __this_nativeId,
 string currentText0);
private extern(C) void  qtd_QStyleOptionComboBox_currentText(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStyleOptionComboBox_setIconSize_QSize(void* __this_nativeId,
 QSize iconSize0);
private extern(C) void  qtd_QStyleOptionComboBox_iconSize(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QStyleOptionComboBox_setEditable_bool(void* __this_nativeId,
 bool editable0);
private extern(C) bool  qtd_QStyleOptionComboBox_editable(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionComboBox_setFrame_bool(void* __this_nativeId,
 bool frame0);
private extern(C) bool  qtd_QStyleOptionComboBox_frame(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionComboBox_setPopupRect_QRect(void* __this_nativeId,
 QRect popupRect0);
private extern(C) void  qtd_QStyleOptionComboBox_popupRect(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QStyleOptionComboBox_setCurrentIcon_QIcon(void* __this_nativeId,
 void* currentIcon0);
private extern(C) void*  qtd_QStyleOptionComboBox_currentIcon(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionComboBox_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionComboBox() {
    QStyleOptionComboBox.QTypeInfo.init();
    qtd_QStyleOptionComboBox_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionComboBox_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionComboBox_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionComboBox_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionComboBox_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionComboBox_QTypeInfo_isDummy();
