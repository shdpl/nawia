#include <QColor>
#include <QImage>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qimage.h>
#include <qimagereader.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qstringlist.h>

#include "QImageReader_shell.h"
#include <iostream>
#include <qimagereader.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QImageReader_delete(void* nativeId)
{
    delete (QImageReader_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QImageReader_destroy(void* nativeId)
{
    call_destructor((QImageReader_QtDShell*)nativeId);
}

QImageReader_QtDShell::QImageReader_QtDShell()
    : QImageReader()
{
}

QImageReader_QtDShell::QImageReader_QtDShell(QIODevice*  device0, const QByteArray&  format1)
    : QImageReader(device0, format1)
{
}

QImageReader_QtDShell::QImageReader_QtDShell(const QString&  fileName0, const QByteArray&  format1)
    : QImageReader(fileName0, format1)
{
}

QImageReader_QtDShell::~QImageReader_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QImageReader::QImageReader()
QTD_EXTERN QTD_EXPORT void* qtd_QImageReader_QImageReader
(void *d_ptr)
{
    QImageReader_QtDShell *__qt_this = new QImageReader_QtDShell();
    return (void *) __qt_this;

}

// QImageReader::QImageReader(QIODevice * device, const QByteArray & format)
QTD_EXTERN QTD_EXPORT void* qtd_QImageReader_QImageReader_QIODevice_QByteArray
(void *d_ptr,
 void* device0,
 void* format1)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    const QByteArray&  __qt_format1 = (const QByteArray& ) *(QByteArray *)format1;
    QImageReader_QtDShell *__qt_this = new QImageReader_QtDShell((QIODevice* )__qt_device0, (const QByteArray& )__qt_format1);
    return (void *) __qt_this;

}

// QImageReader::QImageReader(const QString & fileName, const QByteArray & format)
QTD_EXTERN QTD_EXPORT void* qtd_QImageReader_QImageReader_string_QByteArray
(void *d_ptr,
 DArray fileName0,
 void* format1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const QByteArray&  __qt_format1 = (const QByteArray& ) *(QByteArray *)format1;
    QImageReader_QtDShell *__qt_this = new QImageReader_QtDShell((const QString& )__qt_fileName0, (const QByteArray& )__qt_format1);
    return (void *) __qt_this;

}

// QImageReader::autoDetectImageFormat() const
QTD_EXTERN QTD_EXPORT bool qtd_QImageReader_autoDetectImageFormat_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoDetectImageFormat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::backgroundColor() const
QTD_EXTERN QTD_EXPORT void* qtd_QImageReader_backgroundColor_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->backgroundColor();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QImageReader::canRead() const
QTD_EXTERN QTD_EXPORT bool qtd_QImageReader_canRead_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->canRead();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::clipRect() const
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_clipRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->clipRect();

    *__d_return_value = __qt_return_value;

}

// QImageReader::currentImageNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QImageReader_currentImageNumber_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentImageNumber();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::currentImageRect() const
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_currentImageRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->currentImageRect();

    *__d_return_value = __qt_return_value;

}

// QImageReader::decideFormatFromContent() const
QTD_EXTERN QTD_EXPORT bool qtd_QImageReader_decideFormatFromContent_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->decideFormatFromContent();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::device() const
QTD_EXTERN QTD_EXPORT void* qtd_QImageReader_device_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->device();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QImageReader::error() const
QTD_EXTERN QTD_EXPORT int qtd_QImageReader_error_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QImageReader::fileName() const
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_fileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QImageReader::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QImageReader_format_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QImageReader::imageCount() const
QTD_EXTERN QTD_EXPORT int qtd_QImageReader_imageCount_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->imageCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::imageFormat() const
QTD_EXTERN QTD_EXPORT int qtd_QImageReader_imageFormat_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->imageFormat();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::jumpToImage(int imageNumber)
QTD_EXTERN QTD_EXPORT bool qtd_QImageReader_jumpToImage_int
(void* __this_nativeId,
 int imageNumber0)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->jumpToImage((int )imageNumber0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::jumpToNextImage()
QTD_EXTERN QTD_EXPORT bool qtd_QImageReader_jumpToNextImage
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->jumpToNextImage();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::loopCount() const
QTD_EXTERN QTD_EXPORT int qtd_QImageReader_loopCount_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->loopCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::nextImageDelay() const
QTD_EXTERN QTD_EXPORT int qtd_QImageReader_nextImageDelay_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->nextImageDelay();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::quality() const
QTD_EXTERN QTD_EXPORT int qtd_QImageReader_quality_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->quality();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::read()
QTD_EXTERN QTD_EXPORT void* qtd_QImageReader_read
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->read();

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImageReader::scaledClipRect() const
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_scaledClipRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->scaledClipRect();

    *__d_return_value = __qt_return_value;

}

// QImageReader::scaledSize() const
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_scaledSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->scaledSize();

    *__d_return_value = __qt_return_value;

}

// QImageReader::setAutoDetectImageFormat(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_setAutoDetectImageFormat_bool
(void* __this_nativeId,
 bool enabled0)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    __qt_this->setAutoDetectImageFormat((bool )enabled0);

}

// QImageReader::setBackgroundColor(const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_setBackgroundColor_QColor
(void* __this_nativeId,
 void* color0)
{
    const QColor&  __qt_color0 = (const QColor& ) *(QColor *)color0;
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    __qt_this->setBackgroundColor((const QColor& )__qt_color0);

}

// QImageReader::setClipRect(const QRect & rect)
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_setClipRect_QRect
(void* __this_nativeId,
 QRect rect0)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    __qt_this->setClipRect((const QRect& )rect0);

}

// QImageReader::setDecideFormatFromContent(bool ignored)
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_setDecideFormatFromContent_bool
(void* __this_nativeId,
 bool ignored0)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    __qt_this->setDecideFormatFromContent((bool )ignored0);

}

// QImageReader::setDevice(QIODevice * device)
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_setDevice_QIODevice
(void* __this_nativeId,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    __qt_this->setDevice((QIODevice* )__qt_device0);

}

// QImageReader::setFileName(const QString & fileName)
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_setFileName_string
(void* __this_nativeId,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    __qt_this->setFileName((const QString& )__qt_fileName0);

}

// QImageReader::setFormat(const QByteArray & format)
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_setFormat_QByteArray
(void* __this_nativeId,
 void* format0)
{
    const QByteArray&  __qt_format0 = (const QByteArray& ) *(QByteArray *)format0;
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    __qt_this->setFormat((const QByteArray& )__qt_format0);

}

// QImageReader::setQuality(int quality)
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_setQuality_int
(void* __this_nativeId,
 int quality0)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    __qt_this->setQuality((int )quality0);

}

// QImageReader::setScaledClipRect(const QRect & rect)
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_setScaledClipRect_QRect
(void* __this_nativeId,
 QRect rect0)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    __qt_this->setScaledClipRect((const QRect& )rect0);

}

// QImageReader::setScaledSize(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_setScaledSize_QSize
(void* __this_nativeId,
 QSize size0)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    __qt_this->setScaledSize((const QSize& )size0);

}

// QImageReader::size() const
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_size_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->size();

    *__d_return_value = __qt_return_value;

}

// QImageReader::supportsAnimation() const
QTD_EXTERN QTD_EXPORT bool qtd_QImageReader_supportsAnimation_const
(void* __this_nativeId)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->supportsAnimation();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::supportsOption(QImageIOHandler::ImageOption option) const
QTD_EXTERN QTD_EXPORT bool qtd_QImageReader_supportsOption_ImageOption_const
(void* __this_nativeId,
 int option0)
{
    QImageIOHandler::ImageOption __qt_option0 = (QImageIOHandler::ImageOption) option0;
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->supportsOption((QImageIOHandler::ImageOption )__qt_option0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageReader::text(const QString & key) const
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_text_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text((const QString& )__qt_key0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QImageReader::textKeys() const
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_textKeys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QImageReader_QtDShell *__qt_this = (QImageReader_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->textKeys();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QImageReader::imageFormat(QIODevice * device)
QTD_EXTERN QTD_EXPORT void* qtd_QImageReader_imageFormat_QIODevice
(void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QByteArray  __qt_return_value = QImageReader_QtDShell::imageFormat((QIODevice* )__qt_device0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QImageReader::imageFormat(const QString & fileName)
QTD_EXTERN QTD_EXPORT void* qtd_QImageReader_imageFormat_string
(DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QByteArray  __qt_return_value = QImageReader_QtDShell::imageFormat((const QString& )__qt_fileName0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QImageReader::supportedImageFormats()
QTD_EXTERN QTD_EXPORT void qtd_QImageReader_supportedImageFormats
(void* __d_return_value)
{
    QList<QByteArray >  __qt_return_value = QImageReader_QtDShell::supportedImageFormats();

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


