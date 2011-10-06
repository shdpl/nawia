module qt.gui.QTextLine;

public import qt.gui.QTextLine_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPainter;
public import qt.core.QRectF;
public import qt.core.QPointF;
public import qt.gui.QTextLayout_FormatRange;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextLine : QtdObject
{
    public enum Edge {
        Leading = 0,
        Trailing = 1
    }

    alias Edge.Leading Leading;
    alias Edge.Trailing Trailing;

    public enum CursorPosition {
        CursorBetweenCharacters = 0,
        CursorOnCharacter = 1
    }

    alias CursorPosition.CursorBetweenCharacters CursorBetweenCharacters;
    alias CursorPosition.CursorOnCharacter CursorOnCharacter;


// Functions

    public this() {
        void* ret = qtd_QTextLine_QTextLine();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final double ascent() const {
        return qtd_QTextLine_ascent_const(qtdNativeId);
    }

    public final double cursorToX(int cursorPos, QTextLine.Edge edge = QTextLine.Edge.Leading) const {
        return qtd_QTextLine_cursorToX_int_Edge_const(qtdNativeId, cursorPos, edge);
    }

    public final double descent() const {
        return qtd_QTextLine_descent_const(qtdNativeId);
    }

    public final void draw(QPainter p, const(QPointF) point, QTextLayout_FormatRange selection = null) const {
        qtd_QTextLine_draw_QPainter_QPointF_nativepointerQTextLayout_FormatRange_const(qtdNativeId, p is null ? null : p.qtdNativeId, point, selection is null ? null : (cast(QTextLayout_FormatRange)selection).qtdNativeId);
    }

    public final double height() const {
        return qtd_QTextLine_height_const(qtdNativeId);
    }

    public final double horizontalAdvance() const {
        return qtd_QTextLine_horizontalAdvance_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QTextLine_isValid_const(qtdNativeId);
    }

    public final double leading() const {
        return qtd_QTextLine_leading_const(qtdNativeId);
    }

    public final bool leadingIncluded() const {
        return qtd_QTextLine_leadingIncluded_const(qtdNativeId);
    }

    public final int lineNumber() const {
        return qtd_QTextLine_lineNumber_const(qtdNativeId);
    }

    public final QRectF naturalTextRect() const {
        QRectF res;
        qtd_QTextLine_naturalTextRect_const(qtdNativeId, &res);
        return res;
    }

    public final double naturalTextWidth() const {
        return qtd_QTextLine_naturalTextWidth_const(qtdNativeId);
    }

    public final QPointF position() const {
        QPointF res;
        qtd_QTextLine_position_const(qtdNativeId, &res);
        return res;
    }

    public final QRectF rect() const {
        QRectF res;
        qtd_QTextLine_rect_const(qtdNativeId, &res);
        return res;
    }

    public final void setLeadingIncluded(bool included) {
        qtd_QTextLine_setLeadingIncluded_bool(qtdNativeId, included);
    }

    public final void setLineWidth(double width) {
        qtd_QTextLine_setLineWidth_double(qtdNativeId, width);
    }

    public final void setNumColumns(int columns) {
        qtd_QTextLine_setNumColumns_int(qtdNativeId, columns);
    }

    public final void setNumColumns(int columns, double alignmentWidth) {
        qtd_QTextLine_setNumColumns_int_double(qtdNativeId, columns, alignmentWidth);
    }

    public final void setPosition(const(QPointF) pos) {
        qtd_QTextLine_setPosition_QPointF(qtdNativeId, pos);
    }

    public final int textLength() const {
        return qtd_QTextLine_textLength_const(qtdNativeId);
    }

    public final int textStart() const {
        return qtd_QTextLine_textStart_const(qtdNativeId);
    }

    public final double width() const {
        return qtd_QTextLine_width_const(qtdNativeId);
    }

    public final double x() const {
        return qtd_QTextLine_x_const(qtdNativeId);
    }

    public final int xToCursor(double x, QTextLine.CursorPosition arg__2 = QTextLine.CursorPosition.CursorBetweenCharacters) const {
        return qtd_QTextLine_xToCursor_double_CursorPosition_const(qtdNativeId, x, arg__2);
    }

    public final double y() const {
        return qtd_QTextLine_y_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextLine;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextLine_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextLine_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextLine_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextLine_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextLine_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextLine_QTypeInfo_isComplex();
        isStatic = qtd_QTextLine_QTypeInfo_isStatic();
        isLarge = qtd_QTextLine_QTypeInfo_isLarge();
        isPointer = qtd_QTextLine_QTypeInfo_isPointer();
        isDummy = qtd_QTextLine_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public final void draw(QPainter painter, QPointF position) {
        draw(painter, position, null);
    }

}
private extern(C) void qtd_QTextLine_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextLine_native_copy(const void* orig);
extern (C) void qtd_QTextLine_delete(void *ptr);
extern (C) void qtd_QTextLine_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextLine_QTextLine();
private extern(C) double  qtd_QTextLine_ascent_const(void* __this_nativeId);
private extern(C) double  qtd_QTextLine_cursorToX_int_Edge_const(void* __this_nativeId,
 int cursorPos0,
 int edge1);
private extern(C) double  qtd_QTextLine_descent_const(void* __this_nativeId);
private extern(C) void  qtd_QTextLine_draw_QPainter_QPointF_nativepointerQTextLayout_FormatRange_const(void* __this_nativeId,
 void* p0,
 QPointF point1,
 void* selection2);
private extern(C) double  qtd_QTextLine_height_const(void* __this_nativeId);
private extern(C) double  qtd_QTextLine_horizontalAdvance_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextLine_isValid_const(void* __this_nativeId);
private extern(C) double  qtd_QTextLine_leading_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextLine_leadingIncluded_const(void* __this_nativeId);
private extern(C) int  qtd_QTextLine_lineNumber_const(void* __this_nativeId);
private extern(C) void  qtd_QTextLine_naturalTextRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) double  qtd_QTextLine_naturalTextWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QTextLine_position_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QTextLine_rect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QTextLine_setLeadingIncluded_bool(void* __this_nativeId,
 bool included0);
private extern(C) void  qtd_QTextLine_setLineWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QTextLine_setNumColumns_int(void* __this_nativeId,
 int columns0);
private extern(C) void  qtd_QTextLine_setNumColumns_int_double(void* __this_nativeId,
 int columns0,
 double alignmentWidth1);
private extern(C) void  qtd_QTextLine_setPosition_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) int  qtd_QTextLine_textLength_const(void* __this_nativeId);
private extern(C) int  qtd_QTextLine_textStart_const(void* __this_nativeId);
private extern(C) double  qtd_QTextLine_width_const(void* __this_nativeId);
private extern(C) double  qtd_QTextLine_x_const(void* __this_nativeId);
private extern(C) int  qtd_QTextLine_xToCursor_double_CursorPosition_const(void* __this_nativeId,
 double x0,
 int arg__2);
private extern(C) double  qtd_QTextLine_y_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextLine() {
    QTextLine.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextLine_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextLine_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextLine_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextLine_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextLine_QTypeInfo_isDummy();
