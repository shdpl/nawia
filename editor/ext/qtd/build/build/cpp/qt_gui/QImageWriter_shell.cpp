#include <QVariant>
#include <qbytearray.h>
#include <qimage.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qlist.h>

#include "QImageWriter_shell.h"
#include <iostream>
#include <qimagewriter.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_delete(void* nativeId)
{
    delete (QImageWriter_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_destroy(void* nativeId)
{
    call_destructor((QImageWriter_QtDShell*)nativeId);
}

QImageWriter_QtDShell::QImageWriter_QtDShell()
    : QImageWriter()
{
}

QImageWriter_QtDShell::QImageWriter_QtDShell(QIODevice*  device0, const QByteArray&  format1)
    : QImageWriter(device0, format1)
{
}

QImageWriter_QtDShell::QImageWriter_QtDShell(const QString&  fileName0, const QByteArray&  format1)
    : QImageWriter(fileName0, format1)
{
}

QImageWriter_QtDShell::~QImageWriter_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QImageWriter::QImageWriter()
QTD_EXTERN QTD_EXPORT void* qtd_QImageWriter_QImageWriter
(void *d_ptr)
{
    QImageWriter_QtDShell *__qt_this = new QImageWriter_QtDShell();
    return (void *) __qt_this;

}

// QImageWriter::QImageWriter(QIODevice * device, const QByteArray & format)
QTD_EXTERN QTD_EXPORT void* qtd_QImageWriter_QImageWriter_QIODevice_QByteArray
(void *d_ptr,
 void* device0,
 void* format1)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    const QByteArray&  __qt_format1 = (const QByteArray& ) *(QByteArray *)format1;
    QImageWriter_QtDShell *__qt_this = new QImageWriter_QtDShell((QIODevice* )__qt_device0, (const QByteArray& )__qt_format1);
    return (void *) __qt_this;

}

// QImageWriter::QImageWriter(const QString & fileName, const QByteArray & format)
QTD_EXTERN QTD_EXPORT void* qtd_QImageWriter_QImageWriter_string_QByteArray
(void *d_ptr,
 DArray fileName0,
 void* format1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const QByteArray&  __qt_format1 = (const QByteArray& ) *(QByteArray *)format1;
    QImageWriter_QtDShell *__qt_this = new QImageWriter_QtDShell((const QString& )__qt_fileName0, (const QByteArray& )__qt_format1);
    return (void *) __qt_this;

}

// QImageWriter::canWrite() const
QTD_EXTERN QTD_EXPORT bool qtd_QImageWriter_canWrite_const
(void* __this_nativeId)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->canWrite();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageWriter::compression() const
QTD_EXTERN QTD_EXPORT int qtd_QImageWriter_compression_const
(void* __this_nativeId)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->compression();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageWriter::device() const
QTD_EXTERN QTD_EXPORT void* qtd_QImageWriter_device_const
(void* __this_nativeId)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->device();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QImageWriter::error() const
QTD_EXTERN QTD_EXPORT int qtd_QImageWriter_error_const
(void* __this_nativeId)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageWriter::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QImageWriter::fileName() const
QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_fileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QImageWriter::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QImageWriter_format_const
(void* __this_nativeId)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QImageWriter::gamma() const
QTD_EXTERN QTD_EXPORT float qtd_QImageWriter_gamma_const
(void* __this_nativeId)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    float  __qt_return_value = __qt_this->gamma();

    float __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageWriter::quality() const
QTD_EXTERN QTD_EXPORT int qtd_QImageWriter_quality_const
(void* __this_nativeId)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->quality();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageWriter::setCompression(int compression)
QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_setCompression_int
(void* __this_nativeId,
 int compression0)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    __qt_this->setCompression((int )compression0);

}

// QImageWriter::setDevice(QIODevice * device)
QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_setDevice_QIODevice
(void* __this_nativeId,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    __qt_this->setDevice((QIODevice* )__qt_device0);

}

// QImageWriter::setFileName(const QString & fileName)
QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_setFileName_string
(void* __this_nativeId,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    __qt_this->setFileName((const QString& )__qt_fileName0);

}

// QImageWriter::setFormat(const QByteArray & format)
QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_setFormat_QByteArray
(void* __this_nativeId,
 void* format0)
{
    const QByteArray&  __qt_format0 = (const QByteArray& ) *(QByteArray *)format0;
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    __qt_this->setFormat((const QByteArray& )__qt_format0);

}

// QImageWriter::setGamma(float gamma)
QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_setGamma_float
(void* __this_nativeId,
 float gamma0)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    __qt_this->setGamma((float )gamma0);

}

// QImageWriter::setQuality(int quality)
QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_setQuality_int
(void* __this_nativeId,
 int quality0)
{
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    __qt_this->setQuality((int )quality0);

}

// QImageWriter::setText(const QString & key, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_setText_string_string
(void* __this_nativeId,
 DArray key0,
 DArray text1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_key0, (const QString& )__qt_text1);

}

// QImageWriter::supportsOption(QImageIOHandler::ImageOption option) const
QTD_EXTERN QTD_EXPORT bool qtd_QImageWriter_supportsOption_ImageOption_const
(void* __this_nativeId,
 int option0)
{
    QImageIOHandler::ImageOption __qt_option0 = (QImageIOHandler::ImageOption) option0;
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->supportsOption((QImageIOHandler::ImageOption )__qt_option0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageWriter::write(const QImage & image)
QTD_EXTERN QTD_EXPORT bool qtd_QImageWriter_write_QImage
(void* __this_nativeId,
 void* image0)
{
    const QImage&  __qt_image0 = (const QImage& ) *(QImage *)image0;
    QImageWriter_QtDShell *__qt_this = (QImageWriter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->write((const QImage& )__qt_image0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageWriter::supportedImageFormats()
QTD_EXTERN QTD_EXPORT void qtd_QImageWriter_supportedImageFormats
(void* __d_return_value)
{
    QList<QByteArray >  __qt_return_value = QImageWriter_QtDShell::supportedImageFormats();

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


