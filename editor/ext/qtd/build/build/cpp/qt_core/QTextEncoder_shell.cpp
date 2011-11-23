#include <QVariant>
#include <qbytearray.h>
#include <qtextcodec.h>

#include "QTextEncoder_shell.h"
#include <iostream>
#include <qtextcodec.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextEncoder_delete(void* nativeId)
{
    delete (QTextEncoder_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextEncoder_destroy(void* nativeId)
{
    call_destructor((QTextEncoder_QtDShell*)nativeId);
}

QTextEncoder_QtDShell::QTextEncoder_QtDShell(const QTextCodec*  codec0)
    : QTextEncoder(codec0)
{
}

QTextEncoder_QtDShell::QTextEncoder_QtDShell(const QTextCodec*  codec0, QTextCodec::ConversionFlags  flags1)
    : QTextEncoder(codec0, flags1)
{
}

QTextEncoder_QtDShell::~QTextEncoder_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextEncoder_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextEncoder::QTextEncoder(const QTextCodec * codec)
QTD_EXTERN QTD_EXPORT void* qtd_QTextEncoder_QTextEncoder_QTextCodec
(void *d_ptr,
 void* codec0)
{
    const QTextCodec*  __qt_codec0 = (const QTextCodec* ) codec0;
    QTextEncoder_QtDShell *__qt_this = new QTextEncoder_QtDShell((const QTextCodec* )__qt_codec0);
    return (void *) __qt_this;

}

// QTextEncoder::QTextEncoder(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QTextEncoder_QTextEncoder_QTextCodec_ConversionFlags
(void *d_ptr,
 void* codec0,
 int flags1)
{
    const QTextCodec*  __qt_codec0 = (const QTextCodec* ) codec0;
    QFlags<QTextCodec::ConversionFlag> __qt_flags1 = (QFlags<QTextCodec::ConversionFlag>) flags1;
    QTextEncoder_QtDShell *__qt_this = new QTextEncoder_QtDShell((const QTextCodec* )__qt_codec0, (QTextCodec::ConversionFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QTextEncoder::fromUnicode(const QString & str)
QTD_EXTERN QTD_EXPORT void* qtd_QTextEncoder_fromUnicode_string
(void* __this_nativeId,
 DArray str0)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QTextEncoder_QtDShell *__qt_this = (QTextEncoder_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->fromUnicode((const QString& )__qt_str0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QTextEncoder::hasFailure() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextEncoder_hasFailure_const
(void* __this_nativeId)
{
    QTextEncoder_QtDShell *__qt_this = (QTextEncoder_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFailure();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


