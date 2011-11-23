module qt.gui.QTextTable;

public import qt.gui.QTextTable_aux;
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
public import qt.gui.QTextDocument;
public import qt.gui.QTextTableCell;
public import qt.core.QObject;
public import qt.gui.QTextCursor;
public import qt.core.QEvent;
public import qt.gui.QTextFrame;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QTextTableFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextTable : QTextFrame
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

    public this(QTextDocument doc) {
        void* ret = qtd_QTextTable_QTextTable_QTextDocument(cast(void*) this, doc is null ? null : doc.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void appendColumns(int count) {
        qtd_QTextTable_appendColumns_int(qtdNativeId, count);
    }

    public final void appendRows(int count) {
        qtd_QTextTable_appendRows_int(qtdNativeId, count);
    }

    public final QTextTableCell cellAt(const(QTextCursor) c) const {
        void* ret = qtd_QTextTable_cellAt_QTextCursor_const(qtdNativeId, c is null ? null : (cast(QTextCursor)c).qtdNativeId);
        QTextTableCell __d_return_value = new QTextTableCell(ret);
        return __d_return_value;
    }

    public final QTextTableCell cellAt(int position) const {
        void* ret = qtd_QTextTable_cellAt_int_const(qtdNativeId, position);
        QTextTableCell __d_return_value = new QTextTableCell(ret);
        return __d_return_value;
    }

    public final QTextTableCell cellAt(int row, int col) const {
        void* ret = qtd_QTextTable_cellAt_int_int_const(qtdNativeId, row, col);
        QTextTableCell __d_return_value = new QTextTableCell(ret);
        return __d_return_value;
    }

    public final int columns() const {
        return qtd_QTextTable_columns_const(qtdNativeId);
    }

    public final QTextTableFormat tableFormat() const {
        void* ret = qtd_QTextTable_tableFormat_const(qtdNativeId);
        QTextTableFormat __d_return_value = new QTextTableFormat(ret);
        return __d_return_value;
    }

    public final void insertColumns(int pos, int num) {
        qtd_QTextTable_insertColumns_int_int(qtdNativeId, pos, num);
    }

    public final void insertRows(int pos, int num) {
        qtd_QTextTable_insertRows_int_int(qtdNativeId, pos, num);
    }

    public final void mergeCells(const(QTextCursor) cursor) {
        qtd_QTextTable_mergeCells_QTextCursor(qtdNativeId, cursor is null ? null : (cast(QTextCursor)cursor).qtdNativeId);
    }

    public final void mergeCells(int row, int col, int numRows, int numCols) {
        qtd_QTextTable_mergeCells_int_int_int_int(qtdNativeId, row, col, numRows, numCols);
    }

    public final void removeColumns(int pos, int num) {
        qtd_QTextTable_removeColumns_int_int(qtdNativeId, pos, num);
    }

    public final void removeRows(int pos, int num) {
        qtd_QTextTable_removeRows_int_int(qtdNativeId, pos, num);
    }

    public final void resize(int rows, int cols) {
        qtd_QTextTable_resize_int_int(qtdNativeId, rows, cols);
    }

    public final QTextCursor rowEnd(const(QTextCursor) c) const {
        void* ret = qtd_QTextTable_rowEnd_QTextCursor_const(qtdNativeId, c is null ? null : (cast(QTextCursor)c).qtdNativeId);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final QTextCursor rowStart(const(QTextCursor) c) const {
        void* ret = qtd_QTextTable_rowStart_QTextCursor_const(qtdNativeId, c is null ? null : (cast(QTextCursor)c).qtdNativeId);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final int rows() const {
        return qtd_QTextTable_rows_const(qtdNativeId);
    }

    public final void setFormat(const(QTextTableFormat) format) {
        qtd_QTextTable_setFormat_QTextTableFormat(qtdNativeId, format is null ? null : (cast(QTextTableFormat)format).qtdNativeId);
    }

    public final void splitCell(int row, int col, int numRows, int numCols) {
        qtd_QTextTable_splitCell_int_int_int_int(qtdNativeId, row, col, numRows, numCols);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTextTable_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTextTable);
    }

    static QTextTable __getObject(void* nativeId) {
        return static_cast!(QTextTable)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTextTable_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTextTable_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTextTable(nativeId, initFlags);
        QTextTable.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QTextTable;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextTable_QTextTable_QTextDocument(void *d_ptr,
 void* doc0);
private extern(C) void  qtd_QTextTable_appendColumns_int(void* __this_nativeId,
 int count0);
private extern(C) void  qtd_QTextTable_appendRows_int(void* __this_nativeId,
 int count0);
private extern(C) void*  qtd_QTextTable_cellAt_QTextCursor_const(void* __this_nativeId,
 void* c0);
private extern(C) void*  qtd_QTextTable_cellAt_int_const(void* __this_nativeId,
 int position0);
private extern(C) void*  qtd_QTextTable_cellAt_int_int_const(void* __this_nativeId,
 int row0,
 int col1);
private extern(C) int  qtd_QTextTable_columns_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextTable_tableFormat_const(void* __this_nativeId);
private extern(C) void  qtd_QTextTable_insertColumns_int_int(void* __this_nativeId,
 int pos0,
 int num1);
private extern(C) void  qtd_QTextTable_insertRows_int_int(void* __this_nativeId,
 int pos0,
 int num1);
private extern(C) void  qtd_QTextTable_mergeCells_QTextCursor(void* __this_nativeId,
 void* cursor0);
private extern(C) void  qtd_QTextTable_mergeCells_int_int_int_int(void* __this_nativeId,
 int row0,
 int col1,
 int numRows2,
 int numCols3);
private extern(C) void  qtd_QTextTable_removeColumns_int_int(void* __this_nativeId,
 int pos0,
 int num1);
private extern(C) void  qtd_QTextTable_removeRows_int_int(void* __this_nativeId,
 int pos0,
 int num1);
private extern(C) void  qtd_QTextTable_resize_int_int(void* __this_nativeId,
 int rows0,
 int cols1);
private extern(C) void*  qtd_QTextTable_rowEnd_QTextCursor_const(void* __this_nativeId,
 void* c0);
private extern(C) void*  qtd_QTextTable_rowStart_QTextCursor_const(void* __this_nativeId,
 void* c0);
private extern(C) int  qtd_QTextTable_rows_const(void* __this_nativeId);
private extern(C) void  qtd_QTextTable_setFormat_QTextTableFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QTextTable_splitCell_int_int_int_int(void* __this_nativeId,
 int row0,
 int col1,
 int numRows2,
 int numCols3);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextTable_initCallBacks(void* virtuals);

extern(C) void static_init_QTextTable() {
    qtd_QTextTable_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QTextTable_staticMetaObject();

extern(C) void qtd_QTextTable_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTextTable_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
