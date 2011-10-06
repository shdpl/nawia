module qt.gui.QDateTimeEdit;

public import qt.gui.QDateTimeEdit_aux;
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
public import qt.gui.QValidator;
public import qt.gui.QPaintDevice;
public import qt.gui.QWheelEvent;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.core.QDateTime;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QAbstractSpinBox;
public import qt.gui.QResizeEvent;
public import qt.gui.QKeyEvent;
public import qt.gui.QDragMoveEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.gui.QCalendarWidget;
public import qt.core.QSize;
public import qt.gui.QStyleOptionSpinBox;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QCloseEvent;
public import qt.core.QTime;
public import qt.gui.QMoveEvent;
public import qt.core.QDate;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDateTimeEdit : QAbstractSpinBox
{
    public enum Section {
        NoSection = 0,
        AmPmSection = 1,
        MSecSection = 2,
        SecondSection = 4,
        MinuteSection = 8,
        HourSection = 16,
        DaySection = 256,
        MonthSection = 512,
        YearSection = 1024,
        TimeSections_Mask = 31,
        DateSections_Mask = 1792
    }

    alias Section.NoSection NoSection;
    alias Section.AmPmSection AmPmSection;
    alias Section.MSecSection MSecSection;
    alias Section.SecondSection SecondSection;
    alias Section.MinuteSection MinuteSection;
    alias Section.HourSection HourSection;
    alias Section.DaySection DaySection;
    alias Section.MonthSection MonthSection;
    alias Section.YearSection YearSection;
    alias Section.TimeSections_Mask TimeSections_Mask;
    alias Section.DateSections_Mask DateSections_Mask;


    private static const string[] __signalSignatures = [
            "dateChanged(QDate)", 
            "dateTimeChanged(QDateTime)", 
            "timeChanged(QTime)"    ];

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

    protected final void dateChanged(const(QDate) date) {
        qtd_QDateTimeEdit_dateChanged_QDate(qtdNativeId, date is null ? null : (cast(QDate)date).qtdNativeId);
    }

    protected final void dateTimeChanged(const(QDateTime) date) {
        qtd_QDateTimeEdit_dateTimeChanged_QDateTime(qtdNativeId, date is null ? null : (cast(QDateTime)date).qtdNativeId);
    }

    protected final void timeChanged(const(QTime) date) {
        qtd_QDateTimeEdit_timeChanged_QTime(qtdNativeId, date is null ? null : (cast(QTime)date).qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QDateTimeEdit_QDateTimeEdit_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDate) d, QWidget parent_ = null) {
        void* ret = qtd_QDateTimeEdit_QDateTimeEdit_QDate_QWidget(cast(void*) this, d is null ? null : (cast(QDate)d).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDateTime) dt, QWidget parent_ = null) {
        void* ret = qtd_QDateTimeEdit_QDateTimeEdit_QDateTime_QWidget(cast(void*) this, dt is null ? null : (cast(QDateTime)dt).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTime) t, QWidget parent_ = null) {
        void* ret = qtd_QDateTimeEdit_QDateTimeEdit_QTime_QWidget(cast(void*) this, t is null ? null : (cast(QTime)t).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool calendarPopup() const {
        return qtd_QDateTimeEdit_calendarPopup_const(qtdNativeId);
    }

    public final QCalendarWidget calendarWidget() const {
        void *ret = qtd_QDateTimeEdit_calendarWidget_const(qtdNativeId);
        QCalendarWidget __d_return_value = QCalendarWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void clearMaximumDate() {
        qtd_QDateTimeEdit_clearMaximumDate(qtdNativeId);
    }

    public final void clearMaximumDateTime() {
        qtd_QDateTimeEdit_clearMaximumDateTime(qtdNativeId);
    }

    public final void clearMaximumTime() {
        qtd_QDateTimeEdit_clearMaximumTime(qtdNativeId);
    }

    public final void clearMinimumDate() {
        qtd_QDateTimeEdit_clearMinimumDate(qtdNativeId);
    }

    public final void clearMinimumDateTime() {
        qtd_QDateTimeEdit_clearMinimumDateTime(qtdNativeId);
    }

    public final void clearMinimumTime() {
        qtd_QDateTimeEdit_clearMinimumTime(qtdNativeId);
    }

    public final QDateTimeEdit.Section currentSection() const {
        return cast(QDateTimeEdit.Section) qtd_QDateTimeEdit_currentSection_const(qtdNativeId);
    }

    public final int currentSectionIndex() const {
        return qtd_QDateTimeEdit_currentSectionIndex_const(qtdNativeId);
    }

    public final QDate date() const {
        void* ret = qtd_QDateTimeEdit_date_const(qtdNativeId);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final QDateTime dateTime() const {
        void* ret = qtd_QDateTimeEdit_dateTime_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final string displayFormat() const {
        string res;
        qtd_QDateTimeEdit_displayFormat_const(qtdNativeId, &res);
        return res;
    }

    public final int displayedSections() const {
        return qtd_QDateTimeEdit_displayedSections_const(qtdNativeId);
    }

    protected final void initStyleOption(QStyleOptionSpinBox option) const {
        qtd_QDateTimeEdit_initStyleOption_nativepointerQStyleOptionSpinBox_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final QDate maximumDate() const {
        void* ret = qtd_QDateTimeEdit_maximumDate_const(qtdNativeId);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final QDateTime maximumDateTime() const {
        void* ret = qtd_QDateTimeEdit_maximumDateTime_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QTime maximumTime() const {
        void* ret = qtd_QDateTimeEdit_maximumTime_const(qtdNativeId);
        QTime __d_return_value = new QTime(ret);
        return __d_return_value;
    }

    public final QDate minimumDate() const {
        void* ret = qtd_QDateTimeEdit_minimumDate_const(qtdNativeId);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final QDateTime minimumDateTime() const {
        void* ret = qtd_QDateTimeEdit_minimumDateTime_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QTime minimumTime() const {
        void* ret = qtd_QDateTimeEdit_minimumTime_const(qtdNativeId);
        QTime __d_return_value = new QTime(ret);
        return __d_return_value;
    }

    public final QDateTimeEdit.Section sectionAt(int index) const {
        return cast(QDateTimeEdit.Section) qtd_QDateTimeEdit_sectionAt_int_const(qtdNativeId, index);
    }

    public final int sectionCount() const {
        return qtd_QDateTimeEdit_sectionCount_const(qtdNativeId);
    }

    public final string sectionText(QDateTimeEdit.Section section) const {
        string res;
        qtd_QDateTimeEdit_sectionText_Section_const(qtdNativeId, &res, section);
        return res;
    }

    public final void setCalendarPopup(bool enable) {
        qtd_QDateTimeEdit_setCalendarPopup_bool(qtdNativeId, enable);
    }

    public final void setCalendarWidget(QCalendarWidget calendarWidget) {
        qtd_QDateTimeEdit_setCalendarWidget_QCalendarWidget(qtdNativeId, calendarWidget is null ? null : calendarWidget.qtdNativeId);
    }

    public final void setCurrentSection(QDateTimeEdit.Section section) {
        qtd_QDateTimeEdit_setCurrentSection_Section(qtdNativeId, section);
    }

    public final void setCurrentSectionIndex(int index) {
        qtd_QDateTimeEdit_setCurrentSectionIndex_int(qtdNativeId, index);
    }

    public final void setDate(const(QDate) date) {
        qtd_QDateTimeEdit_setDate_QDate(qtdNativeId, date is null ? null : (cast(QDate)date).qtdNativeId);
    }

    public final void setDateRange(const(QDate) min, const(QDate) max) {
        qtd_QDateTimeEdit_setDateRange_QDate_QDate(qtdNativeId, min is null ? null : (cast(QDate)min).qtdNativeId, max is null ? null : (cast(QDate)max).qtdNativeId);
    }

    public final void setDateTime(const(QDateTime) dateTime) {
        qtd_QDateTimeEdit_setDateTime_QDateTime(qtdNativeId, dateTime is null ? null : (cast(QDateTime)dateTime).qtdNativeId);
    }

    public final void setDateTimeRange(const(QDateTime) min, const(QDateTime) max) {
        qtd_QDateTimeEdit_setDateTimeRange_QDateTime_QDateTime(qtdNativeId, min is null ? null : (cast(QDateTime)min).qtdNativeId, max is null ? null : (cast(QDateTime)max).qtdNativeId);
    }

    public final void setDisplayFormat(string format) {
        qtd_QDateTimeEdit_setDisplayFormat_string(qtdNativeId, format);
    }

    public final void setMaximumDate(const(QDate) max) {
        qtd_QDateTimeEdit_setMaximumDate_QDate(qtdNativeId, max is null ? null : (cast(QDate)max).qtdNativeId);
    }

    public final void setMaximumDateTime(const(QDateTime) dt) {
        qtd_QDateTimeEdit_setMaximumDateTime_QDateTime(qtdNativeId, dt is null ? null : (cast(QDateTime)dt).qtdNativeId);
    }

    public final void setMaximumTime(const(QTime) max) {
        qtd_QDateTimeEdit_setMaximumTime_QTime(qtdNativeId, max is null ? null : (cast(QTime)max).qtdNativeId);
    }

    public final void setMinimumDate(const(QDate) min) {
        qtd_QDateTimeEdit_setMinimumDate_QDate(qtdNativeId, min is null ? null : (cast(QDate)min).qtdNativeId);
    }

    public final void setMinimumDateTime(const(QDateTime) dt) {
        qtd_QDateTimeEdit_setMinimumDateTime_QDateTime(qtdNativeId, dt is null ? null : (cast(QDateTime)dt).qtdNativeId);
    }

    public final void setMinimumTime(const(QTime) min) {
        qtd_QDateTimeEdit_setMinimumTime_QTime(qtdNativeId, min is null ? null : (cast(QTime)min).qtdNativeId);
    }

    public final void setSelectedSection(QDateTimeEdit.Section section) {
        qtd_QDateTimeEdit_setSelectedSection_Section(qtdNativeId, section);
    }

    public final void setTime(const(QTime) time) {
        qtd_QDateTimeEdit_setTime_QTime(qtdNativeId, time is null ? null : (cast(QTime)time).qtdNativeId);
    }

    public final void setTimeRange(const(QTime) min, const(QTime) max) {
        qtd_QDateTimeEdit_setTimeRange_QTime_QTime(qtdNativeId, min is null ? null : (cast(QTime)min).qtdNativeId, max is null ? null : (cast(QTime)max).qtdNativeId);
    }

    public final void setTimeSpec(Qt.TimeSpec spec) {
        qtd_QDateTimeEdit_setTimeSpec_TimeSpec(qtdNativeId, spec);
    }

    public final QTime time() const {
        void* ret = qtd_QDateTimeEdit_time_const(qtdNativeId);
        QTime __d_return_value = new QTime(ret);
        return __d_return_value;
    }

    public final Qt.TimeSpec timeSpec() const {
        return cast(Qt.TimeSpec) qtd_QDateTimeEdit_timeSpec_const(qtdNativeId);
    }

    public void clear() {
        qtd_QDateTimeEdit_clear(qtdNativeId);
    }

    protected QDateTime dateTimeFromText(string text) const {
        void* ret = qtd_QDateTimeEdit_dateTimeFromText_string_const(qtdNativeId, text);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public bool event(QEvent event) {
        return qtd_QDateTimeEdit_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void fixup(ref string input) const {
        qtd_QDateTimeEdit_fixup_nativepointerstring_const(qtdNativeId, input);
    }

    protected void focusInEvent(QFocusEvent event) {
        qtd_QDateTimeEdit_focusInEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QDateTimeEdit_focusNextPrevChild_bool(qtdNativeId, next);
    }

    protected void keyPressEvent(QKeyEvent event) {
        qtd_QDateTimeEdit_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent event) {
        qtd_QDateTimeEdit_mousePressEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent event) {
        qtd_QDateTimeEdit_paintEvent_QPaintEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QDateTimeEdit_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public void stepBy(int steps) {
        qtd_QDateTimeEdit_stepBy_int(qtdNativeId, steps);
    }

    protected int stepEnabled() const {
        return qtd_QDateTimeEdit_stepEnabled_const(qtdNativeId);
    }

    protected string textFromDateTime(const(QDateTime) dt) const {
        string res;
        qtd_QDateTimeEdit_textFromDateTime_QDateTime_const(qtdNativeId, &res, dt is null ? null : (cast(QDateTime)dt).qtdNativeId);
        return res;
    }

    public QValidator.State validate(ref string input, int* pos) const {
        return cast(QValidator.State) qtd_QDateTimeEdit_validate_nativepointerstring_nativepointerint_const(qtdNativeId, input, pos);
    }

    protected void wheelEvent(QWheelEvent event) {
        qtd_QDateTimeEdit_wheelEvent_QWheelEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setDate(QDate)", 
            "setDateTime(QDateTime)", 
            "setTime(QTime)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QDateTimeEdit_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QDateTimeEdit);
    }

    static QDateTimeEdit __getObject(void* nativeId) {
        return static_cast!(QDateTimeEdit)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QDateTimeEdit_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QDateTimeEdit_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QDateTimeEdit(nativeId, initFlags);
        QDateTimeEdit.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QDate))("dateChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(const(QDateTime))("dateTimeChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(const(QTime))("timeChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(const(QDate))("setDate"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(const(QDateTime))("setDateTime"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(const(QTime))("setTime"), index));

    }

    public alias void __isQtType_QDateTimeEdit;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QDateTimeEdit_dateChanged_QDate(void* __this_nativeId,
 void* date0);
private extern(C) void  qtd_QDateTimeEdit_dateTimeChanged_QDateTime(void* __this_nativeId,
 void* date0);
private extern(C) void  qtd_QDateTimeEdit_timeChanged_QTime(void* __this_nativeId,
 void* date0);

// C wrappers
private extern(C) void* qtd_QDateTimeEdit_QDateTimeEdit_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QDateTimeEdit_QDateTimeEdit_QDate_QWidget(void *d_ptr,
 void* d0,
 void* parent1);
private extern(C) void* qtd_QDateTimeEdit_QDateTimeEdit_QDateTime_QWidget(void *d_ptr,
 void* dt0,
 void* parent1);
private extern(C) void* qtd_QDateTimeEdit_QDateTimeEdit_QTime_QWidget(void *d_ptr,
 void* t0,
 void* parent1);
private extern(C) bool  qtd_QDateTimeEdit_calendarPopup_const(void* __this_nativeId);
private extern(C) void*  qtd_QDateTimeEdit_calendarWidget_const(void* __this_nativeId);
private extern(C) void  qtd_QDateTimeEdit_clearMaximumDate(void* __this_nativeId);
private extern(C) void  qtd_QDateTimeEdit_clearMaximumDateTime(void* __this_nativeId);
private extern(C) void  qtd_QDateTimeEdit_clearMaximumTime(void* __this_nativeId);
private extern(C) void  qtd_QDateTimeEdit_clearMinimumDate(void* __this_nativeId);
private extern(C) void  qtd_QDateTimeEdit_clearMinimumDateTime(void* __this_nativeId);
private extern(C) void  qtd_QDateTimeEdit_clearMinimumTime(void* __this_nativeId);
private extern(C) int  qtd_QDateTimeEdit_currentSection_const(void* __this_nativeId);
private extern(C) int  qtd_QDateTimeEdit_currentSectionIndex_const(void* __this_nativeId);
private extern(C) void*  qtd_QDateTimeEdit_date_const(void* __this_nativeId);
private extern(C) void*  qtd_QDateTimeEdit_dateTime_const(void* __this_nativeId);
private extern(C) void  qtd_QDateTimeEdit_displayFormat_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QDateTimeEdit_displayedSections_const(void* __this_nativeId);
private extern(C) void  qtd_QDateTimeEdit_initStyleOption_nativepointerQStyleOptionSpinBox_const(void* __this_nativeId,
 void* option0);
private extern(C) void*  qtd_QDateTimeEdit_maximumDate_const(void* __this_nativeId);
private extern(C) void*  qtd_QDateTimeEdit_maximumDateTime_const(void* __this_nativeId);
private extern(C) void*  qtd_QDateTimeEdit_maximumTime_const(void* __this_nativeId);
private extern(C) void*  qtd_QDateTimeEdit_minimumDate_const(void* __this_nativeId);
private extern(C) void*  qtd_QDateTimeEdit_minimumDateTime_const(void* __this_nativeId);
private extern(C) void*  qtd_QDateTimeEdit_minimumTime_const(void* __this_nativeId);
private extern(C) int  qtd_QDateTimeEdit_sectionAt_int_const(void* __this_nativeId,
 int index0);
private extern(C) int  qtd_QDateTimeEdit_sectionCount_const(void* __this_nativeId);
private extern(C) void  qtd_QDateTimeEdit_sectionText_Section_const(void* __this_nativeId,
 void* __d_return_value,
 int section0);
private extern(C) void  qtd_QDateTimeEdit_setCalendarPopup_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QDateTimeEdit_setCalendarWidget_QCalendarWidget(void* __this_nativeId,
 void* calendarWidget0);
private extern(C) void  qtd_QDateTimeEdit_setCurrentSection_Section(void* __this_nativeId,
 int section0);
private extern(C) void  qtd_QDateTimeEdit_setCurrentSectionIndex_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QDateTimeEdit_setDate_QDate(void* __this_nativeId,
 void* date0);
private extern(C) void  qtd_QDateTimeEdit_setDateRange_QDate_QDate(void* __this_nativeId,
 void* min0,
 void* max1);
private extern(C) void  qtd_QDateTimeEdit_setDateTime_QDateTime(void* __this_nativeId,
 void* dateTime0);
private extern(C) void  qtd_QDateTimeEdit_setDateTimeRange_QDateTime_QDateTime(void* __this_nativeId,
 void* min0,
 void* max1);
private extern(C) void  qtd_QDateTimeEdit_setDisplayFormat_string(void* __this_nativeId,
 string format0);
private extern(C) void  qtd_QDateTimeEdit_setMaximumDate_QDate(void* __this_nativeId,
 void* max0);
private extern(C) void  qtd_QDateTimeEdit_setMaximumDateTime_QDateTime(void* __this_nativeId,
 void* dt0);
private extern(C) void  qtd_QDateTimeEdit_setMaximumTime_QTime(void* __this_nativeId,
 void* max0);
private extern(C) void  qtd_QDateTimeEdit_setMinimumDate_QDate(void* __this_nativeId,
 void* min0);
private extern(C) void  qtd_QDateTimeEdit_setMinimumDateTime_QDateTime(void* __this_nativeId,
 void* dt0);
private extern(C) void  qtd_QDateTimeEdit_setMinimumTime_QTime(void* __this_nativeId,
 void* min0);
private extern(C) void  qtd_QDateTimeEdit_setSelectedSection_Section(void* __this_nativeId,
 int section0);
private extern(C) void  qtd_QDateTimeEdit_setTime_QTime(void* __this_nativeId,
 void* time0);
private extern(C) void  qtd_QDateTimeEdit_setTimeRange_QTime_QTime(void* __this_nativeId,
 void* min0,
 void* max1);
private extern(C) void  qtd_QDateTimeEdit_setTimeSpec_TimeSpec(void* __this_nativeId,
 int spec0);
private extern(C) void*  qtd_QDateTimeEdit_time_const(void* __this_nativeId);
private extern(C) int  qtd_QDateTimeEdit_timeSpec_const(void* __this_nativeId);
private extern(C) void  qtd_QDateTimeEdit_clear(void* __this_nativeId);
private extern(C) void*  qtd_QDateTimeEdit_dateTimeFromText_string_const(void* __this_nativeId,
 string text0);
private extern(C) bool  qtd_QDateTimeEdit_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QDateTimeEdit_fixup_nativepointerstring_const(void* __this_nativeId,
 string input0);
private extern(C) void  qtd_QDateTimeEdit_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QDateTimeEdit_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QDateTimeEdit_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QDateTimeEdit_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QDateTimeEdit_paintEvent_QPaintEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QDateTimeEdit_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QDateTimeEdit_stepBy_int(void* __this_nativeId,
 int steps0);
private extern(C) int  qtd_QDateTimeEdit_stepEnabled_const(void* __this_nativeId);
private extern(C) void  qtd_QDateTimeEdit_textFromDateTime_QDateTime_const(void* __this_nativeId,
 void* __d_return_value,
 void* dt0);
private extern(C) int  qtd_QDateTimeEdit_validate_nativepointerstring_nativepointerint_const(void* __this_nativeId,
 string input0,
 int * pos1);
private extern(C) void  qtd_QDateTimeEdit_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, wchar* text0, int text0_size) qtd_QDateTimeEdit_dateTimeFromText_string_const_dispatch; }
extern(C) void* qtd_export_QDateTimeEdit_dateTimeFromText_string_const_dispatch(void *dId, wchar* text0, int text0_size){
    auto d_object = cast(QDateTimeEdit) dId;
    string text0_d_ref = toUTF8(text0[0..text0_size]);
    QDateTime ret_value = d_object.dateTimeFromText(text0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, string* ret_str, void* dt0) qtd_QDateTimeEdit_textFromDateTime_QDateTime_const_dispatch; }
extern(C) void qtd_export_QDateTimeEdit_textFromDateTime_QDateTime_const_dispatch(void *dId, string* ret_str, void* dt0){
    auto d_object = cast(QDateTimeEdit) dId;
    scope dt0_d_ref = new QDateTime(dt0, QtdObjectInitFlags.onStack);
    string _d_str = d_object.textFromDateTime(dt0_d_ref);
    *ret_str = _d_str;
}

private extern (C) void qtd_QDateTimeEdit_initCallBacks(void* virtuals);

extern(C) void static_init_QDateTimeEdit() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QDateTimeEdit_dateTimeFromText_string_const_dispatch;
    virt_arr[1] = &qtd_export_QDateTimeEdit_textFromDateTime_QDateTime_const_dispatch;
    qtd_QDateTimeEdit_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QDateTimeEdit_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QDateTimeEdit) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QDateTimeEdit_editingFinished_handle(void* dId, void** args) {
        auto d_object = cast(QDateTimeEdit) dId;
        //d_object.editingFinished_emit();
}*/
/*private extern(C) void qtd_QDateTimeEdit_dateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDateTimeEdit) dId;
        scope date0 = new QDate(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.dateChanged_emit(date0);
}*/
/*private extern(C) void qtd_QDateTimeEdit_dateTimeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDateTimeEdit) dId;
        scope date0 = new QDateTime(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.dateTimeChanged_emit(date0);
}*/
/*private extern(C) void qtd_QDateTimeEdit_timeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDateTimeEdit) dId;
        scope date0 = new QTime(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.timeChanged_emit(date0);
}*/

extern(C) QMetaObjectNative* qtd_QDateTimeEdit_staticMetaObject();

extern(C) void qtd_QDateTimeEdit_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QDateTimeEdit_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
