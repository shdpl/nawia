module qt.core.QTranslator;

public import qt.core.QTranslator_aux;
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
private import qt.core.ArrayOps2;
// automatic imports-------------
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTranslator : QObject
{

    private static const string[] __signalSignatures = [    ];

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
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QTranslator_QTranslator_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool load(string filename, string directory = "", string search_delimiters = "", string suffix = "") {
        return qtd_QTranslator_load_string_string_string_string(qtdNativeId, filename, directory, search_delimiters, suffix);
    }

    private final bool load(const(ubyte*) data, int len) {
        return qtd_QTranslator_load_nativepointerubyte_int(qtdNativeId, data, len);
    }

    public bool isEmpty() const {
        return qtd_QTranslator_isEmpty_const(qtdNativeId);
    }

    public string translate(string context, string sourceText, string disambiguation = null) const {
        string res;
        qtd_QTranslator_translate_nativepointerchar_nativepointerchar_nativepointerchar_const(qtdNativeId, &res, toStringz(context), toStringz(sourceText), toStringz(disambiguation));
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTranslator_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTranslator);
    }

    static QTranslator __getObject(void* nativeId) {
        return static_cast!(QTranslator)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTranslator_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTranslator_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTranslator(nativeId, initFlags);
        QTranslator.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QTranslator;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public final bool load(ubyte[] data) {
        return load(data.ptr, cast(int)data.length);
    }

}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTranslator_QTranslator_QObject(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QTranslator_load_string_string_string_string(void* __this_nativeId,
 string filename0,
 string directory1,
 string search_delimiters2,
 string suffix3);
private extern(C) bool  qtd_QTranslator_load_nativepointerubyte_int(void* __this_nativeId,
 const (ubyte*) data0,
 int len1);
private extern(C) bool  qtd_QTranslator_isEmpty_const(void* __this_nativeId);
private extern(C) void  qtd_QTranslator_translate_nativepointerchar_nativepointerchar_nativepointerchar_const(void* __this_nativeId,
 void* __d_return_value,
 const (char*) context0,
 const (char*) sourceText1,
 const (char*) disambiguation2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId) qtd_QTranslator_isEmpty_const_dispatch; }
extern(C) bool qtd_export_QTranslator_isEmpty_const_dispatch(void *dId){
    auto d_object = cast(QTranslator) dId;
    auto return_value = d_object.isEmpty();
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str, const (char*) context0, const (char*) sourceText1, const (char*) disambiguation2) qtd_QTranslator_translate_nativepointerchar_nativepointerchar_nativepointerchar_const_dispatch; }
extern(C) void qtd_export_QTranslator_translate_nativepointerchar_nativepointerchar_nativepointerchar_const_dispatch(void *dId, string* ret_str, const (char*) context0, const (char*) sourceText1, const (char*) disambiguation2){
    auto d_object = cast(QTranslator) dId;
    string _d_str = d_object.translate(fromStringz(context0), fromStringz(sourceText1), fromStringz(disambiguation2));
    *ret_str = _d_str;
}

private extern (C) void qtd_QTranslator_initCallBacks(void* virtuals);

extern(C) void static_init_QTranslator() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QTranslator_isEmpty_const_dispatch;
    virt_arr[1] = &qtd_export_QTranslator_translate_nativepointerchar_nativepointerchar_nativepointerchar_const_dispatch;
    qtd_QTranslator_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QTranslator_staticMetaObject();

extern(C) void qtd_QTranslator_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTranslator_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
