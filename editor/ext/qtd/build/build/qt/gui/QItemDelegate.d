module qt.gui.QItemDelegate;

public import qt.gui.QItemDelegate_aux;
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
public import qt.gui.QAbstractItemDelegate;
public import qt.gui.QStyleOptionViewItem;
public import qt.gui.QPainter;
public import qt.core.QRect;
public import qt.gui.QAbstractItemDelegate;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QModelIndex;
public import qt.core.QEvent;
public import qt.core.QSize;
public import qt.core.QAbstractItemModel;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.core.QTimerEvent;
public import qt.gui.QFont;
public import qt.gui.QPixmap;
public import qt.gui.QItemEditorFactory;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QItemDelegate : QAbstractItemDelegate
{

Object __rcItemEditorFactory = null;

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
        void* ret = qtd_QItemDelegate_QItemDelegate_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final QRect check(const(QStyleOptionViewItem) option, const(QRect) bounding, QVariant variant) const {
        QRect res;
        qtd_QItemDelegate_check_QStyleOptionViewItem_QRect_QVariant_const(qtdNativeId, &res, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, bounding, variant is null ? null : variant.qtdNativeId);
        return res;
    }

    protected final QPixmap decoration(const(QStyleOptionViewItem) option, QVariant variant) const {
        void* ret = qtd_QItemDelegate_decoration_QStyleOptionViewItem_QVariant_const(qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, variant is null ? null : variant.qtdNativeId);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    protected final void drawBackground(QPainter painter, const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
        qtd_QItemDelegate_drawBackground_QPainter_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
    }

    public final bool hasClipping() const {
        return qtd_QItemDelegate_hasClipping_const(qtdNativeId);
    }

    public final QItemEditorFactory itemEditorFactory() const {
        void* ret = qtd_QItemDelegate_itemEditorFactory_const(qtdNativeId);
        QItemEditorFactory __d_return_value = qtd_QItemEditorFactory_from_ptr(ret);

        return __d_return_value;
    }

    protected final QRect rect(const(QStyleOptionViewItem) option, const(QModelIndex) index, int role) const {
        QRect res;
        qtd_QItemDelegate_rect_QStyleOptionViewItem_QModelIndex_int_const(qtdNativeId, &res, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index, role);
        return res;
    }

    public final void setClipping(bool clip) {
        qtd_QItemDelegate_setClipping_bool(qtdNativeId, clip);
    }

    public final void setItemEditorFactory(QItemEditorFactory factory) {
        {
            __rcItemEditorFactory = cast(Object) factory;
        }
        qtd_QItemDelegate_setItemEditorFactory_QItemEditorFactory(qtdNativeId, factory is null ? null : factory.qtdNativeId);
    }

    protected final QStyleOptionViewItem setOptions(const(QModelIndex) index, const(QStyleOptionViewItem) option) const {
        void* ret = qtd_QItemDelegate_setOptions_QModelIndex_QStyleOptionViewItem_const(qtdNativeId, index, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId);
        QStyleOptionViewItem __d_return_value = new QStyleOptionViewItem(ret);
        return __d_return_value;
    }

    protected final QRect textRectangle(QPainter painter, const(QRect) rect, const(QFont) font, string text) const {
        QRect res;
        qtd_QItemDelegate_textRectangle_QPainter_QRect_QFont_string_const(qtdNativeId, &res, painter is null ? null : painter.qtdNativeId, rect, font is null ? null : (cast(QFont)font).qtdNativeId, text);
        return res;
    }

    public QWidget createEditor(QWidget parent_, const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
        void *ret = qtd_QItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    protected void drawCheck(QPainter painter, const(QStyleOptionViewItem) option, const(QRect) rect, Qt.CheckState state) const {
        qtd_QItemDelegate_drawCheck_QPainter_QStyleOptionViewItem_QRect_CheckState_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, rect, state);
    }

    protected void drawDecoration(QPainter painter, const(QStyleOptionViewItem) option, const(QRect) rect, const(QPixmap) pixmap) const {
        qtd_QItemDelegate_drawDecoration_QPainter_QStyleOptionViewItem_QRect_QPixmap_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, rect, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
    }

    protected void drawDisplay(QPainter painter, const(QStyleOptionViewItem) option, const(QRect) rect, string text) const {
        qtd_QItemDelegate_drawDisplay_QPainter_QStyleOptionViewItem_QRect_string_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, rect, text);
    }

    protected void drawFocus(QPainter painter, const(QStyleOptionViewItem) option, const(QRect) rect) const {
        qtd_QItemDelegate_drawFocus_QPainter_QStyleOptionViewItem_QRect_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, rect);
    }

    public bool editorEvent(QEvent event, QAbstractItemModel model, const(QStyleOptionViewItem) option, const(QModelIndex) index) {
        return qtd_QItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex(qtdNativeId, event is null ? null : event.qtdNativeId, model is null ? null : model.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
    }

    public bool eventFilter(QObject object, QEvent event) {
        return qtd_QItemDelegate_eventFilter_QObject_QEvent(qtdNativeId, object is null ? null : object.qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void paint(QPainter painter, const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
        qtd_QItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
    }

    public void setEditorData(QWidget editor, const(QModelIndex) index) const {
        qtd_QItemDelegate_setEditorData_QWidget_QModelIndex_const(qtdNativeId, editor is null ? null : editor.qtdNativeId, index);
    }

    public void setModelData(QWidget editor, QAbstractItemModel model, const(QModelIndex) index) const {
        qtd_QItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const(qtdNativeId, editor is null ? null : editor.qtdNativeId, model is null ? null : model.qtdNativeId, index);
    }

    public QSize sizeHint(const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
        QSize res;
        qtd_QItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, &res, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
        return res;
    }

    public void updateEditorGeometry(QWidget editor, const(QStyleOptionViewItem) option, const(QModelIndex) index) const {
        qtd_QItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const(qtdNativeId, editor is null ? null : editor.qtdNativeId, option is null ? null : (cast(QStyleOptionViewItem)option).qtdNativeId, index);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QItemDelegate_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QItemDelegate);
    }

    static QItemDelegate __getObject(void* nativeId) {
        return static_cast!(QItemDelegate)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QItemDelegate_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QItemDelegate_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QItemDelegate(nativeId, initFlags);
        QItemDelegate.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QItemDelegate;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QItemDelegate_QItemDelegate_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QItemDelegate_check_QStyleOptionViewItem_QRect_QVariant_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* option0,
 QRect bounding1,
 void* variant2);
private extern(C) void*  qtd_QItemDelegate_decoration_QStyleOptionViewItem_QVariant_const(void* __this_nativeId,
 void* option0,
 void* variant1);
private extern(C) void  qtd_QItemDelegate_drawBackground_QPainter_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* painter0,
 void* option1,
 const(QModelIndexAccessor) index2);
private extern(C) bool  qtd_QItemDelegate_hasClipping_const(void* __this_nativeId);
private extern(C) void*  qtd_QItemDelegate_itemEditorFactory_const(void* __this_nativeId);
private extern(C) void  qtd_QItemDelegate_rect_QStyleOptionViewItem_QModelIndex_int_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* option0,
 const(QModelIndexAccessor) index1,
 int role2);
private extern(C) void  qtd_QItemDelegate_setClipping_bool(void* __this_nativeId,
 bool clip0);
private extern(C) void  qtd_QItemDelegate_setItemEditorFactory_QItemEditorFactory(void* __this_nativeId,
 void* factory0);
private extern(C) void*  qtd_QItemDelegate_setOptions_QModelIndex_QStyleOptionViewItem_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 void* option1);
private extern(C) void  qtd_QItemDelegate_textRectangle_QPainter_QRect_QFont_string_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* painter0,
 QRect rect1,
 void* font2,
 string text3);
private extern(C) void*  qtd_QItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* parent0,
 void* option1,
 const(QModelIndexAccessor) index2);
private extern(C) void  qtd_QItemDelegate_drawCheck_QPainter_QStyleOptionViewItem_QRect_CheckState_const(void* __this_nativeId,
 void* painter0,
 void* option1,
 QRect rect2,
 int state3);
private extern(C) void  qtd_QItemDelegate_drawDecoration_QPainter_QStyleOptionViewItem_QRect_QPixmap_const(void* __this_nativeId,
 void* painter0,
 void* option1,
 QRect rect2,
 void* pixmap3);
private extern(C) void  qtd_QItemDelegate_drawDisplay_QPainter_QStyleOptionViewItem_QRect_string_const(void* __this_nativeId,
 void* painter0,
 void* option1,
 QRect rect2,
 string text3);
private extern(C) void  qtd_QItemDelegate_drawFocus_QPainter_QStyleOptionViewItem_QRect_const(void* __this_nativeId,
 void* painter0,
 void* option1,
 QRect rect2);
private extern(C) bool  qtd_QItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex(void* __this_nativeId,
 void* event0,
 void* model1,
 void* option2,
 const(QModelIndexAccessor) index3);
private extern(C) bool  qtd_QItemDelegate_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* object0,
 void* event1);
private extern(C) void  qtd_QItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* painter0,
 void* option1,
 const(QModelIndexAccessor) index2);
private extern(C) void  qtd_QItemDelegate_setEditorData_QWidget_QModelIndex_const(void* __this_nativeId,
 void* editor0,
 const(QModelIndexAccessor) index1);
private extern(C) void  qtd_QItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const(void* __this_nativeId,
 void* editor0,
 void* model1,
 const(QModelIndexAccessor) index2);
private extern(C) void  qtd_QItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 QSize * __d_return_value,
 void* option0,
 const(QModelIndexAccessor) index1);
private extern(C) void  qtd_QItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const(void* __this_nativeId,
 void* editor0,
 void* option1,
 const(QModelIndexAccessor) index2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* painter0, void* option1, QRect* rect2, int state3) qtd_QItemDelegate_drawCheck_QPainter_QStyleOptionViewItem_QRect_CheckState_const_dispatch; }
extern(C) void qtd_export_QItemDelegate_drawCheck_QPainter_QStyleOptionViewItem_QRect_CheckState_const_dispatch(void *dId, void* painter0, void* option1, QRect* rect2, int state3){
    auto d_object = cast(QItemDelegate) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope option1_d_ref = new QStyleOptionViewItem(option1, QtdObjectInitFlags.onStack);
    auto state3_enum = cast(Qt.CheckState) state3;
    d_object.drawCheck(painter0_d_ref, option1_d_ref, *rect2, state3_enum);
}

extern(C){ extern void function(void *dId, void* painter0, void* option1, QRect* rect2, void* pixmap3) qtd_QItemDelegate_drawDecoration_QPainter_QStyleOptionViewItem_QRect_QPixmap_const_dispatch; }
extern(C) void qtd_export_QItemDelegate_drawDecoration_QPainter_QStyleOptionViewItem_QRect_QPixmap_const_dispatch(void *dId, void* painter0, void* option1, QRect* rect2, void* pixmap3){
    auto d_object = cast(QItemDelegate) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope option1_d_ref = new QStyleOptionViewItem(option1, QtdObjectInitFlags.onStack);
    scope pixmap3_d_ref = new QPixmap(pixmap3, QtdObjectInitFlags.onStack);
    d_object.drawDecoration(painter0_d_ref, option1_d_ref, *rect2, pixmap3_d_ref);
}

extern(C){ extern void function(void *dId, void* painter0, void* option1, QRect* rect2, wchar* text3, int text3_size) qtd_QItemDelegate_drawDisplay_QPainter_QStyleOptionViewItem_QRect_string_const_dispatch; }
extern(C) void qtd_export_QItemDelegate_drawDisplay_QPainter_QStyleOptionViewItem_QRect_string_const_dispatch(void *dId, void* painter0, void* option1, QRect* rect2, wchar* text3, int text3_size){
    auto d_object = cast(QItemDelegate) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope option1_d_ref = new QStyleOptionViewItem(option1, QtdObjectInitFlags.onStack);
    string text3_d_ref = toUTF8(text3[0..text3_size]);
    d_object.drawDisplay(painter0_d_ref, option1_d_ref, *rect2, text3_d_ref);
}

extern(C){ extern void function(void *dId, void* painter0, void* option1, QRect* rect2) qtd_QItemDelegate_drawFocus_QPainter_QStyleOptionViewItem_QRect_const_dispatch; }
extern(C) void qtd_export_QItemDelegate_drawFocus_QPainter_QStyleOptionViewItem_QRect_const_dispatch(void *dId, void* painter0, void* option1, QRect* rect2){
    auto d_object = cast(QItemDelegate) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope option1_d_ref = new QStyleOptionViewItem(option1, QtdObjectInitFlags.onStack);
    d_object.drawFocus(painter0_d_ref, option1_d_ref, *rect2);
}

private extern (C) void qtd_QItemDelegate_initCallBacks(void* virtuals);

extern(C) void static_init_QItemDelegate() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QItemDelegate_drawCheck_QPainter_QStyleOptionViewItem_QRect_CheckState_const_dispatch;
    virt_arr[1] = &qtd_export_QItemDelegate_drawDecoration_QPainter_QStyleOptionViewItem_QRect_QPixmap_const_dispatch;
    virt_arr[2] = &qtd_export_QItemDelegate_drawDisplay_QPainter_QStyleOptionViewItem_QRect_string_const_dispatch;
    virt_arr[3] = &qtd_export_QItemDelegate_drawFocus_QPainter_QStyleOptionViewItem_QRect_const_dispatch;
    qtd_QItemDelegate_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QItemDelegate_closeEditor_handle(void* dId, void** args) {
        auto d_object = cast(QItemDelegate) dId;
        scope editor0 = new QWidget(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        auto hint1 = *(cast(QAbstractItemDelegate.EndEditHint*)args[2]);
        //d_object.closeEditor_emit(editor0, hint1);
}*/
/*private extern(C) void qtd_QItemDelegate_commitData_handle(void* dId, void** args) {
        auto d_object = cast(QItemDelegate) dId;
        scope editor0 = new QWidget(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.commitData_emit(editor0);
}*/
/*private extern(C) void qtd_QItemDelegate_sizeHintChanged_handle(void* dId, void** args) {
        auto d_object = cast(QItemDelegate) dId;
        auto arg__1 = *(cast(QModelIndex*)args[1]);
        //d_object.sizeHintChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QItemDelegate_staticMetaObject();

extern(C) void qtd_QItemDelegate_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QItemDelegate_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
