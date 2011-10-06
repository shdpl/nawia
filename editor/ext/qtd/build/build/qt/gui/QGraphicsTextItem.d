module qt.gui.QGraphicsTextItem;

public import qt.gui.QGraphicsTextItem_aux;
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
public import qt.gui.QGraphicsItem;
public import qt.core.Qt;
public import qt.core.QRectF;
public import qt.gui.QGraphicsSceneContextMenuEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QPainterPath;
public import qt.gui.QPainter;
public import qt.gui.QGraphicsSceneWheelEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QGraphicsSceneMouseEvent;
public import qt.gui.QGraphicsObject;
public import qt.gui.QKeyEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QGraphicsSceneDragDropEvent;
public import qt.core.QEvent;
public import qt.gui.QColor;
public import qt.gui.QGraphicsSceneHoverEvent;
public import qt.gui.QTextCursor;
public import qt.gui.QTextDocument;
public import qt.core.QPointF;
public import qt.core.QVariant;
public import qt.core.QObject;
public import qt.core.QTimerEvent;
public import qt.gui.QStyleOptionGraphicsItem;
public import qt.gui.QFont;
public import qt.gui.QGraphicsItem;
public import qt.gui.QGraphicsScene;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsTextItem : QGraphicsObject
{
    public enum enum_1 {
        Type = 8
    }

    alias enum_1.Type Type;


    private static const string[] __signalSignatures = [
            "linkActivated(QString)", 
            "linkHovered(QString)"    ];

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

    protected final void linkActivated(string arg__1) {
        qtd_QGraphicsTextItem_linkActivated_string(qtdNativeId, arg__1);
    }

    protected final void linkHovered(string arg__1) {
        qtd_QGraphicsTextItem_linkHovered_string(qtdNativeId, arg__1);
    }
// Functions

    public this(IQGraphicsItem parent_ = null, QGraphicsScene scene = null) {
        void* ret = qtd_QGraphicsTextItem_QGraphicsTextItem_QGraphicsItem_QGraphicsScene(cast(void*) this, parent_ is null ? null : parent_.__ptr_IQGraphicsItem, scene is null ? null : scene.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, IQGraphicsItem parent_ = null, QGraphicsScene scene = null) {
        void* ret = qtd_QGraphicsTextItem_QGraphicsTextItem_string_QGraphicsItem_QGraphicsScene(cast(void*) this, text, parent_ is null ? null : parent_.__ptr_IQGraphicsItem, scene is null ? null : scene.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void adjustSize() {
        qtd_QGraphicsTextItem_adjustSize(qtdNativeId);
    }

    public final QColor defaultTextColor() const {
        void* ret = qtd_QGraphicsTextItem_defaultTextColor_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final QTextDocument document() const {
        void *ret = qtd_QGraphicsTextItem_document_const(qtdNativeId);
        QTextDocument __d_return_value = QTextDocument.__getObject(ret);
        return __d_return_value;
    }

    public final QFont font() const {
        void* ret = qtd_QGraphicsTextItem_font_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final bool openExternalLinks() const {
        return qtd_QGraphicsTextItem_openExternalLinks_const(qtdNativeId);
    }

    public final void setDefaultTextColor(const(QColor) c) {
        qtd_QGraphicsTextItem_setDefaultTextColor_QColor(qtdNativeId, c is null ? null : (cast(QColor)c).qtdNativeId);
    }

    public final void setDocument(QTextDocument document) {
        qtd_QGraphicsTextItem_setDocument_QTextDocument(qtdNativeId, document is null ? null : document.qtdNativeId);
    }

    public final void setFont(const(QFont) font) {
        qtd_QGraphicsTextItem_setFont_QFont(qtdNativeId, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    public final void setHtml(string html) {
        qtd_QGraphicsTextItem_setHtml_string(qtdNativeId, html);
    }

    public final void setOpenExternalLinks(bool open) {
        qtd_QGraphicsTextItem_setOpenExternalLinks_bool(qtdNativeId, open);
    }

    public final void setPlainText(string text) {
        qtd_QGraphicsTextItem_setPlainText_string(qtdNativeId, text);
    }

    public final void setTabChangesFocus(bool b) {
        qtd_QGraphicsTextItem_setTabChangesFocus_bool(qtdNativeId, b);
    }

    public final void setTextCursor(const(QTextCursor) cursor) {
        qtd_QGraphicsTextItem_setTextCursor_QTextCursor(qtdNativeId, cursor is null ? null : (cast(QTextCursor)cursor).qtdNativeId);
    }

    public final void setTextInteractionFlags(int flags) {
        qtd_QGraphicsTextItem_setTextInteractionFlags_TextInteractionFlags(qtdNativeId, flags);
    }

    public final void setTextWidth(double width) {
        qtd_QGraphicsTextItem_setTextWidth_double(qtdNativeId, width);
    }

    public final bool tabChangesFocus() const {
        return qtd_QGraphicsTextItem_tabChangesFocus_const(qtdNativeId);
    }

    public final QTextCursor textCursor() const {
        void* ret = qtd_QGraphicsTextItem_textCursor_const(qtdNativeId);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final int textInteractionFlags() const {
        return qtd_QGraphicsTextItem_textInteractionFlags_const(qtdNativeId);
    }

    public final double textWidth() const {
        return qtd_QGraphicsTextItem_textWidth_const(qtdNativeId);
    }

    public final string toHtml() const {
        string res;
        qtd_QGraphicsTextItem_toHtml_const(qtdNativeId, &res);
        return res;
    }

    public final string toPlainText() const {
        string res;
        qtd_QGraphicsTextItem_toPlainText_const(qtdNativeId, &res);
        return res;
    }

    public QRectF boundingRect() const {
        QRectF res;
        qtd_QGraphicsTextItem_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    public bool contains(const(QPointF) point) const {
        return qtd_QGraphicsTextItem_contains_QPointF_const(qtdNativeId, point);
    }

    public void contextMenuEvent(QGraphicsSceneContextMenuEvent event) {
        qtd_QGraphicsTextItem_contextMenuEvent_QGraphicsSceneContextMenuEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragEnterEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsTextItem_dragEnterEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragLeaveEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsTextItem_dragLeaveEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragMoveEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsTextItem_dragMoveEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dropEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsTextItem_dropEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QVariant extension(QVariant variant) const {
        void* ret = qtd_QGraphicsTextItem_extension_QVariant_const(qtdNativeId, variant is null ? null : variant.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public void focusInEvent(QFocusEvent event) {
        qtd_QGraphicsTextItem_focusInEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void focusOutEvent(QFocusEvent event) {
        qtd_QGraphicsTextItem_focusOutEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverEnterEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsTextItem_hoverEnterEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverLeaveEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsTextItem_hoverLeaveEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverMoveEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsTextItem_hoverMoveEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void inputMethodEvent(QInputMethodEvent event) {
        qtd_QGraphicsTextItem_inputMethodEvent_QInputMethodEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery query) const {
        void* ret = qtd_QGraphicsTextItem_inputMethodQuery_InputMethodQuery_const(qtdNativeId, query);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool isObscuredBy(IQGraphicsItem item) const {
        return qtd_QGraphicsTextItem_isObscuredBy_QGraphicsItem_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public void keyPressEvent(QKeyEvent event) {
        qtd_QGraphicsTextItem_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void keyReleaseEvent(QKeyEvent event) {
        qtd_QGraphicsTextItem_keyReleaseEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseDoubleClickEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsTextItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseMoveEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsTextItem_mouseMoveEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mousePressEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsTextItem_mousePressEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseReleaseEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsTextItem_mouseReleaseEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QPainterPath opaqueArea() const {
        void* ret = qtd_QGraphicsTextItem_opaqueArea_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public void paint(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget) {
        qtd_QGraphicsTextItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionGraphicsItem)option).qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public bool sceneEvent(QEvent event) {
        return qtd_QGraphicsTextItem_sceneEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QPainterPath shape() const {
        void* ret = qtd_QGraphicsTextItem_shape_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public int type() const {
        return qtd_QGraphicsTextItem_type_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QGraphicsTextItem_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QGraphicsTextItem);
    }

    static QGraphicsTextItem __getObject(void* nativeId) {
        return static_cast!(QGraphicsTextItem)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QGraphicsTextItem_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QGraphicsTextItem_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QGraphicsTextItem(nativeId, initFlags);
        QGraphicsTextItem.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(string)("linkActivated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(string)("linkHovered"), index));

    }

    public alias void __isQtType_QGraphicsTextItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QGraphicsTextItem_linkActivated_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QGraphicsTextItem_linkHovered_string(void* __this_nativeId,
 string arg__1);

// C wrappers
private extern(C) void* qtd_QGraphicsTextItem_QGraphicsTextItem_QGraphicsItem_QGraphicsScene(void *d_ptr,
 void* parent0,
 void* scene1);
private extern(C) void* qtd_QGraphicsTextItem_QGraphicsTextItem_string_QGraphicsItem_QGraphicsScene(void *d_ptr,
 string text0,
 void* parent1,
 void* scene2);
private extern(C) void  qtd_QGraphicsTextItem_adjustSize(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsTextItem_defaultTextColor_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsTextItem_document_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsTextItem_font_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsTextItem_openExternalLinks_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsTextItem_setDefaultTextColor_QColor(void* __this_nativeId,
 void* c0);
private extern(C) void  qtd_QGraphicsTextItem_setDocument_QTextDocument(void* __this_nativeId,
 void* document0);
private extern(C) void  qtd_QGraphicsTextItem_setFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void  qtd_QGraphicsTextItem_setHtml_string(void* __this_nativeId,
 string html0);
private extern(C) void  qtd_QGraphicsTextItem_setOpenExternalLinks_bool(void* __this_nativeId,
 bool open0);
private extern(C) void  qtd_QGraphicsTextItem_setPlainText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QGraphicsTextItem_setTabChangesFocus_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QGraphicsTextItem_setTextCursor_QTextCursor(void* __this_nativeId,
 void* cursor0);
private extern(C) void  qtd_QGraphicsTextItem_setTextInteractionFlags_TextInteractionFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QGraphicsTextItem_setTextWidth_double(void* __this_nativeId,
 double width0);
private extern(C) bool  qtd_QGraphicsTextItem_tabChangesFocus_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsTextItem_textCursor_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsTextItem_textInteractionFlags_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsTextItem_textWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsTextItem_toHtml_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QGraphicsTextItem_toPlainText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QGraphicsTextItem_boundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) bool  qtd_QGraphicsTextItem_contains_QPointF_const(void* __this_nativeId,
 QPointF point0);
private extern(C) void  qtd_QGraphicsTextItem_contextMenuEvent_QGraphicsSceneContextMenuEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_dragEnterEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_dragLeaveEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_dragMoveEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_dropEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsTextItem_extension_QVariant_const(void* __this_nativeId,
 void* variant0);
private extern(C) void  qtd_QGraphicsTextItem_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_hoverEnterEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_hoverLeaveEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_hoverMoveEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsTextItem_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int query0);
private extern(C) bool  qtd_QGraphicsTextItem_isObscuredBy_QGraphicsItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsTextItem_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_mouseMoveEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_mousePressEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsTextItem_mouseReleaseEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsTextItem_opaqueArea_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsTextItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2);
private extern(C) bool  qtd_QGraphicsTextItem_sceneEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsTextItem_shape_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsTextItem_type_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsTextItem_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsTextItem() {
    qtd_QGraphicsTextItem_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QGraphicsTextItem_childrenChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.childrenChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_enabledChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.enabledChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_heightChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.heightChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_opacityChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.opacityChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_parentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.parentChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_rotationChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.rotationChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_scaleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.scaleChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_visibleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.visibleChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_widthChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.widthChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_xChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.xChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_yChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.yChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_zChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        //d_object.zChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsTextItem_linkActivated_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.linkActivated_emit(arg__1);
}*/
/*private extern(C) void qtd_QGraphicsTextItem_linkHovered_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsTextItem) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.linkHovered_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QGraphicsTextItem_staticMetaObject();

extern(C) void qtd_QGraphicsTextItem_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QGraphicsTextItem_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
