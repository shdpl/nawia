module qt.gui.QTextDocument;

public import qt.gui.QTextDocument_aux;
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
public import qt.core.QSizeF;
public import qt.core.QRectF;
public import qt.core.QRegExp;
public import qt.gui.QTextOption;
public import qt.core.QUrl;
public import qt.gui.QTextFormat;
public import qt.gui.QPainter;
public import qt.gui.QAbstractTextDocumentLayout;
public import qt.core.QChildEvent;
public import qt.gui.QTextFrame;
public import qt.gui.QTextBlock;
public import qt.core.QEvent;
public import qt.gui.QPrinter;
public import qt.gui.QTextCursor;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QTextObject;
public import qt.core.QTimerEvent;
public import qt.core.QByteArray;
public import qt.gui.QFont;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextDocument : QObject
{
    public enum ResourceType {
        HtmlResource = 1,
        ImageResource = 2,
        StyleSheetResource = 3,
        UserResource = 100
    }

    alias ResourceType.HtmlResource HtmlResource;
    alias ResourceType.ImageResource ImageResource;
    alias ResourceType.StyleSheetResource StyleSheetResource;
    alias ResourceType.UserResource UserResource;

    public enum FindFlag {
        FindBackward = 1,
        FindCaseSensitively = 2,
        FindWholeWords = 4
    }

    alias FindFlag.FindBackward FindBackward;
    alias FindFlag.FindCaseSensitively FindCaseSensitively;
    alias FindFlag.FindWholeWords FindWholeWords;

    public enum MetaInformation {
        DocumentTitle = 0,
        DocumentUrl = 1
    }

    alias MetaInformation.DocumentTitle DocumentTitle;
    alias MetaInformation.DocumentUrl DocumentUrl;


    private static const string[] __signalSignatures = [
            "blockCountChanged(int)", 
            "contentsChange(int,int,int)", 
            "contentsChanged()", 
            "cursorPositionChanged(QTextCursor)", 
            "documentLayoutChanged()", 
            "modificationChanged(bool)", 
            "redoAvailable(bool)", 
            "undoAvailable(bool)", 
            "undoCommandAdded()"    ];

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

    protected final void blockCountChanged(int newBlockCount) {
        qtd_QTextDocument_blockCountChanged_int(qtdNativeId, newBlockCount);
    }

    protected final void contentsChange(int from, int charsRemoves, int charsAdded) {
        qtd_QTextDocument_contentsChange_int_int_int(qtdNativeId, from, charsRemoves, charsAdded);
    }

    protected final void contentsChanged() {
        qtd_QTextDocument_contentsChanged(qtdNativeId);
    }

    protected final void cursorPositionChanged(const(QTextCursor) cursor) {
        qtd_QTextDocument_cursorPositionChanged_QTextCursor(qtdNativeId, cursor is null ? null : (cast(QTextCursor)cursor).qtdNativeId);
    }

    protected final void documentLayoutChanged() {
        qtd_QTextDocument_documentLayoutChanged(qtdNativeId);
    }

    protected final void modificationChanged(bool m) {
        qtd_QTextDocument_modificationChanged_bool(qtdNativeId, m);
    }

    protected final void redoAvailable(bool arg__1) {
        qtd_QTextDocument_redoAvailable_bool(qtdNativeId, arg__1);
    }

    protected final void undoAvailable(bool arg__1) {
        qtd_QTextDocument_undoAvailable_bool(qtdNativeId, arg__1);
    }

    protected final void undoCommandAdded() {
        qtd_QTextDocument_undoCommandAdded(qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QTextDocument_QTextDocument_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, QObject parent_ = null) {
        void* ret = qtd_QTextDocument_QTextDocument_string_QObject(cast(void*) this, text, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addResource(int type, const(QUrl) name, QVariant resource) {
        qtd_QTextDocument_addResource_int_QUrl_QVariant(qtdNativeId, type, name is null ? null : (cast(QUrl)name).qtdNativeId, resource is null ? null : resource.qtdNativeId);
    }

    public final void adjustSize() {
        qtd_QTextDocument_adjustSize(qtdNativeId);
    }

    public final QTextFormat[] allFormats() const {
        QTextFormat[] res;
        qtd_QTextDocument_allFormats_const(qtdNativeId, &res);
        return res;
    }

    public final int availableRedoSteps() const {
        return qtd_QTextDocument_availableRedoSteps_const(qtdNativeId);
    }

    public final int availableUndoSteps() const {
        return qtd_QTextDocument_availableUndoSteps_const(qtdNativeId);
    }

    public final QTextBlock begin() const {
        void* ret = qtd_QTextDocument_begin_const(qtdNativeId);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    public final int blockCount() const {
        return qtd_QTextDocument_blockCount_const(qtdNativeId);
    }

    public final int characterCount() const {
        return qtd_QTextDocument_characterCount_const(qtdNativeId);
    }

    public final QTextDocument clone(QObject parent_ = null) const {
        void *ret = qtd_QTextDocument_clone_QObject_const(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        QTextDocument __d_return_value = QTextDocument.__getObject(ret);
        return __d_return_value;
    }

    public final QFont defaultFont() const {
        void* ret = qtd_QTextDocument_defaultFont_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final string defaultStyleSheet() const {
        string res;
        qtd_QTextDocument_defaultStyleSheet_const(qtdNativeId, &res);
        return res;
    }

    public final QTextOption defaultTextOption() const {
        void* ret = qtd_QTextDocument_defaultTextOption_const(qtdNativeId);
        QTextOption __d_return_value = new QTextOption(ret);
        return __d_return_value;
    }

    public final QAbstractTextDocumentLayout documentLayout() const {
        void *ret = qtd_QTextDocument_documentLayout_const(qtdNativeId);
        QAbstractTextDocumentLayout __d_return_value = QAbstractTextDocumentLayout.__getObject(ret);
        return __d_return_value;
    }

    public final double documentMargin() const {
        return qtd_QTextDocument_documentMargin_const(qtdNativeId);
    }

    public final void drawContents(QPainter painter, const(QRectF) rect = QRectF()) {
        qtd_QTextDocument_drawContents_QPainter_QRectF(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect);
    }

    public final QTextBlock end() const {
        void* ret = qtd_QTextDocument_end_const(qtdNativeId);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    public final QTextCursor find(const(QRegExp) expr, const(QTextCursor) from, int options = 0) const {
        void* ret = qtd_QTextDocument_find_QRegExp_QTextCursor_FindFlags_const(qtdNativeId, expr is null ? null : (cast(QRegExp)expr).qtdNativeId, from is null ? null : (cast(QTextCursor)from).qtdNativeId, options);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final QTextCursor find(const(QRegExp) expr, int from = 0, int options = 0) const {
        void* ret = qtd_QTextDocument_find_QRegExp_int_FindFlags_const(qtdNativeId, expr is null ? null : (cast(QRegExp)expr).qtdNativeId, from, options);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final QTextCursor find(string subString, const(QTextCursor) from, int options = 0) const {
        void* ret = qtd_QTextDocument_find_string_QTextCursor_FindFlags_const(qtdNativeId, subString, from is null ? null : (cast(QTextCursor)from).qtdNativeId, options);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final QTextCursor find(string subString, int from = 0, int options = 0) const {
        void* ret = qtd_QTextDocument_find_string_int_FindFlags_const(qtdNativeId, subString, from, options);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final QTextBlock findBlock(int pos) const {
        void* ret = qtd_QTextDocument_findBlock_int_const(qtdNativeId, pos);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    public final QTextBlock findBlockByLineNumber(int blockNumber) const {
        void* ret = qtd_QTextDocument_findBlockByLineNumber_int_const(qtdNativeId, blockNumber);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    public final QTextBlock findBlockByNumber(int blockNumber) const {
        void* ret = qtd_QTextDocument_findBlockByNumber_int_const(qtdNativeId, blockNumber);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    public final QTextBlock firstBlock() const {
        void* ret = qtd_QTextDocument_firstBlock_const(qtdNativeId);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    public final QTextFrame frameAt(int pos) const {
        void *ret = qtd_QTextDocument_frameAt_int_const(qtdNativeId, pos);
        QTextFrame __d_return_value = QTextFrame.__getObject(ret);
        return __d_return_value;
    }

    public final double idealWidth() const {
        return qtd_QTextDocument_idealWidth_const(qtdNativeId);
    }

    public final double indentWidth() const {
        return qtd_QTextDocument_indentWidth_const(qtdNativeId);
    }

    public final bool isEmpty() const {
        return qtd_QTextDocument_isEmpty_const(qtdNativeId);
    }

    public final bool isModified() const {
        return qtd_QTextDocument_isModified_const(qtdNativeId);
    }

    public final bool isRedoAvailable() const {
        return qtd_QTextDocument_isRedoAvailable_const(qtdNativeId);
    }

    public final bool isUndoAvailable() const {
        return qtd_QTextDocument_isUndoAvailable_const(qtdNativeId);
    }

    public final bool isUndoRedoEnabled() const {
        return qtd_QTextDocument_isUndoRedoEnabled_const(qtdNativeId);
    }

    public final QTextBlock lastBlock() const {
        void* ret = qtd_QTextDocument_lastBlock_const(qtdNativeId);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    public final int lineCount() const {
        return qtd_QTextDocument_lineCount_const(qtdNativeId);
    }

    public final void markContentsDirty(int from, int length) {
        qtd_QTextDocument_markContentsDirty_int_int(qtdNativeId, from, length);
    }

    public final int maximumBlockCount() const {
        return qtd_QTextDocument_maximumBlockCount_const(qtdNativeId);
    }

    public final string metaInformation(QTextDocument.MetaInformation info) const {
        string res;
        qtd_QTextDocument_metaInformation_MetaInformation_const(qtdNativeId, &res, info);
        return res;
    }

    public final QTextObject object(int objectIndex) const {
        void *ret = qtd_QTextDocument_object_int_const(qtdNativeId, objectIndex);
        QTextObject __d_return_value = QTextObject.__getObject(ret);
        return __d_return_value;
    }

    public final QTextObject objectForFormat(const(QTextFormat) arg__1) const {
        void *ret = qtd_QTextDocument_objectForFormat_QTextFormat_const(qtdNativeId, arg__1 is null ? null : (cast(QTextFormat)arg__1).qtdNativeId);
        QTextObject __d_return_value = QTextObject.__getObject(ret);
        return __d_return_value;
    }

    public final int pageCount() const {
        return qtd_QTextDocument_pageCount_const(qtdNativeId);
    }

    public final QSizeF pageSize() const {
        QSizeF res;
        qtd_QTextDocument_pageSize_const(qtdNativeId, &res);
        return res;
    }

    public final void print(QPrinter printer) const {
        qtd_QTextDocument_print_QPrinter_const(qtdNativeId, printer is null ? null : printer.qtdNativeId);
    }

    public final void redo() {
        qtd_QTextDocument_redo(qtdNativeId);
    }

    public final void redo(QTextCursor cursor) {
        qtd_QTextDocument_redo_nativepointerQTextCursor(qtdNativeId, cursor is null ? null : cursor.qtdNativeId);
    }

    public final QVariant resource(int type, const(QUrl) name) const {
        void* ret = qtd_QTextDocument_resource_int_QUrl_const(qtdNativeId, type, name is null ? null : (cast(QUrl)name).qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final int revision() const {
        return qtd_QTextDocument_revision_const(qtdNativeId);
    }

    public final QTextFrame rootFrame() const {
        void *ret = qtd_QTextDocument_rootFrame_const(qtdNativeId);
        QTextFrame __d_return_value = QTextFrame.__getObject(ret);
        return __d_return_value;
    }

    public final void setDefaultFont(const(QFont) font) {
        qtd_QTextDocument_setDefaultFont_QFont(qtdNativeId, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    public final void setDefaultStyleSheet(string sheet) {
        qtd_QTextDocument_setDefaultStyleSheet_string(qtdNativeId, sheet);
    }

    public final void setDefaultTextOption(const(QTextOption) option) {
        qtd_QTextDocument_setDefaultTextOption_QTextOption(qtdNativeId, option is null ? null : (cast(QTextOption)option).qtdNativeId);
    }

    public final void setDocumentLayout(QAbstractTextDocumentLayout layout) {
        if (layout !is null) {
            layout.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QTextDocument_setDocumentLayout_QAbstractTextDocumentLayout(qtdNativeId, layout is null ? null : layout.qtdNativeId);
    }

    public final void setDocumentMargin(double margin) {
        qtd_QTextDocument_setDocumentMargin_double(qtdNativeId, margin);
    }

    public final void setHtml(string html) {
        qtd_QTextDocument_setHtml_string(qtdNativeId, html);
    }

    public final void setIndentWidth(double width) {
        qtd_QTextDocument_setIndentWidth_double(qtdNativeId, width);
    }

    public final void setMaximumBlockCount(int maximum) {
        qtd_QTextDocument_setMaximumBlockCount_int(qtdNativeId, maximum);
    }

    public final void setMetaInformation(QTextDocument.MetaInformation info, string arg__2) {
        qtd_QTextDocument_setMetaInformation_MetaInformation_string(qtdNativeId, info, arg__2);
    }

    public final void setModified(bool m = true) {
        qtd_QTextDocument_setModified_bool(qtdNativeId, m);
    }

    public final void setPageSize(const(QSizeF) size) {
        qtd_QTextDocument_setPageSize_QSizeF(qtdNativeId, size);
    }

    public final void setPlainText(string text) {
        qtd_QTextDocument_setPlainText_string(qtdNativeId, text);
    }

    public final void setTextWidth(double width) {
        qtd_QTextDocument_setTextWidth_double(qtdNativeId, width);
    }

    public final void setUndoRedoEnabled(bool enable) {
        qtd_QTextDocument_setUndoRedoEnabled_bool(qtdNativeId, enable);
    }

    public final void setUseDesignMetrics(bool b) {
        qtd_QTextDocument_setUseDesignMetrics_bool(qtdNativeId, b);
    }

    public final QSizeF size() const {
        QSizeF res;
        qtd_QTextDocument_size_const(qtdNativeId, &res);
        return res;
    }

    public final double textWidth() const {
        return qtd_QTextDocument_textWidth_const(qtdNativeId);
    }

    public final string toHtml(const(QByteArray) encoding = new QByteArray()) const {
        string res;
        qtd_QTextDocument_toHtml_QByteArray_const(qtdNativeId, &res, encoding is null ? null : (cast(QByteArray)encoding).qtdNativeId);
        return res;
    }

    public final string toPlainText() const {
        string res;
        qtd_QTextDocument_toPlainText_const(qtdNativeId, &res);
        return res;
    }

    public final void undo() {
        qtd_QTextDocument_undo(qtdNativeId);
    }

    public final void undo(QTextCursor cursor) {
        qtd_QTextDocument_undo_nativepointerQTextCursor(qtdNativeId, cursor is null ? null : cursor.qtdNativeId);
    }

    public final bool useDesignMetrics() const {
        return qtd_QTextDocument_useDesignMetrics_const(qtdNativeId);
    }

    public void clear() {
        qtd_QTextDocument_clear(qtdNativeId);
    }

    protected QTextObject createObject(const(QTextFormat) f) {
        void *ret = qtd_QTextDocument_createObject_QTextFormat(qtdNativeId, f is null ? null : (cast(QTextFormat)f).qtdNativeId);
        QTextObject __d_return_value = QTextObject.__getObject(ret);
        return __d_return_value;
    }

    protected QVariant loadResource(int type, const(QUrl) name) {
        void* ret = qtd_QTextDocument_loadResource_int_QUrl(qtdNativeId, type, name is null ? null : (cast(QUrl)name).qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "redo()", 
            "setModified(bool)", 
            "setModified()", 
            "undo()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTextDocument_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTextDocument);
    }

    static QTextDocument __getObject(void* nativeId) {
        return static_cast!(QTextDocument)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTextDocument_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTextDocument_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTextDocument(nativeId, initFlags);
        QTextDocument.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("blockCountChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int,int,int)("contentsChange"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("contentsChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(const(QTextCursor))("cursorPositionChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!()("documentLayoutChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(bool)("modificationChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(bool)("redoAvailable"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(bool)("undoAvailable"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!()("undoCommandAdded"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("redo"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setModified"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("setModified"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("undo"), index));

    }

    public alias void __isQtType_QTextDocument;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QTextDocument_blockCountChanged_int(void* __this_nativeId,
 int newBlockCount0);
private extern(C) void  qtd_QTextDocument_contentsChange_int_int_int(void* __this_nativeId,
 int from0,
 int charsRemoves1,
 int charsAdded2);
private extern(C) void  qtd_QTextDocument_contentsChanged(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_cursorPositionChanged_QTextCursor(void* __this_nativeId,
 void* cursor0);
private extern(C) void  qtd_QTextDocument_documentLayoutChanged(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_modificationChanged_bool(void* __this_nativeId,
 bool m0);
private extern(C) void  qtd_QTextDocument_redoAvailable_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QTextDocument_undoAvailable_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QTextDocument_undoCommandAdded(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QTextDocument_QTextDocument_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QTextDocument_QTextDocument_string_QObject(void *d_ptr,
 string text0,
 void* parent1);
private extern(C) void  qtd_QTextDocument_addResource_int_QUrl_QVariant(void* __this_nativeId,
 int type0,
 void* name1,
 void* resource2);
private extern(C) void  qtd_QTextDocument_adjustSize(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_allFormats_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QTextDocument_availableRedoSteps_const(void* __this_nativeId);
private extern(C) int  qtd_QTextDocument_availableUndoSteps_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextDocument_begin_const(void* __this_nativeId);
private extern(C) int  qtd_QTextDocument_blockCount_const(void* __this_nativeId);
private extern(C) int  qtd_QTextDocument_characterCount_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextDocument_clone_QObject_const(void* __this_nativeId,
 void* parent0);
private extern(C) void*  qtd_QTextDocument_defaultFont_const(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_defaultStyleSheet_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QTextDocument_defaultTextOption_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextDocument_documentLayout_const(void* __this_nativeId);
private extern(C) double  qtd_QTextDocument_documentMargin_const(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_drawContents_QPainter_QRectF(void* __this_nativeId,
 void* painter0,
 QRectF rect1);
private extern(C) void*  qtd_QTextDocument_end_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextDocument_find_QRegExp_QTextCursor_FindFlags_const(void* __this_nativeId,
 void* expr0,
 void* from1,
 int options2);
private extern(C) void*  qtd_QTextDocument_find_QRegExp_int_FindFlags_const(void* __this_nativeId,
 void* expr0,
 int from1,
 int options2);
private extern(C) void*  qtd_QTextDocument_find_string_QTextCursor_FindFlags_const(void* __this_nativeId,
 string subString0,
 void* from1,
 int options2);
private extern(C) void*  qtd_QTextDocument_find_string_int_FindFlags_const(void* __this_nativeId,
 string subString0,
 int from1,
 int options2);
private extern(C) void*  qtd_QTextDocument_findBlock_int_const(void* __this_nativeId,
 int pos0);
private extern(C) void*  qtd_QTextDocument_findBlockByLineNumber_int_const(void* __this_nativeId,
 int blockNumber0);
private extern(C) void*  qtd_QTextDocument_findBlockByNumber_int_const(void* __this_nativeId,
 int blockNumber0);
private extern(C) void*  qtd_QTextDocument_firstBlock_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextDocument_frameAt_int_const(void* __this_nativeId,
 int pos0);
private extern(C) double  qtd_QTextDocument_idealWidth_const(void* __this_nativeId);
private extern(C) double  qtd_QTextDocument_indentWidth_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextDocument_isEmpty_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextDocument_isModified_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextDocument_isRedoAvailable_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextDocument_isUndoAvailable_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextDocument_isUndoRedoEnabled_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextDocument_lastBlock_const(void* __this_nativeId);
private extern(C) int  qtd_QTextDocument_lineCount_const(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_markContentsDirty_int_int(void* __this_nativeId,
 int from0,
 int length1);
private extern(C) int  qtd_QTextDocument_maximumBlockCount_const(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_metaInformation_MetaInformation_const(void* __this_nativeId,
 void* __d_return_value,
 int info0);
private extern(C) void*  qtd_QTextDocument_object_int_const(void* __this_nativeId,
 int objectIndex0);
private extern(C) void*  qtd_QTextDocument_objectForFormat_QTextFormat_const(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QTextDocument_pageCount_const(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_pageSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) void  qtd_QTextDocument_print_QPrinter_const(void* __this_nativeId,
 void* printer0);
private extern(C) void  qtd_QTextDocument_redo(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_redo_nativepointerQTextCursor(void* __this_nativeId,
 void* cursor0);
private extern(C) void*  qtd_QTextDocument_resource_int_QUrl_const(void* __this_nativeId,
 int type0,
 void* name1);
private extern(C) int  qtd_QTextDocument_revision_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextDocument_rootFrame_const(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_setDefaultFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void  qtd_QTextDocument_setDefaultStyleSheet_string(void* __this_nativeId,
 string sheet0);
private extern(C) void  qtd_QTextDocument_setDefaultTextOption_QTextOption(void* __this_nativeId,
 void* option0);
private extern(C) void  qtd_QTextDocument_setDocumentLayout_QAbstractTextDocumentLayout(void* __this_nativeId,
 void* layout0);
private extern(C) void  qtd_QTextDocument_setDocumentMargin_double(void* __this_nativeId,
 double margin0);
private extern(C) void  qtd_QTextDocument_setHtml_string(void* __this_nativeId,
 string html0);
private extern(C) void  qtd_QTextDocument_setIndentWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QTextDocument_setMaximumBlockCount_int(void* __this_nativeId,
 int maximum0);
private extern(C) void  qtd_QTextDocument_setMetaInformation_MetaInformation_string(void* __this_nativeId,
 int info0,
 string arg__2);
private extern(C) void  qtd_QTextDocument_setModified_bool(void* __this_nativeId,
 bool m0);
private extern(C) void  qtd_QTextDocument_setPageSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QTextDocument_setPlainText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QTextDocument_setTextWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QTextDocument_setUndoRedoEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QTextDocument_setUseDesignMetrics_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QTextDocument_size_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) double  qtd_QTextDocument_textWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_toHtml_QByteArray_const(void* __this_nativeId,
 void* __d_return_value,
 void* encoding0);
private extern(C) void  qtd_QTextDocument_toPlainText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextDocument_undo(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_undo_nativepointerQTextCursor(void* __this_nativeId,
 void* cursor0);
private extern(C) bool  qtd_QTextDocument_useDesignMetrics_const(void* __this_nativeId);
private extern(C) void  qtd_QTextDocument_clear(void* __this_nativeId);
private extern(C) void*  qtd_QTextDocument_createObject_QTextFormat(void* __this_nativeId,
 void* f0);
private extern(C) void*  qtd_QTextDocument_loadResource_int_QUrl(void* __this_nativeId,
 int type0,
 void* name1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QTextDocument_clear_dispatch; }
extern(C) void qtd_export_QTextDocument_clear_dispatch(void *dId){
    auto d_object = cast(QTextDocument) dId;
    d_object.clear();
}

extern(C){ extern void* function(void *dId, void* f0) qtd_QTextDocument_createObject_QTextFormat_dispatch; }
extern(C) void* qtd_export_QTextDocument_createObject_QTextFormat_dispatch(void *dId, void* f0){
    auto d_object = cast(QTextDocument) dId;
    scope f0_d_ref = new QTextFormat(f0, QtdObjectInitFlags.onStack);
    QTextObject ret_value = d_object.createObject(f0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId, int type0, void* name1) qtd_QTextDocument_loadResource_int_QUrl_dispatch; }
extern(C) void* qtd_export_QTextDocument_loadResource_int_QUrl_dispatch(void *dId, int type0, void* name1){
    auto d_object = cast(QTextDocument) dId;
    scope name1_d_ref = new QUrl(name1, QtdObjectInitFlags.onStack);
    QVariant ret_value = d_object.loadResource(type0, name1_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QTextDocument_initCallBacks(void* virtuals);

extern(C) void static_init_QTextDocument() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QTextDocument_clear_dispatch;
    virt_arr[1] = &qtd_export_QTextDocument_createObject_QTextFormat_dispatch;
    virt_arr[2] = &qtd_export_QTextDocument_loadResource_int_QUrl_dispatch;
    qtd_QTextDocument_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QTextDocument_blockCountChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextDocument) dId;
        auto newBlockCount0 = *(cast(int*)args[1]);
        //d_object.blockCountChanged_emit(newBlockCount0);
}*/
/*private extern(C) void qtd_QTextDocument_contentsChange_handle(void* dId, void** args) {
        auto d_object = cast(QTextDocument) dId;
        auto from0 = *(cast(int*)args[1]);
        auto charsRemoves1 = *(cast(int*)args[2]);
        auto charsAdded2 = *(cast(int*)args[3]);
        //d_object.contentsChange_emit(from0, charsRemoves1, charsAdded2);
}*/
/*private extern(C) void qtd_QTextDocument_contentsChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextDocument) dId;
        //d_object.contentsChanged_emit();
}*/
/*private extern(C) void qtd_QTextDocument_cursorPositionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextDocument) dId;
        scope cursor0 = new QTextCursor(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.cursorPositionChanged_emit(cursor0);
}*/
/*private extern(C) void qtd_QTextDocument_documentLayoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextDocument) dId;
        //d_object.documentLayoutChanged_emit();
}*/
/*private extern(C) void qtd_QTextDocument_modificationChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextDocument) dId;
        auto m0 = *(cast(bool*)args[1]);
        //d_object.modificationChanged_emit(m0);
}*/
/*private extern(C) void qtd_QTextDocument_redoAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QTextDocument) dId;
        auto arg__1 = *(cast(bool*)args[1]);
        //d_object.redoAvailable_emit(arg__1);
}*/
/*private extern(C) void qtd_QTextDocument_undoAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QTextDocument) dId;
        auto arg__1 = *(cast(bool*)args[1]);
        //d_object.undoAvailable_emit(arg__1);
}*/
/*private extern(C) void qtd_QTextDocument_undoCommandAdded_handle(void* dId, void** args) {
        auto d_object = cast(QTextDocument) dId;
        //d_object.undoCommandAdded_emit();
}*/

extern(C) QMetaObjectNative* qtd_QTextDocument_staticMetaObject();

extern(C) void qtd_QTextDocument_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTextDocument_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
