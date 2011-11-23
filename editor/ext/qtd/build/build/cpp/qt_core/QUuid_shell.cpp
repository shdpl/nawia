#include <QVariant>
#include <qdatastream.h>
#include <quuid.h>

#include "QUuid_shell.h"
#include <iostream>
#include <quuid.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QUuid_delete(void* nativeId)
{
    delete (QUuid_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QUuid_destroy(void* nativeId)
{
    call_destructor((QUuid_QtDShell*)nativeId);
}

QUuid_QtDShell::QUuid_QtDShell()
    : QUuid()
{
}

QUuid_QtDShell::QUuid_QtDShell(const QString&  arg__1)
    : QUuid(arg__1)
{
}

QUuid_QtDShell::~QUuid_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QUuid_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QUuid::QUuid()
QTD_EXTERN QTD_EXPORT void* qtd_QUuid_QUuid
()
{
    QUuid_QtDShell *__qt_this = new QUuid_QtDShell();
    return (void *) __qt_this;

}

// QUuid::QUuid(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QUuid_QUuid_string
(DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QUuid_QtDShell *__qt_this = new QUuid_QtDShell((const QString& )__qt_arg__1);
    return (void *) __qt_this;

}

// QUuid::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QUuid_isNull_const
(void* __this_nativeId)
{
    QUuid_QtDShell *__qt_this = (QUuid_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUuid::operator<(const QUuid & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QUuid_operator_less_QUuid_const
(void* __this_nativeId,
 void* other0)
{
    const QUuid&  __qt_other0 = (const QUuid& ) *(QUuid *)other0;
    QUuid_QtDShell *__qt_this = (QUuid_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QUuid& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUuid::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QUuid_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QUuid_QtDShell *__qt_this = (QUuid_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QUuid::operator==(const QUuid & orig) const
QTD_EXTERN QTD_EXPORT bool qtd_QUuid_operator_equal_QUuid_const
(void* __this_nativeId,
 void* orig0)
{
    const QUuid&  __qt_orig0 = (const QUuid& ) *(QUuid *)orig0;
    QUuid_QtDShell *__qt_this = (QUuid_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QUuid& )__qt_orig0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUuid::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QUuid_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QUuid_QtDShell *__qt_this = (QUuid_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QUuid::toString() const
QTD_EXTERN QTD_EXPORT void qtd_QUuid_toString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUuid_QtDShell *__qt_this = (QUuid_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUuid::variant() const
QTD_EXTERN QTD_EXPORT int qtd_QUuid_variant_const
(void* __this_nativeId)
{
    QUuid_QtDShell *__qt_this = (QUuid_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->variant();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUuid::version() const
QTD_EXTERN QTD_EXPORT int qtd_QUuid_version_const
(void* __this_nativeId)
{
    QUuid_QtDShell *__qt_this = (QUuid_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->version();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUuid::createUuid()
QTD_EXTERN QTD_EXPORT void* qtd_QUuid_createUuid
()
{
    QUuid  __qt_return_value = QUuid_QtDShell::createUuid();

    void* __d_return_value = (void*) new QUuid(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT uint qtd_QUuid_data1
(void* __this_nativeId){
    QUuid_QtDShell *__qt_object = (QUuid_QtDShell *) __this_nativeId;
    uint __tmp_data1 = __qt_object->data1;
    uint __d_return_value = __tmp_data1;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QUuid_setData1_uint
(void* __this_nativeId,
 uint data10){
    QUuid_QtDShell *__qt_object = (QUuid_QtDShell *) __this_nativeId;
    __qt_object->data1 = data10;
}

QTD_EXTERN QTD_EXPORT unsigned char* qtd_QUuid_data4
(void* __this_nativeId){
    QUuid_QtDShell *__qt_object = (QUuid_QtDShell *) __this_nativeId;
    unsigned char *__tmp_data4 = __qt_object->data4;
    unsigned char* __d_return_value = __tmp_data4;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QUuid_setData4_ubyte_3
(void* __this_nativeId,
 unsigned char* data40){
    unsigned char  *__qt_data40 = (unsigned char *) data40;
    QUuid_QtDShell *__qt_object = (QUuid_QtDShell *) __this_nativeId;
    __qt_object->data4[0] = __qt_data40[0];
    __qt_object->data4[1] = __qt_data40[1];
    __qt_object->data4[2] = __qt_data40[2];
    __qt_object->data4[3] = __qt_data40[3];
    __qt_object->data4[4] = __qt_data40[4];
    __qt_object->data4[5] = __qt_data40[5];
    __qt_object->data4[6] = __qt_data40[6];
    __qt_object->data4[7] = __qt_data40[7];
}

QTD_EXTERN QTD_EXPORT bool qtd_QUuid_QTypeInfo_isComplex() { return (bool) QTypeInfo<QUuid>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QUuid_QTypeInfo_isStatic() { return (bool) QTypeInfo<QUuid>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QUuid_QTypeInfo_isLarge() { return (bool) QTypeInfo<QUuid>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QUuid_QTypeInfo_isPointer() { return (bool) QTypeInfo<QUuid>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QUuid_QTypeInfo_isDummy() { return (bool) QTypeInfo<QUuid>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QUuid_placed_copy(void* orig, void* place) {
    const QUuid_QtDShell&  __qt_orig = (const QUuid_QtDShell& ) *(QUuid_QtDShell *)orig;
    QUuid *result = new (place) QUuid (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QUuid_native_copy(void* orig) {
    const QUuid_QtDShell&  __qt_orig = (const QUuid_QtDShell& ) *(QUuid_QtDShell *)orig;
    QUuid *result = new QUuid (__qt_orig);
    return result;
}

