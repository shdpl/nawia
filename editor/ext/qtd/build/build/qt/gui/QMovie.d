module qt.gui.QMovie;

public import qt.gui.QMovie_aux;
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
public import qt.gui.QImageReader;
public import qt.gui.QColor;
public import qt.core.QIODevice;
public import qt.core.QList;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.gui.QPixmap;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QImage;
public import qt.core.QRect;
public import qt.core.QByteArray;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMovie : QObject
{
    public enum CacheMode {
        CacheNone = 0,
        CacheAll = 1
    }

    alias CacheMode.CacheNone CacheNone;
    alias CacheMode.CacheAll CacheAll;

    public enum MovieState {
        NotRunning = 0,
        Paused = 1,
        Running = 2
    }

    alias MovieState.NotRunning NotRunning;
    alias MovieState.Paused Paused;
    alias MovieState.Running Running;


Object __rcDevice = null;

    private static const string[] __signalSignatures = [
            "error(QImageReader::ImageReaderError)", 
            "finished()", 
            "frameChanged(int)", 
            "resized(QSize)", 
            "started()", 
            "stateChanged(QMovie::MovieState)", 
            "updated(QRect)"    ];

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

    protected final void error(QImageReader.ImageReaderError error) {
        qtd_QMovie_error_ImageReaderError(qtdNativeId, error);
    }

    protected final void finished() {
        qtd_QMovie_finished(qtdNativeId);
    }

    protected final void frameChanged(int frameNumber) {
        qtd_QMovie_frameChanged_int(qtdNativeId, frameNumber);
    }

    protected final void resized(const(QSize) size) {
        qtd_QMovie_resized_QSize(qtdNativeId, size);
    }

    protected final void started() {
        qtd_QMovie_started(qtdNativeId);
    }

    protected final void stateChanged(QMovie.MovieState state) {
        qtd_QMovie_stateChanged_MovieState(qtdNativeId, state);
    }

    protected final void updated(const(QRect) rect) {
        qtd_QMovie_updated_QRect(qtdNativeId, rect);
    }
// Functions

    public this(QIODevice device, const(QByteArray) format = new QByteArray(), QObject parent_ = null) {
        void* ret = qtd_QMovie_QMovie_QIODevice_QByteArray_QObject(cast(void*) this, device is null ? null : device.qtdNativeId, format is null ? null : (cast(QByteArray)format).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QObject parent_ = null) {
        void* ret = qtd_QMovie_QMovie_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string fileName, const(QByteArray) format = new QByteArray(), QObject parent_ = null) {
        void* ret = qtd_QMovie_QMovie_string_QByteArray_QObject(cast(void*) this, fileName, format is null ? null : (cast(QByteArray)format).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QColor backgroundColor() const {
        void* ret = qtd_QMovie_backgroundColor_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final QMovie.CacheMode cacheMode() const {
        return cast(QMovie.CacheMode) qtd_QMovie_cacheMode_const(qtdNativeId);
    }

    public final int currentFrameNumber() const {
        return qtd_QMovie_currentFrameNumber_const(qtdNativeId);
    }

    public final QImage currentImage() const {
        void* ret = qtd_QMovie_currentImage_const(qtdNativeId);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QPixmap currentPixmap() const {
        void* ret = qtd_QMovie_currentPixmap_const(qtdNativeId);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final QIODevice device() const {
        void *ret = qtd_QMovie_device_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public final string fileName() const {
        string res;
        qtd_QMovie_fileName_const(qtdNativeId, &res);
        return res;
    }

    public final QByteArray format() const {
        void* ret = qtd_QMovie_format_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final int frameCount() const {
        return qtd_QMovie_frameCount_const(qtdNativeId);
    }

    public final QRect frameRect() const {
        QRect res;
        qtd_QMovie_frameRect_const(qtdNativeId, &res);
        return res;
    }

    public final bool isValid() const {
        return qtd_QMovie_isValid_const(qtdNativeId);
    }

    public final bool jumpToFrame(int frameNumber) {
        return qtd_QMovie_jumpToFrame_int(qtdNativeId, frameNumber);
    }

    public final bool jumpToNextFrame() {
        return qtd_QMovie_jumpToNextFrame(qtdNativeId);
    }

    public final int loopCount() const {
        return qtd_QMovie_loopCount_const(qtdNativeId);
    }

    public final int nextFrameDelay() const {
        return qtd_QMovie_nextFrameDelay_const(qtdNativeId);
    }

    public final QSize scaledSize() {
        QSize res;
        qtd_QMovie_scaledSize(qtdNativeId, &res);
        return res;
    }

    public final void setBackgroundColor(const(QColor) color) {
        qtd_QMovie_setBackgroundColor_QColor(qtdNativeId, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void setCacheMode(QMovie.CacheMode mode) {
        qtd_QMovie_setCacheMode_CacheMode(qtdNativeId, mode);
    }

    public final void setDevice(QIODevice device) {
        {
            __rcDevice = cast(Object) device;
        }
        qtd_QMovie_setDevice_QIODevice(qtdNativeId, device is null ? null : device.qtdNativeId);
    }

    public final void setFileName(string fileName) {
        qtd_QMovie_setFileName_string(qtdNativeId, fileName);
    }

    public final void setFormat(const(QByteArray) format) {
        qtd_QMovie_setFormat_QByteArray(qtdNativeId, format is null ? null : (cast(QByteArray)format).qtdNativeId);
    }

    public final void setPaused(bool paused) {
        qtd_QMovie_setPaused_bool(qtdNativeId, paused);
    }

    public final void setScaledSize(const(QSize) size) {
        qtd_QMovie_setScaledSize_QSize(qtdNativeId, size);
    }

    public final void setSpeed(int percentSpeed) {
        qtd_QMovie_setSpeed_int(qtdNativeId, percentSpeed);
    }

    public final int speed() const {
        return qtd_QMovie_speed_const(qtdNativeId);
    }

    public final void start() {
        qtd_QMovie_start(qtdNativeId);
    }

    public final QMovie.MovieState state() const {
        return cast(QMovie.MovieState) qtd_QMovie_state_const(qtdNativeId);
    }

    public final void stop() {
        qtd_QMovie_stop(qtdNativeId);
    }

    public static QList!(QByteArray) supportedFormats() {
        auto res = QList!(QByteArray).opCall();
        qtd_QMovie_supportedFormats(&res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "jumpToNextFrame()", 
            "setPaused(bool)", 
            "setSpeed(int)", 
            "start()", 
            "stop()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QMovie_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QMovie);
    }

    static QMovie __getObject(void* nativeId) {
        return static_cast!(QMovie)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QMovie_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QMovie_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QMovie(nativeId, initFlags);
        QMovie.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QImageReader.ImageReaderError)("error"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("finished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int)("frameChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(const(QSize))("resized"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!()("started"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(QMovie.MovieState)("stateChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(const(QRect))("updated"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("jumpToNextFrame"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setPaused"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(int)("setSpeed"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("start"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("stop"), index));

    }

    public alias void __isQtType_QMovie;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QMovie_error_ImageReaderError(void* __this_nativeId,
 int error0);
private extern(C) void  qtd_QMovie_finished(void* __this_nativeId);
private extern(C) void  qtd_QMovie_frameChanged_int(void* __this_nativeId,
 int frameNumber0);
private extern(C) void  qtd_QMovie_resized_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QMovie_started(void* __this_nativeId);
private extern(C) void  qtd_QMovie_stateChanged_MovieState(void* __this_nativeId,
 int state0);
private extern(C) void  qtd_QMovie_updated_QRect(void* __this_nativeId,
 QRect rect0);

// C wrappers
private extern(C) void* qtd_QMovie_QMovie_QIODevice_QByteArray_QObject(void *d_ptr,
 void* device0,
 void* format1,
 void* parent2);
private extern(C) void* qtd_QMovie_QMovie_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QMovie_QMovie_string_QByteArray_QObject(void *d_ptr,
 string fileName0,
 void* format1,
 void* parent2);
private extern(C) void*  qtd_QMovie_backgroundColor_const(void* __this_nativeId);
private extern(C) int  qtd_QMovie_cacheMode_const(void* __this_nativeId);
private extern(C) int  qtd_QMovie_currentFrameNumber_const(void* __this_nativeId);
private extern(C) void*  qtd_QMovie_currentImage_const(void* __this_nativeId);
private extern(C) void*  qtd_QMovie_currentPixmap_const(void* __this_nativeId);
private extern(C) void*  qtd_QMovie_device_const(void* __this_nativeId);
private extern(C) void  qtd_QMovie_fileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QMovie_format_const(void* __this_nativeId);
private extern(C) int  qtd_QMovie_frameCount_const(void* __this_nativeId);
private extern(C) void  qtd_QMovie_frameRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) bool  qtd_QMovie_isValid_const(void* __this_nativeId);
private extern(C) bool  qtd_QMovie_jumpToFrame_int(void* __this_nativeId,
 int frameNumber0);
private extern(C) bool  qtd_QMovie_jumpToNextFrame(void* __this_nativeId);
private extern(C) int  qtd_QMovie_loopCount_const(void* __this_nativeId);
private extern(C) int  qtd_QMovie_nextFrameDelay_const(void* __this_nativeId);
private extern(C) void  qtd_QMovie_scaledSize(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QMovie_setBackgroundColor_QColor(void* __this_nativeId,
 void* color0);
private extern(C) void  qtd_QMovie_setCacheMode_CacheMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QMovie_setDevice_QIODevice(void* __this_nativeId,
 void* device0);
private extern(C) void  qtd_QMovie_setFileName_string(void* __this_nativeId,
 string fileName0);
private extern(C) void  qtd_QMovie_setFormat_QByteArray(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QMovie_setPaused_bool(void* __this_nativeId,
 bool paused0);
private extern(C) void  qtd_QMovie_setScaledSize_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QMovie_setSpeed_int(void* __this_nativeId,
 int percentSpeed0);
private extern(C) int  qtd_QMovie_speed_const(void* __this_nativeId);
private extern(C) void  qtd_QMovie_start(void* __this_nativeId);
private extern(C) int  qtd_QMovie_state_const(void* __this_nativeId);
private extern(C) void  qtd_QMovie_stop(void* __this_nativeId);
private extern(C) void  qtd_QMovie_supportedFormats(void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QMovie_initCallBacks(void* virtuals);

extern(C) void static_init_QMovie() {
    qtd_QMovie_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QMovie_error_handle(void* dId, void** args) {
        auto d_object = cast(QMovie) dId;
        auto error0 = *(cast(QImageReader.ImageReaderError*)args[1]);
        //d_object.error_emit(error0);
}*/
/*private extern(C) void qtd_QMovie_finished_handle(void* dId, void** args) {
        auto d_object = cast(QMovie) dId;
        //d_object.finished_emit();
}*/
/*private extern(C) void qtd_QMovie_frameChanged_handle(void* dId, void** args) {
        auto d_object = cast(QMovie) dId;
        auto frameNumber0 = *(cast(int*)args[1]);
        //d_object.frameChanged_emit(frameNumber0);
}*/
/*private extern(C) void qtd_QMovie_resized_handle(void* dId, void** args) {
        auto d_object = cast(QMovie) dId;
        auto size0 = *(cast(QSize*)args[1]);
        //d_object.resized_emit(size0);
}*/
/*private extern(C) void qtd_QMovie_started_handle(void* dId, void** args) {
        auto d_object = cast(QMovie) dId;
        //d_object.started_emit();
}*/
/*private extern(C) void qtd_QMovie_stateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QMovie) dId;
        auto state0 = *(cast(QMovie.MovieState*)args[1]);
        //d_object.stateChanged_emit(state0);
}*/
/*private extern(C) void qtd_QMovie_updated_handle(void* dId, void** args) {
        auto d_object = cast(QMovie) dId;
        auto rect0 = *(cast(QRect*)args[1]);
        //d_object.updated_emit(rect0);
}*/

extern(C) QMetaObjectNative* qtd_QMovie_staticMetaObject();

extern(C) void qtd_QMovie_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QMovie_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
