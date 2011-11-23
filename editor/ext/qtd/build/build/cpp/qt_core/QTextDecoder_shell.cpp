#include <QVariant>
#include <qbytearray.h>
#include <qtextcodec.h>

#include "QTextDecoder_shell.h"
#include <iostream>
#include <qtextcodec.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextDecoder_delete(void* nativeId)
{
    delete (QTextDecoder_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextDecoder_destroy(void* nativeId)
{
    call_destructor((QTextDecoder_QtDShell*)nativeId);
}

QTextDecoder_QtDShell::QTextDecoder_QtDShell(const QTextCodec*  codec0)
    : QTextDecoder(codec0)
{
}

QTextDecoder_QtDShell::QTextDecoder_QtDShell(const QTextCodec*  codec0, QTextCodec::ConversionFlags  flags1)
    : QTextDecoder(codec0, flags1)
{
}

QTextDecoder_QtDShell::~QTextDecoder_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextDecoder_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextDecoder::QTextDecoder(const QTextCodec * codec)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDecoder_QTextDecoder_QTextCodec
(void *d_ptr,
 void* codec0)
{
    const QTextCodec*  __qt_codec0 = (const QTextCodec* ) codec0;
    QTextDecoder_QtDShell *__qt_this = new QTextDecoder_QtDShell((const QTextCodec* )__qt_codec0);
    return (void *) __qt_this;

}

// QTextDecoder::QTextDecoder(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDecoder_QTextDecoder_QTextCodec_ConversionFlags
(void *d_ptr,
 void* codec0,
 int flags1)
{
    const QTextCodec*  __qt_codec0 = (const QTextCodec* ) codec0;
    QFlags<QTextCodec::ConversionFlag> __qt_flags1 = (QFlags<QTextCodec::ConversionFlag>) flags1;
    QTextDecoder_QtDShell *__qt_this = new QTextDecoder_QtDShell((const QTextCodec* )__qt_codec0, (QTextCodec::ConversionFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QTextDecoder::hasFailure() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextDecoder_hasFailure_const
(void* __this_nativeId)
{
    QTextDecoder_QtDShell *__qt_this = (QTextDecoder_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFailure();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDecoder::toUnicode(const QByteArray & ba)
QTD_EXTERN QTD_EXPORT void qtd_QTextDecoder_toUnicode_QByteArray
(void* __this_nativeId,
 void* __d_return_value,
 void* ba0)
{
    const QByteArray&  __qt_ba0 = (const QByteArray& ) *(QByteArray *)ba0;
    QTextDecoder_QtDShell *__qt_this = (QTextDecoder_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toUnicode((const QByteArray& )__qt_ba0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


