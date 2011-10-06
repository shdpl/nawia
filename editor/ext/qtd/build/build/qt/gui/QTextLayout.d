module qt.gui.QTextLayout;

public import qt.gui.QTextLayout_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextBlock;
public import qt.gui.QTextLine;
public import qt.gui.QPainter;
public import qt.core.QList;
public import qt.core.QRectF;
public import qt.gui.QTextOption;
public import qt.gui.QFont;
public import qt.core.QPointF;
public import qt.gui.QTextLayout_FormatRange;
public import qt.gui.QPaintDevice;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextLayout : QtdObject
{
    public enum CursorMode {
        SkipCharacters = 0,
        SkipWords = 1
    }

    alias CursorMode.SkipCharacters SkipCharacters;
    alias CursorMode.SkipWords SkipWords;


// Functions

    public this() {
        void* ret = qtd_QTextLayout_QTextLayout(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text) {
        void* ret = qtd_QTextLayout_QTextLayout_string(cast(void*) this, text);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, const(QFont) font, IQPaintDevice paintdevice = null) {
        void* ret = qtd_QTextLayout_QTextLayout_string_QFont_QPaintDevice(cast(void*) this, text, font is null ? null : (cast(QFont)font).qtdNativeId, paintdevice is null ? null : paintdevice.__ptr_IQPaintDevice);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextBlock) b) {
        void* ret = qtd_QTextLayout_QTextLayout_QTextBlock(cast(void*) this, b is null ? null : (cast(QTextBlock)b).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QList!(QTextLayout_FormatRange) additionalFormats() const {
        auto res = QList!(QTextLayout_FormatRange).opCall();
        qtd_QTextLayout_additionalFormats_const(qtdNativeId, &res);
        return res;
    }

    public final void beginLayout() {
        qtd_QTextLayout_beginLayout(qtdNativeId);
    }

    public final QRectF boundingRect() const {
        QRectF res;
        qtd_QTextLayout_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final bool cacheEnabled() const {
        return qtd_QTextLayout_cacheEnabled_const(qtdNativeId);
    }

    public final void clearAdditionalFormats() {
        qtd_QTextLayout_clearAdditionalFormats(qtdNativeId);
    }

    public final void clearLayout() {
        qtd_QTextLayout_clearLayout(qtdNativeId);
    }

    public final QTextLine createLine() {
        void* ret = qtd_QTextLayout_createLine(qtdNativeId);
        QTextLine __d_return_value = new QTextLine(ret);
        return __d_return_value;
    }

    public final void draw(QPainter p, const(QPointF) pos, QTextLayout_FormatRange[] selections, const(QRectF) clip = QRectF()) const {
        qtd_QTextLayout_draw_QPainter_QPointF_QVector_QRectF_const(qtdNativeId, p is null ? null : p.qtdNativeId, pos, &selections, clip);
    }

    public final void drawCursor(QPainter p, const(QPointF) pos, int cursorPosition) const {
        qtd_QTextLayout_drawCursor_QPainter_QPointF_int_const(qtdNativeId, p is null ? null : p.qtdNativeId, pos, cursorPosition);
    }

    public final void drawCursor(QPainter p, const(QPointF) pos, int cursorPosition, int width) const {
        qtd_QTextLayout_drawCursor_QPainter_QPointF_int_int_const(qtdNativeId, p is null ? null : p.qtdNativeId, pos, cursorPosition, width);
    }

    public final void endLayout() {
        qtd_QTextLayout_endLayout(qtdNativeId);
    }

    public final QFont font() const {
        void* ret = qtd_QTextLayout_font_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final bool isValidCursorPosition(int pos) const {
        return qtd_QTextLayout_isValidCursorPosition_int_const(qtdNativeId, pos);
    }

    public final QTextLine lineAt(int i) const {
        void* ret = qtd_QTextLayout_lineAt_int_const(qtdNativeId, i);
        QTextLine __d_return_value = new QTextLine(ret);
        return __d_return_value;
    }

    public final int lineCount() const {
        return qtd_QTextLayout_lineCount_const(qtdNativeId);
    }

    public final QTextLine lineForTextPosition(int pos) const {
        void* ret = qtd_QTextLayout_lineForTextPosition_int_const(qtdNativeId, pos);
        QTextLine __d_return_value = new QTextLine(ret);
        return __d_return_value;
    }

    public final double maximumWidth() const {
        return qtd_QTextLayout_maximumWidth_const(qtdNativeId);
    }

    public final double minimumWidth() const {
        return qtd_QTextLayout_minimumWidth_const(qtdNativeId);
    }

    public final int nextCursorPosition(int oldPos, QTextLayout.CursorMode mode = QTextLayout.CursorMode.SkipCharacters) const {
        return qtd_QTextLayout_nextCursorPosition_int_CursorMode_const(qtdNativeId, oldPos, mode);
    }

    public final QPointF position() const {
        QPointF res;
        qtd_QTextLayout_position_const(qtdNativeId, &res);
        return res;
    }

    public final int preeditAreaPosition() const {
        return qtd_QTextLayout_preeditAreaPosition_const(qtdNativeId);
    }

    public final string preeditAreaText() const {
        string res;
        qtd_QTextLayout_preeditAreaText_const(qtdNativeId, &res);
        return res;
    }

    public final int previousCursorPosition(int oldPos, QTextLayout.CursorMode mode = QTextLayout.CursorMode.SkipCharacters) const {
        return qtd_QTextLayout_previousCursorPosition_int_CursorMode_const(qtdNativeId, oldPos, mode);
    }

    public final void setAdditionalFormats(QList!(QTextLayout_FormatRange) overrides) {
        qtd_QTextLayout_setAdditionalFormats_QList(qtdNativeId, &overrides);
    }

    public final void setCacheEnabled(bool enable) {
        qtd_QTextLayout_setCacheEnabled_bool(qtdNativeId, enable);
    }

    public final void setFlags(int flags) {
        qtd_QTextLayout_setFlags_int(qtdNativeId, flags);
    }

    public final void setFont(const(QFont) f) {
        qtd_QTextLayout_setFont_QFont(qtdNativeId, f is null ? null : (cast(QFont)f).qtdNativeId);
    }

    public final void setPosition(const(QPointF) p) {
        qtd_QTextLayout_setPosition_QPointF(qtdNativeId, p);
    }

    public final void setPreeditArea(int position, string text) {
        qtd_QTextLayout_setPreeditArea_int_string(qtdNativeId, position, text);
    }

    public final void setText(string string) {
        qtd_QTextLayout_setText_string(qtdNativeId, string);
    }

    public final void setTextOption(const(QTextOption) option) {
        qtd_QTextLayout_setTextOption_QTextOption(qtdNativeId, option is null ? null : (cast(QTextOption)option).qtdNativeId);
    }

    public final string text() const {
        string res;
        qtd_QTextLayout_text_const(qtdNativeId, &res);
        return res;
    }

    public final QTextOption textOption() const {
        void* ret = qtd_QTextLayout_textOption_const(qtdNativeId);
        QTextOption __d_return_value = new QTextOption(ret);
        return __d_return_value;
    }
// Field accessors
    static QTextLayout __getObject(void* nativeId) {
        return qtd_QTextLayout_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QTextLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextLayout_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextLayout_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextLayout_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QTextLayout qtd_QTextLayout_from_ptr(void* ret) {
    auto return_value = new QTextLayout(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QTextLayout_delete(void *ptr);
extern (C) void qtd_QTextLayout_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextLayout_QTextLayout(void *d_ptr);
private extern(C) void* qtd_QTextLayout_QTextLayout_string(void *d_ptr,
 string text0);
private extern(C) void* qtd_QTextLayout_QTextLayout_string_QFont_QPaintDevice(void *d_ptr,
 string text0,
 void* font1,
 void* paintdevice2);
private extern(C) void* qtd_QTextLayout_QTextLayout_QTextBlock(void *d_ptr,
 void* b0);
private extern(C) void  qtd_QTextLayout_additionalFormats_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextLayout_beginLayout(void* __this_nativeId);
private extern(C) void  qtd_QTextLayout_boundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) bool  qtd_QTextLayout_cacheEnabled_const(void* __this_nativeId);
private extern(C) void  qtd_QTextLayout_clearAdditionalFormats(void* __this_nativeId);
private extern(C) void  qtd_QTextLayout_clearLayout(void* __this_nativeId);
private extern(C) void*  qtd_QTextLayout_createLine(void* __this_nativeId);
private extern(C) void  qtd_QTextLayout_draw_QPainter_QPointF_QVector_QRectF_const(void* __this_nativeId,
 void* p0,
 QPointF pos1,
 DArray* selections2,
 QRectF clip3);
private extern(C) void  qtd_QTextLayout_drawCursor_QPainter_QPointF_int_const(void* __this_nativeId,
 void* p0,
 QPointF pos1,
 int cursorPosition2);
private extern(C) void  qtd_QTextLayout_drawCursor_QPainter_QPointF_int_int_const(void* __this_nativeId,
 void* p0,
 QPointF pos1,
 int cursorPosition2,
 int width3);
private extern(C) void  qtd_QTextLayout_endLayout(void* __this_nativeId);
private extern(C) void*  qtd_QTextLayout_font_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextLayout_isValidCursorPosition_int_const(void* __this_nativeId,
 int pos0);
private extern(C) void*  qtd_QTextLayout_lineAt_int_const(void* __this_nativeId,
 int i0);
private extern(C) int  qtd_QTextLayout_lineCount_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextLayout_lineForTextPosition_int_const(void* __this_nativeId,
 int pos0);
private extern(C) double  qtd_QTextLayout_maximumWidth_const(void* __this_nativeId);
private extern(C) double  qtd_QTextLayout_minimumWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QTextLayout_nextCursorPosition_int_CursorMode_const(void* __this_nativeId,
 int oldPos0,
 int mode1);
private extern(C) void  qtd_QTextLayout_position_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) int  qtd_QTextLayout_preeditAreaPosition_const(void* __this_nativeId);
private extern(C) void  qtd_QTextLayout_preeditAreaText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QTextLayout_previousCursorPosition_int_CursorMode_const(void* __this_nativeId,
 int oldPos0,
 int mode1);
private extern(C) void  qtd_QTextLayout_setAdditionalFormats_QList(void* __this_nativeId,
 void* overrides0);
private extern(C) void  qtd_QTextLayout_setCacheEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QTextLayout_setFlags_int(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QTextLayout_setFont_QFont(void* __this_nativeId,
 void* f0);
private extern(C) void  qtd_QTextLayout_setPosition_QPointF(void* __this_nativeId,
 QPointF p0);
private extern(C) void  qtd_QTextLayout_setPreeditArea_int_string(void* __this_nativeId,
 int position0,
 string text1);
private extern(C) void  qtd_QTextLayout_setText_string(void* __this_nativeId,
 string string0);
private extern(C) void  qtd_QTextLayout_setTextOption_QTextOption(void* __this_nativeId,
 void* option0);
private extern(C) void  qtd_QTextLayout_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QTextLayout_textOption_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QTextLayout() {
    qtd_QTextLayout_initCallBacks(null);
}

// signal handlers

