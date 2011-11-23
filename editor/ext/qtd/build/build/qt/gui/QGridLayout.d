module qt.gui.QGridLayout;

public import qt.gui.QGridLayout_aux;
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
public import qt.gui.QLayoutItem;
public import qt.core.QObject;
public import qt.gui.QLayout;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QRect;
public import qt.gui.QSpacerItem;
public import qt.gui.QWidget;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGridLayout : QLayout
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

    public this() {
        void* ret = qtd_QGridLayout_QGridLayout(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_) {
        void* ret = qtd_QGridLayout_QGridLayout_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addItem(IQLayoutItem item, int row, int column, int rowSpan = 1, int columnSpan = 1, int arg__6 = 0) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QGridLayout_addItem_QLayoutItem_int_int_int_int_Alignment(qtdNativeId, item is null ? null : item.__ptr_IQLayoutItem, row, column, rowSpan, columnSpan, arg__6);
    }

    public final void addLayout(QLayout arg__1, int row, int column, int arg__4 = 0) {
        if (arg__1 !is null) {
            arg__1.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QGridLayout_addLayout_QLayout_int_int_Alignment(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, row, column, arg__4);
    }

    public final void addLayout(QLayout arg__1, int row, int column, int rowSpan, int columnSpan, int arg__6 = 0) {
        if (arg__1 !is null) {
            arg__1.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QGridLayout_addLayout_QLayout_int_int_int_int_Alignment(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, row, column, rowSpan, columnSpan, arg__6);
    }

    public final void addWidget(QWidget arg__1, int row, int column, int arg__4 = 0) {
        auto __rcTmp = __rcWidgets;
        if (arg__1 !is null) {
            __rcTmp ~= cast(Object) arg__1;
        }
        qtd_QGridLayout_addWidget_QWidget_int_int_Alignment(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, row, column, arg__4);
    }

    public final void addWidget(QWidget arg__1, int row, int column, int rowSpan, int columnSpan, int arg__6 = 0) {
        auto __rcTmp = __rcWidgets;
        if (arg__1 !is null) {
            __rcTmp ~= cast(Object) arg__1;
        }
        qtd_QGridLayout_addWidget_QWidget_int_int_int_int_Alignment(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, row, column, rowSpan, columnSpan, arg__6);
    }

    public final QRect cellRect(int row, int column) const {
        QRect res;
        qtd_QGridLayout_cellRect_int_int_const(qtdNativeId, &res, row, column);
        return res;
    }

    public final int columnCount() const {
        return qtd_QGridLayout_columnCount_const(qtdNativeId);
    }

    public final int columnMinimumWidth(int column) const {
        return qtd_QGridLayout_columnMinimumWidth_int_const(qtdNativeId, column);
    }

    public final int columnStretch(int column) const {
        return qtd_QGridLayout_columnStretch_int_const(qtdNativeId, column);
    }

    private final void getItemPosition(int idx, int* row, int* column, int* rowSpan, int* columnSpan) {
        qtd_QGridLayout_getItemPosition_int_nativepointerint_nativepointerint_nativepointerint_nativepointerint(qtdNativeId, idx, row, column, rowSpan, columnSpan);
    }

    public final int horizontalSpacing() const {
        return qtd_QGridLayout_horizontalSpacing_const(qtdNativeId);
    }

    public final IQLayoutItem itemAtPosition(int row, int column) const {
        void* ret = qtd_QGridLayout_itemAtPosition_int_int_const(qtdNativeId, row, column);
        IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public final Qt.Corner originCorner() const {
        return cast(Qt.Corner) qtd_QGridLayout_originCorner_const(qtdNativeId);
    }

    public final int rowCount() const {
        return qtd_QGridLayout_rowCount_const(qtdNativeId);
    }

    public final int rowMinimumHeight(int row) const {
        return qtd_QGridLayout_rowMinimumHeight_int_const(qtdNativeId, row);
    }

    public final int rowStretch(int row) const {
        return qtd_QGridLayout_rowStretch_int_const(qtdNativeId, row);
    }

    public final void setColumnMinimumWidth(int column, int minSize) {
        qtd_QGridLayout_setColumnMinimumWidth_int_int(qtdNativeId, column, minSize);
    }

    public final void setColumnStretch(int column, int stretch) {
        qtd_QGridLayout_setColumnStretch_int_int(qtdNativeId, column, stretch);
    }

    public final void setDefaultPositioning(int n, Qt.Orientation orient) {
        qtd_QGridLayout_setDefaultPositioning_int_Orientation(qtdNativeId, n, orient);
    }

    public final void setHorizontalSpacing(int spacing) {
        qtd_QGridLayout_setHorizontalSpacing_int(qtdNativeId, spacing);
    }

    public final void setOriginCorner(Qt.Corner arg__1) {
        qtd_QGridLayout_setOriginCorner_Corner(qtdNativeId, arg__1);
    }

    public final void setRowMinimumHeight(int row, int minSize) {
        qtd_QGridLayout_setRowMinimumHeight_int_int(qtdNativeId, row, minSize);
    }

    public final void setRowStretch(int row, int stretch) {
        qtd_QGridLayout_setRowStretch_int_int(qtdNativeId, row, stretch);
    }

    public final void setSpacing(int spacing) {
        qtd_QGridLayout_setSpacing_int(qtdNativeId, spacing);
    }

    public final void setVerticalSpacing(int spacing) {
        qtd_QGridLayout_setVerticalSpacing_int(qtdNativeId, spacing);
    }

    public final int spacing() const {
        return qtd_QGridLayout_spacing_const(qtdNativeId);
    }

    public final int verticalSpacing() const {
        return qtd_QGridLayout_verticalSpacing_const(qtdNativeId);
    }

    public void addItem(IQLayoutItem arg__1) {
        if (arg__1 !is null) {
            arg__1.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QGridLayout_addItem_QLayoutItem(qtdNativeId, arg__1 is null ? null : arg__1.__ptr_IQLayoutItem);
    }

    public int count() const {
        return qtd_QGridLayout_count_const(qtdNativeId);
    }

    public int expandingDirections() const {
        return qtd_QGridLayout_expandingDirections_const(qtdNativeId);
    }

    public bool hasHeightForWidth() const {
        return qtd_QGridLayout_hasHeightForWidth_const(qtdNativeId);
    }

    public int heightForWidth(int arg__1) const {
        return qtd_QGridLayout_heightForWidth_int_const(qtdNativeId, arg__1);
    }

    public void invalidate() {
        qtd_QGridLayout_invalidate(qtdNativeId);
    }

    public IQLayoutItem itemAt(int index) const {
        void* ret = qtd_QGridLayout_itemAt_int_const(qtdNativeId, index);
        IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public QSize maximumSize() const {
        QSize res;
        qtd_QGridLayout_maximumSize_const(qtdNativeId, &res);
        return res;
    }

    public int minimumHeightForWidth(int arg__1) const {
        return qtd_QGridLayout_minimumHeightForWidth_int_const(qtdNativeId, arg__1);
    }

    public QSize minimumSize() const {
        QSize res;
        qtd_QGridLayout_minimumSize_const(qtdNativeId, &res);
        return res;
    }

    public void setGeometry(const(QRect) arg__1) {
        qtd_QGridLayout_setGeometry_QRect(qtdNativeId, arg__1);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QGridLayout_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public IQLayoutItem takeAt(int index) {
        void* ret = qtd_QGridLayout_takeAt_int(qtdNativeId, index);
        IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QGridLayout_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QGridLayout);
    }

    static QGridLayout __getObject(void* nativeId) {
        return static_cast!(QGridLayout)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QGridLayout_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QGridLayout_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QGridLayout(nativeId, initFlags);
        QGridLayout.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QGridLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    public final QTableArea getItemPosition(int index) {
    QNativePointer row = new QNativePointer(QNativePointer.Type.Int);
    QNativePointer column = new QNativePointer(QNativePointer.Type.Int);
    QNativePointer rowSpan = new QNativePointer(QNativePointer.Type.Int);
    QNativePointer columnSpan = new QNativePointer(QNativePointer.Type.Int);

    getItemPosition(index, row, column, rowSpan, columnSpan);

    return new QTableArea(row.intValue(), column.intValue(), rowSpan.intValue(), columnSpan.intValue());
    }
     */

}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGridLayout_QGridLayout(void *d_ptr);
private extern(C) void* qtd_QGridLayout_QGridLayout_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QGridLayout_addItem_QLayoutItem_int_int_int_int_Alignment(void* __this_nativeId,
 void* item0,
 int row1,
 int column2,
 int rowSpan3,
 int columnSpan4,
 int arg__6);
private extern(C) void  qtd_QGridLayout_addLayout_QLayout_int_int_Alignment(void* __this_nativeId,
 void* arg__1,
 int row1,
 int column2,
 int arg__4);
private extern(C) void  qtd_QGridLayout_addLayout_QLayout_int_int_int_int_Alignment(void* __this_nativeId,
 void* arg__1,
 int row1,
 int column2,
 int rowSpan3,
 int columnSpan4,
 int arg__6);
private extern(C) void  qtd_QGridLayout_addWidget_QWidget_int_int_Alignment(void* __this_nativeId,
 void* arg__1,
 int row1,
 int column2,
 int arg__4);
private extern(C) void  qtd_QGridLayout_addWidget_QWidget_int_int_int_int_Alignment(void* __this_nativeId,
 void* arg__1,
 int row1,
 int column2,
 int rowSpan3,
 int columnSpan4,
 int arg__6);
private extern(C) void  qtd_QGridLayout_cellRect_int_int_const(void* __this_nativeId,
 QRect * __d_return_value,
 int row0,
 int column1);
private extern(C) int  qtd_QGridLayout_columnCount_const(void* __this_nativeId);
private extern(C) int  qtd_QGridLayout_columnMinimumWidth_int_const(void* __this_nativeId,
 int column0);
private extern(C) int  qtd_QGridLayout_columnStretch_int_const(void* __this_nativeId,
 int column0);
private extern(C) void  qtd_QGridLayout_getItemPosition_int_nativepointerint_nativepointerint_nativepointerint_nativepointerint(void* __this_nativeId,
 int idx0,
 int* row1,
 int* column2,
 int* rowSpan3,
 int* columnSpan4);
private extern(C) int  qtd_QGridLayout_horizontalSpacing_const(void* __this_nativeId);
private extern(C) void*  qtd_QGridLayout_itemAtPosition_int_int_const(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) int  qtd_QGridLayout_originCorner_const(void* __this_nativeId);
private extern(C) int  qtd_QGridLayout_rowCount_const(void* __this_nativeId);
private extern(C) int  qtd_QGridLayout_rowMinimumHeight_int_const(void* __this_nativeId,
 int row0);
private extern(C) int  qtd_QGridLayout_rowStretch_int_const(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QGridLayout_setColumnMinimumWidth_int_int(void* __this_nativeId,
 int column0,
 int minSize1);
private extern(C) void  qtd_QGridLayout_setColumnStretch_int_int(void* __this_nativeId,
 int column0,
 int stretch1);
private extern(C) void  qtd_QGridLayout_setDefaultPositioning_int_Orientation(void* __this_nativeId,
 int n0,
 int orient1);
private extern(C) void  qtd_QGridLayout_setHorizontalSpacing_int(void* __this_nativeId,
 int spacing0);
private extern(C) void  qtd_QGridLayout_setOriginCorner_Corner(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QGridLayout_setRowMinimumHeight_int_int(void* __this_nativeId,
 int row0,
 int minSize1);
private extern(C) void  qtd_QGridLayout_setRowStretch_int_int(void* __this_nativeId,
 int row0,
 int stretch1);
private extern(C) void  qtd_QGridLayout_setSpacing_int(void* __this_nativeId,
 int spacing0);
private extern(C) void  qtd_QGridLayout_setVerticalSpacing_int(void* __this_nativeId,
 int spacing0);
private extern(C) int  qtd_QGridLayout_spacing_const(void* __this_nativeId);
private extern(C) int  qtd_QGridLayout_verticalSpacing_const(void* __this_nativeId);
private extern(C) void  qtd_QGridLayout_addItem_QLayoutItem(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QGridLayout_count_const(void* __this_nativeId);
private extern(C) int  qtd_QGridLayout_expandingDirections_const(void* __this_nativeId);
private extern(C) bool  qtd_QGridLayout_hasHeightForWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QGridLayout_heightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QGridLayout_invalidate(void* __this_nativeId);
private extern(C) void*  qtd_QGridLayout_itemAt_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QGridLayout_maximumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QGridLayout_minimumHeightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QGridLayout_minimumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QGridLayout_setGeometry_QRect(void* __this_nativeId,
 QRect arg__1);
private extern(C) void  qtd_QGridLayout_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QGridLayout_takeAt_int(void* __this_nativeId,
 int index0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGridLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QGridLayout() {
    qtd_QGridLayout_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QGridLayout_staticMetaObject();

extern(C) void qtd_QGridLayout_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QGridLayout_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
