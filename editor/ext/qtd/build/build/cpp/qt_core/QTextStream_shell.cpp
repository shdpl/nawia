#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qlocale.h>
#include <qtextstream.h>

#include "QTextStream_shell.h"
#include <iostream>
#include <qtextstream.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextStream_delete(void* nativeId)
{
    delete (QTextStream_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextStream_destroy(void* nativeId)
{
    call_destructor((QTextStream_QtDShell*)nativeId);
}

QTextStream_QtDShell::QTextStream_QtDShell(void *d_ptr)
    : QTextStream(),
      QtdObjectLink(d_ptr)
{
}

QTextStream_QtDShell::QTextStream_QtDShell(void *d_ptr, QIODevice*  device0)
    : QTextStream(device0),
      QtdObjectLink(d_ptr)
{
}

QTextStream_QtDShell::QTextStream_QtDShell(void *d_ptr, const QByteArray&  array0, QIODevice::OpenMode  openMode1)
    : QTextStream(array0, openMode1),
      QtdObjectLink(d_ptr)
{
}

QTextStream_QtDShell::~QTextStream_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextStream::QTextStream()
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_QTextStream
(void *d_ptr)
{
    QTextStream_QtDShell *__qt_this = new QTextStream_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QTextStream::QTextStream(QIODevice * device)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_QTextStream_QIODevice
(void *d_ptr,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QTextStream_QtDShell *__qt_this = new QTextStream_QtDShell(d_ptr, (QIODevice* )__qt_device0);
    return (void *) __qt_this;

}

// QTextStream::QTextStream(const QByteArray & array, QFlags<QIODevice::OpenModeFlag> openMode)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_QTextStream_QByteArray_OpenMode
(void *d_ptr,
 void* array0,
 int openMode1)
{
    const QByteArray&  __qt_array0 = (const QByteArray& ) *(QByteArray *)array0;
    QFlags<QIODevice::OpenModeFlag> __qt_openMode1 = (QFlags<QIODevice::OpenModeFlag>) openMode1;
    QTextStream_QtDShell *__qt_this = new QTextStream_QtDShell(d_ptr, (const QByteArray& )__qt_array0, (QIODevice::OpenMode )__qt_openMode1);
    return (void *) __qt_this;

}

// QTextStream::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextStream_atEnd_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->atEnd();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextStream::autoDetectUnicode() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextStream_autoDetectUnicode_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoDetectUnicode();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextStream::device() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_device_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->device();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextStream::fieldAlignment() const
QTD_EXTERN QTD_EXPORT int qtd_QTextStream_fieldAlignment_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->fieldAlignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextStream::fieldWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QTextStream_fieldWidth_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->fieldWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextStream::flush()
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_flush
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->flush();

}

// QTextStream::generateByteOrderMark() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextStream_generateByteOrderMark_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->generateByteOrderMark();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextStream::integerBase() const
QTD_EXTERN QTD_EXPORT int qtd_QTextStream_integerBase_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->integerBase();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextStream::locale() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_locale_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    QLocale  __qt_return_value = __qt_this->locale();

    void* __d_return_value = (void*) new QLocale(__qt_return_value);

    return __d_return_value;
}

// QTextStream::numberFlags() const
QTD_EXTERN QTD_EXPORT int qtd_QTextStream_numberFlags_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->numberFlags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextStream::operator<<(QBool b)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_writeBoolean_bool
(void* __this_nativeId,
 QBool b0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((QBool )b0);
    return 0;

}

// QTextStream::operator<<(char ch)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_writeByte_char
(void* __this_nativeId,
 char ch0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((char )ch0);
    return 0;

}

// QTextStream::operator<<(const QString & s)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_writeString_string
(void* __this_nativeId,
 DArray s0)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((const QString& )__qt_s0);
    return 0;

}

// QTextStream::operator<<(double f)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_writeDouble_double
(void* __this_nativeId,
 double f0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((double )f0);
    return 0;

}

// QTextStream::operator<<(float f)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_writeFloat_float
(void* __this_nativeId,
 float f0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((float )f0);
    return 0;

}

// QTextStream::operator<<(signed int i)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_writeInt_int
(void* __this_nativeId,
 signed int i0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((signed int )i0);
    return 0;

}

// QTextStream::operator<<(signed short i)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_writeShort_char_short
(void* __this_nativeId,
 signed short i0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((signed short )i0);
    return 0;

}

// QTextStream::operator>>(char & ch)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_operator_shift_right_byte_nativepointerchar
(void* __this_nativeId,
 char * ch0)
{
    char&  __qt_ch0 = (char& ) * (char *) ch0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((char& )__qt_ch0);
    return 0;

}

// QTextStream::operator>>(double & f)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_operator_shift_right_double_nativepointerdouble
(void* __this_nativeId,
 double * f0)
{
    double&  __qt_f0 = (double& ) * (double *) f0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((double& )__qt_f0);
    return 0;

}

// QTextStream::operator>>(float & f)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_operator_shift_right_float_nativepointerfloat
(void* __this_nativeId,
 float * f0)
{
    float&  __qt_f0 = (float& ) * (float *) f0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((float& )__qt_f0);
    return 0;

}

// QTextStream::operator>>(signed int & i)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_operator_shift_right_int_nativepointerint
(void* __this_nativeId,
 signed int * i0)
{
    signed int&  __qt_i0 = (signed int& ) * (signed int *) i0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((signed int& )__qt_i0);
    return 0;

}

// QTextStream::operator>>(signed short & i)
QTD_EXTERN QTD_EXPORT void* qtd_QTextStream_operator_shift_right_short_nativepointershort
(void* __this_nativeId,
 signed short * i0)
{
    signed short&  __qt_i0 = (signed short& ) * (signed short *) i0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((signed short& )__qt_i0);
    return 0;

}

// QTextStream::padChar() const
// QTextStream::pos() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QTextStream_pos_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->pos();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextStream::read(qint64 maxlen)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_read_long
(void* __this_nativeId,
 void* __d_return_value,
 qint64 maxlen0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->read((qint64 )maxlen0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextStream::readAll()
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_readAll
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->readAll();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextStream::readLine(qint64 maxlen)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_readLine_long
(void* __this_nativeId,
 void* __d_return_value,
 qint64 maxlen0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->readLine((qint64 )maxlen0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextStream::realNumberNotation() const
QTD_EXTERN QTD_EXPORT int qtd_QTextStream_realNumberNotation_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->realNumberNotation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextStream::realNumberPrecision() const
QTD_EXTERN QTD_EXPORT int qtd_QTextStream_realNumberPrecision_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->realNumberPrecision();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextStream::reset()
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_reset
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->reset();

}

// QTextStream::resetStatus()
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_resetStatus
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->resetStatus();

}

// QTextStream::seek(qint64 pos)
QTD_EXTERN QTD_EXPORT bool qtd_QTextStream_seek_long
(void* __this_nativeId,
 qint64 pos0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->seek((qint64 )pos0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextStream::setAutoDetectUnicode(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setAutoDetectUnicode_bool
(void* __this_nativeId,
 bool enabled0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setAutoDetectUnicode((bool )enabled0);

}

// QTextStream::setCodec(const char * codecName)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setCodec_nativepointerchar
(void* __this_nativeId,
 char* codecName0)
{
    const char*  __qt_codecName0 = (const char* ) codecName0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setCodec((const char* )__qt_codecName0);

}

// QTextStream::setDevice(QIODevice * device)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setDevice_QIODevice
(void* __this_nativeId,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setDevice((QIODevice* )__qt_device0);

}

// QTextStream::setFieldAlignment(QTextStream::FieldAlignment alignment)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setFieldAlignment_FieldAlignment
(void* __this_nativeId,
 int alignment0)
{
    QTextStream::FieldAlignment __qt_alignment0 = (QTextStream::FieldAlignment) alignment0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setFieldAlignment((QTextStream::FieldAlignment )__qt_alignment0);

}

// QTextStream::setFieldWidth(int width)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setFieldWidth_int
(void* __this_nativeId,
 int width0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setFieldWidth((int )width0);

}

// QTextStream::setGenerateByteOrderMark(bool generate)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setGenerateByteOrderMark_bool
(void* __this_nativeId,
 bool generate0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setGenerateByteOrderMark((bool )generate0);

}

// QTextStream::setIntegerBase(int base)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setIntegerBase_int
(void* __this_nativeId,
 int base0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setIntegerBase((int )base0);

}

// QTextStream::setLocale(const QLocale & locale)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setLocale_QLocale
(void* __this_nativeId,
 void* locale0)
{
    const QLocale&  __qt_locale0 = (const QLocale& ) *(QLocale *)locale0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setLocale((const QLocale& )__qt_locale0);

}

// QTextStream::setNumberFlags(QFlags<QTextStream::NumberFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setNumberFlags_NumberFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<QTextStream::NumberFlag> __qt_flags0 = (QFlags<QTextStream::NumberFlag>) flags0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setNumberFlags((QTextStream::NumberFlags )__qt_flags0);

}

// QTextStream::setPadChar(QChar ch)
// QTextStream::setRealNumberNotation(QTextStream::RealNumberNotation notation)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setRealNumberNotation_RealNumberNotation
(void* __this_nativeId,
 int notation0)
{
    QTextStream::RealNumberNotation __qt_notation0 = (QTextStream::RealNumberNotation) notation0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setRealNumberNotation((QTextStream::RealNumberNotation )__qt_notation0);

}

// QTextStream::setRealNumberPrecision(int precision)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setRealNumberPrecision_int
(void* __this_nativeId,
 int precision0)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setRealNumberPrecision((int )precision0);

}

// QTextStream::setStatus(QTextStream::Status status)
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_setStatus_Status
(void* __this_nativeId,
 int status0)
{
    QTextStream::Status __qt_status0 = (QTextStream::Status) status0;
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->setStatus((QTextStream::Status )__qt_status0);

}

// QTextStream::skipWhiteSpace()
QTD_EXTERN QTD_EXPORT void qtd_QTextStream_skipWhiteSpace
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    __qt_this->skipWhiteSpace();

}

// QTextStream::status() const
QTD_EXTERN QTD_EXPORT int qtd_QTextStream_status_const
(void* __this_nativeId)
{
    QTextStream_QtDShell *__qt_this = (QTextStream_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->status();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


