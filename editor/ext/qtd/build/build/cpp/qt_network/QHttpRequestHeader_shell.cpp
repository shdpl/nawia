#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

#include "QHttpRequestHeader_shell.h"
#include <iostream>
#include <qhttp.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QHttpRequestHeader_QtDShell::QHttpRequestHeader_QtDShell(void *d_ptr)
    : QHttpRequestHeader(),
      QtdObjectLink(d_ptr)
{
}

QHttpRequestHeader_QtDShell::QHttpRequestHeader_QtDShell(void *d_ptr, const QHttpRequestHeader&  header0)
    : QHttpRequestHeader(header0),
      QtdObjectLink(d_ptr)
{
}

QHttpRequestHeader_QtDShell::QHttpRequestHeader_QtDShell(void *d_ptr, const QString&  method0, const QString&  path1, int  majorVer2, int  minorVer3)
    : QHttpRequestHeader(method0, path1, majorVer2, minorVer3),
      QtdObjectLink(d_ptr)
{
}

QHttpRequestHeader_QtDShell::QHttpRequestHeader_QtDShell(void *d_ptr, const QString&  str0)
    : QHttpRequestHeader(str0),
      QtdObjectLink(d_ptr)
{
}

QHttpRequestHeader_QtDShell::~QHttpRequestHeader_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QHttpRequestHeader_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QHttpRequestHeader*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, int, QHttpHeader_majorVersion_const_dispatch, (void *dId))
int  QHttpRequestHeader_QtDShell::majorVersion() const
{
    return qtd_QHttpHeader_majorVersion_const_dispatch(this->dId);
}

QTD_FUNC_DECL(NETWORK, int, QHttpHeader_minorVersion_const_dispatch, (void *dId))
int  QHttpRequestHeader_QtDShell::minorVersion() const
{
    return qtd_QHttpHeader_minorVersion_const_dispatch(this->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QHttpHeader_parseLine_string_int_dispatch, (void *dId, const unsigned short* line0, int line0_size, int number1))
bool  QHttpRequestHeader_QtDShell::parseLine(const QString&  line0, int  number1)
{
    return qtd_QHttpHeader_parseLine_string_int_dispatch(this->dId, line0.utf16(), line0.size(), (int )number1);
}

QTD_FUNC_DECL(NETWORK, void, QHttpHeader_toString_const_dispatch, (void *dId, DArray* ret_str))
QString  QHttpRequestHeader_QtDShell::toString() const
{
    DArray ret_str;
    qtd_QHttpHeader_toString_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_EXTERN QTD_EXPORT void qtd_QHttpRequestHeader_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
bool  QHttpRequestHeader_QtDShell::__public_parse(const QString&  str0)
{
    return QHttpHeader::parse((const QString& )str0);
}

void QHttpRequestHeader_QtDShell::__public_setValid(bool  arg__1)
{
    QHttpHeader::setValid((bool )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
int  QHttpRequestHeader_QtDShell::__override_majorVersion(bool static_call) const
{
    if (static_call) {
        return QHttpRequestHeader::majorVersion();
    } else {
        return majorVersion();
    }
}

int  QHttpRequestHeader_QtDShell::__override_minorVersion(bool static_call) const
{
    if (static_call) {
        return QHttpRequestHeader::minorVersion();
    } else {
        return minorVersion();
    }
}

bool  QHttpRequestHeader_QtDShell::__override_parseLine(const QString&  line0, int  number1, bool static_call)
{
    if (static_call) {
        return QHttpRequestHeader::parseLine((const QString& )line0, (int )number1);
    } else {
        return parseLine((const QString& )line0, (int )number1);
    }
}

QString  QHttpRequestHeader_QtDShell::__override_toString(bool static_call) const
{
    if (static_call) {
        return QHttpRequestHeader::toString();
    } else {
        return toString();
    }
}

// ---externC---
// QHttpRequestHeader::QHttpRequestHeader()
QTD_EXTERN QTD_EXPORT void* qtd_QHttpRequestHeader_QHttpRequestHeader
(void *d_ptr)
{
    QHttpRequestHeader_QtDShell *__qt_this = new QHttpRequestHeader_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QHttpRequestHeader::QHttpRequestHeader(const QHttpRequestHeader & header)
QTD_EXTERN QTD_EXPORT void* qtd_QHttpRequestHeader_QHttpRequestHeader_QHttpRequestHeader
(void *d_ptr,
 void* header0)
{
    const QHttpRequestHeader&  __qt_header0 = (const QHttpRequestHeader& ) *(QHttpRequestHeader *)header0;
    QHttpRequestHeader_QtDShell *__qt_this = new QHttpRequestHeader_QtDShell(d_ptr, (const QHttpRequestHeader& )__qt_header0);
    return (void *) __qt_this;

}

// QHttpRequestHeader::QHttpRequestHeader(const QString & method, const QString & path, int majorVer, int minorVer)
QTD_EXTERN QTD_EXPORT void* qtd_QHttpRequestHeader_QHttpRequestHeader_string_string_int_int
(void *d_ptr,
 DArray method0,
 DArray path1,
 int majorVer2,
 int minorVer3)
{
    QString __qt_method0 = QString::fromUtf8((const char *)method0.ptr, method0.length);
    QString __qt_path1 = QString::fromUtf8((const char *)path1.ptr, path1.length);
    QHttpRequestHeader_QtDShell *__qt_this = new QHttpRequestHeader_QtDShell(d_ptr, (const QString& )__qt_method0, (const QString& )__qt_path1, (int )majorVer2, (int )minorVer3);
    return (void *) __qt_this;

}

// QHttpRequestHeader::QHttpRequestHeader(const QString & str)
QTD_EXTERN QTD_EXPORT void* qtd_QHttpRequestHeader_QHttpRequestHeader_string
(void *d_ptr,
 DArray str0)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QHttpRequestHeader_QtDShell *__qt_this = new QHttpRequestHeader_QtDShell(d_ptr, (const QString& )__qt_str0);
    return (void *) __qt_this;

}

// QHttpRequestHeader::method() const
QTD_EXTERN QTD_EXPORT void qtd_QHttpRequestHeader_method_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHttpRequestHeader_QtDShell *__qt_this = (QHttpRequestHeader_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->method();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHttpRequestHeader::path() const
QTD_EXTERN QTD_EXPORT void qtd_QHttpRequestHeader_path_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHttpRequestHeader_QtDShell *__qt_this = (QHttpRequestHeader_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->path();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHttpRequestHeader::setRequest(const QString & method, const QString & path, int majorVer, int minorVer)
QTD_EXTERN QTD_EXPORT void qtd_QHttpRequestHeader_setRequest_string_string_int_int
(void* __this_nativeId,
 DArray method0,
 DArray path1,
 int majorVer2,
 int minorVer3)
{
    QString __qt_method0 = QString::fromUtf8((const char *)method0.ptr, method0.length);
    QString __qt_path1 = QString::fromUtf8((const char *)path1.ptr, path1.length);
    QHttpRequestHeader_QtDShell *__qt_this = (QHttpRequestHeader_QtDShell *) __this_nativeId;
    __qt_this->setRequest((const QString& )__qt_method0, (const QString& )__qt_path1, (int )majorVer2, (int )minorVer3);

}

// QHttpRequestHeader::majorVersion() const
QTD_EXTERN QTD_EXPORT int qtd_QHttpRequestHeader_majorVersion_const
(void* __this_nativeId)
{
    QHttpRequestHeader_QtDShell *__qt_this = (QHttpRequestHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_majorVersion(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpRequestHeader::minorVersion() const
QTD_EXTERN QTD_EXPORT int qtd_QHttpRequestHeader_minorVersion_const
(void* __this_nativeId)
{
    QHttpRequestHeader_QtDShell *__qt_this = (QHttpRequestHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_minorVersion(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpRequestHeader::parseLine(const QString & line, int number)
QTD_EXTERN QTD_EXPORT bool qtd_QHttpRequestHeader_parseLine_string_int
(void* __this_nativeId,
 DArray line0,
 int number1)
{
    QString __qt_line0 = QString::fromUtf8((const char *)line0.ptr, line0.length);
    QHttpRequestHeader_QtDShell *__qt_this = (QHttpRequestHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_parseLine((const QString& )__qt_line0, (int )number1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpRequestHeader::toString() const
QTD_EXTERN QTD_EXPORT void qtd_QHttpRequestHeader_toString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHttpRequestHeader_QtDShell *__qt_this = (QHttpRequestHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_toString(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QHttpRequestHeader_QTypeInfo_isComplex() { return (bool) QTypeInfo<QHttpRequestHeader>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QHttpRequestHeader_QTypeInfo_isStatic() { return (bool) QTypeInfo<QHttpRequestHeader>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QHttpRequestHeader_QTypeInfo_isLarge() { return (bool) QTypeInfo<QHttpRequestHeader>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QHttpRequestHeader_QTypeInfo_isPointer() { return (bool) QTypeInfo<QHttpRequestHeader>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QHttpRequestHeader_QTypeInfo_isDummy() { return (bool) QTypeInfo<QHttpRequestHeader>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QHttpRequestHeader_placed_copy(void* orig, void* place) {
    const QHttpRequestHeader_QtDShell&  __qt_orig = (const QHttpRequestHeader_QtDShell& ) *(QHttpRequestHeader_QtDShell *)orig;
    QHttpRequestHeader *result = new (place) QHttpRequestHeader (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QHttpRequestHeader_native_copy(void* orig) {
    const QHttpRequestHeader_QtDShell&  __qt_orig = (const QHttpRequestHeader_QtDShell& ) *(QHttpRequestHeader_QtDShell *)orig;
    QHttpRequestHeader *result = new QHttpRequestHeader (__qt_orig);
    return result;
}

