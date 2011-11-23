module qt.core.QSystemLocale;

public import qt.core.QSystemLocale_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QLocale;
public import qt.core.QVariant;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSystemLocale : QtdObject
{
    public enum QueryType {
        LanguageId = 0,
        CountryId = 1,
        DecimalPoint = 2,
        GroupSeparator = 3,
        ZeroDigit = 4,
        NegativeSign = 5,
        DateFormatLong = 6,
        DateFormatShort = 7,
        TimeFormatLong = 8,
        TimeFormatShort = 9,
        DayNameLong = 10,
        DayNameShort = 11,
        MonthNameLong = 12,
        MonthNameShort = 13,
        DateToStringLong = 14,
        DateToStringShort = 15,
        TimeToStringLong = 16,
        TimeToStringShort = 17,
        DateTimeFormatLong = 18,
        DateTimeFormatShort = 19,
        DateTimeToStringLong = 20,
        DateTimeToStringShort = 21,
        MeasurementSystem = 22,
        PositiveSign = 23,
        AMText = 24,
        PMText = 25
    }

    alias QueryType.LanguageId LanguageId;
    alias QueryType.CountryId CountryId;
    alias QueryType.DecimalPoint DecimalPoint;
    alias QueryType.GroupSeparator GroupSeparator;
    alias QueryType.ZeroDigit ZeroDigit;
    alias QueryType.NegativeSign NegativeSign;
    alias QueryType.DateFormatLong DateFormatLong;
    alias QueryType.DateFormatShort DateFormatShort;
    alias QueryType.TimeFormatLong TimeFormatLong;
    alias QueryType.TimeFormatShort TimeFormatShort;
    alias QueryType.DayNameLong DayNameLong;
    alias QueryType.DayNameShort DayNameShort;
    alias QueryType.MonthNameLong MonthNameLong;
    alias QueryType.MonthNameShort MonthNameShort;
    alias QueryType.DateToStringLong DateToStringLong;
    alias QueryType.DateToStringShort DateToStringShort;
    alias QueryType.TimeToStringLong TimeToStringLong;
    alias QueryType.TimeToStringShort TimeToStringShort;
    alias QueryType.DateTimeFormatLong DateTimeFormatLong;
    alias QueryType.DateTimeFormatShort DateTimeFormatShort;
    alias QueryType.DateTimeToStringLong DateTimeToStringLong;
    alias QueryType.DateTimeToStringShort DateTimeToStringShort;
    alias QueryType.MeasurementSystem MeasurementSystem;
    alias QueryType.PositiveSign PositiveSign;
    alias QueryType.AMText AMText;
    alias QueryType.PMText PMText;


// Functions

    public this() {
        void* ret = qtd_QSystemLocale_QSystemLocale(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public QLocale fallbackLocale() const {
        void* ret = qtd_QSystemLocale_fallbackLocale_const(qtdNativeId);
        QLocale __d_return_value = new QLocale(ret);
        return __d_return_value;
    }

    public QVariant query(QSystemLocale.QueryType type, QVariant in_) const {
        void* ret = qtd_QSystemLocale_query_QueryType_QVariant_const(qtdNativeId, type, in_ is null ? null : in_.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }
// Field accessors
    static QSystemLocale __getObject(void* nativeId) {
        return qtd_QSystemLocale_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QSystemLocale;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QSystemLocale_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QSystemLocale_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QSystemLocale_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QSystemLocale_entity(void *q_ptr);

QSystemLocale qtd_QSystemLocale_from_ptr(void* ret) {
    void* d_obj = __QSystemLocale_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QSystemLocale) d_obj_ref;
    } else {
        auto return_value = new QSystemLocale(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QSystemLocale_delete(void *ptr);
extern (C) void qtd_QSystemLocale_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSystemLocale_QSystemLocale(void *d_ptr);
private extern(C) void*  qtd_QSystemLocale_fallbackLocale_const(void* __this_nativeId);
private extern(C) void*  qtd_QSystemLocale_query_QueryType_QVariant_const(void* __this_nativeId,
 int type0,
 void* in1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId) qtd_QSystemLocale_fallbackLocale_const_dispatch; }
extern(C) void* qtd_export_QSystemLocale_fallbackLocale_const_dispatch(void *dId){
    auto d_object = cast(QSystemLocale) dId;
    QLocale ret_value = d_object.fallbackLocale();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId, int type0, void* in1) qtd_QSystemLocale_query_QueryType_QVariant_const_dispatch; }
extern(C) void* qtd_export_QSystemLocale_query_QueryType_QVariant_const_dispatch(void *dId, int type0, void* in1){
    auto d_object = cast(QSystemLocale) dId;
    auto type0_enum = cast(QSystemLocale.QueryType) type0;
    scope in1_d_ref = new QVariant(in1, QtdObjectInitFlags.onStack);
    QVariant ret_value = d_object.query(type0_enum, in1_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QSystemLocale_initCallBacks(void* virtuals);

extern(C) void static_init_QSystemLocale() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QSystemLocale_fallbackLocale_const_dispatch;
    virt_arr[1] = &qtd_export_QSystemLocale_query_QueryType_QVariant_const_dispatch;
    qtd_QSystemLocale_initCallBacks(virt_arr.ptr);
}

// signal handlers

