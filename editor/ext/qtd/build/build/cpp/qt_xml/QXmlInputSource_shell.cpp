#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>

#include "QXmlInputSource_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlInputSource_delete(void* nativeId)
{
    delete (QXmlInputSource_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlInputSource_destroy(void* nativeId)
{
    call_destructor((QXmlInputSource_QtDShell*)nativeId);
}

QXmlInputSource_QtDShell::QXmlInputSource_QtDShell(void *d_ptr)
    : QXmlInputSource(),
      QtdObjectLink(d_ptr)
{
}

QXmlInputSource_QtDShell::QXmlInputSource_QtDShell(void *d_ptr, QIODevice*  dev0)
    : QXmlInputSource(dev0),
      QtdObjectLink(d_ptr)
{
}

QXmlInputSource_QtDShell::~QXmlInputSource_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlInputSource_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlInputSource*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(XML, void, QXmlInputSource_data_const_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(XML, QXmlInputSource_data_const_dispatch)
QString  QXmlInputSource_QtDShell::data() const
{
    DArray ret_str;
    qtd_QXmlInputSource_data_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(XML, void, QXmlInputSource_fetchData_dispatch, (void *dId))
QTD_FUNC(XML, QXmlInputSource_fetchData_dispatch)
void QXmlInputSource_QtDShell::fetchData()
{
    qtd_QXmlInputSource_fetchData_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, void, QXmlInputSource_fromRawData_QByteArray_bool_dispatch, (void *dId, DArray* ret_str, void* data0, bool beginning1))
QTD_FUNC(XML, QXmlInputSource_fromRawData_QByteArray_bool_dispatch)
QString  QXmlInputSource_QtDShell::fromRawData(const QByteArray&  data0, bool  beginning1)
{
    DArray ret_str;
    qtd_QXmlInputSource_fromRawData_QByteArray_bool_dispatch(this->dId, &ret_str, &(QByteArray& )data0, (bool )beginning1);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(XML, void, QXmlInputSource_reset_dispatch, (void *dId))
QTD_FUNC(XML, QXmlInputSource_reset_dispatch)
void QXmlInputSource_QtDShell::reset()
{
    qtd_QXmlInputSource_reset_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, void, QXmlInputSource_setData_QByteArray_dispatch, (void *dId, void* dat0))
QTD_FUNC(XML, QXmlInputSource_setData_QByteArray_dispatch)
void QXmlInputSource_QtDShell::setData(const QByteArray&  dat0)
{
    qtd_QXmlInputSource_setData_QByteArray_dispatch(this->dId, &(QByteArray& )dat0);
}

QTD_FUNC_DECL(XML, void, QXmlInputSource_setData_string_dispatch, (void *dId, const unsigned short* dat0, int dat0_size))
QTD_FUNC(XML, QXmlInputSource_setData_string_dispatch)
void QXmlInputSource_QtDShell::setData(const QString&  dat0)
{
    qtd_QXmlInputSource_setData_string_dispatch(this->dId, dat0.utf16(), dat0.size());
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlInputSource_initCallBacks(VoidFunc *virts) {
    qtd_QXmlInputSource_data_const_dispatch = (qtd_QXmlInputSource_data_const_dispatch_t) virts[0];
    qtd_QXmlInputSource_fetchData_dispatch = (qtd_QXmlInputSource_fetchData_dispatch_t) virts[1];
    qtd_QXmlInputSource_fromRawData_QByteArray_bool_dispatch = (qtd_QXmlInputSource_fromRawData_QByteArray_bool_dispatch_t) virts[2];
    qtd_QXmlInputSource_reset_dispatch = (qtd_QXmlInputSource_reset_dispatch_t) virts[3];
    qtd_QXmlInputSource_setData_QByteArray_dispatch = (qtd_QXmlInputSource_setData_QByteArray_dispatch_t) virts[4];
    qtd_QXmlInputSource_setData_string_dispatch = (qtd_QXmlInputSource_setData_string_dispatch_t) virts[5];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QString  QXmlInputSource_QtDShell::__override_data(bool static_call) const
{
    if (static_call) {
        return QXmlInputSource::data();
    } else {
        return data();
    }
}

void QXmlInputSource_QtDShell::__override_fetchData(bool static_call)
{
    if (static_call) {
        QXmlInputSource::fetchData();
    } else {
        fetchData();
    }
}

QString  QXmlInputSource_QtDShell::__override_fromRawData(const QByteArray&  data0, bool  beginning1, bool static_call)
{
    if (static_call) {
        return QXmlInputSource::fromRawData((const QByteArray& )data0, (bool )beginning1);
    } else {
        return fromRawData((const QByteArray& )data0, (bool )beginning1);
    }
}

void QXmlInputSource_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        QXmlInputSource::reset();
    } else {
        reset();
    }
}

void QXmlInputSource_QtDShell::__override_setData(const QByteArray&  dat0, bool static_call)
{
    if (static_call) {
        QXmlInputSource::setData((const QByteArray& )dat0);
    } else {
        setData((const QByteArray& )dat0);
    }
}

void QXmlInputSource_QtDShell::__override_setData(const QString&  dat0, bool static_call)
{
    if (static_call) {
        QXmlInputSource::setData((const QString& )dat0);
    } else {
        setData((const QString& )dat0);
    }
}

// ---externC---
// QXmlInputSource::QXmlInputSource()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlInputSource_QXmlInputSource
(void *d_ptr)
{
    QXmlInputSource_QtDShell *__qt_this = new QXmlInputSource_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlInputSource::QXmlInputSource(QIODevice * dev)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlInputSource_QXmlInputSource_QIODevice
(void *d_ptr,
 void* dev0)
{
    QIODevice*  __qt_dev0 = (QIODevice* ) dev0;
    QXmlInputSource_QtDShell *__qt_this = new QXmlInputSource_QtDShell(d_ptr, (QIODevice* )__qt_dev0);
    return (void *) __qt_this;

}

// QXmlInputSource::data() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlInputSource_data_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlInputSource_QtDShell *__qt_this = (QXmlInputSource_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlInputSource*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_data(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlInputSource::fetchData()
QTD_EXTERN QTD_EXPORT void qtd_QXmlInputSource_fetchData
(void* __this_nativeId)
{
    QXmlInputSource_QtDShell *__qt_this = (QXmlInputSource_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlInputSource*)__this_nativeId) != NULL;
    __qt_this->__override_fetchData(__do_static_call);

}

// QXmlInputSource::fromRawData(const QByteArray & data, bool beginning)
QTD_EXTERN QTD_EXPORT void qtd_QXmlInputSource_fromRawData_QByteArray_bool
(void* __this_nativeId,
 void* __d_return_value,
 void* data0,
 bool beginning1)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    QXmlInputSource_QtDShell *__qt_this = (QXmlInputSource_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlInputSource*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_fromRawData((const QByteArray& )__qt_data0, (bool )beginning1, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlInputSource::next()
// QXmlInputSource::reset()
QTD_EXTERN QTD_EXPORT void qtd_QXmlInputSource_reset
(void* __this_nativeId)
{
    QXmlInputSource_QtDShell *__qt_this = (QXmlInputSource_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlInputSource*)__this_nativeId) != NULL;
    __qt_this->__override_reset(__do_static_call);

}

// QXmlInputSource::setData(const QByteArray & dat)
QTD_EXTERN QTD_EXPORT void qtd_QXmlInputSource_setData_QByteArray
(void* __this_nativeId,
 void* dat0)
{
    const QByteArray&  __qt_dat0 = (const QByteArray& ) *(QByteArray *)dat0;
    QXmlInputSource_QtDShell *__qt_this = (QXmlInputSource_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlInputSource*)__this_nativeId) != NULL;
    __qt_this->__override_setData((const QByteArray& )__qt_dat0, __do_static_call);

}

// QXmlInputSource::setData(const QString & dat)
QTD_EXTERN QTD_EXPORT void qtd_QXmlInputSource_setData_string
(void* __this_nativeId,
 DArray dat0)
{
    QString __qt_dat0 = QString::fromUtf8((const char *)dat0.ptr, dat0.length);
    QXmlInputSource_QtDShell *__qt_this = (QXmlInputSource_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlInputSource*)__this_nativeId) != NULL;
    __qt_this->__override_setData((const QString& )__qt_dat0, __do_static_call);

}

// ---externC---end
// Field accessors


