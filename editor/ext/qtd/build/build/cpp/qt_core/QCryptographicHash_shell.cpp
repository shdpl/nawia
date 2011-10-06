#include <QVariant>
#include <qbytearray.h>
#include <qcryptographichash.h>

#include "QCryptographicHash_shell.h"
#include <iostream>
#include <qcryptographichash.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QCryptographicHash_delete(void* nativeId)
{
    delete (QCryptographicHash_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QCryptographicHash_destroy(void* nativeId)
{
    call_destructor((QCryptographicHash_QtDShell*)nativeId);
}

QCryptographicHash_QtDShell::QCryptographicHash_QtDShell(QCryptographicHash::Algorithm  method0)
    : QCryptographicHash(method0)
{
}

QCryptographicHash_QtDShell::~QCryptographicHash_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QCryptographicHash_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QCryptographicHash::QCryptographicHash(QCryptographicHash::Algorithm method)
QTD_EXTERN QTD_EXPORT void* qtd_QCryptographicHash_QCryptographicHash_Algorithm
(void *d_ptr,
 int method0)
{
    QCryptographicHash::Algorithm __qt_method0 = (QCryptographicHash::Algorithm) method0;
    QCryptographicHash_QtDShell *__qt_this = new QCryptographicHash_QtDShell((QCryptographicHash::Algorithm )__qt_method0);
    return (void *) __qt_this;

}

// QCryptographicHash::addData(const QByteArray & data)
QTD_EXTERN QTD_EXPORT void qtd_QCryptographicHash_addData_QByteArray
(void* __this_nativeId,
 void* data0)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    QCryptographicHash_QtDShell *__qt_this = (QCryptographicHash_QtDShell *) __this_nativeId;
    __qt_this->addData((const QByteArray& )__qt_data0);

}

// QCryptographicHash::addData(const char * data, int length)
QTD_EXTERN QTD_EXPORT void qtd_QCryptographicHash_addData_nativepointerchar_int
(void* __this_nativeId,
 char* data0,
 int length1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QCryptographicHash_QtDShell *__qt_this = (QCryptographicHash_QtDShell *) __this_nativeId;
    __qt_this->addData((const char* )__qt_data0, (int )length1);

}

// QCryptographicHash::reset()
QTD_EXTERN QTD_EXPORT void qtd_QCryptographicHash_reset
(void* __this_nativeId)
{
    QCryptographicHash_QtDShell *__qt_this = (QCryptographicHash_QtDShell *) __this_nativeId;
    __qt_this->reset();

}

// QCryptographicHash::result() const
QTD_EXTERN QTD_EXPORT void* qtd_QCryptographicHash_result_const
(void* __this_nativeId)
{
    QCryptographicHash_QtDShell *__qt_this = (QCryptographicHash_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->result();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QCryptographicHash::hash(const QByteArray & data, QCryptographicHash::Algorithm method)
QTD_EXTERN QTD_EXPORT void* qtd_QCryptographicHash_hash_QByteArray_Algorithm
(void* data0,
 int method1)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    QCryptographicHash::Algorithm __qt_method1 = (QCryptographicHash::Algorithm) method1;
    QByteArray  __qt_return_value = QCryptographicHash_QtDShell::hash((const QByteArray& )__qt_data0, (QCryptographicHash::Algorithm )__qt_method1);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


