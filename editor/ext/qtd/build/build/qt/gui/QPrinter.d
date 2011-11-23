module qt.gui.QPrinter;

public import qt.gui.QPrinter_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPaintDevice;
public import qt.core.QList;
public import qt.core.QRectF;
public import qt.gui.QPaintEngine;
public import qt.gui.QPrinterInfo;
public import qt.core.QSizeF;
public import qt.core.QRect;
public import qt.gui.QPrintEngine;
public import qt.gui.QPaintDevice;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPrinter : QtdObject, IQPaintDevice
{
    public enum OutputFormat {
        NativeFormat = 0,
        PdfFormat = 1,
        PostScriptFormat = 2
    }

    alias OutputFormat.NativeFormat NativeFormat;
    alias OutputFormat.PdfFormat PdfFormat;
    alias OutputFormat.PostScriptFormat PostScriptFormat;

    public enum DuplexMode {
        DuplexNone = 0,
        DuplexAuto = 1,
        DuplexLongSide = 2,
        DuplexShortSide = 3
    }

    alias DuplexMode.DuplexNone DuplexNone;
    alias DuplexMode.DuplexAuto DuplexAuto;
    alias DuplexMode.DuplexLongSide DuplexLongSide;
    alias DuplexMode.DuplexShortSide DuplexShortSide;

    public enum PrintRange {
        AllPages = 0,
        Selection = 1,
        PageRange = 2,
        CurrentPage = 3
    }

    alias PrintRange.AllPages AllPages;
    alias PrintRange.Selection Selection;
    alias PrintRange.PageRange PageRange;
    alias PrintRange.CurrentPage CurrentPage;

    public enum Unit {
        Millimeter = 0,
        Point = 1,
        Inch = 2,
        Pica = 3,
        Didot = 4,
        Cicero = 5,
        DevicePixel = 6
    }

    alias Unit.Millimeter Millimeter;
    alias Unit.Point Point;
    alias Unit.Inch Inch;
    alias Unit.Pica Pica;
    alias Unit.Didot Didot;
    alias Unit.Cicero Cicero;
    alias Unit.DevicePixel DevicePixel;

    public enum PrinterMode {
        ScreenResolution = 0,
        PrinterResolution = 1,
        HighResolution = 2
    }

    alias PrinterMode.ScreenResolution ScreenResolution;
    alias PrinterMode.PrinterResolution PrinterResolution;
    alias PrinterMode.HighResolution HighResolution;

    public enum Orientation {
        Portrait = 0,
        Landscape = 1
    }

    alias Orientation.Portrait Portrait;
    alias Orientation.Landscape Landscape;

    public enum PrinterState {
        Idle = 0,
        Active = 1,
        Aborted = 2,
        Error = 3
    }

    alias PrinterState.Idle Idle;
    alias PrinterState.Active Active;
    alias PrinterState.Aborted Aborted;
    alias PrinterState.Error Error;

    public enum ColorMode {
        GrayScale = 0,
        Color = 1
    }

    alias ColorMode.GrayScale GrayScale;
    alias ColorMode.Color Color;

    public enum PaperSource {
        OnlyOne = 0,
        Lower = 1,
        Middle = 2,
        Manual = 3,
        Envelope = 4,
        EnvelopeManual = 5,
        Auto = 6,
        Tractor = 7,
        SmallFormat = 8,
        LargeFormat = 9,
        LargeCapacity = 10,
        Cassette = 11,
        FormSource = 12,
        MaxPageSource = 13
    }

    alias PaperSource.OnlyOne OnlyOne;
    alias PaperSource.Lower Lower;
    alias PaperSource.Middle Middle;
    alias PaperSource.Manual Manual;
    alias PaperSource.Envelope Envelope;
    alias PaperSource.EnvelopeManual EnvelopeManual;
    alias PaperSource.Auto Auto;
    alias PaperSource.Tractor Tractor;
    alias PaperSource.SmallFormat SmallFormat;
    alias PaperSource.LargeFormat LargeFormat;
    alias PaperSource.LargeCapacity LargeCapacity;
    alias PaperSource.Cassette Cassette;
    alias PaperSource.FormSource FormSource;
    alias PaperSource.MaxPageSource MaxPageSource;

    public enum PageOrder {
        FirstPageFirst = 0,
        LastPageFirst = 1
    }

    alias PageOrder.FirstPageFirst FirstPageFirst;
    alias PageOrder.LastPageFirst LastPageFirst;

    public enum PageSize {
        A4 = 0,
        B5 = 1,
        Letter = 2,
        Legal = 3,
        Executive = 4,
        A0 = 5,
        A1 = 6,
        A2 = 7,
        A3 = 8,
        A5 = 9,
        A6 = 10,
        A7 = 11,
        A8 = 12,
        A9 = 13,
        B0 = 14,
        B1 = 15,
        B10 = 16,
        B2 = 17,
        B3 = 18,
        B4 = 19,
        B6 = 20,
        B7 = 21,
        B8 = 22,
        B9 = 23,
        C5E = 24,
        Comm10E = 25,
        DLE = 26,
        Folio = 27,
        Ledger = 28,
        Tabloid = 29,
        Custom = 30,

    }

    alias PageSize.A4 A4;
    alias PageSize.B5 B5;
    alias PageSize.Letter Letter;
    alias PageSize.Legal Legal;
    alias PageSize.Executive Executive;
    alias PageSize.A0 A0;
    alias PageSize.A1 A1;
    alias PageSize.A2 A2;
    alias PageSize.A3 A3;
    alias PageSize.A5 A5;
    alias PageSize.A6 A6;
    alias PageSize.A7 A7;
    alias PageSize.A8 A8;
    alias PageSize.A9 A9;
    alias PageSize.B0 B0;
    alias PageSize.B1 B1;
    alias PageSize.B10 B10;
    alias PageSize.B2 B2;
    alias PageSize.B3 B3;
    alias PageSize.B4 B4;
    alias PageSize.B6 B6;
    alias PageSize.B7 B7;
    alias PageSize.B8 B8;
    alias PageSize.B9 B9;
    alias PageSize.C5E C5E;
    alias PageSize.Comm10E Comm10E;
    alias PageSize.DLE DLE;
    alias PageSize.Folio Folio;
    alias PageSize.Ledger Ledger;
    alias PageSize.Tabloid Tabloid;
    alias PageSize.Custom Custom;


Object __rcPaintEngine = null;

Object __rcPrintEngine = null;

// Functions

    public this(QPrinter.PrinterMode mode = QPrinter.PrinterMode.ScreenResolution) {
        void* ret = qtd_QPrinter_QPrinter_PrinterMode(cast(void*) this, mode);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPrinterInfo) printer, QPrinter.PrinterMode mode = QPrinter.PrinterMode.ScreenResolution) {
        void* ret = qtd_QPrinter_QPrinter_QPrinterInfo_PrinterMode(cast(void*) this, printer is null ? null : (cast(QPrinterInfo)printer).qtdNativeId, mode);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool abort() {
        return qtd_QPrinter_abort(qtdNativeId);
    }

    public final int actualNumCopies() const {
        return qtd_QPrinter_actualNumCopies_const(qtdNativeId);
    }

    public final bool collateCopies() const {
        return qtd_QPrinter_collateCopies_const(qtdNativeId);
    }

    public final int colorCount() const {
        return qtd_QPrinter_colorCount_const(qtdNativeId);
    }

    public final QPrinter.ColorMode colorMode() const {
        return cast(QPrinter.ColorMode) qtd_QPrinter_colorMode_const(qtdNativeId);
    }

    public final int copyCount() const {
        return qtd_QPrinter_copyCount_const(qtdNativeId);
    }

    public final string creator() const {
        string res;
        qtd_QPrinter_creator_const(qtdNativeId, &res);
        return res;
    }

    public final int depth() const {
        return qtd_QPrinter_depth_const(qtdNativeId);
    }

    public final string docName() const {
        string res;
        qtd_QPrinter_docName_const(qtdNativeId, &res);
        return res;
    }

    public final bool doubleSidedPrinting() const {
        return qtd_QPrinter_doubleSidedPrinting_const(qtdNativeId);
    }

    public final QPrinter.DuplexMode duplex() const {
        return cast(QPrinter.DuplexMode) qtd_QPrinter_duplex_const(qtdNativeId);
    }

    public final bool fontEmbeddingEnabled() const {
        return qtd_QPrinter_fontEmbeddingEnabled_const(qtdNativeId);
    }

    public final int fromPage() const {
        return qtd_QPrinter_fromPage_const(qtdNativeId);
    }

    public final bool fullPage() const {
        return qtd_QPrinter_fullPage_const(qtdNativeId);
    }

    private final void getPageMargins(double* left, double* top, double* right, double* bottom, QPrinter.Unit unit) const {
        qtd_QPrinter_getPageMargins_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_Unit_const(qtdNativeId, left, top, right, bottom, unit);
    }

    public final int height() const {
        return qtd_QPrinter_height_const(qtdNativeId);
    }

    public final int heightMM() const {
        return qtd_QPrinter_heightMM_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QPrinter_isValid_const(qtdNativeId);
    }

    public final int logicalDpiX() const {
        return qtd_QPrinter_logicalDpiX_const(qtdNativeId);
    }

    public final int logicalDpiY() const {
        return qtd_QPrinter_logicalDpiY_const(qtdNativeId);
    }

    public final bool newPage() {
        return qtd_QPrinter_newPage(qtdNativeId);
    }

    public final int numColors() const {
        return qtd_QPrinter_numColors_const(qtdNativeId);
    }

    public final int numCopies() const {
        return qtd_QPrinter_numCopies_const(qtdNativeId);
    }

    public final QPrinter.Orientation orientation() const {
        return cast(QPrinter.Orientation) qtd_QPrinter_orientation_const(qtdNativeId);
    }

    public final string outputFileName() const {
        string res;
        qtd_QPrinter_outputFileName_const(qtdNativeId, &res);
        return res;
    }

    public final QPrinter.OutputFormat outputFormat() const {
        return cast(QPrinter.OutputFormat) qtd_QPrinter_outputFormat_const(qtdNativeId);
    }

    public final QPrinter.PageOrder pageOrder() const {
        return cast(QPrinter.PageOrder) qtd_QPrinter_pageOrder_const(qtdNativeId);
    }

    public final QRect pageRect() const {
        QRect res;
        qtd_QPrinter_pageRect_const(qtdNativeId, &res);
        return res;
    }

    public final QRectF pageRect(QPrinter.Unit arg__1) const {
        QRectF res;
        qtd_QPrinter_pageRect_Unit_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QPrinter.PageSize pageSize() const {
        return cast(QPrinter.PageSize) qtd_QPrinter_pageSize_const(qtdNativeId);
    }

    public final bool paintingActive() const {
        return qtd_QPrinter_paintingActive_const(qtdNativeId);
    }

    public final QRect paperRect() const {
        QRect res;
        qtd_QPrinter_paperRect_const(qtdNativeId, &res);
        return res;
    }

    public final QRectF paperRect(QPrinter.Unit arg__1) const {
        QRectF res;
        qtd_QPrinter_paperRect_Unit_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QPrinter.PageSize paperSize() const {
        return cast(QPrinter.PageSize) qtd_QPrinter_paperSize_const(qtdNativeId);
    }

    public final QSizeF paperSize(QPrinter.Unit unit) const {
        QSizeF res;
        qtd_QPrinter_paperSize_Unit_const(qtdNativeId, &res, unit);
        return res;
    }

    public final QPrinter.PaperSource paperSource() const {
        return cast(QPrinter.PaperSource) qtd_QPrinter_paperSource_const(qtdNativeId);
    }

    public final int physicalDpiX() const {
        return qtd_QPrinter_physicalDpiX_const(qtdNativeId);
    }

    public final int physicalDpiY() const {
        return qtd_QPrinter_physicalDpiY_const(qtdNativeId);
    }

    public final QPrintEngine printEngine() const {
        void* ret = qtd_QPrinter_printEngine_const(qtdNativeId);
        QPrintEngine __d_return_value = qtd_QPrintEngine_from_ptr(ret);

        return __d_return_value;
    }

    public final string printProgram() const {
        string res;
        qtd_QPrinter_printProgram_const(qtdNativeId, &res);
        return res;
    }

    public final QPrinter.PrintRange printRange() const {
        return cast(QPrinter.PrintRange) qtd_QPrinter_printRange_const(qtdNativeId);
    }

    public final string printerName() const {
        string res;
        qtd_QPrinter_printerName_const(qtdNativeId, &res);
        return res;
    }

    public final QPrinter.PrinterState printerState() const {
        return cast(QPrinter.PrinterState) qtd_QPrinter_printerState_const(qtdNativeId);
    }

    public final int resolution() const {
        return qtd_QPrinter_resolution_const(qtdNativeId);
    }

    public final void setCollateCopies(bool collate) {
        qtd_QPrinter_setCollateCopies_bool(qtdNativeId, collate);
    }

    public final void setColorMode(QPrinter.ColorMode arg__1) {
        qtd_QPrinter_setColorMode_ColorMode(qtdNativeId, arg__1);
    }

    public final void setCopyCount(int arg__1) {
        qtd_QPrinter_setCopyCount_int(qtdNativeId, arg__1);
    }

    public final void setCreator(string arg__1) {
        qtd_QPrinter_setCreator_string(qtdNativeId, arg__1);
    }

    public final void setDocName(string arg__1) {
        qtd_QPrinter_setDocName_string(qtdNativeId, arg__1);
    }

    public final void setDoubleSidedPrinting(bool enable) {
        qtd_QPrinter_setDoubleSidedPrinting_bool(qtdNativeId, enable);
    }

    public final void setDuplex(QPrinter.DuplexMode duplex) {
        qtd_QPrinter_setDuplex_DuplexMode(qtdNativeId, duplex);
    }

    protected final void setEngines(QPrintEngine printEngine, QPaintEngine paintEngine) {
        {
            __rcPrintEngine = cast(Object) printEngine;
        }
        {
            __rcPaintEngine = cast(Object) paintEngine;
        }
        qtd_QPrinter_setEngines_QPrintEngine_QPaintEngine(qtdNativeId, printEngine is null ? null : printEngine.qtdNativeId, paintEngine is null ? null : paintEngine.qtdNativeId);
    }

    public final void setFontEmbeddingEnabled(bool enable) {
        qtd_QPrinter_setFontEmbeddingEnabled_bool(qtdNativeId, enable);
    }

    public final void setFromTo(int fromPage, int toPage) {
        qtd_QPrinter_setFromTo_int_int(qtdNativeId, fromPage, toPage);
    }

    public final void setFullPage(bool arg__1) {
        qtd_QPrinter_setFullPage_bool(qtdNativeId, arg__1);
    }

    public final void setNumCopies(int arg__1) {
        qtd_QPrinter_setNumCopies_int(qtdNativeId, arg__1);
    }

    public final void setOrientation(QPrinter.Orientation arg__1) {
        qtd_QPrinter_setOrientation_Orientation(qtdNativeId, arg__1);
    }

    public final void setOutputFileName(string arg__1) {
        qtd_QPrinter_setOutputFileName_string(qtdNativeId, arg__1);
    }

    public final void setOutputFormat(QPrinter.OutputFormat format) {
        qtd_QPrinter_setOutputFormat_OutputFormat(qtdNativeId, format);
    }

    public final void setPageMargins(double left, double top, double right, double bottom, QPrinter.Unit unit) {
        qtd_QPrinter_setPageMargins_double_double_double_double_Unit(qtdNativeId, left, top, right, bottom, unit);
    }

    public final void setPageOrder(QPrinter.PageOrder arg__1) {
        qtd_QPrinter_setPageOrder_PageOrder(qtdNativeId, arg__1);
    }

    public final void setPageSize(QPrinter.PageSize arg__1) {
        qtd_QPrinter_setPageSize_PageSize(qtdNativeId, arg__1);
    }

    public final void setPaperSize(QPrinter.PageSize arg__1) {
        qtd_QPrinter_setPaperSize_PageSize(qtdNativeId, arg__1);
    }

    public final void setPaperSize(const(QSizeF) paperSize, QPrinter.Unit unit) {
        qtd_QPrinter_setPaperSize_QSizeF_Unit(qtdNativeId, paperSize, unit);
    }

    public final void setPaperSource(QPrinter.PaperSource arg__1) {
        qtd_QPrinter_setPaperSource_PaperSource(qtdNativeId, arg__1);
    }

    public final void setPrintProgram(string arg__1) {
        qtd_QPrinter_setPrintProgram_string(qtdNativeId, arg__1);
    }

    public final void setPrintRange(QPrinter.PrintRange range) {
        qtd_QPrinter_setPrintRange_PrintRange(qtdNativeId, range);
    }

    public final void setPrinterName(string arg__1) {
        qtd_QPrinter_setPrinterName_string(qtdNativeId, arg__1);
    }

    public final void setResolution(int arg__1) {
        qtd_QPrinter_setResolution_int(qtdNativeId, arg__1);
    }

    public final QList!(int) supportedResolutions() const {
        auto res = QList!(int).opCall();
        qtd_QPrinter_supportedResolutions_const(qtdNativeId, &res);
        return res;
    }

    public final bool supportsMultipleCopies() const {
        return qtd_QPrinter_supportsMultipleCopies_const(qtdNativeId);
    }

    public final int toPage() const {
        return qtd_QPrinter_toPage_const(qtdNativeId);
    }

    public final int width() const {
        return qtd_QPrinter_width_const(qtdNativeId);
    }

    public final int widthMM() const {
        return qtd_QPrinter_widthMM_const(qtdNativeId);
    }

    public int devType() const {
        return qtd_QPrinter_devType_const(qtdNativeId);
    }

    public int metric(QPaintDevice.PaintDeviceMetric arg__1) const {
        return qtd_QPrinter_metric_PaintDeviceMetric_const(qtdNativeId, arg__1);
    }

    public QPaintEngine paintEngine() const {
        void* ret = qtd_QPrinter_paintEngine_const(qtdNativeId);
        QPaintEngine __d_return_value = qtd_QPaintEngine_from_ptr(ret);

        return __d_return_value;
    }
// Field accessors
    static QPrinter __getObject(void* nativeId) {
        return qtd_QPrinter_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QPrinter;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQPaintDevice = qtd_QPrinter_cast_to_QPaintDevice(nativeId);
    }

    private void* __m_ptr_IQPaintDevice;
    public void* __ptr_IQPaintDevice() { return __m_ptr_IQPaintDevice; }

    protected override void qtdDeleteNative() {
        qtd_QPrinter_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPrinter_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPrinter_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /**
     * Returns the page margins for this printer.
     * The unit of the returned margins are specified with the unit parameter.
     * This function was introduced in Qt 4.4.
     *
     * @param unit Specifies the unit of the returned margins.
     * @return The page margins for this printer.
     */
    /*    public final QMarginsF getPageMargins(QPrinter.Unit unit) {
    QNativePointer left = new QNativePointer(QNativePointer.Type.Double);
    QNativePointer top = new QNativePointer(QNativePointer.Type.Double);
    QNativePointer right = new QNativePointer(QNativePointer.Type.Double);
    QNativePointer bottom = new QNativePointer(QNativePointer.Type.Double);

    getPageMargins(left, top, right, bottom, unit);
    return new QMarginsF(left.doubleValue(), top.doubleValue(), right.doubleValue(), bottom.doubleValue());
    }*/

}
    private static extern (C) void*qtd_QPrinter_cast_to_QPaintDevice(void* nativeId);

extern (C) void *__QPrinter_entity(void *q_ptr);

QPrinter qtd_QPrinter_from_ptr(void* ret) {
    void* d_obj = __QPrinter_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QPrinter) d_obj_ref;
    } else {
        auto return_value = new QPrinter(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QPrinter_delete(void *ptr);
extern (C) void qtd_QPrinter_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPrinter_QPrinter_PrinterMode(void *d_ptr,
 int mode0);
private extern(C) void* qtd_QPrinter_QPrinter_QPrinterInfo_PrinterMode(void *d_ptr,
 void* printer0,
 int mode1);
private extern(C) bool  qtd_QPrinter_abort(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_actualNumCopies_const(void* __this_nativeId);
private extern(C) bool  qtd_QPrinter_collateCopies_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_colorCount_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_colorMode_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_copyCount_const(void* __this_nativeId);
private extern(C) void  qtd_QPrinter_creator_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QPrinter_depth_const(void* __this_nativeId);
private extern(C) void  qtd_QPrinter_docName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QPrinter_doubleSidedPrinting_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_duplex_const(void* __this_nativeId);
private extern(C) bool  qtd_QPrinter_fontEmbeddingEnabled_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_fromPage_const(void* __this_nativeId);
private extern(C) bool  qtd_QPrinter_fullPage_const(void* __this_nativeId);
private extern(C) void  qtd_QPrinter_getPageMargins_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_Unit_const(void* __this_nativeId,
 double* left0,
 double* top1,
 double* right2,
 double* bottom3,
 int unit4);
private extern(C) int  qtd_QPrinter_height_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_heightMM_const(void* __this_nativeId);
private extern(C) bool  qtd_QPrinter_isValid_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_logicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_logicalDpiY_const(void* __this_nativeId);
private extern(C) bool  qtd_QPrinter_newPage(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_numColors_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_numCopies_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_orientation_const(void* __this_nativeId);
private extern(C) void  qtd_QPrinter_outputFileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QPrinter_outputFormat_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_pageOrder_const(void* __this_nativeId);
private extern(C) void  qtd_QPrinter_pageRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QPrinter_pageRect_Unit_const(void* __this_nativeId,
 QRectF * __d_return_value,
 int arg__1);
private extern(C) int  qtd_QPrinter_pageSize_const(void* __this_nativeId);
private extern(C) bool  qtd_QPrinter_paintingActive_const(void* __this_nativeId);
private extern(C) void  qtd_QPrinter_paperRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QPrinter_paperRect_Unit_const(void* __this_nativeId,
 QRectF * __d_return_value,
 int arg__1);
private extern(C) int  qtd_QPrinter_paperSize_const(void* __this_nativeId);
private extern(C) void  qtd_QPrinter_paperSize_Unit_const(void* __this_nativeId,
 QSizeF * __d_return_value,
 int unit0);
private extern(C) int  qtd_QPrinter_paperSource_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_physicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_physicalDpiY_const(void* __this_nativeId);
private extern(C) void*  qtd_QPrinter_printEngine_const(void* __this_nativeId);
private extern(C) void  qtd_QPrinter_printProgram_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QPrinter_printRange_const(void* __this_nativeId);
private extern(C) void  qtd_QPrinter_printerName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QPrinter_printerState_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_resolution_const(void* __this_nativeId);
private extern(C) void  qtd_QPrinter_setCollateCopies_bool(void* __this_nativeId,
 bool collate0);
private extern(C) void  qtd_QPrinter_setColorMode_ColorMode(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPrinter_setCopyCount_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPrinter_setCreator_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QPrinter_setDocName_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QPrinter_setDoubleSidedPrinting_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QPrinter_setDuplex_DuplexMode(void* __this_nativeId,
 int duplex0);
private extern(C) void  qtd_QPrinter_setEngines_QPrintEngine_QPaintEngine(void* __this_nativeId,
 void* printEngine0,
 void* paintEngine1);
private extern(C) void  qtd_QPrinter_setFontEmbeddingEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QPrinter_setFromTo_int_int(void* __this_nativeId,
 int fromPage0,
 int toPage1);
private extern(C) void  qtd_QPrinter_setFullPage_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QPrinter_setNumCopies_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPrinter_setOrientation_Orientation(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPrinter_setOutputFileName_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QPrinter_setOutputFormat_OutputFormat(void* __this_nativeId,
 int format0);
private extern(C) void  qtd_QPrinter_setPageMargins_double_double_double_double_Unit(void* __this_nativeId,
 double left0,
 double top1,
 double right2,
 double bottom3,
 int unit4);
private extern(C) void  qtd_QPrinter_setPageOrder_PageOrder(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPrinter_setPageSize_PageSize(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPrinter_setPaperSize_PageSize(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPrinter_setPaperSize_QSizeF_Unit(void* __this_nativeId,
 QSizeF paperSize0,
 int unit1);
private extern(C) void  qtd_QPrinter_setPaperSource_PaperSource(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPrinter_setPrintProgram_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QPrinter_setPrintRange_PrintRange(void* __this_nativeId,
 int range0);
private extern(C) void  qtd_QPrinter_setPrinterName_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QPrinter_setResolution_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPrinter_supportedResolutions_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QPrinter_supportsMultipleCopies_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_toPage_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_width_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_widthMM_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_devType_const(void* __this_nativeId);
private extern(C) int  qtd_QPrinter_metric_PaintDeviceMetric_const(void* __this_nativeId,
 int arg__1);
private extern(C) void*  qtd_QPrinter_paintEngine_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPrinter_initCallBacks(void* virtuals);

extern(C) void static_init_QPrinter() {
    qtd_QPrinter_initCallBacks(null);
}

// signal handlers

