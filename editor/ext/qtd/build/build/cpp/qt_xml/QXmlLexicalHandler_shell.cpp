#include <QVariant>

#include "QXmlLexicalHandler_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT QXmlLexicalHandler* qtd_QXmlLexicalHandler_cast_to_QXmlLexicalHandler(QXmlLexicalHandler *ptr)
{
    return dynamic_cast<QXmlLexicalHandler*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlLexicalHandler_delete(void* nativeId)
{
    delete (QXmlLexicalHandler_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlLexicalHandler_destroy(void* nativeId)
{
    call_destructor((QXmlLexicalHandler_QtDShell*)nativeId);
}

QXmlLexicalHandler_QtDShell::QXmlLexicalHandler_QtDShell(void *d_ptr)
    : QXmlLexicalHandler(),
      QtdObjectLink(d_ptr)
{
}

QXmlLexicalHandler_QtDShell::~QXmlLexicalHandler_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlLexicalHandler_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlLexicalHandler*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_comment_string_dispatch, (void *dId, const unsigned short* ch0, int ch0_size))
QTD_FUNC(XML, QXmlLexicalHandler_comment_string_dispatch)
bool  QXmlLexicalHandler_QtDShell::comment(const QString&  ch0)
{
    return qtd_QXmlLexicalHandler_comment_string_dispatch(this->dId, ch0.utf16(), ch0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_endCDATA_dispatch, (void *dId))
QTD_FUNC(XML, QXmlLexicalHandler_endCDATA_dispatch)
bool  QXmlLexicalHandler_QtDShell::endCDATA()
{
    return qtd_QXmlLexicalHandler_endCDATA_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_endDTD_dispatch, (void *dId))
QTD_FUNC(XML, QXmlLexicalHandler_endDTD_dispatch)
bool  QXmlLexicalHandler_QtDShell::endDTD()
{
    return qtd_QXmlLexicalHandler_endDTD_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_endEntity_string_dispatch, (void *dId, const unsigned short* name0, int name0_size))
QTD_FUNC(XML, QXmlLexicalHandler_endEntity_string_dispatch)
bool  QXmlLexicalHandler_QtDShell::endEntity(const QString&  name0)
{
    return qtd_QXmlLexicalHandler_endEntity_string_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(XML, void, QXmlLexicalHandler_errorString_const_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(XML, QXmlLexicalHandler_errorString_const_dispatch)
QString  QXmlLexicalHandler_QtDShell::errorString() const
{
    DArray ret_str;
    qtd_QXmlLexicalHandler_errorString_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_startCDATA_dispatch, (void *dId))
QTD_FUNC(XML, QXmlLexicalHandler_startCDATA_dispatch)
bool  QXmlLexicalHandler_QtDShell::startCDATA()
{
    return qtd_QXmlLexicalHandler_startCDATA_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_startDTD_string_string_string_dispatch, (void *dId, const unsigned short* name0, int name0_size, const unsigned short* publicId1, int publicId1_size, const unsigned short* systemId2, int systemId2_size))
QTD_FUNC(XML, QXmlLexicalHandler_startDTD_string_string_string_dispatch)
bool  QXmlLexicalHandler_QtDShell::startDTD(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
    return qtd_QXmlLexicalHandler_startDTD_string_string_string_dispatch(this->dId, name0.utf16(), name0.size(), publicId1.utf16(), publicId1.size(), systemId2.utf16(), systemId2.size());
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_startEntity_string_dispatch, (void *dId, const unsigned short* name0, int name0_size))
QTD_FUNC(XML, QXmlLexicalHandler_startEntity_string_dispatch)
bool  QXmlLexicalHandler_QtDShell::startEntity(const QString&  name0)
{
    return qtd_QXmlLexicalHandler_startEntity_string_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlLexicalHandler_initCallBacks(VoidFunc *virts) {
    qtd_QXmlLexicalHandler_comment_string_dispatch = (qtd_QXmlLexicalHandler_comment_string_dispatch_t) virts[0];
    qtd_QXmlLexicalHandler_endCDATA_dispatch = (qtd_QXmlLexicalHandler_endCDATA_dispatch_t) virts[1];
    qtd_QXmlLexicalHandler_endDTD_dispatch = (qtd_QXmlLexicalHandler_endDTD_dispatch_t) virts[2];
    qtd_QXmlLexicalHandler_endEntity_string_dispatch = (qtd_QXmlLexicalHandler_endEntity_string_dispatch_t) virts[3];
    qtd_QXmlLexicalHandler_errorString_const_dispatch = (qtd_QXmlLexicalHandler_errorString_const_dispatch_t) virts[4];
    qtd_QXmlLexicalHandler_startCDATA_dispatch = (qtd_QXmlLexicalHandler_startCDATA_dispatch_t) virts[5];
    qtd_QXmlLexicalHandler_startDTD_string_string_string_dispatch = (qtd_QXmlLexicalHandler_startDTD_string_string_string_dispatch_t) virts[6];
    qtd_QXmlLexicalHandler_startEntity_string_dispatch = (qtd_QXmlLexicalHandler_startEntity_string_dispatch_t) virts[7];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
bool  QXmlLexicalHandler_QtDShell::__override_comment(const QString&  ch0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return comment((const QString& )ch0);
    }
}

bool  QXmlLexicalHandler_QtDShell::__override_endCDATA(bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return endCDATA();
    }
}

bool  QXmlLexicalHandler_QtDShell::__override_endDTD(bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return endDTD();
    }
}

bool  QXmlLexicalHandler_QtDShell::__override_endEntity(const QString&  name0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return endEntity((const QString& )name0);
    }
}

QString  QXmlLexicalHandler_QtDShell::__override_errorString(bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return errorString();
    }
}

bool  QXmlLexicalHandler_QtDShell::__override_startCDATA(bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return startCDATA();
    }
}

bool  QXmlLexicalHandler_QtDShell::__override_startDTD(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return startDTD((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2);
    }
}

bool  QXmlLexicalHandler_QtDShell::__override_startEntity(const QString&  name0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return startEntity((const QString& )name0);
    }
}

// ---externC---
// QXmlLexicalHandler::()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlLexicalHandler_QXmlLexicalHandler
(void *d_ptr)
{
    QXmlLexicalHandler_QtDShell *__qt_this = new QXmlLexicalHandler_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlLexicalHandler::comment(const QString & ch)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlLexicalHandler_comment_string
(void* __this_nativeId,
 DArray ch0)
{
    QString __qt_ch0 = QString::fromUtf8((const char *)ch0.ptr, ch0.length);
    QXmlLexicalHandler_QtDShell *__qt_this = (QXmlLexicalHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlLexicalHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_comment((const QString& )__qt_ch0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlLexicalHandler::endCDATA()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlLexicalHandler_endCDATA
(void* __this_nativeId)
{
    QXmlLexicalHandler_QtDShell *__qt_this = (QXmlLexicalHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlLexicalHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endCDATA(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlLexicalHandler::endDTD()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlLexicalHandler_endDTD
(void* __this_nativeId)
{
    QXmlLexicalHandler_QtDShell *__qt_this = (QXmlLexicalHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlLexicalHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endDTD(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlLexicalHandler::endEntity(const QString & name)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlLexicalHandler_endEntity_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlLexicalHandler_QtDShell *__qt_this = (QXmlLexicalHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlLexicalHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endEntity((const QString& )__qt_name0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlLexicalHandler::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlLexicalHandler_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlLexicalHandler_QtDShell *__qt_this = (QXmlLexicalHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlLexicalHandler*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_errorString(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlLexicalHandler::startCDATA()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlLexicalHandler_startCDATA
(void* __this_nativeId)
{
    QXmlLexicalHandler_QtDShell *__qt_this = (QXmlLexicalHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlLexicalHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startCDATA(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlLexicalHandler::startDTD(const QString & name, const QString & publicId, const QString & systemId)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlLexicalHandler_startDTD_string_string_string
(void* __this_nativeId,
 DArray name0,
 DArray publicId1,
 DArray systemId2)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_publicId1 = QString::fromUtf8((const char *)publicId1.ptr, publicId1.length);
    QString __qt_systemId2 = QString::fromUtf8((const char *)systemId2.ptr, systemId2.length);
    QXmlLexicalHandler_QtDShell *__qt_this = (QXmlLexicalHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlLexicalHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startDTD((const QString& )__qt_name0, (const QString& )__qt_publicId1, (const QString& )__qt_systemId2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlLexicalHandler::startEntity(const QString & name)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlLexicalHandler_startEntity_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlLexicalHandler_QtDShell *__qt_this = (QXmlLexicalHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlLexicalHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startEntity((const QString& )__qt_name0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


