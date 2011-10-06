#include <QRect>
#include <QVariant>
#include <qbytearray.h>
#include <qimage.h>
#include <qimageiohandler.h>
#include <qiodevice.h>
#include <qvariant.h>

#include "QImageIOHandler_shell.h"
#include <iostream>
#include <qimageiohandler.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QImageIOHandler_delete(void* nativeId)
{
    delete (QImageIOHandler_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QImageIOHandler_destroy(void* nativeId)
{
    call_destructor((QImageIOHandler_QtDShell*)nativeId);
}

QImageIOHandler_QtDShell::QImageIOHandler_QtDShell(void *d_ptr)
    : QImageIOHandler(),
      QtdObjectLink(d_ptr)
{
}

QImageIOHandler_QtDShell::~QImageIOHandler_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QImageIOHandler_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, bool, QImageIOHandler_canRead_const_dispatch, (void *dId))
QTD_FUNC(GUI, QImageIOHandler_canRead_const_dispatch)
bool  QImageIOHandler_QtDShell::canRead() const
{
    return qtd_QImageIOHandler_canRead_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QImageIOHandler_currentImageNumber_const_dispatch, (void *dId))
QTD_FUNC(GUI, QImageIOHandler_currentImageNumber_const_dispatch)
int  QImageIOHandler_QtDShell::currentImageNumber() const
{
    return qtd_QImageIOHandler_currentImageNumber_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QImageIOHandler_currentImageRect_const_dispatch, (void *dId, QRect *__d_return_value))
QTD_FUNC(GUI, QImageIOHandler_currentImageRect_const_dispatch)
QRect  QImageIOHandler_QtDShell::currentImageRect() const
{
    QRect __d_return_value;
    qtd_QImageIOHandler_currentImageRect_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QImageIOHandler_imageCount_const_dispatch, (void *dId))
QTD_FUNC(GUI, QImageIOHandler_imageCount_const_dispatch)
int  QImageIOHandler_QtDShell::imageCount() const
{
    return qtd_QImageIOHandler_imageCount_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, bool, QImageIOHandler_jumpToImage_int_dispatch, (void *dId, int imageNumber0))
QTD_FUNC(GUI, QImageIOHandler_jumpToImage_int_dispatch)
bool  QImageIOHandler_QtDShell::jumpToImage(int  imageNumber0)
{
    return qtd_QImageIOHandler_jumpToImage_int_dispatch(this->dId, (int )imageNumber0);
}

QTD_FUNC_DECL(GUI, bool, QImageIOHandler_jumpToNextImage_dispatch, (void *dId))
QTD_FUNC(GUI, QImageIOHandler_jumpToNextImage_dispatch)
bool  QImageIOHandler_QtDShell::jumpToNextImage()
{
    return qtd_QImageIOHandler_jumpToNextImage_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QImageIOHandler_loopCount_const_dispatch, (void *dId))
QTD_FUNC(GUI, QImageIOHandler_loopCount_const_dispatch)
int  QImageIOHandler_QtDShell::loopCount() const
{
    return qtd_QImageIOHandler_loopCount_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QImageIOHandler_nextImageDelay_const_dispatch, (void *dId))
QTD_FUNC(GUI, QImageIOHandler_nextImageDelay_const_dispatch)
int  QImageIOHandler_QtDShell::nextImageDelay() const
{
    return qtd_QImageIOHandler_nextImageDelay_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QImageIOHandler_option_ImageOption_const_dispatch, (void *dId, int option0))
QTD_FUNC(GUI, QImageIOHandler_option_ImageOption_const_dispatch)
QVariant  QImageIOHandler_QtDShell::option(QImageIOHandler::ImageOption  option0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QImageIOHandler_option_ImageOption_const_dispatch(this->dId, (QImageIOHandler::ImageOption )option0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QImageIOHandler_read_nativepointerQImage_dispatch, (void *dId, void* image0))
QTD_FUNC(GUI, QImageIOHandler_read_nativepointerQImage_dispatch)
bool  QImageIOHandler_QtDShell::read(QImage*  image0)
{
    return qtd_QImageIOHandler_read_nativepointerQImage_dispatch(this->dId, (QImage* )image0);
}

QTD_FUNC_DECL(GUI, void, QImageIOHandler_setOption_ImageOption_QVariant_dispatch, (void *dId, int option0, void* value1))
QTD_FUNC(GUI, QImageIOHandler_setOption_ImageOption_QVariant_dispatch)
void QImageIOHandler_QtDShell::setOption(QImageIOHandler::ImageOption  option0, const QVariant&  value1)
{
    qtd_QImageIOHandler_setOption_ImageOption_QVariant_dispatch(this->dId, (QImageIOHandler::ImageOption )option0, &(QVariant& )value1);
}

QTD_FUNC_DECL(GUI, bool, QImageIOHandler_supportsOption_ImageOption_const_dispatch, (void *dId, int option0))
QTD_FUNC(GUI, QImageIOHandler_supportsOption_ImageOption_const_dispatch)
bool  QImageIOHandler_QtDShell::supportsOption(QImageIOHandler::ImageOption  option0) const
{
    return qtd_QImageIOHandler_supportsOption_ImageOption_const_dispatch(this->dId, (QImageIOHandler::ImageOption )option0);
}

QTD_FUNC_DECL(GUI, bool, QImageIOHandler_write_QImage_dispatch, (void *dId, void* image0))
QTD_FUNC(GUI, QImageIOHandler_write_QImage_dispatch)
bool  QImageIOHandler_QtDShell::write(const QImage&  image0)
{
    return qtd_QImageIOHandler_write_QImage_dispatch(this->dId, &(QImage& )image0);
}

QTD_EXTERN QTD_EXPORT void qtd_QImageIOHandler_initCallBacks(VoidFunc *virts) {
    qtd_QImageIOHandler_canRead_const_dispatch = (qtd_QImageIOHandler_canRead_const_dispatch_t) virts[0];
    qtd_QImageIOHandler_currentImageNumber_const_dispatch = (qtd_QImageIOHandler_currentImageNumber_const_dispatch_t) virts[1];
    qtd_QImageIOHandler_currentImageRect_const_dispatch = (qtd_QImageIOHandler_currentImageRect_const_dispatch_t) virts[2];
    qtd_QImageIOHandler_imageCount_const_dispatch = (qtd_QImageIOHandler_imageCount_const_dispatch_t) virts[3];
    qtd_QImageIOHandler_jumpToImage_int_dispatch = (qtd_QImageIOHandler_jumpToImage_int_dispatch_t) virts[4];
    qtd_QImageIOHandler_jumpToNextImage_dispatch = (qtd_QImageIOHandler_jumpToNextImage_dispatch_t) virts[5];
    qtd_QImageIOHandler_loopCount_const_dispatch = (qtd_QImageIOHandler_loopCount_const_dispatch_t) virts[6];
    qtd_QImageIOHandler_nextImageDelay_const_dispatch = (qtd_QImageIOHandler_nextImageDelay_const_dispatch_t) virts[7];
    qtd_QImageIOHandler_option_ImageOption_const_dispatch = (qtd_QImageIOHandler_option_ImageOption_const_dispatch_t) virts[8];
    qtd_QImageIOHandler_read_nativepointerQImage_dispatch = (qtd_QImageIOHandler_read_nativepointerQImage_dispatch_t) virts[9];
    qtd_QImageIOHandler_setOption_ImageOption_QVariant_dispatch = (qtd_QImageIOHandler_setOption_ImageOption_QVariant_dispatch_t) virts[10];
    qtd_QImageIOHandler_supportsOption_ImageOption_const_dispatch = (qtd_QImageIOHandler_supportsOption_ImageOption_const_dispatch_t) virts[11];
    qtd_QImageIOHandler_write_QImage_dispatch = (qtd_QImageIOHandler_write_QImage_dispatch_t) virts[12];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
bool  QImageIOHandler_QtDShell::__override_canRead(bool static_call) const
{
    if (static_call) {
        return false;
    } else {
        return canRead();
    }
}

int  QImageIOHandler_QtDShell::__override_currentImageNumber(bool static_call) const
{
    if (static_call) {
        return QImageIOHandler::currentImageNumber();
    } else {
        return currentImageNumber();
    }
}

QRect  QImageIOHandler_QtDShell::__override_currentImageRect(bool static_call) const
{
    if (static_call) {
        return QImageIOHandler::currentImageRect();
    } else {
        return currentImageRect();
    }
}

int  QImageIOHandler_QtDShell::__override_imageCount(bool static_call) const
{
    if (static_call) {
        return QImageIOHandler::imageCount();
    } else {
        return imageCount();
    }
}

bool  QImageIOHandler_QtDShell::__override_jumpToImage(int  imageNumber0, bool static_call)
{
    if (static_call) {
        return QImageIOHandler::jumpToImage((int )imageNumber0);
    } else {
        return jumpToImage((int )imageNumber0);
    }
}

bool  QImageIOHandler_QtDShell::__override_jumpToNextImage(bool static_call)
{
    if (static_call) {
        return QImageIOHandler::jumpToNextImage();
    } else {
        return jumpToNextImage();
    }
}

int  QImageIOHandler_QtDShell::__override_loopCount(bool static_call) const
{
    if (static_call) {
        return QImageIOHandler::loopCount();
    } else {
        return loopCount();
    }
}

int  QImageIOHandler_QtDShell::__override_nextImageDelay(bool static_call) const
{
    if (static_call) {
        return QImageIOHandler::nextImageDelay();
    } else {
        return nextImageDelay();
    }
}

QVariant  QImageIOHandler_QtDShell::__override_option(int  option0, bool static_call) const
{
    if (static_call) {
        return QImageIOHandler::option((QImageIOHandler::ImageOption )option0);
    } else {
        return option((QImageIOHandler::ImageOption )option0);
    }
}

bool  QImageIOHandler_QtDShell::__override_read(QImage*  image0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return read((QImage* )image0);
    }
}

void QImageIOHandler_QtDShell::__override_setOption(int  option0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        QImageIOHandler::setOption((QImageIOHandler::ImageOption )option0, (const QVariant& )value1);
    } else {
        setOption((QImageIOHandler::ImageOption )option0, (const QVariant& )value1);
    }
}

bool  QImageIOHandler_QtDShell::__override_supportsOption(int  option0, bool static_call) const
{
    if (static_call) {
        return QImageIOHandler::supportsOption((QImageIOHandler::ImageOption )option0);
    } else {
        return supportsOption((QImageIOHandler::ImageOption )option0);
    }
}

bool  QImageIOHandler_QtDShell::__override_write(const QImage&  image0, bool static_call)
{
    if (static_call) {
        return QImageIOHandler::write((const QImage& )image0);
    } else {
        return write((const QImage& )image0);
    }
}

// ---externC---
// QImageIOHandler::QImageIOHandler()
QTD_EXTERN QTD_EXPORT void* qtd_QImageIOHandler_QImageIOHandler
(void *d_ptr)
{
    QImageIOHandler_QtDShell *__qt_this = new QImageIOHandler_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QImageIOHandler::device() const
QTD_EXTERN QTD_EXPORT void* qtd_QImageIOHandler_device_const
(void* __this_nativeId)
{
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->device();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QImageIOHandler::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QImageIOHandler_format_const
(void* __this_nativeId)
{
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QImageIOHandler::setDevice(QIODevice * device)
QTD_EXTERN QTD_EXPORT void qtd_QImageIOHandler_setDevice_QIODevice
(void* __this_nativeId,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    __qt_this->setDevice((QIODevice* )__qt_device0);

}

// QImageIOHandler::setFormat(const QByteArray & format)
QTD_EXTERN QTD_EXPORT void qtd_QImageIOHandler_setFormat_QByteArray
(void* __this_nativeId,
 void* format0)
{
    const QByteArray&  __qt_format0 = (const QByteArray& ) *(QByteArray *)format0;
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    __qt_this->setFormat((const QByteArray& )__qt_format0);

}

// QImageIOHandler::canRead() const
QTD_EXTERN QTD_EXPORT bool qtd_QImageIOHandler_canRead_const
(void* __this_nativeId)
{
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canRead(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageIOHandler::currentImageNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QImageIOHandler_currentImageNumber_const
(void* __this_nativeId)
{
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_currentImageNumber(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageIOHandler::currentImageRect() const
QTD_EXTERN QTD_EXPORT void qtd_QImageIOHandler_currentImageRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_currentImageRect(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QImageIOHandler::imageCount() const
QTD_EXTERN QTD_EXPORT int qtd_QImageIOHandler_imageCount_const
(void* __this_nativeId)
{
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_imageCount(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageIOHandler::jumpToImage(int imageNumber)
QTD_EXTERN QTD_EXPORT bool qtd_QImageIOHandler_jumpToImage_int
(void* __this_nativeId,
 int imageNumber0)
{
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_jumpToImage((int )imageNumber0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageIOHandler::jumpToNextImage()
QTD_EXTERN QTD_EXPORT bool qtd_QImageIOHandler_jumpToNextImage
(void* __this_nativeId)
{
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_jumpToNextImage(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageIOHandler::loopCount() const
QTD_EXTERN QTD_EXPORT int qtd_QImageIOHandler_loopCount_const
(void* __this_nativeId)
{
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_loopCount(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageIOHandler::nextImageDelay() const
QTD_EXTERN QTD_EXPORT int qtd_QImageIOHandler_nextImageDelay_const
(void* __this_nativeId)
{
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_nextImageDelay(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageIOHandler::option(QImageIOHandler::ImageOption option) const
QTD_EXTERN QTD_EXPORT void* qtd_QImageIOHandler_option_ImageOption_const
(void* __this_nativeId,
 int option0)
{
    QImageIOHandler::ImageOption __qt_option0 = (QImageIOHandler::ImageOption) option0;
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_option((QImageIOHandler::ImageOption )__qt_option0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QImageIOHandler::read(QImage * image)
QTD_EXTERN QTD_EXPORT bool qtd_QImageIOHandler_read_nativepointerQImage
(void* __this_nativeId,
 void* image0)
{
    QImage*  __qt_image0 = (QImage* ) image0;
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_read((QImage* )__qt_image0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageIOHandler::setOption(QImageIOHandler::ImageOption option, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QImageIOHandler_setOption_ImageOption_QVariant
(void* __this_nativeId,
 int option0,
 QVariant* value1)
{
    QImageIOHandler::ImageOption __qt_option0 = (QImageIOHandler::ImageOption) option0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    __qt_this->__override_setOption((QImageIOHandler::ImageOption )__qt_option0, (const QVariant& )__qt_value1, __do_static_call);

}

// QImageIOHandler::supportsOption(QImageIOHandler::ImageOption option) const
QTD_EXTERN QTD_EXPORT bool qtd_QImageIOHandler_supportsOption_ImageOption_const
(void* __this_nativeId,
 int option0)
{
    QImageIOHandler::ImageOption __qt_option0 = (QImageIOHandler::ImageOption) option0;
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_supportsOption((QImageIOHandler::ImageOption )__qt_option0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageIOHandler::write(const QImage & image)
QTD_EXTERN QTD_EXPORT bool qtd_QImageIOHandler_write_QImage
(void* __this_nativeId,
 void* image0)
{
    const QImage&  __qt_image0 = (const QImage& ) *(QImage *)image0;
    QImageIOHandler_QtDShell *__qt_this = (QImageIOHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_write((const QImage& )__qt_image0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


