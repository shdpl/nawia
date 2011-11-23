module qt.gui.QGraphicsGridLayout;

public import qt.gui.QGraphicsGridLayout_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QRectF;
public import qt.core.QEvent;
public import qt.core.QSizeF;
public import qt.gui.QGraphicsLayoutItem;
public import qt.gui.QGraphicsLayout;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsGridLayout : QGraphicsLayout
{

    package Object[] __rcItems;

// Functions

    public this(IQGraphicsLayoutItem parent_ = null) {
        void* ret = qtd_QGraphicsGridLayout_QGraphicsGridLayout_QGraphicsLayoutItem(cast(void*) this, parent_ is null ? null : parent_.__ptr_IQGraphicsLayoutItem);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addItem(IQGraphicsLayoutItem item, int row, int column, int alignment = 0) {
        if (item !is null) {
            __rcItems ~= cast(Object) item;
        }
        qtd_QGraphicsGridLayout_addItem_QGraphicsLayoutItem_int_int_Alignment(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsLayoutItem, row, column, alignment);
    }

    public final void addItem(IQGraphicsLayoutItem item, int row, int column, int rowSpan, int columnSpan, int alignment = 0) {
        if (item !is null) {
            __rcItems ~= cast(Object) item;
        }
        qtd_QGraphicsGridLayout_addItem_QGraphicsLayoutItem_int_int_int_int_Alignment(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsLayoutItem, row, column, rowSpan, columnSpan, alignment);
    }

    public final int alignment(IQGraphicsLayoutItem item) const {
        return qtd_QGraphicsGridLayout_alignment_QGraphicsLayoutItem_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsLayoutItem);
    }

    public final int columnAlignment(int column) const {
        return qtd_QGraphicsGridLayout_columnAlignment_int_const(qtdNativeId, column);
    }

    public final int columnCount() const {
        return qtd_QGraphicsGridLayout_columnCount_const(qtdNativeId);
    }

    public final double columnMaximumWidth(int column) const {
        return qtd_QGraphicsGridLayout_columnMaximumWidth_int_const(qtdNativeId, column);
    }

    public final double columnMinimumWidth(int column) const {
        return qtd_QGraphicsGridLayout_columnMinimumWidth_int_const(qtdNativeId, column);
    }

    public final double columnPreferredWidth(int column) const {
        return qtd_QGraphicsGridLayout_columnPreferredWidth_int_const(qtdNativeId, column);
    }

    public final double columnSpacing(int column) const {
        return qtd_QGraphicsGridLayout_columnSpacing_int_const(qtdNativeId, column);
    }

    public final int columnStretchFactor(int column) const {
        return qtd_QGraphicsGridLayout_columnStretchFactor_int_const(qtdNativeId, column);
    }

    public final double horizontalSpacing() const {
        return qtd_QGraphicsGridLayout_horizontalSpacing_const(qtdNativeId);
    }

    public final IQGraphicsLayoutItem itemAt(int row, int column) const {
        void* ret = qtd_QGraphicsGridLayout_itemAt_int_int_const(qtdNativeId, row, column);
        IQGraphicsLayoutItem __d_return_value = qtd_QGraphicsLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public final int rowAlignment(int row) const {
        return qtd_QGraphicsGridLayout_rowAlignment_int_const(qtdNativeId, row);
    }

    public final int rowCount() const {
        return qtd_QGraphicsGridLayout_rowCount_const(qtdNativeId);
    }

    public final double rowMaximumHeight(int row) const {
        return qtd_QGraphicsGridLayout_rowMaximumHeight_int_const(qtdNativeId, row);
    }

    public final double rowMinimumHeight(int row) const {
        return qtd_QGraphicsGridLayout_rowMinimumHeight_int_const(qtdNativeId, row);
    }

    public final double rowPreferredHeight(int row) const {
        return qtd_QGraphicsGridLayout_rowPreferredHeight_int_const(qtdNativeId, row);
    }

    public final double rowSpacing(int row) const {
        return qtd_QGraphicsGridLayout_rowSpacing_int_const(qtdNativeId, row);
    }

    public final int rowStretchFactor(int row) const {
        return qtd_QGraphicsGridLayout_rowStretchFactor_int_const(qtdNativeId, row);
    }

    public final void setAlignment(IQGraphicsLayoutItem item, int alignment) {
        qtd_QGraphicsGridLayout_setAlignment_QGraphicsLayoutItem_Alignment(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsLayoutItem, alignment);
    }

    public final void setColumnAlignment(int column, int alignment) {
        qtd_QGraphicsGridLayout_setColumnAlignment_int_Alignment(qtdNativeId, column, alignment);
    }

    public final void setColumnFixedWidth(int column, double width) {
        qtd_QGraphicsGridLayout_setColumnFixedWidth_int_double(qtdNativeId, column, width);
    }

    public final void setColumnMaximumWidth(int column, double width) {
        qtd_QGraphicsGridLayout_setColumnMaximumWidth_int_double(qtdNativeId, column, width);
    }

    public final void setColumnMinimumWidth(int column, double width) {
        qtd_QGraphicsGridLayout_setColumnMinimumWidth_int_double(qtdNativeId, column, width);
    }

    public final void setColumnPreferredWidth(int column, double width) {
        qtd_QGraphicsGridLayout_setColumnPreferredWidth_int_double(qtdNativeId, column, width);
    }

    public final void setColumnSpacing(int column, double spacing) {
        qtd_QGraphicsGridLayout_setColumnSpacing_int_double(qtdNativeId, column, spacing);
    }

    public final void setColumnStretchFactor(int column, int stretch) {
        qtd_QGraphicsGridLayout_setColumnStretchFactor_int_int(qtdNativeId, column, stretch);
    }

    public final void setHorizontalSpacing(double spacing) {
        qtd_QGraphicsGridLayout_setHorizontalSpacing_double(qtdNativeId, spacing);
    }

    public final void setRowAlignment(int row, int alignment) {
        qtd_QGraphicsGridLayout_setRowAlignment_int_Alignment(qtdNativeId, row, alignment);
    }

    public final void setRowFixedHeight(int row, double height) {
        qtd_QGraphicsGridLayout_setRowFixedHeight_int_double(qtdNativeId, row, height);
    }

    public final void setRowMaximumHeight(int row, double height) {
        qtd_QGraphicsGridLayout_setRowMaximumHeight_int_double(qtdNativeId, row, height);
    }

    public final void setRowMinimumHeight(int row, double height) {
        qtd_QGraphicsGridLayout_setRowMinimumHeight_int_double(qtdNativeId, row, height);
    }

    public final void setRowPreferredHeight(int row, double height) {
        qtd_QGraphicsGridLayout_setRowPreferredHeight_int_double(qtdNativeId, row, height);
    }

    public final void setRowSpacing(int row, double spacing) {
        qtd_QGraphicsGridLayout_setRowSpacing_int_double(qtdNativeId, row, spacing);
    }

    public final void setRowStretchFactor(int row, int stretch) {
        qtd_QGraphicsGridLayout_setRowStretchFactor_int_int(qtdNativeId, row, stretch);
    }

    public final void setSpacing(double spacing) {
        qtd_QGraphicsGridLayout_setSpacing_double(qtdNativeId, spacing);
    }

    public final void setVerticalSpacing(double spacing) {
        qtd_QGraphicsGridLayout_setVerticalSpacing_double(qtdNativeId, spacing);
    }

    public final double verticalSpacing() const {
        return qtd_QGraphicsGridLayout_verticalSpacing_const(qtdNativeId);
    }

    public int count() const {
        return qtd_QGraphicsGridLayout_count_const(qtdNativeId);
    }

    public void invalidate() {
        qtd_QGraphicsGridLayout_invalidate(qtdNativeId);
    }

    public IQGraphicsLayoutItem itemAt(int index) const {
        void* ret = qtd_QGraphicsGridLayout_itemAt_int_const(qtdNativeId, index);
        IQGraphicsLayoutItem __d_return_value = qtd_QGraphicsLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public void removeAt(int index) {
        qtd_QGraphicsGridLayout_removeAt_int(qtdNativeId, index);
    }

    public void setGeometry(const(QRectF) rect) {
        qtd_QGraphicsGridLayout_setGeometry_QRectF(qtdNativeId, rect);
    }

    public QSizeF sizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const {
        QSizeF res;
        qtd_QGraphicsGridLayout_sizeHint_SizeHint_QSizeF_const(qtdNativeId, &res, which, constraint);
        return res;
    }
// Field accessors
    static QGraphicsGridLayout __getObject(void* nativeId) {
        return qtd_QGraphicsGridLayout_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsGridLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QGraphicsGridLayout_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGraphicsGridLayout_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGraphicsGridLayout_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsGridLayout_entity(void *q_ptr);

QGraphicsGridLayout qtd_QGraphicsGridLayout_from_ptr(void* ret) {
    void* d_obj = __QGraphicsGridLayout_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QGraphicsGridLayout) d_obj_ref;
    } else {
        auto return_value = new QGraphicsGridLayout(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QGraphicsGridLayout_delete(void *ptr);
extern (C) void qtd_QGraphicsGridLayout_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsGridLayout_QGraphicsGridLayout_QGraphicsLayoutItem(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QGraphicsGridLayout_addItem_QGraphicsLayoutItem_int_int_Alignment(void* __this_nativeId,
 void* item0,
 int row1,
 int column2,
 int alignment3);
private extern(C) void  qtd_QGraphicsGridLayout_addItem_QGraphicsLayoutItem_int_int_int_int_Alignment(void* __this_nativeId,
 void* item0,
 int row1,
 int column2,
 int rowSpan3,
 int columnSpan4,
 int alignment5);
private extern(C) int  qtd_QGraphicsGridLayout_alignment_QGraphicsLayoutItem_const(void* __this_nativeId,
 void* item0);
private extern(C) int  qtd_QGraphicsGridLayout_columnAlignment_int_const(void* __this_nativeId,
 int column0);
private extern(C) int  qtd_QGraphicsGridLayout_columnCount_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsGridLayout_columnMaximumWidth_int_const(void* __this_nativeId,
 int column0);
private extern(C) double  qtd_QGraphicsGridLayout_columnMinimumWidth_int_const(void* __this_nativeId,
 int column0);
private extern(C) double  qtd_QGraphicsGridLayout_columnPreferredWidth_int_const(void* __this_nativeId,
 int column0);
private extern(C) double  qtd_QGraphicsGridLayout_columnSpacing_int_const(void* __this_nativeId,
 int column0);
private extern(C) int  qtd_QGraphicsGridLayout_columnStretchFactor_int_const(void* __this_nativeId,
 int column0);
private extern(C) double  qtd_QGraphicsGridLayout_horizontalSpacing_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsGridLayout_itemAt_int_int_const(void* __this_nativeId,
 int row0,
 int column1);
private extern(C) int  qtd_QGraphicsGridLayout_rowAlignment_int_const(void* __this_nativeId,
 int row0);
private extern(C) int  qtd_QGraphicsGridLayout_rowCount_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsGridLayout_rowMaximumHeight_int_const(void* __this_nativeId,
 int row0);
private extern(C) double  qtd_QGraphicsGridLayout_rowMinimumHeight_int_const(void* __this_nativeId,
 int row0);
private extern(C) double  qtd_QGraphicsGridLayout_rowPreferredHeight_int_const(void* __this_nativeId,
 int row0);
private extern(C) double  qtd_QGraphicsGridLayout_rowSpacing_int_const(void* __this_nativeId,
 int row0);
private extern(C) int  qtd_QGraphicsGridLayout_rowStretchFactor_int_const(void* __this_nativeId,
 int row0);
private extern(C) void  qtd_QGraphicsGridLayout_setAlignment_QGraphicsLayoutItem_Alignment(void* __this_nativeId,
 void* item0,
 int alignment1);
private extern(C) void  qtd_QGraphicsGridLayout_setColumnAlignment_int_Alignment(void* __this_nativeId,
 int column0,
 int alignment1);
private extern(C) void  qtd_QGraphicsGridLayout_setColumnFixedWidth_int_double(void* __this_nativeId,
 int column0,
 double width1);
private extern(C) void  qtd_QGraphicsGridLayout_setColumnMaximumWidth_int_double(void* __this_nativeId,
 int column0,
 double width1);
private extern(C) void  qtd_QGraphicsGridLayout_setColumnMinimumWidth_int_double(void* __this_nativeId,
 int column0,
 double width1);
private extern(C) void  qtd_QGraphicsGridLayout_setColumnPreferredWidth_int_double(void* __this_nativeId,
 int column0,
 double width1);
private extern(C) void  qtd_QGraphicsGridLayout_setColumnSpacing_int_double(void* __this_nativeId,
 int column0,
 double spacing1);
private extern(C) void  qtd_QGraphicsGridLayout_setColumnStretchFactor_int_int(void* __this_nativeId,
 int column0,
 int stretch1);
private extern(C) void  qtd_QGraphicsGridLayout_setHorizontalSpacing_double(void* __this_nativeId,
 double spacing0);
private extern(C) void  qtd_QGraphicsGridLayout_setRowAlignment_int_Alignment(void* __this_nativeId,
 int row0,
 int alignment1);
private extern(C) void  qtd_QGraphicsGridLayout_setRowFixedHeight_int_double(void* __this_nativeId,
 int row0,
 double height1);
private extern(C) void  qtd_QGraphicsGridLayout_setRowMaximumHeight_int_double(void* __this_nativeId,
 int row0,
 double height1);
private extern(C) void  qtd_QGraphicsGridLayout_setRowMinimumHeight_int_double(void* __this_nativeId,
 int row0,
 double height1);
private extern(C) void  qtd_QGraphicsGridLayout_setRowPreferredHeight_int_double(void* __this_nativeId,
 int row0,
 double height1);
private extern(C) void  qtd_QGraphicsGridLayout_setRowSpacing_int_double(void* __this_nativeId,
 int row0,
 double spacing1);
private extern(C) void  qtd_QGraphicsGridLayout_setRowStretchFactor_int_int(void* __this_nativeId,
 int row0,
 int stretch1);
private extern(C) void  qtd_QGraphicsGridLayout_setSpacing_double(void* __this_nativeId,
 double spacing0);
private extern(C) void  qtd_QGraphicsGridLayout_setVerticalSpacing_double(void* __this_nativeId,
 double spacing0);
private extern(C) double  qtd_QGraphicsGridLayout_verticalSpacing_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsGridLayout_count_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsGridLayout_invalidate(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsGridLayout_itemAt_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QGraphicsGridLayout_removeAt_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QGraphicsGridLayout_setGeometry_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsGridLayout_sizeHint_SizeHint_QSizeF_const(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsGridLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsGridLayout() {
    qtd_QGraphicsGridLayout_initCallBacks(null);
}

// signal handlers

