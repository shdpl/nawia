#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

#include "QHttpResponseHeader_shell.h"
#include <iostream>
#include <qhttp.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QHttpResponseHeader_QtDShell::QHttpResponseHeader_QtDShell(void *d_ptr)
    : QHttpResponseHeader(),
      QtdObjectLink(d_ptr)
{
}

QHttpResponseHeader_QtDShell::QHttpResponseHeader_QtDShell(void *d_ptr, const QHttpResponseHeader&  header0)
    : QHttpResponseHeader(header0),
      QtdObjectLink(d_ptr)
{
}

QHttpResponseHeader_QtDShell::QHttpResponseHeader_QtDShell(void *d_ptr, const QString&  str0)
    : QHttpResponseHeader(str0),
      QtdObjectLink(d_ptr)
{
}

QHttpResponseHeader_QtDShell::QHttpResponseHeader_QtDShell(void *d_ptr, int  code0, const QString&  text1, int  majorVer2, int  minorVer3)
    : QHttpResponseHeader(code0, text1, majorVer2, minorVer3),
      QtdObjectLink(d_ptr)
{
}

QHttpResponseHeader_QtDShell::~QHttpResponseHeader_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QHttpResponseHeader_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QHttpResponseHeader*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, int, QHttpHeader_majorVersion_const_dispatch, (void *dId))
int  QHttpResponseHeader_QtDShell::majorVersion() const
{
    return qtd_QHttpHeader_majorVersion_const_dispatch(this->dId);
}

QTD_FUNC_DECL(NETWORK, int, QHttpHeader_minorVersion_const_dispatch, (void *dId))
int  QHttpResponseHeader_QtDShell::minorVersion() const
{
    return qtd_QHttpHeader_minorVersion_const_dispatch(this->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QHttpHeader_parseLine_string_int_dispatch, (void *dId, const unsigned short* line0, int line0_size, int number1))
bool  QHttpResponseHeader_QtDShell::parseLine(const QString&  line0, int  number1)
{
    return qtd_QHttpHeader_parseLine_string_int_dispatch(this->dId, line0.utf16(), line0.size(), (int )number1);
}

QTD_FUNC_DECL(NETWORK, void, QHttpHeader_toString_const_dispatch, (void *dId, DArray* ret_str))
QString  QHttpResponseHeader_QtDShell::toString() const
{
    DArray ret_str;
    qtd_QHttpHeader_toString_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_EXTERN QTD_EXPORT void qtd_QHttpResponseHeader_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
bool  QHttpResponseHeader_QtDShell::__public_parse(const QString&  str0)
{
    return QHttpHeader::parse((const QString& )str0);
}

void QHttpResponseHeader_QtDShell::__public_setValid(bool  arg__1)
{
    QHttpHeader::setValid((bool )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
int  QHttpResponseHeader_QtDShell::__override_majorVersion(bool static_call) const
{
    if (static_call) {
        return QHttpResponseHeader::majorVersion();
    } else {
        return majorVersion();
    }
}

int  QHttpResponseHeader_QtDShell::__override_minorVersion(bool static_call) const
{
    if (static_call) {
        return QHttpResponseHeader::minorVersion();
    } else {
        return minorVersion();
    }
}

bool  QHttpResponseHeader_QtDShell::__override_parseLine(const QString&  line0, int  number1, bool static_call)
{
    if (static_call) {
        return QHttpResponseHeader::parseLine((const QString& )line0, (int )number1);
    } else {
        return parseLine((const QString& )line0, (int )number1);
    }
}

QString  QHttpResponseHeader_QtDShell::__override_toString(bool static_call) const
{
    if (static_call) {
        return QHttpResponseHeader::toString();
    } else {
        return toString();
    }
}

// ---externC---
// QHttpResponseHeader::QHttpResponseHeader()
QTD_EXTERN QTD_EXPORT void* qtd_QHttpResponseHeader_QHttpResponseHeader
(void *d_ptr)
{
    QHttpResponseHeader_QtDShell *__qt_this = new QHttpResponseHeader_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QHttpResponseHeader::QHttpResponseHeader(const QHttpResponseHeader & header)
QTD_EXTERN QTD_EXPORT void* qtd_QHttpResponseHeader_QHttpResponseHeader_QHttpResponseHeader
(void *d_ptr,
 void* header0)
{
    const QHttpResponseHeader&  __qt_header0 = (const QHttpResponseHeader& ) *(QHttpResponseHeader *)header0;
    QHttpResponseHeader_QtDShell *__qt_this = new QHttpResponseHeader_QtDShell(d_ptr, (const QHttpResponseHeader& )__qt_header0);
    return (void *) __qt_this;

}

// QHttpResponseHeader::QHttpResponseHeader(const QString & str)
QTD_EXTERN QTD_EXPORT void* qtd_QHttpResponseHeader_QHttpResponseHeader_string
(void *d_ptr,
 DArray str0)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QHttpResponseHeader_QtDShell *__qt_this = new QHttpResponseHeader_QtDShell(d_ptr, (const QString& )__qt_str0);
    return (void *) __qt_this;

}

// QHttpResponseHeader::QHttpResponseHeader(int code, const QString & text, int majorVer, int minorVer)
QTD_EXTERN QTD_EXPORT void* qtd_QHttpResponseHeader_QHttpResponseHeader_int_string_int_int
(void *d_ptr,
 int code0,
 DArray text1,
 int majorVer2,
 int minorVer3)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QHttpResponseHeader_QtDShell *__qt_this = new QHttpResponseHeader_QtDShell(d_ptr, (int )code0, (const QString& )__qt_text1, (int )majorVer2, (int )minorVer3);
    return (void *) __qt_this;

}

// QHttpResponseHeader::reasonPhrase() const
QTD_EXTERN QTD_EXPORT void qtd_QHttpResponseHeader_reasonPhrase_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHttpResponseHeader_QtDShell *__qt_this = (QHttpResponseHeader_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->reasonPhrase();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHttpResponseHeader::setStatusLine(int code, const QString & text, int majorVer, int minorVer)
QTD_EXTERN QTD_EXPORT void qtd_QHttpResponseHeader_setStatusLine_int_string_int_int
(void* __this_nativeId,
 int code0,
 DArray text1,
 int majorVer2,
 int minorVer3)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QHttpResponseHeader_QtDShell *__qt_this = (QHttpResponseHeader_QtDShell *) __this_nativeId;
    __qt_this->setStatusLine((int )code0, (const QString& )__qt_text1, (int )majorVer2, (int )minorVer3);

}

// QHttpResponseHeader::statusCode() const
QTD_EXTERN QTD_EXPORT int qtd_QHttpResponseHeader_statusCode_const
(void* __this_nativeId)
{
    QHttpResponseHeader_QtDShell *__qt_this = (QHttpResponseHeader_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->statusCode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpResponseHeader::majorVersion() const
QTD_EXTERN QTD_EXPORT int qtd_QHttpResponseHeader_majorVersion_const
(void* __this_nativeId)
{
    QHttpResponseHeader_QtDShell *__qt_this = (QHttpResponseHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_majorVersion(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpResponseHeader::minorVersion() const
QTD_EXTERN QTD_EXPORT int qtd_QHttpResponseHeader_minorVersion_const
(void* __this_nativeId)
{
    QHttpResponseHeader_QtDShell *__qt_this = (QHttpResponseHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_minorVersion(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpResponseHeader::parseLine(const QString & line, int number)
QTD_EXTERN QTD_EXPORT bool qtd_QHttpResponseHeader_parseLine_string_int
(void* __this_nativeId,
 DArray line0,
 int number1)
{
    QString __qt_line0 = QString::fromUtf8((const char *)line0.ptr, line0.length);
    QHttpResponseHeader_QtDShell *__qt_this = (QHttpResponseHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_parseLine((const QString& )__qt_line0, (int )number1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpResponseHeader::toString() const
QTD_EXTERN QTD_EXPORT void qtd_QHttpResponseHeader_toString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHttpResponseHeader_QtDShell *__qt_this = (QHttpResponseHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_toString(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QHttpResponseHeader_QTypeInfo_isComplex() { return (bool) QTypeInfo<QHttpResponseHeader>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QHttpResponseHeader_QTypeInfo_isStatic() { return (bool) QTypeInfo<QHttpResponseHeader>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QHttpResponseHeader_QTypeInfo_isLarge() { return (bool) QTypeInfo<QHttpResponseHeader>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QHttpResponseHeader_QTypeInfo_isPointer() { return (bool) QTypeInfo<QHttpResponseHeader>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QHttpResponseHeader_QTypeInfo_isDummy() { return (bool) QTypeInfo<QHttpResponseHeader>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QHttpResponseHeader_placed_copy(void* orig, void* place) {
    const QHttpResponseHeader_QtDShell&  __qt_orig = (const QHttpResponseHeader_QtDShell& ) *(QHttpResponseHeader_QtDShell *)orig;
    QHttpResponseHeader *result = new (place) QHttpResponseHeader (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QHttpResponseHeader_native_copy(void* orig) {
    const QHttpResponseHeader_QtDShell&  __qt_orig = (const QHttpResponseHeader_QtDShell& ) *(QHttpResponseHeader_QtDShell *)orig;
    QHttpResponseHeader *result = new QHttpResponseHeader (__qt_orig);
    return result;
}

