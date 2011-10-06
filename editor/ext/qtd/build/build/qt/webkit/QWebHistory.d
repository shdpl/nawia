module qt.webkit.QWebHistory;

public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.core.QDataStream;
public import qt.webkit.QWebHistoryItem;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public final class QWebHistory : QtdObject
{

// Functions

    public final void back() {
        qtd_QWebHistory_back(qtdNativeId);
    }

    public final QWebHistoryItem backItem() const {
        void* ret = qtd_QWebHistory_backItem_const(qtdNativeId);
        QWebHistoryItem __d_return_value = new QWebHistoryItem(ret);
        return __d_return_value;
    }

    public final QList!(QWebHistoryItem) backItems(int maxItems) const {
        auto res = QList!(QWebHistoryItem).opCall();
        qtd_QWebHistory_backItems_int_const(qtdNativeId, &res, maxItems);
        return res;
    }

    public final bool canGoBack() const {
        return qtd_QWebHistory_canGoBack_const(qtdNativeId);
    }

    public final bool canGoForward() const {
        return qtd_QWebHistory_canGoForward_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QWebHistory_clear(qtdNativeId);
    }

    public final int count() const {
        return qtd_QWebHistory_count_const(qtdNativeId);
    }

    public final QWebHistoryItem currentItem() const {
        void* ret = qtd_QWebHistory_currentItem_const(qtdNativeId);
        QWebHistoryItem __d_return_value = new QWebHistoryItem(ret);
        return __d_return_value;
    }

    public final int currentItemIndex() const {
        return qtd_QWebHistory_currentItemIndex_const(qtdNativeId);
    }

    public final void forward() {
        qtd_QWebHistory_forward(qtdNativeId);
    }

    public final QWebHistoryItem forwardItem() const {
        void* ret = qtd_QWebHistory_forwardItem_const(qtdNativeId);
        QWebHistoryItem __d_return_value = new QWebHistoryItem(ret);
        return __d_return_value;
    }

    public final QList!(QWebHistoryItem) forwardItems(int maxItems) const {
        auto res = QList!(QWebHistoryItem).opCall();
        qtd_QWebHistory_forwardItems_int_const(qtdNativeId, &res, maxItems);
        return res;
    }

    public final void goToItem(const(QWebHistoryItem) item) {
        qtd_QWebHistory_goToItem_QWebHistoryItem(qtdNativeId, item is null ? null : (cast(QWebHistoryItem)item).qtdNativeId);
    }

    public final QWebHistoryItem itemAt(int i) const {
        void* ret = qtd_QWebHistory_itemAt_int_const(qtdNativeId, i);
        QWebHistoryItem __d_return_value = new QWebHistoryItem(ret);
        return __d_return_value;
    }

    public final QList!(QWebHistoryItem) items() const {
        auto res = QList!(QWebHistoryItem).opCall();
        qtd_QWebHistory_items_const(qtdNativeId, &res);
        return res;
    }

    public final int maximumItemCount() const {
        return qtd_QWebHistory_maximumItemCount_const(qtdNativeId);
    }

    public final void writeTo(QDataStream stream) {
        qtd_QWebHistory_writeTo_QDataStream(qtdNativeId, stream is null ? null : stream.qtdNativeId);
    }

    public final void readFrom(QDataStream stream) {
        qtd_QWebHistory_readFrom_QDataStream(qtdNativeId, stream is null ? null : stream.qtdNativeId);
    }

    public final void setMaximumItemCount(int count) {
        qtd_QWebHistory_setMaximumItemCount_int(qtdNativeId, count);
    }
// Field accessors
    static QWebHistory __getObject(void* nativeId) {
        return qtd_QWebHistory_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QWebHistory;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QWebHistory qtd_QWebHistory_from_ptr(void* ret) {
    auto return_value = new QWebHistory(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void  qtd_QWebHistory_back(void* __this_nativeId);
private extern(C) void*  qtd_QWebHistory_backItem_const(void* __this_nativeId);
private extern(C) void  qtd_QWebHistory_backItems_int_const(void* __this_nativeId,
 void* __d_return_value,
 int maxItems0);
private extern(C) bool  qtd_QWebHistory_canGoBack_const(void* __this_nativeId);
private extern(C) bool  qtd_QWebHistory_canGoForward_const(void* __this_nativeId);
private extern(C) void  qtd_QWebHistory_clear(void* __this_nativeId);
private extern(C) int  qtd_QWebHistory_count_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebHistory_currentItem_const(void* __this_nativeId);
private extern(C) int  qtd_QWebHistory_currentItemIndex_const(void* __this_nativeId);
private extern(C) void  qtd_QWebHistory_forward(void* __this_nativeId);
private extern(C) void*  qtd_QWebHistory_forwardItem_const(void* __this_nativeId);
private extern(C) void  qtd_QWebHistory_forwardItems_int_const(void* __this_nativeId,
 void* __d_return_value,
 int maxItems0);
private extern(C) void  qtd_QWebHistory_goToItem_QWebHistoryItem(void* __this_nativeId,
 void* item0);
private extern(C) void*  qtd_QWebHistory_itemAt_int_const(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QWebHistory_items_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QWebHistory_maximumItemCount_const(void* __this_nativeId);
private extern(C) void  qtd_QWebHistory_writeTo_QDataStream(void* __this_nativeId,
 void* stream0);
private extern(C) void  qtd_QWebHistory_readFrom_QDataStream(void* __this_nativeId,
 void* stream0);
private extern(C) void  qtd_QWebHistory_setMaximumItemCount_int(void* __this_nativeId,
 int count0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

