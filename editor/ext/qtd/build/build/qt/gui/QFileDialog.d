module qt.gui.QFileDialog;

public import qt.gui.QFileDialog_aux;
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
public import qt.gui.QPaintDevice;
public import qt.core.QDir;
public import qt.core.QUrl;
public import qt.gui.QAbstractItemDelegate;
public import qt.gui.QDropEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QKeyEvent;
public import qt.gui.QDialog;
public import qt.core.QObject;
public import qt.gui.QResizeEvent;
public import qt.core.QByteArray;
public import qt.gui.QPaintEngine;
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QWheelEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QAbstractProxyModel;
public import qt.gui.QMouseEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QFileIconProvider;
public import qt.gui.QInputMethodEvent;
public import qt.core.QSize;
public import qt.gui.QContextMenuEvent;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QWidget;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QDragLeaveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFileDialog : QDialog
{
    public enum FileMode {
        AnyFile = 0,
        ExistingFile = 1,
        Directory = 2,
        ExistingFiles = 3,
        DirectoryOnly = 4
    }

    alias FileMode.AnyFile AnyFile;
    alias FileMode.ExistingFile ExistingFile;
    alias FileMode.Directory Directory;
    alias FileMode.ExistingFiles ExistingFiles;
    alias FileMode.DirectoryOnly DirectoryOnly;

    public enum Option {
        ShowDirsOnly = 1,
        DontResolveSymlinks = 2,
        DontConfirmOverwrite = 4,
        DontUseSheet = 8,
        DontUseNativeDialog = 16,
        ReadOnly = 32,
        HideNameFilterDetails = 64
    }

    alias Option.ShowDirsOnly ShowDirsOnly;
    alias Option.DontResolveSymlinks DontResolveSymlinks;
    alias Option.DontConfirmOverwrite DontConfirmOverwrite;
    alias Option.DontUseSheet DontUseSheet;
    alias Option.DontUseNativeDialog DontUseNativeDialog;
    alias Option.ReadOnly ReadOnly;
    alias Option.HideNameFilterDetails HideNameFilterDetails;

    public enum DialogLabel {
        LookIn = 0,
        FileName = 1,
        FileType = 2,
        Accept = 3,
        Reject = 4
    }

    alias DialogLabel.LookIn LookIn;
    alias DialogLabel.FileName FileName;
    alias DialogLabel.FileType FileType;
    alias DialogLabel.Accept Accept;
    alias DialogLabel.Reject Reject;

    public enum ViewMode {
        Detail = 0,
        List = 1
    }

    alias ViewMode.Detail Detail;
    alias ViewMode.List List;

    public enum AcceptMode {
        AcceptOpen = 0,
        AcceptSave = 1
    }

    alias AcceptMode.AcceptOpen AcceptOpen;
    alias AcceptMode.AcceptSave AcceptSave;


Object __rcItemDelegate = null;

Object __rcIconProvider = null;

    private static const string[] __signalSignatures = [
            "currentChanged(QString)", 
            "directoryEntered(QString)", 
            "fileSelected(QString)", 
            "filesSelected(QStringList)", 
            "filterSelected(QString)"    ];

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

    protected final void currentChanged(string path) {
        qtd_QFileDialog_currentChanged_string(qtdNativeId, path);
    }

    protected final void directoryEntered(string directory) {
        qtd_QFileDialog_directoryEntered_string(qtdNativeId, directory);
    }

    protected final void fileSelected(string file) {
        qtd_QFileDialog_fileSelected_string(qtdNativeId, file);
    }

    protected final void filesSelected(QList!(string) files) {
        qtd_QFileDialog_filesSelected_QList(qtdNativeId, &files);
    }

    protected final void filterSelected(string filter) {
        qtd_QFileDialog_filterSelected_string(qtdNativeId, filter);
    }
// Functions

    public this(QWidget parent_, int f) {
        void* ret = qtd_QFileDialog_QFileDialog_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_ = null, string caption = "", string directory = "", string filter = "") {
        void* ret = qtd_QFileDialog_QFileDialog_QWidget_string_string_string(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, caption, directory, filter);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QFileDialog.AcceptMode acceptMode() const {
        return cast(QFileDialog.AcceptMode) qtd_QFileDialog_acceptMode_const(qtdNativeId);
    }

    public final bool confirmOverwrite() const {
        return qtd_QFileDialog_confirmOverwrite_const(qtdNativeId);
    }

    public final string defaultSuffix() const {
        string res;
        qtd_QFileDialog_defaultSuffix_const(qtdNativeId, &res);
        return res;
    }

    public final QDir directory() const {
        void* ret = qtd_QFileDialog_directory_const(qtdNativeId);
        QDir __d_return_value = new QDir(ret);
        return __d_return_value;
    }

    public final QFileDialog.FileMode fileMode() const {
        return cast(QFileDialog.FileMode) qtd_QFileDialog_fileMode_const(qtdNativeId);
    }

    public final int filter() const {
        return qtd_QFileDialog_filter_const(qtdNativeId);
    }

    public final QList!(string) filters() const {
        auto res = QList!(string).opCall();
        qtd_QFileDialog_filters_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(string) history() const {
        auto res = QList!(string).opCall();
        qtd_QFileDialog_history_const(qtdNativeId, &res);
        return res;
    }

    public final QFileIconProvider iconProvider() const {
        void* ret = qtd_QFileDialog_iconProvider_const(qtdNativeId);
        QFileIconProvider __d_return_value = qtd_QFileIconProvider_from_ptr(ret);

        return __d_return_value;
    }

    public final bool isNameFilterDetailsVisible() const {
        return qtd_QFileDialog_isNameFilterDetailsVisible_const(qtdNativeId);
    }

    public final bool isReadOnly() const {
        return qtd_QFileDialog_isReadOnly_const(qtdNativeId);
    }

    public final QAbstractItemDelegate itemDelegate() const {
        void *ret = qtd_QFileDialog_itemDelegate_const(qtdNativeId);
        QAbstractItemDelegate __d_return_value = QAbstractItemDelegate.__getObject(ret);
        return __d_return_value;
    }

    public final string labelText(QFileDialog.DialogLabel label) const {
        string res;
        qtd_QFileDialog_labelText_DialogLabel_const(qtdNativeId, &res, label);
        return res;
    }

    public final QList!(string) nameFilters() const {
        auto res = QList!(string).opCall();
        qtd_QFileDialog_nameFilters_const(qtdNativeId, &res);
        return res;
    }

    public final void open(QObject receiver, const(char*) member) {
        qtd_QFileDialog_open_QObject_nativepointerchar(qtdNativeId, receiver is null ? null : receiver.qtdNativeId, member);
    }

    public final int options() const {
        return qtd_QFileDialog_options_const(qtdNativeId);
    }

    public final QAbstractProxyModel proxyModel() const {
        void *ret = qtd_QFileDialog_proxyModel_const(qtdNativeId);
        QAbstractProxyModel __d_return_value = QAbstractProxyModel.__getObject(ret);
        return __d_return_value;
    }

    public final bool resolveSymlinks() const {
        return qtd_QFileDialog_resolveSymlinks_const(qtdNativeId);
    }

    public final bool restoreState(const(QByteArray) state) {
        return qtd_QFileDialog_restoreState_QByteArray(qtdNativeId, state is null ? null : (cast(QByteArray)state).qtdNativeId);
    }

    public final QByteArray saveState() const {
        void* ret = qtd_QFileDialog_saveState_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final void selectFile(string filename) {
        qtd_QFileDialog_selectFile_string(qtdNativeId, filename);
    }

    public final void selectFilter(string filter) {
        qtd_QFileDialog_selectFilter_string(qtdNativeId, filter);
    }

    public final void selectNameFilter(string filter) {
        qtd_QFileDialog_selectNameFilter_string(qtdNativeId, filter);
    }

    public final QList!(string) selectedFiles() const {
        auto res = QList!(string).opCall();
        qtd_QFileDialog_selectedFiles_const(qtdNativeId, &res);
        return res;
    }

    public final string selectedFilter() const {
        string res;
        qtd_QFileDialog_selectedFilter_const(qtdNativeId, &res);
        return res;
    }

    public final string selectedNameFilter() const {
        string res;
        qtd_QFileDialog_selectedNameFilter_const(qtdNativeId, &res);
        return res;
    }

    public final void setAcceptMode(QFileDialog.AcceptMode mode) {
        qtd_QFileDialog_setAcceptMode_AcceptMode(qtdNativeId, mode);
    }

    public final void setConfirmOverwrite(bool enabled) {
        qtd_QFileDialog_setConfirmOverwrite_bool(qtdNativeId, enabled);
    }

    public final void setDefaultSuffix(string suffix) {
        qtd_QFileDialog_setDefaultSuffix_string(qtdNativeId, suffix);
    }

    public final void setDirectory(const(QDir) directory) {
        qtd_QFileDialog_setDirectory_QDir(qtdNativeId, directory is null ? null : (cast(QDir)directory).qtdNativeId);
    }

    public final void setDirectory(string directory) {
        qtd_QFileDialog_setDirectory_string(qtdNativeId, directory);
    }

    public final void setFileMode(QFileDialog.FileMode mode) {
        qtd_QFileDialog_setFileMode_FileMode(qtdNativeId, mode);
    }

    public final void setFilter(int filters) {
        qtd_QFileDialog_setFilter_Filters(qtdNativeId, filters);
    }

    public final void setFilter(string filter) {
        qtd_QFileDialog_setFilter_string(qtdNativeId, filter);
    }

    public final void setFilters(QList!(string) filters) {
        qtd_QFileDialog_setFilters_QList(qtdNativeId, &filters);
    }

    public final void setHistory(QList!(string) paths) {
        qtd_QFileDialog_setHistory_QList(qtdNativeId, &paths);
    }

    public final void setIconProvider(QFileIconProvider provider) {
        {
            __rcIconProvider = cast(Object) provider;
        }
        qtd_QFileDialog_setIconProvider_QFileIconProvider(qtdNativeId, provider is null ? null : provider.qtdNativeId);
    }

    public final void setItemDelegate(QAbstractItemDelegate delegate_) {
        {
            __rcItemDelegate = cast(Object) delegate_;
        }
        qtd_QFileDialog_setItemDelegate_QAbstractItemDelegate(qtdNativeId, delegate_ is null ? null : delegate_.qtdNativeId);
    }

    public final void setLabelText(QFileDialog.DialogLabel label, string text) {
        qtd_QFileDialog_setLabelText_DialogLabel_string(qtdNativeId, label, text);
    }

    public final void setNameFilter(string filter) {
        qtd_QFileDialog_setNameFilter_string(qtdNativeId, filter);
    }

    public final void setNameFilterDetailsVisible(bool enabled) {
        qtd_QFileDialog_setNameFilterDetailsVisible_bool(qtdNativeId, enabled);
    }

    public final void setNameFilters(QList!(string) filters) {
        qtd_QFileDialog_setNameFilters_QList(qtdNativeId, &filters);
    }

    public final void setOption(QFileDialog.Option option, bool on = true) {
        qtd_QFileDialog_setOption_Option_bool(qtdNativeId, option, on);
    }

    public final void setOptions(int options) {
        qtd_QFileDialog_setOptions_Options(qtdNativeId, options);
    }

    public final void setProxyModel(QAbstractProxyModel model) {
        qtd_QFileDialog_setProxyModel_QAbstractProxyModel(qtdNativeId, model is null ? null : model.qtdNativeId);
    }

    public final void setReadOnly(bool enabled) {
        qtd_QFileDialog_setReadOnly_bool(qtdNativeId, enabled);
    }

    public final void setResolveSymlinks(bool enabled) {
        qtd_QFileDialog_setResolveSymlinks_bool(qtdNativeId, enabled);
    }

    public final void setSidebarUrls(QList!(QUrl) urls) {
        qtd_QFileDialog_setSidebarUrls_QList(qtdNativeId, &urls);
    }

    public final void setViewMode(QFileDialog.ViewMode mode) {
        qtd_QFileDialog_setViewMode_ViewMode(qtdNativeId, mode);
    }

    public final QList!(QUrl) sidebarUrls() const {
        auto res = QList!(QUrl).opCall();
        qtd_QFileDialog_sidebarUrls_const(qtdNativeId, &res);
        return res;
    }

    public final bool testOption(QFileDialog.Option option) const {
        return qtd_QFileDialog_testOption_Option_const(qtdNativeId, option);
    }

    public final QFileDialog.ViewMode viewMode() const {
        return cast(QFileDialog.ViewMode) qtd_QFileDialog_viewMode_const(qtdNativeId);
    }

    public void accept() {
        qtd_QFileDialog_accept(qtdNativeId);
    }

    protected void changeEvent(QEvent e) {
        qtd_QFileDialog_changeEvent_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public void done(int result) {
        qtd_QFileDialog_done_int(qtdNativeId, result);
    }

    public void setVisible(bool visible) {
        qtd_QFileDialog_setVisible_bool(qtdNativeId, visible);
    }

    public static string getExistingDirectory(QWidget parent_ = null, string caption = "", string dir = "", int options = 1) {
        string res;
        qtd_QFileDialog_getExistingDirectory_QWidget_string_string_Options(&res, parent_ is null ? null : parent_.qtdNativeId, caption, dir, options);
        return res;
    }

    public static string getOpenFileName(QWidget parent_, string caption, string dir, string filter, ref string selectedFilter, int options = 0) {
        string res;
        qtd_QFileDialog_getOpenFileName_QWidget_string_string_string_nativepointerstring_Options(&res, parent_ is null ? null : parent_.qtdNativeId, caption, dir, filter, selectedFilter, options);
        return res;
    }

    public static QList!(string) getOpenFileNames(QWidget parent_ = null, string caption = "", string dir = "", string filter = "", ref string selectedFilter = null, int options = 0) {
        auto res = QList!(string).opCall();
        qtd_QFileDialog_getOpenFileNames_QWidget_string_string_string_nativepointerstring_Options(&res, parent_ is null ? null : parent_.qtdNativeId, caption, dir, filter, selectedFilter, options);
        return res;
    }

    public static string getSaveFileName(QWidget parent_, string caption, string dir, string filter, ref string selectedFilter, int options = 0) {
        string res;
        qtd_QFileDialog_getSaveFileName_QWidget_string_string_string_nativepointerstring_Options(&res, parent_ is null ? null : parent_.qtdNativeId, caption, dir, filter, selectedFilter, options);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QFileDialog_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QFileDialog);
    }

    static QFileDialog __getObject(void* nativeId) {
        return static_cast!(QFileDialog)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QFileDialog_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QFileDialog_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QFileDialog(nativeId, initFlags);
        QFileDialog.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(string)("currentChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(string)("directoryEntered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(string)("fileSelected"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(QList!(string))("filesSelected"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(string)("filterSelected"), index));

    }

    public alias void __isQtType_QFileDialog;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public static string getOpenFileName(QWidget _parent, string caption = null, string dir = null, string filter = null) {
        string res;
        string _selectedFilter = "";
        qtd_QFileDialog_getOpenFileName_QWidget_string_string_string_nativepointerstring_Options(&res, _parent is null ? null : _parent.qtdNativeId, caption, dir, filter, _selectedFilter, 0);
        return res;
    }

    public static string getSaveFileName(QWidget _parent, string caption = null, string dir = null, string filter = null) {
        string res;
        string _selectedFilter = "";
        qtd_QFileDialog_getSaveFileName_QWidget_string_string_string_nativepointerstring_Options(&res, _parent is null ? null : _parent.qtdNativeId, caption, dir, filter, _selectedFilter, 0);
        return res;
    }

    public static class Filter {
        public this(string filter) {
            this.filter = filter;
        }

        public string filter;
        public string selectedFilter = "";
    }

}

// C wrappers for signal emitters
private extern(C) void  qtd_QFileDialog_currentChanged_string(void* __this_nativeId,
 string path0);
private extern(C) void  qtd_QFileDialog_directoryEntered_string(void* __this_nativeId,
 string directory0);
private extern(C) void  qtd_QFileDialog_fileSelected_string(void* __this_nativeId,
 string file0);
private extern(C) void  qtd_QFileDialog_filesSelected_QList(void* __this_nativeId,
 void* files0);
private extern(C) void  qtd_QFileDialog_filterSelected_string(void* __this_nativeId,
 string filter0);

// C wrappers
private extern(C) void* qtd_QFileDialog_QFileDialog_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int f1);
private extern(C) void* qtd_QFileDialog_QFileDialog_QWidget_string_string_string(void *d_ptr,
 void* parent0,
 string caption1,
 string directory2,
 string filter3);
private extern(C) int  qtd_QFileDialog_acceptMode_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileDialog_confirmOverwrite_const(void* __this_nativeId);
private extern(C) void  qtd_QFileDialog_defaultSuffix_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QFileDialog_directory_const(void* __this_nativeId);
private extern(C) int  qtd_QFileDialog_fileMode_const(void* __this_nativeId);
private extern(C) int  qtd_QFileDialog_filter_const(void* __this_nativeId);
private extern(C) void  qtd_QFileDialog_filters_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileDialog_history_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QFileDialog_iconProvider_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileDialog_isNameFilterDetailsVisible_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileDialog_isReadOnly_const(void* __this_nativeId);
private extern(C) void*  qtd_QFileDialog_itemDelegate_const(void* __this_nativeId);
private extern(C) void  qtd_QFileDialog_labelText_DialogLabel_const(void* __this_nativeId,
 void* __d_return_value,
 int label0);
private extern(C) void  qtd_QFileDialog_nameFilters_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileDialog_open_QObject_nativepointerchar(void* __this_nativeId,
 void* receiver0,
 const (char*) member1);
private extern(C) int  qtd_QFileDialog_options_const(void* __this_nativeId);
private extern(C) void*  qtd_QFileDialog_proxyModel_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileDialog_resolveSymlinks_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileDialog_restoreState_QByteArray(void* __this_nativeId,
 void* state0);
private extern(C) void*  qtd_QFileDialog_saveState_const(void* __this_nativeId);
private extern(C) void  qtd_QFileDialog_selectFile_string(void* __this_nativeId,
 string filename0);
private extern(C) void  qtd_QFileDialog_selectFilter_string(void* __this_nativeId,
 string filter0);
private extern(C) void  qtd_QFileDialog_selectNameFilter_string(void* __this_nativeId,
 string filter0);
private extern(C) void  qtd_QFileDialog_selectedFiles_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileDialog_selectedFilter_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileDialog_selectedNameFilter_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileDialog_setAcceptMode_AcceptMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QFileDialog_setConfirmOverwrite_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QFileDialog_setDefaultSuffix_string(void* __this_nativeId,
 string suffix0);
private extern(C) void  qtd_QFileDialog_setDirectory_QDir(void* __this_nativeId,
 void* directory0);
private extern(C) void  qtd_QFileDialog_setDirectory_string(void* __this_nativeId,
 string directory0);
private extern(C) void  qtd_QFileDialog_setFileMode_FileMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QFileDialog_setFilter_Filters(void* __this_nativeId,
 int filters0);
private extern(C) void  qtd_QFileDialog_setFilter_string(void* __this_nativeId,
 string filter0);
private extern(C) void  qtd_QFileDialog_setFilters_QList(void* __this_nativeId,
 void* filters0);
private extern(C) void  qtd_QFileDialog_setHistory_QList(void* __this_nativeId,
 void* paths0);
private extern(C) void  qtd_QFileDialog_setIconProvider_QFileIconProvider(void* __this_nativeId,
 void* provider0);
private extern(C) void  qtd_QFileDialog_setItemDelegate_QAbstractItemDelegate(void* __this_nativeId,
 void* delegate0);
private extern(C) void  qtd_QFileDialog_setLabelText_DialogLabel_string(void* __this_nativeId,
 int label0,
 string text1);
private extern(C) void  qtd_QFileDialog_setNameFilter_string(void* __this_nativeId,
 string filter0);
private extern(C) void  qtd_QFileDialog_setNameFilterDetailsVisible_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QFileDialog_setNameFilters_QList(void* __this_nativeId,
 void* filters0);
private extern(C) void  qtd_QFileDialog_setOption_Option_bool(void* __this_nativeId,
 int option0,
 bool on1);
private extern(C) void  qtd_QFileDialog_setOptions_Options(void* __this_nativeId,
 int options0);
private extern(C) void  qtd_QFileDialog_setProxyModel_QAbstractProxyModel(void* __this_nativeId,
 void* model0);
private extern(C) void  qtd_QFileDialog_setReadOnly_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QFileDialog_setResolveSymlinks_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QFileDialog_setSidebarUrls_QList(void* __this_nativeId,
 void* urls0);
private extern(C) void  qtd_QFileDialog_setViewMode_ViewMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QFileDialog_sidebarUrls_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QFileDialog_testOption_Option_const(void* __this_nativeId,
 int option0);
private extern(C) int  qtd_QFileDialog_viewMode_const(void* __this_nativeId);
private extern(C) void  qtd_QFileDialog_accept(void* __this_nativeId);
private extern(C) void  qtd_QFileDialog_changeEvent_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QFileDialog_done_int(void* __this_nativeId,
 int result0);
private extern(C) void  qtd_QFileDialog_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QFileDialog_getExistingDirectory_QWidget_string_string_Options(void* __d_return_value,
 void* parent0,
 string caption1,
 string dir2,
 int options3);
private extern(C) void  qtd_QFileDialog_getOpenFileName_QWidget_string_string_string_nativepointerstring_Options(void* __d_return_value,
 void* parent0,
 string caption1,
 string dir2,
 string filter3,
 string selectedFilter4,
 int options5);
private extern(C) void  qtd_QFileDialog_getOpenFileNames_QWidget_string_string_string_nativepointerstring_Options(void* __d_return_value,
 void* parent0,
 string caption1,
 string dir2,
 string filter3,
 string selectedFilter4,
 int options5);
private extern(C) void  qtd_QFileDialog_getSaveFileName_QWidget_string_string_string_nativepointerstring_Options(void* __d_return_value,
 void* parent0,
 string caption1,
 string dir2,
 string filter3,
 string selectedFilter4,
 int options5);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFileDialog_initCallBacks(void* virtuals);

extern(C) void static_init_QFileDialog() {
    qtd_QFileDialog_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QFileDialog_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QFileDialog) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QFileDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QFileDialog) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QFileDialog_finished_handle(void* dId, void** args) {
        auto d_object = cast(QFileDialog) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QFileDialog_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QFileDialog) dId;
        //d_object.rejected_emit();
}*/
/*private extern(C) void qtd_QFileDialog_currentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFileDialog) dId;
        auto path0_ptr = args[1];
        string path0 = QStringUtil.toNativeString(path0_ptr);
        //d_object.currentChanged_emit(path0);
}*/
/*private extern(C) void qtd_QFileDialog_directoryEntered_handle(void* dId, void** args) {
        auto d_object = cast(QFileDialog) dId;
        auto directory0_ptr = args[1];
        string directory0 = QStringUtil.toNativeString(directory0_ptr);
        //d_object.directoryEntered_emit(directory0);
}*/
/*private extern(C) void qtd_QFileDialog_fileSelected_handle(void* dId, void** args) {
        auto d_object = cast(QFileDialog) dId;
        auto file0_ptr = args[1];
        string file0 = QStringUtil.toNativeString(file0_ptr);
        //d_object.fileSelected_emit(file0);
}*/
/*private extern(C) void qtd_QFileDialog_filesSelected_handle(void* dId, void** args) {
        auto d_object = cast(QFileDialog) dId;
        QList!(string) files0;
        qtd_qt_gui_string_fromcpp_QStringList(args[1], &files0);

        //d_object.filesSelected_emit(files0);
}*/
/*private extern(C) void qtd_QFileDialog_filterSelected_handle(void* dId, void** args) {
        auto d_object = cast(QFileDialog) dId;
        auto filter0_ptr = args[1];
        string filter0 = QStringUtil.toNativeString(filter0_ptr);
        //d_object.filterSelected_emit(filter0);
}*/

extern(C) QMetaObjectNative* qtd_QFileDialog_staticMetaObject();

extern(C) void qtd_QFileDialog_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QFileDialog_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
