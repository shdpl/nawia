module qt.core.QTextCodec;

public import qt.core.QTextCodec_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QTextDecoder;
public import qt.core.QList;
public import qt.core.QTextEncoder;
public import qt.core.QByteArray;
public import qt.core.QTextCodec_ConverterState;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QTextCodec : QtdObject
{
    public enum ConversionFlag {
        DefaultConversion = 0,
        ConvertInvalidToNull = -2147483648,
        IgnoreHeader = 1,
        FreeFunction = 2
    }

    alias ConversionFlag.DefaultConversion DefaultConversion;
    alias ConversionFlag.ConvertInvalidToNull ConvertInvalidToNull;
    alias ConversionFlag.IgnoreHeader IgnoreHeader;
    alias ConversionFlag.FreeFunction FreeFunction;


static Object __rcCodecForCStrings = null;

static Object __rcCodecForLocale = null;

static Object __rcCodecForTr = null;

// Functions

    protected this() {
        void* ret = qtd_QTextCodec_QTextCodec(cast(void*) this);
        this.qtdSetOwnership(QtdObjectOwnership.native);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool canEncode(string arg__1) const {
        return qtd_QTextCodec_canEncode_string_const(qtdNativeId, arg__1);
    }

    public final QByteArray fromUnicode(string uc) const {
        void* ret = qtd_QTextCodec_fromUnicode_string_const(qtdNativeId, uc);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QTextDecoder makeDecoder() const {
        void* ret = qtd_QTextCodec_makeDecoder_const(qtdNativeId);
        QTextDecoder __d_return_value = qtd_QTextDecoder_from_ptr(ret);

        return __d_return_value;
    }

    public final QTextDecoder makeDecoder(int flags) const {
        void* ret = qtd_QTextCodec_makeDecoder_ConversionFlags_const(qtdNativeId, flags);
        QTextDecoder __d_return_value = qtd_QTextDecoder_from_ptr(ret);

        return __d_return_value;
    }

    public final QTextEncoder makeEncoder() const {
        void* ret = qtd_QTextCodec_makeEncoder_const(qtdNativeId);
        QTextEncoder __d_return_value = qtd_QTextEncoder_from_ptr(ret);

        return __d_return_value;
    }

    public final QTextEncoder makeEncoder(int flags) const {
        void* ret = qtd_QTextCodec_makeEncoder_ConversionFlags_const(qtdNativeId, flags);
        QTextEncoder __d_return_value = qtd_QTextEncoder_from_ptr(ret);

        return __d_return_value;
    }

    public final string toUnicode(const(QByteArray) arg__1) const {
        string res;
        qtd_QTextCodec_toUnicode_QByteArray_const(qtdNativeId, &res, arg__1 is null ? null : (cast(QByteArray)arg__1).qtdNativeId);
        return res;
    }

    public QList!(QByteArray) aliases() const {
        auto res = QList!(QByteArray).opCall();
        qtd_QTextCodec_aliases_const(qtdNativeId, &res);
        return res;
    }

    protected abstract QByteArray convertFromUnicode(wchar* in_, int length, QTextCodec_ConverterState state) const;

    protected abstract string convertToUnicode(const(char*) in_, int length, QTextCodec_ConverterState state) const;

    public abstract int mibEnum() const;

    public abstract QByteArray name() const;

    public static QList!(QByteArray) availableCodecs() {
        auto res = QList!(QByteArray).opCall();
        qtd_QTextCodec_availableCodecs(&res);
        return res;
    }

    public static QList!(int) availableMibs() {
        auto res = QList!(int).opCall();
        qtd_QTextCodec_availableMibs(&res);
        return res;
    }

    public static QTextCodec codecForCStrings() {
        void* ret = qtd_QTextCodec_codecForCStrings();
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    public static QTextCodec codecForHtml(const(QByteArray) ba) {
        void* ret = qtd_QTextCodec_codecForHtml_QByteArray(ba is null ? null : (cast(QByteArray)ba).qtdNativeId);
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    public static QTextCodec codecForHtml(const(QByteArray) ba, QTextCodec defaultCodec) {
        void* ret = qtd_QTextCodec_codecForHtml_QByteArray_QTextCodec(ba is null ? null : (cast(QByteArray)ba).qtdNativeId, defaultCodec is null ? null : defaultCodec.qtdNativeId);
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    public static QTextCodec codecForLocale() {
        void* ret = qtd_QTextCodec_codecForLocale();
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    public static QTextCodec codecForMib(int mib) {
        void* ret = qtd_QTextCodec_codecForMib_int(mib);
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    public static QTextCodec codecForName(const(QByteArray) name) {
        void* ret = qtd_QTextCodec_codecForName_QByteArray(name is null ? null : (cast(QByteArray)name).qtdNativeId);
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    private static QTextCodec codecForName(const(char*) name) {
        void* ret = qtd_QTextCodec_codecForName_nativepointerchar(name);
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    public static QTextCodec codecForUtfText(const(QByteArray) ba) {
        void* ret = qtd_QTextCodec_codecForUtfText_QByteArray(ba is null ? null : (cast(QByteArray)ba).qtdNativeId);
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    public static QTextCodec codecForUtfText(const(QByteArray) ba, QTextCodec defaultCodec) {
        void* ret = qtd_QTextCodec_codecForUtfText_QByteArray_QTextCodec(ba is null ? null : (cast(QByteArray)ba).qtdNativeId, defaultCodec is null ? null : defaultCodec.qtdNativeId);
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    public static void setCodecForCStrings(QTextCodec c) {
        {
            __rcCodecForCStrings = cast(Object) c;
        }
        qtd_QTextCodec_setCodecForCStrings_QTextCodec(c is null ? null : c.qtdNativeId);
    }

    public static void setCodecForLocale(QTextCodec c) {
        {
            __rcCodecForLocale = cast(Object) c;
        }
        qtd_QTextCodec_setCodecForLocale_QTextCodec(c is null ? null : c.qtdNativeId);
    }

    private static void setCodecForTr(QTextCodec c) {
        {
            __rcCodecForTr = cast(Object) c;
        }
        qtd_QTextCodec_setCodecForTr_QTextCodec(c is null ? null : c.qtdNativeId);
    }
// Field accessors
    static QTextCodec __getObject(void* nativeId) {
        return qtd_QTextCodec_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QTextCodec;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextCodec_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextCodec_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextCodec_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    static {
    setCodecForTr(QTextCodec.codecForName("UTF-8"));
    }

    public static QTextCodec codecForName(String name) {
    return codecForName(qt.QNativePointer.createCharPointer(name));
    }
     */

}

    public class QTextCodec_ConcreteWrapper : QTextCodec {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         protected QByteArray convertFromUnicode(wchar* in_, int length, QTextCodec_ConverterState state) const {
            void* ret = qtd_QTextCodec_convertFromUnicode_nativepointerchar_int_QTextCodec_ConverterState_const(qtdNativeId, in_, length, state is null ? null : state.qtdNativeId);
            QByteArray __d_return_value = new QByteArray(ret);
            return __d_return_value;
        }

        override         protected string convertToUnicode(const(char*) in_, int length, QTextCodec_ConverterState state) const {
            string res;
            qtd_QTextCodec_convertToUnicode_nativepointerchar_int_QTextCodec_ConverterState_const(qtdNativeId, &res, in_, length, state is null ? null : state.qtdNativeId);
            return res;
        }

        override         public int mibEnum() const {
            return qtd_QTextCodec_mibEnum_const(qtdNativeId);
        }

        override         public QByteArray name() const {
            void* ret = qtd_QTextCodec_name_const(qtdNativeId);
            QByteArray __d_return_value = new QByteArray(ret);
            return __d_return_value;
        }
    }


extern (C) void *__QTextCodec_entity(void *q_ptr);

QTextCodec qtd_QTextCodec_from_ptr(void* ret) {
    void* d_obj = __QTextCodec_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QTextCodec) d_obj_ref;
    } else {
        auto return_value = new QTextCodec_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QTextCodec_delete(void *ptr);
extern (C) void qtd_QTextCodec_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextCodec_QTextCodec(void *d_ptr);
private extern(C) bool  qtd_QTextCodec_canEncode_string_const(void* __this_nativeId,
 string arg__1);
private extern(C) void*  qtd_QTextCodec_fromUnicode_string_const(void* __this_nativeId,
 string uc0);
private extern(C) void*  qtd_QTextCodec_makeDecoder_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextCodec_makeDecoder_ConversionFlags_const(void* __this_nativeId,
 int flags0);
private extern(C) void*  qtd_QTextCodec_makeEncoder_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextCodec_makeEncoder_ConversionFlags_const(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QTextCodec_toUnicode_QByteArray_const(void* __this_nativeId,
 void* __d_return_value,
 void* arg__1);
private extern(C) void  qtd_QTextCodec_aliases_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QTextCodec_convertFromUnicode_nativepointerchar_int_QTextCodec_ConverterState_const(void* __this_nativeId,
 void* in0,
 int length1,
 void* state2);
private extern(C) void  qtd_QTextCodec_convertToUnicode_nativepointerchar_int_QTextCodec_ConverterState_const(void* __this_nativeId,
 void* __d_return_value,
 const (char*) in0,
 int length1,
 void* state2);
private extern(C) int  qtd_QTextCodec_mibEnum_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextCodec_name_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCodec_availableCodecs(void* __d_return_value);
private extern(C) void  qtd_QTextCodec_availableMibs(void* __d_return_value);
private extern(C) void*  qtd_QTextCodec_codecForCStrings();
private extern(C) void*  qtd_QTextCodec_codecForHtml_QByteArray(void* ba0);
private extern(C) void*  qtd_QTextCodec_codecForHtml_QByteArray_QTextCodec(void* ba0,
 void* defaultCodec1);
private extern(C) void*  qtd_QTextCodec_codecForLocale();
private extern(C) void*  qtd_QTextCodec_codecForMib_int(int mib0);
private extern(C) void*  qtd_QTextCodec_codecForName_QByteArray(void* name0);
private extern(C) void*  qtd_QTextCodec_codecForName_nativepointerchar(const (char*) name0);
private extern(C) void*  qtd_QTextCodec_codecForUtfText_QByteArray(void* ba0);
private extern(C) void*  qtd_QTextCodec_codecForUtfText_QByteArray_QTextCodec(void* ba0,
 void* defaultCodec1);
private extern(C) void  qtd_QTextCodec_setCodecForCStrings_QTextCodec(void* c0);
private extern(C) void  qtd_QTextCodec_setCodecForLocale_QTextCodec(void* c0);
private extern(C) void  qtd_QTextCodec_setCodecForTr_QTextCodec(void* c0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QList!(QByteArray)* __d_arr) qtd_QTextCodec_aliases_const_dispatch; }
extern(C) void qtd_export_QTextCodec_aliases_const_dispatch(void *dId, QList!(QByteArray)* __d_arr){
    auto d_object = cast(QTextCodec) dId;
    auto return_value = d_object.aliases();
    *__d_arr = return_value;
}

extern(C){ extern void* function(void *dId, void* in0, int length1, void* state2) qtd_QTextCodec_convertFromUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch; }
extern(C) void* qtd_export_QTextCodec_convertFromUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch(void *dId, void* in0, int length1, void* state2){
    auto d_object = cast(QTextCodec) dId;
    auto in0_d_ref = cast(wchar*) in0;
    scope state2_d_ref = new QTextCodec_ConverterState(state2, QtdObjectInitFlags.onStack);
    QByteArray ret_value = d_object.convertFromUnicode(in0_d_ref, length1, state2_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, string* ret_str, const (char*) in0, int length1, void* state2) qtd_QTextCodec_convertToUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch; }
extern(C) void qtd_export_QTextCodec_convertToUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch(void *dId, string* ret_str, const (char*) in0, int length1, void* state2){
    auto d_object = cast(QTextCodec) dId;
    scope state2_d_ref = new QTextCodec_ConverterState(state2, QtdObjectInitFlags.onStack);
    string _d_str = d_object.convertToUnicode(in0, length1, state2_d_ref);
    *ret_str = _d_str;
}

extern(C){ extern int function(void *dId) qtd_QTextCodec_mibEnum_const_dispatch; }
extern(C) int qtd_export_QTextCodec_mibEnum_const_dispatch(void *dId){
    auto d_object = cast(QTextCodec) dId;
    auto return_value = d_object.mibEnum();
    return return_value;
}

extern(C){ extern void* function(void *dId) qtd_QTextCodec_name_const_dispatch; }
extern(C) void* qtd_export_QTextCodec_name_const_dispatch(void *dId){
    auto d_object = cast(QTextCodec) dId;
    QByteArray ret_value = d_object.name();
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QTextCodec_initCallBacks(void* virtuals);

extern(C) void static_init_QTextCodec() {
    void*[5] virt_arr;
    virt_arr[0] = &qtd_export_QTextCodec_aliases_const_dispatch;
    virt_arr[1] = &qtd_export_QTextCodec_convertFromUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch;
    virt_arr[2] = &qtd_export_QTextCodec_convertToUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch;
    virt_arr[3] = &qtd_export_QTextCodec_mibEnum_const_dispatch;
    virt_arr[4] = &qtd_export_QTextCodec_name_const_dispatch;
    qtd_QTextCodec_initCallBacks(virt_arr.ptr);
}

// signal handlers

