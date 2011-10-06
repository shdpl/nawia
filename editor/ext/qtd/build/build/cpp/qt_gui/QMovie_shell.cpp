#include <QColor>
#include <QImage>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpixmap.h>
#include <qvariant.h>

#include "QMovie_shell.h"
#include <iostream>
#include <qmovie.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QMovieEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QMovieEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QMovie_createEntity(void *nativeId, void* dId)
{
    new QMovieEntity((QObject*)nativeId, dId);
}

QMovie_QtDShell::QMovie_QtDShell(void *d_ptr, QIODevice*  device0, const QByteArray&  format1, QObject*  parent2)
    : QMovie(device0, format1, parent2),
      QObjectLink(this, d_ptr)
{
}

QMovie_QtDShell::QMovie_QtDShell(void *d_ptr, QObject*  parent0)
    : QMovie(parent0),
      QObjectLink(this, d_ptr)
{
}

QMovie_QtDShell::QMovie_QtDShell(void *d_ptr, const QString&  fileName0, const QByteArray&  format1, QObject*  parent2)
    : QMovie(fileName0, format1, parent2),
      QObjectLink(this, d_ptr)
{
}

QMovie_QtDShell::~QMovie_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QMovie_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QMovie::metaObject();
}

int QMovie_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QMovie::qt_metacall(_c, _id, _a);
}

int QMovie_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QMovie::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QMovie_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QMovie_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMovie_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QMovie_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QMovie_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QMovie_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QMovie_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QMovie_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QMovie_QtDShell::__public_error(int  error0)
{
    QMovie::error((QImageReader::ImageReaderError )error0);
}

void QMovie_QtDShell::__public_finished()
{
    QMovie::finished();
}

void QMovie_QtDShell::__public_frameChanged(int  frameNumber0)
{
    QMovie::frameChanged((int )frameNumber0);
}

void QMovie_QtDShell::__public_resized(const QSize&  size0)
{
    QMovie::resized((const QSize& )size0);
}

void QMovie_QtDShell::__public_started()
{
    QMovie::started();
}

void QMovie_QtDShell::__public_stateChanged(int  state0)
{
    QMovie::stateChanged((QMovie::MovieState )state0);
}

void QMovie_QtDShell::__public_updated(const QRect&  rect0)
{
    QMovie::updated((const QRect& )rect0);
}

// Write virtual function overries used to decide on static/virtual calls
void QMovie_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QMovie_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QMovie_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QMovie_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QMovie_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QMovie::error(QImageReader::ImageReaderError error)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_error_ImageReaderError
(void* __this_nativeId,
 int error0)
{
    QImageReader::ImageReaderError __qt_error0 = (QImageReader::ImageReaderError) error0;
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->__public_error((QImageReader::ImageReaderError )__qt_error0);

}

// QMovie::finished()
QTD_EXTERN QTD_EXPORT void qtd_QMovie_finished
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->__public_finished();

}

// QMovie::frameChanged(int frameNumber)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_frameChanged_int
(void* __this_nativeId,
 int frameNumber0)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->__public_frameChanged((int )frameNumber0);

}

// QMovie::resized(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_resized_QSize
(void* __this_nativeId,
 QSize size0)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->__public_resized((const QSize& )size0);

}

// QMovie::started()
QTD_EXTERN QTD_EXPORT void qtd_QMovie_started
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->__public_started();

}

// QMovie::stateChanged(QMovie::MovieState state)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_stateChanged_MovieState
(void* __this_nativeId,
 int state0)
{
    QMovie::MovieState __qt_state0 = (QMovie::MovieState) state0;
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->__public_stateChanged((QMovie::MovieState )__qt_state0);

}

// QMovie::updated(const QRect & rect)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_updated_QRect
(void* __this_nativeId,
 QRect rect0)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->__public_updated((const QRect& )rect0);

}

// ---externC---
// QMovie::QMovie(QIODevice * device, const QByteArray & format, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QMovie_QMovie_QIODevice_QByteArray_QObject
(void *d_ptr,
 void* device0,
 void* format1,
 void* parent2)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    const QByteArray&  __qt_format1 = (const QByteArray& ) *(QByteArray *)format1;
    QObject*  __qt_parent2 = (QObject* ) parent2;
    QMovie_QtDShell *__qt_this = new QMovie_QtDShell(d_ptr, (QIODevice* )__qt_device0, (const QByteArray& )__qt_format1, (QObject* )__qt_parent2);
    return (void *) __qt_this;

}

// QMovie::QMovie(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QMovie_QMovie_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QMovie_QtDShell *__qt_this = new QMovie_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QMovie::QMovie(const QString & fileName, const QByteArray & format, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QMovie_QMovie_string_QByteArray_QObject
(void *d_ptr,
 DArray fileName0,
 void* format1,
 void* parent2)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const QByteArray&  __qt_format1 = (const QByteArray& ) *(QByteArray *)format1;
    QObject*  __qt_parent2 = (QObject* ) parent2;
    QMovie_QtDShell *__qt_this = new QMovie_QtDShell(d_ptr, (const QString& )__qt_fileName0, (const QByteArray& )__qt_format1, (QObject* )__qt_parent2);
    return (void *) __qt_this;

}

// QMovie::backgroundColor() const
QTD_EXTERN QTD_EXPORT void* qtd_QMovie_backgroundColor_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->backgroundColor();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QMovie::cacheMode() const
QTD_EXTERN QTD_EXPORT int qtd_QMovie_cacheMode_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->cacheMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMovie::currentFrameNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QMovie_currentFrameNumber_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentFrameNumber();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMovie::currentImage() const
QTD_EXTERN QTD_EXPORT void* qtd_QMovie_currentImage_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->currentImage();

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QMovie::currentPixmap() const
QTD_EXTERN QTD_EXPORT void* qtd_QMovie_currentPixmap_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->currentPixmap();

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QMovie::device() const
QTD_EXTERN QTD_EXPORT void* qtd_QMovie_device_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->device();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMovie::fileName() const
QTD_EXTERN QTD_EXPORT void qtd_QMovie_fileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QMovie::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QMovie_format_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QMovie::frameCount() const
QTD_EXTERN QTD_EXPORT int qtd_QMovie_frameCount_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->frameCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMovie::frameRect() const
QTD_EXTERN QTD_EXPORT void qtd_QMovie_frameRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->frameRect();

    *__d_return_value = __qt_return_value;

}

// QMovie::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QMovie_isValid_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMovie::jumpToFrame(int frameNumber)
QTD_EXTERN QTD_EXPORT bool qtd_QMovie_jumpToFrame_int
(void* __this_nativeId,
 int frameNumber0)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->jumpToFrame((int )frameNumber0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMovie::jumpToNextFrame()
QTD_EXTERN QTD_EXPORT bool qtd_QMovie_jumpToNextFrame
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->jumpToNextFrame();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMovie::loopCount() const
QTD_EXTERN QTD_EXPORT int qtd_QMovie_loopCount_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->loopCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMovie::nextFrameDelay() const
QTD_EXTERN QTD_EXPORT int qtd_QMovie_nextFrameDelay_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->nextFrameDelay();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMovie::scaledSize()
QTD_EXTERN QTD_EXPORT void qtd_QMovie_scaledSize
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->scaledSize();

    *__d_return_value = __qt_return_value;

}

// QMovie::setBackgroundColor(const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_setBackgroundColor_QColor
(void* __this_nativeId,
 void* color0)
{
    const QColor&  __qt_color0 = (const QColor& ) *(QColor *)color0;
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->setBackgroundColor((const QColor& )__qt_color0);

}

// QMovie::setCacheMode(QMovie::CacheMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_setCacheMode_CacheMode
(void* __this_nativeId,
 int mode0)
{
    QMovie::CacheMode __qt_mode0 = (QMovie::CacheMode) mode0;
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->setCacheMode((QMovie::CacheMode )__qt_mode0);

}

// QMovie::setDevice(QIODevice * device)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_setDevice_QIODevice
(void* __this_nativeId,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->setDevice((QIODevice* )__qt_device0);

}

// QMovie::setFileName(const QString & fileName)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_setFileName_string
(void* __this_nativeId,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->setFileName((const QString& )__qt_fileName0);

}

// QMovie::setFormat(const QByteArray & format)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_setFormat_QByteArray
(void* __this_nativeId,
 void* format0)
{
    const QByteArray&  __qt_format0 = (const QByteArray& ) *(QByteArray *)format0;
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->setFormat((const QByteArray& )__qt_format0);

}

// QMovie::setPaused(bool paused)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_setPaused_bool
(void* __this_nativeId,
 bool paused0)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->setPaused((bool )paused0);

}

// QMovie::setScaledSize(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_setScaledSize_QSize
(void* __this_nativeId,
 QSize size0)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->setScaledSize((const QSize& )size0);

}

// QMovie::setSpeed(int percentSpeed)
QTD_EXTERN QTD_EXPORT void qtd_QMovie_setSpeed_int
(void* __this_nativeId,
 int percentSpeed0)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->setSpeed((int )percentSpeed0);

}

// QMovie::speed() const
QTD_EXTERN QTD_EXPORT int qtd_QMovie_speed_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->speed();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMovie::start()
QTD_EXTERN QTD_EXPORT void qtd_QMovie_start
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->start();

}

// QMovie::state() const
QTD_EXTERN QTD_EXPORT int qtd_QMovie_state_const
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->state();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMovie::stop()
QTD_EXTERN QTD_EXPORT void qtd_QMovie_stop
(void* __this_nativeId)
{
    QMovie_QtDShell *__qt_this = (QMovie_QtDShell *) __this_nativeId;
    __qt_this->stop();

}

// QMovie::supportedFormats()
QTD_EXTERN QTD_EXPORT void qtd_QMovie_supportedFormats
(void* __d_return_value)
{
    QList<QByteArray >  __qt_return_value = QMovie_QtDShell::supportedFormats();

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QMovie_staticMetaObject() {
    return (void*)&QMovie::staticMetaObject;
}


