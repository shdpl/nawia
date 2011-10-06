module qt.gui.QIcon;

public import qt.gui.QIcon_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPainter;
public import qt.core.QList;
public import qt.gui.QIconEngine;
public import qt.gui.QPixmap;
public import qt.core.QVariant;
public import qt.core.QDataStream;
public import qt.core.QRect;
public import qt.gui.QIconEngineV2;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QIcon : QtdObject
{
    public enum Mode {
        Normal = 0,
        Disabled = 1,
        Active = 2,
        Selected = 3
    }

    alias Mode.Normal Normal;
    alias Mode.Disabled Disabled;
    alias Mode.Active Active;
    alias Mode.Selected Selected;

    public enum State {
        On = 0,
        Off = 1
    }

    alias State.On On;
    alias State.Off Off;


// Functions

    public this() {
        void* ret = qtd_QIcon_QIcon();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QIconEngine engine) {
        if (engine !is null) {
            engine.qtdSetOwnership(QtdObjectOwnership.native);
        }
        void* ret = qtd_QIcon_QIcon_QIconEngine(engine is null ? null : engine.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QIconEngineV2 engine) {
        if (engine !is null) {
            engine.qtdSetOwnership(QtdObjectOwnership.native);
        }
        void* ret = qtd_QIcon_QIcon_QIconEngineV2(engine is null ? null : engine.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QIcon) other) {
        void* ret = qtd_QIcon_QIcon_QIcon(other is null ? null : (cast(QIcon)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPixmap) pixmap) {
        void* ret = qtd_QIcon_QIcon_QPixmap(pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string fileName) {
        void* ret = qtd_QIcon_QIcon_string(fileName);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QSize actualSize(const(QSize) size, QIcon.Mode mode = QIcon.Mode.Normal, QIcon.State state = QIcon.State.Off) const {
        QSize res;
        qtd_QIcon_actualSize_QSize_Mode_State_const(qtdNativeId, &res, size, mode, state);
        return res;
    }

    public final void addFile(string fileName, const(QSize) size = QSize(), QIcon.Mode mode = QIcon.Mode.Normal, QIcon.State state = QIcon.State.Off) {
        qtd_QIcon_addFile_string_QSize_Mode_State(qtdNativeId, fileName, size, mode, state);
    }

    public final void addPixmap(const(QPixmap) pixmap, QIcon.Mode mode = QIcon.Mode.Normal, QIcon.State state = QIcon.State.Off) {
        qtd_QIcon_addPixmap_QPixmap_Mode_State(qtdNativeId, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, mode, state);
    }

    public final QList!(QSize) availableSizes(QIcon.Mode mode = QIcon.Mode.Normal, QIcon.State state = QIcon.State.Off) const {
        auto res = QList!(QSize).opCall();
        qtd_QIcon_availableSizes_Mode_State_const(qtdNativeId, &res, mode, state);
        return res;
    }

    public final long cacheKey() const {
        return qtd_QIcon_cacheKey_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QIcon_isNull_const(qtdNativeId);
    }

    public final string name() const {
        string res;
        qtd_QIcon_name_const(qtdNativeId, &res);
        return res;
    }

    private final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QIcon_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QIcon_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QIcon_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void paint(QPainter painter, const(QRect) rect, int alignment = 132, QIcon.Mode mode = QIcon.Mode.Normal, QIcon.State state = QIcon.State.Off) const {
        qtd_QIcon_paint_QPainter_QRect_Alignment_Mode_State_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, alignment, mode, state);
    }

    public final void paint(QPainter painter, int x, int y, int w, int h, int alignment = 132, QIcon.Mode mode = QIcon.Mode.Normal, QIcon.State state = QIcon.State.Off) const {
        qtd_QIcon_paint_QPainter_int_int_int_int_Alignment_Mode_State_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, x, y, w, h, alignment, mode, state);
    }

    public final QPixmap pixmap(const(QSize) size, QIcon.Mode mode = QIcon.Mode.Normal, QIcon.State state = QIcon.State.Off) const {
        void* ret = qtd_QIcon_pixmap_QSize_Mode_State_const(qtdNativeId, size, mode, state);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final QPixmap pixmap(int extent, QIcon.Mode mode = QIcon.Mode.Normal, QIcon.State state = QIcon.State.Off) const {
        void* ret = qtd_QIcon_pixmap_int_Mode_State_const(qtdNativeId, extent, mode, state);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final QPixmap pixmap(int w, int h, QIcon.Mode mode = QIcon.Mode.Normal, QIcon.State state = QIcon.State.Off) const {
        void* ret = qtd_QIcon_pixmap_int_int_Mode_State_const(qtdNativeId, w, h, mode, state);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public static QIcon fromTheme(string name, const(QIcon) fallback = new QIcon()) {
        void* ret = qtd_QIcon_fromTheme_string_QIcon(name, fallback is null ? null : (cast(QIcon)fallback).qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public static bool hasThemeIcon(string name) {
        return qtd_QIcon_hasThemeIcon_string(name);
    }

    public static void setThemeName(string path) {
        qtd_QIcon_setThemeName_string(path);
    }

    public static void setThemeSearchPaths(QList!(string) searchpath) {
        qtd_QIcon_setThemeSearchPaths_QList(&searchpath);
    }

    public static string themeName() {
        string res;
        qtd_QIcon_themeName(&res);
        return res;
    }

    public static QList!(string) themeSearchPaths() {
        auto res = QList!(string).opCall();
        qtd_QIcon_themeSearchPaths(&res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QIcon;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QIcon_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QIcon_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QIcon_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QIcon_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QIcon_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QIcon_QTypeInfo_isComplex();
        isStatic = qtd_QIcon_QTypeInfo_isStatic();
        isLarge = qtd_QIcon_QTypeInfo_isLarge();
        isPointer = qtd_QIcon_QTypeInfo_isPointer();
        isDummy = qtd_QIcon_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    // TEMPLATE - gui.class_from_variant_java - START
    public this(QVariant arg__1) {
        void* __qt_return_value = qtd_QIcon_QIcon_QVariant(cast(void*) this, arg__1 is null ? null : arg__1.qtdNativeId);
        super(__qt_return_value);
    }
    // TEMPLATE - gui.class_from_variant_java - END


    public final QVariant toVariant() const {
        return operator_cast_QVariant();
    }

}

    // TEMPLATE - gui.class_from_variant_java_free - START
    private extern (C) void* qtd_QIcon_QIcon_QVariant(void *d_ptr,
        void* arg__1);
    // TEMPLATE - gui.class_from_variant_java_free - END

private extern(C) void qtd_QIcon_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QIcon_native_copy(const void* orig);
extern (C) void qtd_QIcon_delete(void *ptr);
extern (C) void qtd_QIcon_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QIcon_QIcon();
private extern(C) void* qtd_QIcon_QIcon_QIconEngine(void* engine0);
private extern(C) void* qtd_QIcon_QIcon_QIconEngineV2(void* engine0);
private extern(C) void* qtd_QIcon_QIcon_QIcon(void* other0);
private extern(C) void* qtd_QIcon_QIcon_QPixmap(void* pixmap0);
private extern(C) void* qtd_QIcon_QIcon_string(string fileName0);
private extern(C) void  qtd_QIcon_actualSize_QSize_Mode_State_const(void* __this_nativeId,
 QSize * __d_return_value,
 QSize size0,
 int mode1,
 int state2);
private extern(C) void  qtd_QIcon_addFile_string_QSize_Mode_State(void* __this_nativeId,
 string fileName0,
 QSize size1,
 int mode2,
 int state3);
private extern(C) void  qtd_QIcon_addPixmap_QPixmap_Mode_State(void* __this_nativeId,
 void* pixmap0,
 int mode1,
 int state2);
private extern(C) void  qtd_QIcon_availableSizes_Mode_State_const(void* __this_nativeId,
 void* __d_return_value,
 int mode0,
 int state1);
private extern(C) long  qtd_QIcon_cacheKey_const(void* __this_nativeId);
private extern(C) bool  qtd_QIcon_isNull_const(void* __this_nativeId);
private extern(C) void  qtd_QIcon_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QIcon_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QIcon_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QIcon_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QIcon_paint_QPainter_QRect_Alignment_Mode_State_const(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int alignment2,
 int mode3,
 int state4);
private extern(C) void  qtd_QIcon_paint_QPainter_int_int_int_int_Alignment_Mode_State_const(void* __this_nativeId,
 void* painter0,
 int x1,
 int y2,
 int w3,
 int h4,
 int alignment5,
 int mode6,
 int state7);
private extern(C) void*  qtd_QIcon_pixmap_QSize_Mode_State_const(void* __this_nativeId,
 QSize size0,
 int mode1,
 int state2);
private extern(C) void*  qtd_QIcon_pixmap_int_Mode_State_const(void* __this_nativeId,
 int extent0,
 int mode1,
 int state2);
private extern(C) void*  qtd_QIcon_pixmap_int_int_Mode_State_const(void* __this_nativeId,
 int w0,
 int h1,
 int mode2,
 int state3);
private extern(C) void*  qtd_QIcon_fromTheme_string_QIcon(string name0,
 void* fallback1);
private extern(C) bool  qtd_QIcon_hasThemeIcon_string(string name0);
private extern(C) void  qtd_QIcon_setThemeName_string(string path0);
private extern(C) void  qtd_QIcon_setThemeSearchPaths_QList(void* searchpath0);
private extern(C) void  qtd_QIcon_themeName(void* __d_return_value);
private extern(C) void  qtd_QIcon_themeSearchPaths(void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QIcon() {
    QIcon.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QIcon_QTypeInfo_isComplex();
private extern (C) bool qtd_QIcon_QTypeInfo_isStatic();
private extern (C) bool qtd_QIcon_QTypeInfo_isLarge();
private extern (C) bool qtd_QIcon_QTypeInfo_isPointer();
private extern (C) bool qtd_QIcon_QTypeInfo_isDummy();
