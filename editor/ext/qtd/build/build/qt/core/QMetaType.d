module qt.core.QMetaType;

public import qtd.QMetaTypeImpl;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMetaType
{
// Functions

    public static void* construct(int type, const(void*) copy = null) {
        return qtd_QMetaType_construct_int_nativepointervoid(type, copy);
    }

    public static void destroy(int type, void* data) {
        qtd_QMetaType_destroy_int_nativepointervoid(type, data);
    }

    public static bool isRegistered(int type) {
        return qtd_QMetaType_isRegistered_int(type);
    }

    public static bool load(QDataStream stream, int type, void* data) {
        return qtd_QMetaType_load_QDataStream_int_nativepointervoid(stream is null ? null : stream.qtdNativeId, type, data);
    }

    public static int registerTypedef(const(char*) typeName, int aliasId) {
        return qtd_QMetaType_registerTypedef_nativepointerchar_int(typeName, aliasId);
    }

    public static bool save(QDataStream stream, int type, const(void*) data) {
        return qtd_QMetaType_save_QDataStream_int_nativepointervoid(stream is null ? null : stream.qtdNativeId, type, data);
    }

    public static int type(const(char*) typeName) {
        return qtd_QMetaType_type_nativepointerchar(typeName);
    }

    public static const(char*) typeName(int type) {
        return qtd_QMetaType_typeName_int(type);
    }

    public static void unregisterType(const(char*) typeName) {
        qtd_QMetaType_unregisterType_nativepointerchar(typeName);
    }
// Field accessors
    public alias void __isQtType_QMetaType;

// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void*  qtd_QMetaType_construct_int_nativepointervoid(int type0,
 const (void*) copy1);
private extern(C) void  qtd_QMetaType_destroy_int_nativepointervoid(int type0,
 void* data1);
private extern(C) bool  qtd_QMetaType_isRegistered_int(int type0);
private extern(C) bool  qtd_QMetaType_load_QDataStream_int_nativepointervoid(void* stream0,
 int type1,
 void* data2);
private extern(C) int  qtd_QMetaType_registerTypedef_nativepointerchar_int(const (char*) typeName0,
 int aliasId1);
private extern(C) bool  qtd_QMetaType_save_QDataStream_int_nativepointervoid(void* stream0,
 int type1,
 const (void*) data2);
private extern(C) int  qtd_QMetaType_type_nativepointerchar(const (char*) typeName0);
private extern(C) const (char*)  qtd_QMetaType_typeName_int(int type0);
private extern(C) void  qtd_QMetaType_unregisterType_nativepointerchar(const (char*) typeName0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

