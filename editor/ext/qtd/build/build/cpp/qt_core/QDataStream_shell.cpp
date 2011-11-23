#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qiodevice.h>

#include "QDataStream_shell.h"
#include <iostream>
#include <qdatastream.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QDataStream_delete(void* nativeId)
{
    delete (QDataStream_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDataStream_destroy(void* nativeId)
{
    call_destructor((QDataStream_QtDShell*)nativeId);
}

QDataStream_QtDShell::QDataStream_QtDShell(void *d_ptr)
    : QDataStream(),
      QtdObjectLink(d_ptr)
{
}

QDataStream_QtDShell::QDataStream_QtDShell(void *d_ptr, QByteArray*  arg__1, QIODevice::OpenMode  flags1)
    : QDataStream(arg__1, flags1),
      QtdObjectLink(d_ptr)
{
}

QDataStream_QtDShell::QDataStream_QtDShell(void *d_ptr, QIODevice*  arg__1)
    : QDataStream(arg__1),
      QtdObjectLink(d_ptr)
{
}

QDataStream_QtDShell::QDataStream_QtDShell(void *d_ptr, const QByteArray&  arg__1)
    : QDataStream(arg__1),
      QtdObjectLink(d_ptr)
{
}

QDataStream_QtDShell::~QDataStream_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QDataStream_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
/*        extern "C" jstring qtd_QDataStream_readString_private
(void* __this_nativeId)
{
QTJAMBI_DEBUG_TRACE("(native) entering: QDataStream::%FUNCTION_NAME%_native");
QDataStream *qtStream = (QDataStream *) qtjambi_from_jlong(stream);

jstring returned = 0;
if (qtStream != 0) {
QString qtString;
operator>>(*qtStream, qtString);

returned = qtjambi_from_qstring(env, qtString);
}

return returned;
}

extern "C" JNIEXPORT void JNICALL QTJAMBI_FUNCTION_PREFIX(Java_com_trolltech_qt_core_QDataStream_writeString_1private)
(JNIEnv *env, jobject, jlong stream, jstring string)
{
QTJAMBI_DEBUG_TRACE("(native) entering: QDataStream::%FUNCTION_NAME%_native");
QDataStream *qtStream = (QDataStream *) qtjambi_from_jlong(stream);

if (qtStream != 0) {
QString qtString = qtjambi_to_qstring(env, string);
operator<<(*qtStream, qtString);
}
}
 */


// ---externC---
// QDataStream::QDataStream()
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_QDataStream
(void *d_ptr)
{
    QDataStream_QtDShell *__qt_this = new QDataStream_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QDataStream::QDataStream(QByteArray * arg__1, QFlags<QIODevice::OpenModeFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_QDataStream_nativepointerQByteArray_OpenMode
(void *d_ptr,
 void* arg__1,
 int flags1)
{
    QByteArray*  __qt_arg__1 = (QByteArray* ) arg__1;
    QFlags<QIODevice::OpenModeFlag> __qt_flags1 = (QFlags<QIODevice::OpenModeFlag>) flags1;
    QDataStream_QtDShell *__qt_this = new QDataStream_QtDShell(d_ptr, (QByteArray* )__qt_arg__1, (QIODevice::OpenMode )__qt_flags1);
    return (void *) __qt_this;

}

// QDataStream::QDataStream(QIODevice * arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_QDataStream_QIODevice
(void *d_ptr,
 void* arg__1)
{
    QIODevice*  __qt_arg__1 = (QIODevice* ) arg__1;
    QDataStream_QtDShell *__qt_this = new QDataStream_QtDShell(d_ptr, (QIODevice* )__qt_arg__1);
    return (void *) __qt_this;

}

// QDataStream::QDataStream(const QByteArray & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_QDataStream_QByteArray
(void *d_ptr,
 void* arg__1)
{
    const QByteArray&  __qt_arg__1 = (const QByteArray& ) *(QByteArray *)arg__1;
    QDataStream_QtDShell *__qt_this = new QDataStream_QtDShell(d_ptr, (const QByteArray& )__qt_arg__1);
    return (void *) __qt_this;

}

// QDataStream::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QDataStream_atEnd_const
(void* __this_nativeId)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->atEnd();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDataStream::operator<<(bool i)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_writeBoolean_bool
(void* __this_nativeId,
 bool i0)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((bool )i0);
    return 0;

}

// QDataStream::operator<<(double f)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_writeDouble_double
(void* __this_nativeId,
 double f0)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((double )f0);
    return 0;

}

// QDataStream::operator<<(float f)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_writeFloat_float
(void* __this_nativeId,
 float f0)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((float )f0);
    return 0;

}

// QDataStream::operator<<(int i)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_writeInt_int
(void* __this_nativeId,
 int i0)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((int )i0);
    return 0;

}

// QDataStream::operator<<(qint64 i)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_writeLong_long
(void* __this_nativeId,
 qint64 i0)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((qint64 )i0);
    return 0;

}

// QDataStream::operator<<(short i)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_writeShort_char_short
(void* __this_nativeId,
 short i0)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((short )i0);
    return 0;

}

// QDataStream::operator<<(signed char i)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_writeByte_byte
(void* __this_nativeId,
 signed char i0)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator<<((signed char )i0);
    return 0;

}

// QDataStream::operator>>(bool & i)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_operator_shift_right_boolean_nativepointerbool
(void* __this_nativeId,
 bool * i0)
{
    bool&  __qt_i0 = (bool& ) * (bool *) i0;
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((bool& )__qt_i0);
    return 0;

}

// QDataStream::operator>>(double & f)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_operator_shift_right_double_nativepointerdouble
(void* __this_nativeId,
 double * f0)
{
    double&  __qt_f0 = (double& ) * (double *) f0;
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((double& )__qt_f0);
    return 0;

}

// QDataStream::operator>>(float & f)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_operator_shift_right_float_nativepointerfloat
(void* __this_nativeId,
 float * f0)
{
    float&  __qt_f0 = (float& ) * (float *) f0;
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((float& )__qt_f0);
    return 0;

}

// QDataStream::operator>>(int & i)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_operator_shift_right_int_nativepointerint
(void* __this_nativeId,
 int * i0)
{
    int&  __qt_i0 = (int& ) * (int *) i0;
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((int& )__qt_i0);
    return 0;

}

// QDataStream::operator>>(qint64 & i)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_operator_shift_right_long_nativepointerlong
(void* __this_nativeId,
 qint64 * i0)
{
    qint64&  __qt_i0 = (qint64& ) * (qint64 *) i0;
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((qint64& )__qt_i0);
    return 0;

}

// QDataStream::operator>>(short & i)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_operator_shift_right_short_nativepointershort
(void* __this_nativeId,
 short * i0)
{
    short&  __qt_i0 = (short& ) * (short *) i0;
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((short& )__qt_i0);
    return 0;

}

// QDataStream::operator>>(signed char & i)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_operator_shift_right_byte_nativepointerbyte
(void* __this_nativeId,
 signed char * i0)
{
    signed char&  __qt_i0 = (signed char& ) * (signed char *) i0;
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((signed char& )__qt_i0);
    return 0;

}

// QDataStream::operator>>(unsigned short & i)
QTD_EXTERN QTD_EXPORT void* qtd_QDataStream_operator_shift_right_char_nativepointerushort
(void* __this_nativeId,
 unsigned short * i0)
{
    unsigned short&  __qt_i0 = (unsigned short& ) * (unsigned short *) i0;
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->operator>>((unsigned short& )__qt_i0);
    return 0;

}

// QDataStream::resetStatus()
QTD_EXTERN QTD_EXPORT void qtd_QDataStream_resetStatus
(void* __this_nativeId)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->resetStatus();

}

// QDataStream::setDevice(QIODevice * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDataStream_setDevice_QIODevice
(void* __this_nativeId,
 void* arg__1)
{
    QIODevice*  __qt_arg__1 = (QIODevice* ) arg__1;
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->setDevice((QIODevice* )__qt_arg__1);

}

// QDataStream::setStatus(QDataStream::Status status)
QTD_EXTERN QTD_EXPORT void qtd_QDataStream_setStatus_Status
(void* __this_nativeId,
 int status0)
{
    QDataStream::Status __qt_status0 = (QDataStream::Status) status0;
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->setStatus((QDataStream::Status )__qt_status0);

}

// QDataStream::setVersion(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDataStream_setVersion_int
(void* __this_nativeId,
 int arg__1)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->setVersion((int )arg__1);

}

// QDataStream::skipRawData(int len)
QTD_EXTERN QTD_EXPORT int qtd_QDataStream_skipRawData_int
(void* __this_nativeId,
 int len0)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->skipRawData((int )len0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDataStream::status() const
QTD_EXTERN QTD_EXPORT int qtd_QDataStream_status_const
(void* __this_nativeId)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->status();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDataStream::unsetDevice()
QTD_EXTERN QTD_EXPORT void qtd_QDataStream_unsetDevice
(void* __this_nativeId)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    __qt_this->unsetDevice();

}

// QDataStream::version() const
QTD_EXTERN QTD_EXPORT int qtd_QDataStream_version__const
(void* __this_nativeId)
{
    QDataStream_QtDShell *__qt_this = (QDataStream_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->version();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


