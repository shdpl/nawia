#include <QVariant>

#include "QXmlDTDHandler_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT QXmlDTDHandler* qtd_QXmlDTDHandler_cast_to_QXmlDTDHandler(QXmlDTDHandler *ptr)
{
    return dynamic_cast<QXmlDTDHandler*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlDTDHandler_delete(void* nativeId)
{
    delete (QXmlDTDHandler_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlDTDHandler_destroy(void* nativeId)
{
    call_destructor((QXmlDTDHandler_QtDShell*)nativeId);
}

QXmlDTDHandler_QtDShell::QXmlDTDHandler_QtDShell(void *d_ptr)
    : QXmlDTDHandler(),
      QtdObjectLink(d_ptr)
{
}

QXmlDTDHandler_QtDShell::~QXmlDTDHandler_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlDTDHandler_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlDTDHandler*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(XML, void, QXmlDTDHandler_errorString_const_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(XML, QXmlDTDHandler_errorString_const_dispatch)
QString  QXmlDTDHandler_QtDShell::errorString() const
{
    DArray ret_str;
    qtd_QXmlDTDHandler_errorString_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(XML, bool, QXmlDTDHandler_notationDecl_string_string_string_dispatch, (void *dId, const unsigned short* name0, int name0_size, const unsigned short* publicId1, int publicId1_size, const unsigned short* systemId2, int systemId2_size))
QTD_FUNC(XML, QXmlDTDHandler_notationDecl_string_string_string_dispatch)
bool  QXmlDTDHandler_QtDShell::notationDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
    return qtd_QXmlDTDHandler_notationDecl_string_string_string_dispatch(this->dId, name0.utf16(), name0.size(), publicId1.utf16(), publicId1.size(), systemId2.utf16(), systemId2.size());
}

QTD_FUNC_DECL(XML, bool, QXmlDTDHandler_unparsedEntityDecl_string_string_string_string_dispatch, (void *dId, const unsigned short* name0, int name0_size, const unsigned short* publicId1, int publicId1_size, const unsigned short* systemId2, int systemId2_size, const unsigned short* notationName3, int notationName3_size))
QTD_FUNC(XML, QXmlDTDHandler_unparsedEntityDecl_string_string_string_string_dispatch)
bool  QXmlDTDHandler_QtDShell::unparsedEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, const QString&  notationName3)
{
    return qtd_QXmlDTDHandler_unparsedEntityDecl_string_string_string_string_dispatch(this->dId, name0.utf16(), name0.size(), publicId1.utf16(), publicId1.size(), systemId2.utf16(), systemId2.size(), notationName3.utf16(), notationName3.size());
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlDTDHandler_initCallBacks(VoidFunc *virts) {
    qtd_QXmlDTDHandler_errorString_const_dispatch = (qtd_QXmlDTDHandler_errorString_const_dispatch_t) virts[0];
    qtd_QXmlDTDHandler_notationDecl_string_string_string_dispatch = (qtd_QXmlDTDHandler_notationDecl_string_string_string_dispatch_t) virts[1];
    qtd_QXmlDTDHandler_unparsedEntityDecl_string_string_string_string_dispatch = (qtd_QXmlDTDHandler_unparsedEntityDecl_string_string_string_string_dispatch_t) virts[2];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QString  QXmlDTDHandler_QtDShell::__override_errorString(bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return errorString();
    }
}

bool  QXmlDTDHandler_QtDShell::__override_notationDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return notationDecl((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2);
    }
}

bool  QXmlDTDHandler_QtDShell::__override_unparsedEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, const QString&  notationName3, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return unparsedEntityDecl((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2, (const QString& )notationName3);
    }
}

// ---externC---
// QXmlDTDHandler::()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlDTDHandler_QXmlDTDHandler
(void *d_ptr)
{
    QXmlDTDHandler_QtDShell *__qt_this = new QXmlDTDHandler_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlDTDHandler::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlDTDHandler_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlDTDHandler_QtDShell *__qt_this = (QXmlDTDHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDTDHandler*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_errorString(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlDTDHandler::notationDecl(const QString & name, const QString & publicId, const QString & systemId)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDTDHandler_notationDecl_string_string_string
(void* __this_nativeId,
 DArray name0,
 DArray publicId1,
 DArray systemId2)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_publicId1 = QString::fromUtf8((const char *)publicId1.ptr, publicId1.length);
    QString __qt_systemId2 = QString::fromUtf8((const char *)systemId2.ptr, systemId2.length);
    QXmlDTDHandler_QtDShell *__qt_this = (QXmlDTDHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDTDHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_notationDecl((const QString& )__qt_name0, (const QString& )__qt_publicId1, (const QString& )__qt_systemId2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDTDHandler::unparsedEntityDecl(const QString & name, const QString & publicId, const QString & systemId, const QString & notationName)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDTDHandler_unparsedEntityDecl_string_string_string_string
(void* __this_nativeId,
 DArray name0,
 DArray publicId1,
 DArray systemId2,
 DArray notationName3)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_publicId1 = QString::fromUtf8((const char *)publicId1.ptr, publicId1.length);
    QString __qt_systemId2 = QString::fromUtf8((const char *)systemId2.ptr, systemId2.length);
    QString __qt_notationName3 = QString::fromUtf8((const char *)notationName3.ptr, notationName3.length);
    QXmlDTDHandler_QtDShell *__qt_this = (QXmlDTDHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDTDHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_unparsedEntityDecl((const QString& )__qt_name0, (const QString& )__qt_publicId1, (const QString& )__qt_systemId2, (const QString& )__qt_notationName3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


