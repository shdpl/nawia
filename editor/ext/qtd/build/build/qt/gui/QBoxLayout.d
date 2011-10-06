module qt.gui.QBoxLayout;

public import qt.gui.QBoxLayout_aux;
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


public class QBoxLayout : QLayout
{
    public enum Direction {
        LeftToRight = 0,
        RightToLeft = 1,
        TopToBottom = 2,
        BottomToTop = 3,

    }

    alias Direction.LeftToRight LeftToRight;
    alias Direction.RightToLeft RightToLeft;
    alias Direction.TopToBottom TopToBottom;
    alias Direction.BottomToTop BottomToTop;


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

    public this(QBoxLayout.Direction arg__1, QWidget parent_ = null) {
        void* ret = qtd_QBoxLayout_QBoxLayout_Direction_QWidget(cast(void*) this, arg__1, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addLayout(QLayout layout, int stretch = 0) {
        if (layout !is null) {
            layout.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QBoxLayout_addLayout_QLayout_int(qtdNativeId, layout is null ? null : layout.qtdNativeId, stretch);
    }

    public final void addSpacerItem(QSpacerItem spacerItem) {
        if (spacerItem !is null) {
            spacerItem.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QBoxLayout_addSpacerItem_QSpacerItem(qtdNativeId, spacerItem is null ? null : spacerItem.qtdNativeId);
    }

    public final void addSpacing(int size) {
        qtd_QBoxLayout_addSpacing_int(qtdNativeId, size);
    }

    public final void addStretch(int stretch = 0) {
        qtd_QBoxLayout_addStretch_int(qtdNativeId, stretch);
    }

    public final void addStrut(int arg__1) {
        qtd_QBoxLayout_addStrut_int(qtdNativeId, arg__1);
    }

    public final void addWidget(QWidget arg__1, int stretch = 0, int alignment = 0) {
        /*if (arg__1 is null)
            throw new NullPointerException("Argument 'arg__1': null not expected."); */
        auto __rcTmp = __rcWidgets;
        if (arg__1 !is null) {
            __rcTmp ~= cast(Object) arg__1;
        }
        qtd_QBoxLayout_addWidget_QWidget_int_Alignment(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, stretch, alignment);
    }

    public final QBoxLayout.Direction direction() const {
        return cast(QBoxLayout.Direction) qtd_QBoxLayout_direction_const(qtdNativeId);
    }

    protected final void insertItem(int index, IQLayoutItem arg__2) {
        if (arg__2 !is null) {
            arg__2.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QBoxLayout_insertItem_int_QLayoutItem(qtdNativeId, index, arg__2 is null ? null : arg__2.__ptr_IQLayoutItem);
    }

    public final void insertLayout(int index, QLayout layout, int stretch = 0) {
        if (layout !is null) {
            layout.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QBoxLayout_insertLayout_int_QLayout_int(qtdNativeId, index, layout is null ? null : layout.qtdNativeId, stretch);
    }

    public final void insertSpacerItem(int index, QSpacerItem spacerItem) {
        if (spacerItem !is null) {
            spacerItem.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QBoxLayout_insertSpacerItem_int_QSpacerItem(qtdNativeId, index, spacerItem is null ? null : spacerItem.qtdNativeId);
    }

    public final void insertSpacing(int index, int size) {
        qtd_QBoxLayout_insertSpacing_int_int(qtdNativeId, index, size);
    }

    public final void insertStretch(int index, int stretch = 0) {
        qtd_QBoxLayout_insertStretch_int_int(qtdNativeId, index, stretch);
    }

    public final void insertWidget(int index, QWidget widget, int stretch = 0, int alignment = 0) {
        auto __rcTmp = __rcWidgets;
        if (widget !is null) {
            __rcTmp ~= cast(Object) widget;
        }
        qtd_QBoxLayout_insertWidget_int_QWidget_int_Alignment(qtdNativeId, index, widget is null ? null : widget.qtdNativeId, stretch, alignment);
    }

    public final void setDirection(QBoxLayout.Direction arg__1) {
        qtd_QBoxLayout_setDirection_Direction(qtdNativeId, arg__1);
    }

    public final void setSpacing(int spacing) {
        qtd_QBoxLayout_setSpacing_int(qtdNativeId, spacing);
    }

    public final void setStretch(int index, int stretch) {
        qtd_QBoxLayout_setStretch_int_int(qtdNativeId, index, stretch);
    }

    public final bool setStretchFactor(QLayout l, int stretch) {
        return qtd_QBoxLayout_setStretchFactor_QLayout_int(qtdNativeId, l is null ? null : l.qtdNativeId, stretch);
    }

    public final bool setStretchFactor(QWidget w, int stretch) {
        return qtd_QBoxLayout_setStretchFactor_QWidget_int(qtdNativeId, w is null ? null : w.qtdNativeId, stretch);
    }

    public final int spacing() const {
        return qtd_QBoxLayout_spacing_const(qtdNativeId);
    }

    public final int stretch(int index) const {
        return qtd_QBoxLayout_stretch_int_const(qtdNativeId, index);
    }

    public void addItem(IQLayoutItem arg__1) {
        if (arg__1 !is null) {
            arg__1.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QBoxLayout_addItem_QLayoutItem(qtdNativeId, arg__1 is null ? null : arg__1.__ptr_IQLayoutItem);
    }

    public int count() const {
        return qtd_QBoxLayout_count_const(qtdNativeId);
    }

    public int expandingDirections() const {
        return qtd_QBoxLayout_expandingDirections_const(qtdNativeId);
    }

    public bool hasHeightForWidth() const {
        return qtd_QBoxLayout_hasHeightForWidth_const(qtdNativeId);
    }

    public int heightForWidth(int arg__1) const {
        return qtd_QBoxLayout_heightForWidth_int_const(qtdNativeId, arg__1);
    }

    public void invalidate() {
        qtd_QBoxLayout_invalidate(qtdNativeId);
    }

    public IQLayoutItem itemAt(int arg__1) const {
        void* ret = qtd_QBoxLayout_itemAt_int_const(qtdNativeId, arg__1);
        IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public QSize maximumSize() const {
        QSize res;
        qtd_QBoxLayout_maximumSize_const(qtdNativeId, &res);
        return res;
    }

    public int minimumHeightForWidth(int arg__1) const {
        return qtd_QBoxLayout_minimumHeightForWidth_int_const(qtdNativeId, arg__1);
    }

    public QSize minimumSize() const {
        QSize res;
        qtd_QBoxLayout_minimumSize_const(qtdNativeId, &res);
        return res;
    }

    public void setGeometry(const(QRect) arg__1) {
        qtd_QBoxLayout_setGeometry_QRect(qtdNativeId, arg__1);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QBoxLayout_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public IQLayoutItem takeAt(int arg__1) {
        void* ret = qtd_QBoxLayout_takeAt_int(qtdNativeId, arg__1);
        IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QBoxLayout_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QBoxLayout);
    }

    static QBoxLayout __getObject(void* nativeId) {
        return static_cast!(QBoxLayout)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QBoxLayout_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QBoxLayout_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QBoxLayout(nativeId, initFlags);
        QBoxLayout.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QBoxLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QBoxLayout_QBoxLayout_Direction_QWidget(void *d_ptr,
 int arg__1,
 void* parent1);
private extern(C) void  qtd_QBoxLayout_addLayout_QLayout_int(void* __this_nativeId,
 void* layout0,
 int stretch1);
private extern(C) void  qtd_QBoxLayout_addSpacerItem_QSpacerItem(void* __this_nativeId,
 void* spacerItem0);
private extern(C) void  qtd_QBoxLayout_addSpacing_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QBoxLayout_addStretch_int(void* __this_nativeId,
 int stretch0);
private extern(C) void  qtd_QBoxLayout_addStrut_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QBoxLayout_addWidget_QWidget_int_Alignment(void* __this_nativeId,
 void* arg__1,
 int stretch1,
 int alignment2);
private extern(C) int  qtd_QBoxLayout_direction_const(void* __this_nativeId);
private extern(C) void  qtd_QBoxLayout_insertItem_int_QLayoutItem(void* __this_nativeId,
 int index0,
 void* arg__2);
private extern(C) void  qtd_QBoxLayout_insertLayout_int_QLayout_int(void* __this_nativeId,
 int index0,
 void* layout1,
 int stretch2);
private extern(C) void  qtd_QBoxLayout_insertSpacerItem_int_QSpacerItem(void* __this_nativeId,
 int index0,
 void* spacerItem1);
private extern(C) void  qtd_QBoxLayout_insertSpacing_int_int(void* __this_nativeId,
 int index0,
 int size1);
private extern(C) void  qtd_QBoxLayout_insertStretch_int_int(void* __this_nativeId,
 int index0,
 int stretch1);
private extern(C) void  qtd_QBoxLayout_insertWidget_int_QWidget_int_Alignment(void* __this_nativeId,
 int index0,
 void* widget1,
 int stretch2,
 int alignment3);
private extern(C) void  qtd_QBoxLayout_setDirection_Direction(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QBoxLayout_setSpacing_int(void* __this_nativeId,
 int spacing0);
private extern(C) void  qtd_QBoxLayout_setStretch_int_int(void* __this_nativeId,
 int index0,
 int stretch1);
private extern(C) bool  qtd_QBoxLayout_setStretchFactor_QLayout_int(void* __this_nativeId,
 void* l0,
 int stretch1);
private extern(C) bool  qtd_QBoxLayout_setStretchFactor_QWidget_int(void* __this_nativeId,
 void* w0,
 int stretch1);
private extern(C) int  qtd_QBoxLayout_spacing_const(void* __this_nativeId);
private extern(C) int  qtd_QBoxLayout_stretch_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QBoxLayout_addItem_QLayoutItem(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QBoxLayout_count_const(void* __this_nativeId);
private extern(C) int  qtd_QBoxLayout_expandingDirections_const(void* __this_nativeId);
private extern(C) bool  qtd_QBoxLayout_hasHeightForWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QBoxLayout_heightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QBoxLayout_invalidate(void* __this_nativeId);
private extern(C) void*  qtd_QBoxLayout_itemAt_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QBoxLayout_maximumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QBoxLayout_minimumHeightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QBoxLayout_minimumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QBoxLayout_setGeometry_QRect(void* __this_nativeId,
 QRect arg__1);
private extern(C) void  qtd_QBoxLayout_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QBoxLayout_takeAt_int(void* __this_nativeId,
 int arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QBoxLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QBoxLayout() {
    qtd_QBoxLayout_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QBoxLayout_staticMetaObject();

extern(C) void qtd_QBoxLayout_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QBoxLayout_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
