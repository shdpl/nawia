module qt.gui.QFileOpenEvent;

public import qt.gui.QFileOpenEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QUrl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFileOpenEvent : QEvent
{

// Functions

    public this(string file) {
        void* ret = qtd_QFileOpenEvent_QFileOpenEvent_string(cast(void*) this, file);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QUrl) url) {
        void* ret = qtd_QFileOpenEvent_QFileOpenEvent_QUrl(cast(void*) this, url is null ? null : (cast(QUrl)url).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string file() const {
        string res;
        qtd_QFileOpenEvent_file_const(qtdNativeId, &res);
        return res;
    }

    public final QUrl url() const {
        void* ret = qtd_QFileOpenEvent_url_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }
// Field accessors
    static QFileOpenEvent __getObject(void* nativeId) {
        return qtd_QFileOpenEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QFileOpenEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QFileOpenEvent_entity(void *q_ptr);

QFileOpenEvent qtd_QFileOpenEvent_from_ptr(void* ret) {
    auto return_value = new QFileOpenEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFileOpenEvent_QFileOpenEvent_string(void *d_ptr,
 string file0);
private extern(C) void* qtd_QFileOpenEvent_QFileOpenEvent_QUrl(void *d_ptr,
 void* url0);
private extern(C) void  qtd_QFileOpenEvent_file_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QFileOpenEvent_url_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFileOpenEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QFileOpenEvent() {
    qtd_QFileOpenEvent_initCallBacks(null);
}

// signal handlers

