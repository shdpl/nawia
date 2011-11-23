#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qpicture.h>

#include "QPictureIO_shell.h"
#include <iostream>
#include <qpicture.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_delete(void* nativeId)
{
    delete (QPictureIO_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_destroy(void* nativeId)
{
    call_destructor((QPictureIO_QtDShell*)nativeId);
}

QPictureIO_QtDShell::QPictureIO_QtDShell()
    : QPictureIO()
{
}

QPictureIO_QtDShell::QPictureIO_QtDShell(QIODevice*  ioDevice0, const char*  format1)
    : QPictureIO(ioDevice0, format1)
{
}

QPictureIO_QtDShell::QPictureIO_QtDShell(const QString&  fileName0, const char*  format1)
    : QPictureIO(fileName0, format1)
{
}

QPictureIO_QtDShell::~QPictureIO_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QPictureIO::QPictureIO()
QTD_EXTERN QTD_EXPORT void* qtd_QPictureIO_QPictureIO
(void *d_ptr)
{
    QPictureIO_QtDShell *__qt_this = new QPictureIO_QtDShell();
    return (void *) __qt_this;

}

// QPictureIO::QPictureIO(QIODevice * ioDevice, const char * format)
QTD_EXTERN QTD_EXPORT void* qtd_QPictureIO_QPictureIO_QIODevice_nativepointerchar
(void *d_ptr,
 void* ioDevice0,
 char* format1)
{
    QIODevice*  __qt_ioDevice0 = (QIODevice* ) ioDevice0;
    const char*  __qt_format1 = (const char* ) format1;
    QPictureIO_QtDShell *__qt_this = new QPictureIO_QtDShell((QIODevice* )__qt_ioDevice0, (const char* )__qt_format1);
    return (void *) __qt_this;

}

// QPictureIO::QPictureIO(const QString & fileName, const char * format)
QTD_EXTERN QTD_EXPORT void* qtd_QPictureIO_QPictureIO_string_nativepointerchar
(void *d_ptr,
 DArray fileName0,
 char* format1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const char*  __qt_format1 = (const char* ) format1;
    QPictureIO_QtDShell *__qt_this = new QPictureIO_QtDShell((const QString& )__qt_fileName0, (const char* )__qt_format1);
    return (void *) __qt_this;

}

// QPictureIO::description() const
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_description_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->description();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QPictureIO::fileName() const
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_fileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QPictureIO::format() const
QTD_EXTERN QTD_EXPORT char* qtd_QPictureIO_format_private_const
(void* __this_nativeId)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    const char*  __qt_return_value = __qt_this->format();

    char* __d_return_value = (char*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QPictureIO::gamma() const
QTD_EXTERN QTD_EXPORT float qtd_QPictureIO_gamma_const
(void* __this_nativeId)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    float  __qt_return_value = __qt_this->gamma();

    float __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPictureIO::ioDevice() const
QTD_EXTERN QTD_EXPORT void* qtd_QPictureIO_ioDevice_const
(void* __this_nativeId)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->ioDevice();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPictureIO::parameters() const
QTD_EXTERN QTD_EXPORT char* qtd_QPictureIO_parameters_private_const
(void* __this_nativeId)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    const char*  __qt_return_value = __qt_this->parameters();

    char* __d_return_value = (char*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QPictureIO::picture() const
QTD_EXTERN QTD_EXPORT void* qtd_QPictureIO_picture_const
(void* __this_nativeId)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    const QPicture&  __qt_return_value = __qt_this->picture();

    void* __d_return_value = (void*) new QPicture(__qt_return_value);

    return __d_return_value;
}

// QPictureIO::quality() const
QTD_EXTERN QTD_EXPORT int qtd_QPictureIO_quality_const
(void* __this_nativeId)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->quality();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPictureIO::read()
QTD_EXTERN QTD_EXPORT bool qtd_QPictureIO_read
(void* __this_nativeId)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->read();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPictureIO::setDescription(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_setDescription_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    __qt_this->setDescription((const QString& )__qt_arg__1);

}

// QPictureIO::setFileName(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_setFileName_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    __qt_this->setFileName((const QString& )__qt_arg__1);

}

// QPictureIO::setFormat(const char * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_setFormat_nativepointerchar
(void* __this_nativeId,
 char* arg__1)
{
    const char*  __qt_arg__1 = (const char* ) arg__1;
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    __qt_this->setFormat((const char* )__qt_arg__1);

}

// QPictureIO::setGamma(float arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_setGamma_float
(void* __this_nativeId,
 float arg__1)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    __qt_this->setGamma((float )arg__1);

}

// QPictureIO::setIODevice(QIODevice * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_setIODevice_QIODevice
(void* __this_nativeId,
 void* arg__1)
{
    QIODevice*  __qt_arg__1 = (QIODevice* ) arg__1;
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    __qt_this->setIODevice((QIODevice* )__qt_arg__1);

}

// QPictureIO::setParameters(const char * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_setParameters_nativepointerchar
(void* __this_nativeId,
 char* arg__1)
{
    const char*  __qt_arg__1 = (const char* ) arg__1;
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    __qt_this->setParameters((const char* )__qt_arg__1);

}

// QPictureIO::setPicture(const QPicture & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_setPicture_QPicture
(void* __this_nativeId,
 void* arg__1)
{
    const QPicture&  __qt_arg__1 = (const QPicture& ) *(QPicture *)arg__1;
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    __qt_this->setPicture((const QPicture& )__qt_arg__1);

}

// QPictureIO::setQuality(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_setQuality_int
(void* __this_nativeId,
 int arg__1)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    __qt_this->setQuality((int )arg__1);

}

// QPictureIO::setStatus(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_setStatus_int
(void* __this_nativeId,
 int arg__1)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    __qt_this->setStatus((int )arg__1);

}

// QPictureIO::status() const
QTD_EXTERN QTD_EXPORT int qtd_QPictureIO_status_const
(void* __this_nativeId)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->status();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPictureIO::write()
QTD_EXTERN QTD_EXPORT bool qtd_QPictureIO_write
(void* __this_nativeId)
{
    QPictureIO_QtDShell *__qt_this = (QPictureIO_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->write();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPictureIO::inputFormats()
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_inputFormats
(void* __d_return_value)
{
    QList<QByteArray >  __qt_return_value = QPictureIO_QtDShell::inputFormats();

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPictureIO::outputFormats()
QTD_EXTERN QTD_EXPORT void qtd_QPictureIO_outputFormats
(void* __d_return_value)
{
    QList<QByteArray >  __qt_return_value = QPictureIO_QtDShell::outputFormats();

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPictureIO::pictureFormat(QIODevice * arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QPictureIO_pictureFormat_QIODevice
(void* arg__1)
{
    QIODevice*  __qt_arg__1 = (QIODevice* ) arg__1;
    QByteArray  __qt_return_value = QPictureIO_QtDShell::pictureFormat((QIODevice* )__qt_arg__1);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QPictureIO::pictureFormat(const QString & fileName)
QTD_EXTERN QTD_EXPORT void* qtd_QPictureIO_pictureFormat_string
(DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QByteArray  __qt_return_value = QPictureIO_QtDShell::pictureFormat((const QString& )__qt_fileName0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


