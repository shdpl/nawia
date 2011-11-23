module qt.gui.QCalendarWidget;

public import qt.gui.QCalendarWidget_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QPainter;
public import qt.core.QRect;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QKeyEvent;
public import qt.gui.QDragMoveEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.gui.QTextCharFormat;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;
public import qt.core.QDate;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QCalendarWidget : QWidget
{
    public enum HorizontalHeaderFormat {
        NoHorizontalHeader = 0,
        SingleLetterDayNames = 1,
        ShortDayNames = 2,
        LongDayNames = 3
    }

    alias HorizontalHeaderFormat.NoHorizontalHeader NoHorizontalHeader;
    alias HorizontalHeaderFormat.SingleLetterDayNames SingleLetterDayNames;
    alias HorizontalHeaderFormat.ShortDayNames ShortDayNames;
    alias HorizontalHeaderFormat.LongDayNames LongDayNames;

    public enum VerticalHeaderFormat {
        NoVerticalHeader = 0,
        ISOWeekNumbers = 1
    }

    alias VerticalHeaderFormat.NoVerticalHeader NoVerticalHeader;
    alias VerticalHeaderFormat.ISOWeekNumbers ISOWeekNumbers;

    public enum SelectionMode {
        NoSelection = 0,
        SingleSelection = 1
    }

    alias SelectionMode.NoSelection NoSelection;
    alias SelectionMode.SingleSelection SingleSelection;


    private static const string[] __signalSignatures = [
            "activated(QDate)", 
            "clicked(QDate)", 
            "currentPageChanged(int,int)", 
            "selectionChanged()"    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }

    protected final void activated(const(QDate) date) {
        qtd_QCalendarWidget_activated_QDate(qtdNativeId, date is null ? null : (cast(QDate)date).qtdNativeId);
    }

    protected final void clicked(const(QDate) date) {
        qtd_QCalendarWidget_clicked_QDate(qtdNativeId, date is null ? null : (cast(QDate)date).qtdNativeId);
    }

    protected final void currentPageChanged(int year, int month) {
        qtd_QCalendarWidget_currentPageChanged_int_int(qtdNativeId, year, month);
    }

    protected final void selectionChanged() {
        qtd_QCalendarWidget_selectionChanged(qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QCalendarWidget_QCalendarWidget_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int dateEditAcceptDelay() const {
        return qtd_QCalendarWidget_dateEditAcceptDelay_const(qtdNativeId);
    }

    public final QTextCharFormat dateTextFormat(const(QDate) date) const {
        void* ret = qtd_QCalendarWidget_dateTextFormat_QDate_const(qtdNativeId, date is null ? null : (cast(QDate)date).qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final Qt.DayOfWeek firstDayOfWeek() const {
        return cast(Qt.DayOfWeek) qtd_QCalendarWidget_firstDayOfWeek_const(qtdNativeId);
    }

    public final QTextCharFormat headerTextFormat() const {
        void* ret = qtd_QCalendarWidget_headerTextFormat_const(qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final QCalendarWidget.HorizontalHeaderFormat horizontalHeaderFormat() const {
        return cast(QCalendarWidget.HorizontalHeaderFormat) qtd_QCalendarWidget_horizontalHeaderFormat_const(qtdNativeId);
    }

    public final bool isDateEditEnabled() const {
        return qtd_QCalendarWidget_isDateEditEnabled_const(qtdNativeId);
    }

    public final bool isGridVisible() const {
        return qtd_QCalendarWidget_isGridVisible_const(qtdNativeId);
    }

    public final bool isNavigationBarVisible() const {
        return qtd_QCalendarWidget_isNavigationBarVisible_const(qtdNativeId);
    }

    public final QDate maximumDate() const {
        void* ret = qtd_QCalendarWidget_maximumDate_const(qtdNativeId);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final QDate minimumDate() const {
        void* ret = qtd_QCalendarWidget_minimumDate_const(qtdNativeId);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final int monthShown() const {
        return qtd_QCalendarWidget_monthShown_const(qtdNativeId);
    }

    public final QDate selectedDate() const {
        void* ret = qtd_QCalendarWidget_selectedDate_const(qtdNativeId);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final QCalendarWidget.SelectionMode selectionMode() const {
        return cast(QCalendarWidget.SelectionMode) qtd_QCalendarWidget_selectionMode_const(qtdNativeId);
    }

    public final void setCurrentPage(int year, int month) {
        qtd_QCalendarWidget_setCurrentPage_int_int(qtdNativeId, year, month);
    }

    public final void setDateEditAcceptDelay(int delay) {
        qtd_QCalendarWidget_setDateEditAcceptDelay_int(qtdNativeId, delay);
    }

    public final void setDateEditEnabled(bool enable) {
        qtd_QCalendarWidget_setDateEditEnabled_bool(qtdNativeId, enable);
    }

    public final void setDateRange(const(QDate) min, const(QDate) max) {
        qtd_QCalendarWidget_setDateRange_QDate_QDate(qtdNativeId, min is null ? null : (cast(QDate)min).qtdNativeId, max is null ? null : (cast(QDate)max).qtdNativeId);
    }

    public final void setDateTextFormat(const(QDate) date, const(QTextCharFormat) format) {
        qtd_QCalendarWidget_setDateTextFormat_QDate_QTextCharFormat(qtdNativeId, date is null ? null : (cast(QDate)date).qtdNativeId, format is null ? null : (cast(QTextCharFormat)format).qtdNativeId);
    }

    public final void setFirstDayOfWeek(Qt.DayOfWeek dayOfWeek) {
        qtd_QCalendarWidget_setFirstDayOfWeek_DayOfWeek(qtdNativeId, dayOfWeek);
    }

    public final void setGridVisible(bool show) {
        qtd_QCalendarWidget_setGridVisible_bool(qtdNativeId, show);
    }

    public final void setHeaderTextFormat(const(QTextCharFormat) format) {
        qtd_QCalendarWidget_setHeaderTextFormat_QTextCharFormat(qtdNativeId, format is null ? null : (cast(QTextCharFormat)format).qtdNativeId);
    }

    public final void setHorizontalHeaderFormat(QCalendarWidget.HorizontalHeaderFormat format) {
        qtd_QCalendarWidget_setHorizontalHeaderFormat_HorizontalHeaderFormat(qtdNativeId, format);
    }

    public final void setMaximumDate(const(QDate) date) {
        qtd_QCalendarWidget_setMaximumDate_QDate(qtdNativeId, date is null ? null : (cast(QDate)date).qtdNativeId);
    }

    public final void setMinimumDate(const(QDate) date) {
        qtd_QCalendarWidget_setMinimumDate_QDate(qtdNativeId, date is null ? null : (cast(QDate)date).qtdNativeId);
    }

    public final void setNavigationBarVisible(bool visible) {
        qtd_QCalendarWidget_setNavigationBarVisible_bool(qtdNativeId, visible);
    }

    public final void setSelectedDate(const(QDate) date) {
        qtd_QCalendarWidget_setSelectedDate_QDate(qtdNativeId, date is null ? null : (cast(QDate)date).qtdNativeId);
    }

    public final void setSelectionMode(QCalendarWidget.SelectionMode mode) {
        qtd_QCalendarWidget_setSelectionMode_SelectionMode(qtdNativeId, mode);
    }

    public final void setVerticalHeaderFormat(QCalendarWidget.VerticalHeaderFormat format) {
        qtd_QCalendarWidget_setVerticalHeaderFormat_VerticalHeaderFormat(qtdNativeId, format);
    }

    public final void setWeekdayTextFormat(Qt.DayOfWeek dayOfWeek, const(QTextCharFormat) format) {
        qtd_QCalendarWidget_setWeekdayTextFormat_DayOfWeek_QTextCharFormat(qtdNativeId, dayOfWeek, format is null ? null : (cast(QTextCharFormat)format).qtdNativeId);
    }

    public final void showNextMonth() {
        qtd_QCalendarWidget_showNextMonth(qtdNativeId);
    }

    public final void showNextYear() {
        qtd_QCalendarWidget_showNextYear(qtdNativeId);
    }

    public final void showPreviousMonth() {
        qtd_QCalendarWidget_showPreviousMonth(qtdNativeId);
    }

    public final void showPreviousYear() {
        qtd_QCalendarWidget_showPreviousYear(qtdNativeId);
    }

    public final void showSelectedDate() {
        qtd_QCalendarWidget_showSelectedDate(qtdNativeId);
    }

    public final void showToday() {
        qtd_QCalendarWidget_showToday(qtdNativeId);
    }

    protected final void updateCell(const(QDate) date) {
        qtd_QCalendarWidget_updateCell_QDate(qtdNativeId, date is null ? null : (cast(QDate)date).qtdNativeId);
    }

    protected final void updateCells() {
        qtd_QCalendarWidget_updateCells(qtdNativeId);
    }

    public final QCalendarWidget.VerticalHeaderFormat verticalHeaderFormat() const {
        return cast(QCalendarWidget.VerticalHeaderFormat) qtd_QCalendarWidget_verticalHeaderFormat_const(qtdNativeId);
    }

    public final QTextCharFormat weekdayTextFormat(Qt.DayOfWeek dayOfWeek) const {
        void* ret = qtd_QCalendarWidget_weekdayTextFormat_DayOfWeek_const(qtdNativeId, dayOfWeek);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final int yearShown() const {
        return qtd_QCalendarWidget_yearShown_const(qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QCalendarWidget_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool eventFilter(QObject watched, QEvent event) {
        return qtd_QCalendarWidget_eventFilter_QObject_QEvent(qtdNativeId, watched is null ? null : watched.qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent event) {
        qtd_QCalendarWidget_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QCalendarWidget_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mousePressEvent(QMouseEvent event) {
        qtd_QCalendarWidget_mousePressEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void paintCell(QPainter painter, const(QRect) rect, const(QDate) date) const {
        qtd_QCalendarWidget_paintCell_QPainter_QRect_QDate_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, date is null ? null : (cast(QDate)date).qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent event) {
        qtd_QCalendarWidget_resizeEvent_QResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QCalendarWidget_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setCurrentPage(int,int)", 
            "setDateRange(QDate,QDate)", 
            "setGridVisible(bool)", 
            "setNavigationBarVisible(bool)", 
            "setSelectedDate(QDate)", 
            "showNextMonth()", 
            "showNextYear()", 
            "showPreviousMonth()", 
            "showPreviousYear()", 
            "showSelectedDate()", 
            "showToday()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QCalendarWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QCalendarWidget);
    }

    static QCalendarWidget __getObject(void* nativeId) {
        return static_cast!(QCalendarWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QCalendarWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QCalendarWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QCalendarWidget(nativeId, initFlags);
        QCalendarWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QDate))("activated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(const(QDate))("clicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("currentPageChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("selectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(int,int)("setCurrentPage"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(const(QDate),const(QDate))("setDateRange"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setGridVisible"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setNavigationBarVisible"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(const(QDate))("setSelectedDate"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("showNextMonth"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!()("showNextYear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!()("showPreviousMonth"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[8]);
        mo.addMethod(new QMetaSlot(signature!()("showPreviousYear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[9]);
        mo.addMethod(new QMetaSlot(signature!()("showSelectedDate"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[10]);
        mo.addMethod(new QMetaSlot(signature!()("showToday"), index));

    }

    public alias void __isQtType_QCalendarWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QCalendarWidget_activated_QDate(void* __this_nativeId,
 void* date0);
private extern(C) void  qtd_QCalendarWidget_clicked_QDate(void* __this_nativeId,
 void* date0);
private extern(C) void  qtd_QCalendarWidget_currentPageChanged_int_int(void* __this_nativeId,
 int year0,
 int month1);
private extern(C) void  qtd_QCalendarWidget_selectionChanged(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QCalendarWidget_QCalendarWidget_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QCalendarWidget_dateEditAcceptDelay_const(void* __this_nativeId);
private extern(C) void*  qtd_QCalendarWidget_dateTextFormat_QDate_const(void* __this_nativeId,
 void* date0);
private extern(C) int  qtd_QCalendarWidget_firstDayOfWeek_const(void* __this_nativeId);
private extern(C) void*  qtd_QCalendarWidget_headerTextFormat_const(void* __this_nativeId);
private extern(C) int  qtd_QCalendarWidget_horizontalHeaderFormat_const(void* __this_nativeId);
private extern(C) bool  qtd_QCalendarWidget_isDateEditEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QCalendarWidget_isGridVisible_const(void* __this_nativeId);
private extern(C) bool  qtd_QCalendarWidget_isNavigationBarVisible_const(void* __this_nativeId);
private extern(C) void*  qtd_QCalendarWidget_maximumDate_const(void* __this_nativeId);
private extern(C) void*  qtd_QCalendarWidget_minimumDate_const(void* __this_nativeId);
private extern(C) int  qtd_QCalendarWidget_monthShown_const(void* __this_nativeId);
private extern(C) void*  qtd_QCalendarWidget_selectedDate_const(void* __this_nativeId);
private extern(C) int  qtd_QCalendarWidget_selectionMode_const(void* __this_nativeId);
private extern(C) void  qtd_QCalendarWidget_setCurrentPage_int_int(void* __this_nativeId,
 int year0,
 int month1);
private extern(C) void  qtd_QCalendarWidget_setDateEditAcceptDelay_int(void* __this_nativeId,
 int delay0);
private extern(C) void  qtd_QCalendarWidget_setDateEditEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QCalendarWidget_setDateRange_QDate_QDate(void* __this_nativeId,
 void* min0,
 void* max1);
private extern(C) void  qtd_QCalendarWidget_setDateTextFormat_QDate_QTextCharFormat(void* __this_nativeId,
 void* date0,
 void* format1);
private extern(C) void  qtd_QCalendarWidget_setFirstDayOfWeek_DayOfWeek(void* __this_nativeId,
 int dayOfWeek0);
private extern(C) void  qtd_QCalendarWidget_setGridVisible_bool(void* __this_nativeId,
 bool show0);
private extern(C) void  qtd_QCalendarWidget_setHeaderTextFormat_QTextCharFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QCalendarWidget_setHorizontalHeaderFormat_HorizontalHeaderFormat(void* __this_nativeId,
 int format0);
private extern(C) void  qtd_QCalendarWidget_setMaximumDate_QDate(void* __this_nativeId,
 void* date0);
private extern(C) void  qtd_QCalendarWidget_setMinimumDate_QDate(void* __this_nativeId,
 void* date0);
private extern(C) void  qtd_QCalendarWidget_setNavigationBarVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QCalendarWidget_setSelectedDate_QDate(void* __this_nativeId,
 void* date0);
private extern(C) void  qtd_QCalendarWidget_setSelectionMode_SelectionMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QCalendarWidget_setVerticalHeaderFormat_VerticalHeaderFormat(void* __this_nativeId,
 int format0);
private extern(C) void  qtd_QCalendarWidget_setWeekdayTextFormat_DayOfWeek_QTextCharFormat(void* __this_nativeId,
 int dayOfWeek0,
 void* format1);
private extern(C) void  qtd_QCalendarWidget_showNextMonth(void* __this_nativeId);
private extern(C) void  qtd_QCalendarWidget_showNextYear(void* __this_nativeId);
private extern(C) void  qtd_QCalendarWidget_showPreviousMonth(void* __this_nativeId);
private extern(C) void  qtd_QCalendarWidget_showPreviousYear(void* __this_nativeId);
private extern(C) void  qtd_QCalendarWidget_showSelectedDate(void* __this_nativeId);
private extern(C) void  qtd_QCalendarWidget_showToday(void* __this_nativeId);
private extern(C) void  qtd_QCalendarWidget_updateCell_QDate(void* __this_nativeId,
 void* date0);
private extern(C) void  qtd_QCalendarWidget_updateCells(void* __this_nativeId);
private extern(C) int  qtd_QCalendarWidget_verticalHeaderFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QCalendarWidget_weekdayTextFormat_DayOfWeek_const(void* __this_nativeId,
 int dayOfWeek0);
private extern(C) int  qtd_QCalendarWidget_yearShown_const(void* __this_nativeId);
private extern(C) bool  qtd_QCalendarWidget_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QCalendarWidget_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* watched0,
 void* event1);
private extern(C) void  qtd_QCalendarWidget_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QCalendarWidget_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QCalendarWidget_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QCalendarWidget_paintCell_QPainter_QRect_QDate_const(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 void* date2);
private extern(C) void  qtd_QCalendarWidget_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QCalendarWidget_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* painter0, QRect* rect1, void* date2) qtd_QCalendarWidget_paintCell_QPainter_QRect_QDate_const_dispatch; }
extern(C) void qtd_export_QCalendarWidget_paintCell_QPainter_QRect_QDate_const_dispatch(void *dId, void* painter0, QRect* rect1, void* date2){
    auto d_object = cast(QCalendarWidget) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope date2_d_ref = new QDate(date2, QtdObjectInitFlags.onStack);
    d_object.paintCell(painter0_d_ref, *rect1, date2_d_ref);
}

private extern (C) void qtd_QCalendarWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QCalendarWidget() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QCalendarWidget_paintCell_QPainter_QRect_QDate_const_dispatch;
    qtd_QCalendarWidget_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QCalendarWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QCalendarWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QCalendarWidget_activated_handle(void* dId, void** args) {
        auto d_object = cast(QCalendarWidget) dId;
        scope date0 = new QDate(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.activated_emit(date0);
}*/
/*private extern(C) void qtd_QCalendarWidget_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QCalendarWidget) dId;
        scope date0 = new QDate(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.clicked_emit(date0);
}*/
/*private extern(C) void qtd_QCalendarWidget_currentPageChanged_handle(void* dId, void** args) {
        auto d_object = cast(QCalendarWidget) dId;
        auto year0 = *(cast(int*)args[1]);
        auto month1 = *(cast(int*)args[2]);
        //d_object.currentPageChanged_emit(year0, month1);
}*/
/*private extern(C) void qtd_QCalendarWidget_selectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QCalendarWidget) dId;
        //d_object.selectionChanged_emit();
}*/

extern(C) QMetaObjectNative* qtd_QCalendarWidget_staticMetaObject();

extern(C) void qtd_QCalendarWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QCalendarWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
