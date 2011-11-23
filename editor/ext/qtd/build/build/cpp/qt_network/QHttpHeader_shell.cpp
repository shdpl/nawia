#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

#include "QHttpHeader_shell.h"
#include <iostream>
#include <qhttp.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_delete(void* nativeId)
{
    delete (QHttpHeader_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_destroy(void* nativeId)
{
    call_destructor((QHttpHeader_QtDShell*)nativeId);
}

QHttpHeader_QtDShell::QHttpHeader_QtDShell(void *d_ptr)
    : QHttpHeader(),
      QtdObjectLink(d_ptr)
{
}

QHttpHeader_QtDShell::QHttpHeader_QtDShell(void *d_ptr, const QHttpHeader&  header0)
    : QHttpHeader(header0),
      QtdObjectLink(d_ptr)
{
}

QHttpHeader_QtDShell::QHttpHeader_QtDShell(void *d_ptr, const QString&  str0)
    : QHttpHeader(str0),
      QtdObjectLink(d_ptr)
{
}

QHttpHeader_QtDShell::~QHttpHeader_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QHttpHeader_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QHttpHeader*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, int, QHttpHeader_majorVersion_const_dispatch, (void *dId))
QTD_FUNC(NETWORK, QHttpHeader_majorVersion_const_dispatch)
int  QHttpHeader_QtDShell::majorVersion() const
{
    return qtd_QHttpHeader_majorVersion_const_dispatch(this->dId);
}

QTD_FUNC_DECL(NETWORK, int, QHttpHeader_minorVersion_const_dispatch, (void *dId))
QTD_FUNC(NETWORK, QHttpHeader_minorVersion_const_dispatch)
int  QHttpHeader_QtDShell::minorVersion() const
{
    return qtd_QHttpHeader_minorVersion_const_dispatch(this->dId);
}

QTD_FUNC_DECL(NETWORK, bool, QHttpHeader_parseLine_string_int_dispatch, (void *dId, const unsigned short* line0, int line0_size, int number1))
QTD_FUNC(NETWORK, QHttpHeader_parseLine_string_int_dispatch)
bool  QHttpHeader_QtDShell::parseLine(const QString&  line0, int  number1)
{
    return qtd_QHttpHeader_parseLine_string_int_dispatch(this->dId, line0.utf16(), line0.size(), (int )number1);
}

QTD_FUNC_DECL(NETWORK, void, QHttpHeader_toString_const_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(NETWORK, QHttpHeader_toString_const_dispatch)
QString  QHttpHeader_QtDShell::toString() const
{
    DArray ret_str;
    qtd_QHttpHeader_toString_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_initCallBacks(VoidFunc *virts) {
    qtd_QHttpHeader_majorVersion_const_dispatch = (qtd_QHttpHeader_majorVersion_const_dispatch_t) virts[0];
    qtd_QHttpHeader_minorVersion_const_dispatch = (qtd_QHttpHeader_minorVersion_const_dispatch_t) virts[1];
    qtd_QHttpHeader_parseLine_string_int_dispatch = (qtd_QHttpHeader_parseLine_string_int_dispatch_t) virts[2];
    qtd_QHttpHeader_toString_const_dispatch = (qtd_QHttpHeader_toString_const_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
bool  QHttpHeader_QtDShell::__public_parse(const QString&  str0)
{
    return QHttpHeader::parse((const QString& )str0);
}

void QHttpHeader_QtDShell::__public_setValid(bool  arg__1)
{
    QHttpHeader::setValid((bool )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
int  QHttpHeader_QtDShell::__override_majorVersion(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return majorVersion();
    }
}

int  QHttpHeader_QtDShell::__override_minorVersion(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return minorVersion();
    }
}

bool  QHttpHeader_QtDShell::__override_parseLine(const QString&  line0, int  number1, bool static_call)
{
    if (static_call) {
        return QHttpHeader::parseLine((const QString& )line0, (int )number1);
    } else {
        return parseLine((const QString& )line0, (int )number1);
    }
}

QString  QHttpHeader_QtDShell::__override_toString(bool static_call) const
{
    if (static_call) {
        return QHttpHeader::toString();
    } else {
        return toString();
    }
}

// ---externC---
// QHttpHeader::QHttpHeader()
QTD_EXTERN QTD_EXPORT void* qtd_QHttpHeader_QHttpHeader
(void *d_ptr)
{
    QHttpHeader_QtDShell *__qt_this = new QHttpHeader_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QHttpHeader::QHttpHeader(const QHttpHeader & header)
QTD_EXTERN QTD_EXPORT void* qtd_QHttpHeader_QHttpHeader_QHttpHeader
(void *d_ptr,
 void* header0)
{
    const QHttpHeader&  __qt_header0 = (const QHttpHeader& ) * (QHttpHeader *) header0;
    QHttpHeader_QtDShell *__qt_this = new QHttpHeader_QtDShell(d_ptr, (const QHttpHeader& )__qt_header0);
    return (void *) __qt_this;

}

// QHttpHeader::QHttpHeader(const QString & str)
QTD_EXTERN QTD_EXPORT void* qtd_QHttpHeader_QHttpHeader_string
(void *d_ptr,
 DArray str0)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QHttpHeader_QtDShell *__qt_this = new QHttpHeader_QtDShell(d_ptr, (const QString& )__qt_str0);
    return (void *) __qt_this;

}

// QHttpHeader::addValue(const QString & key, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_addValue_string_string
(void* __this_nativeId,
 DArray key0,
 DArray value1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QString __qt_value1 = QString::fromUtf8((const char *)value1.ptr, value1.length);
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    __qt_this->addValue((const QString& )__qt_key0, (const QString& )__qt_value1);

}

// QHttpHeader::allValues(const QString & key) const
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_allValues_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->allValues((const QString& )__qt_key0);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QHttpHeader::contentLength() const
QTD_EXTERN QTD_EXPORT uint qtd_QHttpHeader_contentLength_const
(void* __this_nativeId)
{
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    uint  __qt_return_value = __qt_this->contentLength();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpHeader::contentType() const
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_contentType_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->contentType();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHttpHeader::hasContentLength() const
QTD_EXTERN QTD_EXPORT bool qtd_QHttpHeader_hasContentLength_const
(void* __this_nativeId)
{
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasContentLength();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpHeader::hasContentType() const
QTD_EXTERN QTD_EXPORT bool qtd_QHttpHeader_hasContentType_const
(void* __this_nativeId)
{
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasContentType();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpHeader::hasKey(const QString & key) const
QTD_EXTERN QTD_EXPORT bool qtd_QHttpHeader_hasKey_string_const
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasKey((const QString& )__qt_key0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpHeader::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QHttpHeader_isValid_const
(void* __this_nativeId)
{
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpHeader::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->keys();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QHttpHeader::parse(const QString & str)
QTD_EXTERN QTD_EXPORT bool qtd_QHttpHeader_parse_string
(void* __this_nativeId,
 DArray str0)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->__public_parse((const QString& )__qt_str0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpHeader::removeAllValues(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_removeAllValues_string
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    __qt_this->removeAllValues((const QString& )__qt_key0);

}

// QHttpHeader::removeValue(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_removeValue_string
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    __qt_this->removeValue((const QString& )__qt_key0);

}

// QHttpHeader::setContentLength(int len)
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_setContentLength_int
(void* __this_nativeId,
 int len0)
{
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    __qt_this->setContentLength((int )len0);

}

// QHttpHeader::setContentType(const QString & type)
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_setContentType_string
(void* __this_nativeId,
 DArray type0)
{
    QString __qt_type0 = QString::fromUtf8((const char *)type0.ptr, type0.length);
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    __qt_this->setContentType((const QString& )__qt_type0);

}

// QHttpHeader::setValid(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_setValid_bool
(void* __this_nativeId,
 bool arg__1)
{
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    __qt_this->__public_setValid((bool )arg__1);

}

// QHttpHeader::setValue(const QString & key, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_setValue_string_string
(void* __this_nativeId,
 DArray key0,
 DArray value1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QString __qt_value1 = QString::fromUtf8((const char *)value1.ptr, value1.length);
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    __qt_this->setValue((const QString& )__qt_key0, (const QString& )__qt_value1);

}

// QHttpHeader::setValues(const QList<QPair<QString, QString > > & values)
// QHttpHeader::value(const QString & key) const
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_value_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->value((const QString& )__qt_key0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QHttpHeader::values() const
// QHttpHeader::majorVersion() const
QTD_EXTERN QTD_EXPORT int qtd_QHttpHeader_majorVersion_const
(void* __this_nativeId)
{
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_majorVersion(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpHeader::minorVersion() const
QTD_EXTERN QTD_EXPORT int qtd_QHttpHeader_minorVersion_const
(void* __this_nativeId)
{
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_minorVersion(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpHeader::parseLine(const QString & line, int number)
QTD_EXTERN QTD_EXPORT bool qtd_QHttpHeader_parseLine_string_int
(void* __this_nativeId,
 DArray line0,
 int number1)
{
    QString __qt_line0 = QString::fromUtf8((const char *)line0.ptr, line0.length);
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_parseLine((const QString& )__qt_line0, (int )number1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHttpHeader::toString() const
QTD_EXTERN QTD_EXPORT void qtd_QHttpHeader_toString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QHttpHeader_QtDShell *__qt_this = (QHttpHeader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QHttpHeader*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_toString(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


