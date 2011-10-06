#include <QVariant>

#include "QXmlDeclHandler_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT QXmlDeclHandler* qtd_QXmlDeclHandler_cast_to_QXmlDeclHandler(QXmlDeclHandler *ptr)
{
    return dynamic_cast<QXmlDeclHandler*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlDeclHandler_delete(void* nativeId)
{
    delete (QXmlDeclHandler_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlDeclHandler_destroy(void* nativeId)
{
    call_destructor((QXmlDeclHandler_QtDShell*)nativeId);
}

QXmlDeclHandler_QtDShell::QXmlDeclHandler_QtDShell(void *d_ptr)
    : QXmlDeclHandler(),
      QtdObjectLink(d_ptr)
{
}

QXmlDeclHandler_QtDShell::~QXmlDeclHandler_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlDeclHandler_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlDeclHandler*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(XML, bool, QXmlDeclHandler_attributeDecl_string_string_string_string_string_dispatch, (void *dId, const unsigned short* eName0, int eName0_size, const unsigned short* aName1, int aName1_size, const unsigned short* type2, int type2_size, const unsigned short* valueDefault3, int valueDefault3_size, const unsigned short* value4, int value4_size))
QTD_FUNC(XML, QXmlDeclHandler_attributeDecl_string_string_string_string_string_dispatch)
bool  QXmlDeclHandler_QtDShell::attributeDecl(const QString&  eName0, const QString&  aName1, const QString&  type2, const QString&  valueDefault3, const QString&  value4)
{
    return qtd_QXmlDeclHandler_attributeDecl_string_string_string_string_string_dispatch(this->dId, eName0.utf16(), eName0.size(), aName1.utf16(), aName1.size(), type2.utf16(), type2.size(), valueDefault3.utf16(), valueDefault3.size(), value4.utf16(), value4.size());
}

QTD_FUNC_DECL(XML, void, QXmlDeclHandler_errorString_const_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(XML, QXmlDeclHandler_errorString_const_dispatch)
QString  QXmlDeclHandler_QtDShell::errorString() const
{
    DArray ret_str;
    qtd_QXmlDeclHandler_errorString_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(XML, bool, QXmlDeclHandler_externalEntityDecl_string_string_string_dispatch, (void *dId, const unsigned short* name0, int name0_size, const unsigned short* publicId1, int publicId1_size, const unsigned short* systemId2, int systemId2_size))
QTD_FUNC(XML, QXmlDeclHandler_externalEntityDecl_string_string_string_dispatch)
bool  QXmlDeclHandler_QtDShell::externalEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
    return qtd_QXmlDeclHandler_externalEntityDecl_string_string_string_dispatch(this->dId, name0.utf16(), name0.size(), publicId1.utf16(), publicId1.size(), systemId2.utf16(), systemId2.size());
}

QTD_FUNC_DECL(XML, bool, QXmlDeclHandler_internalEntityDecl_string_string_dispatch, (void *dId, const unsigned short* name0, int name0_size, const unsigned short* value1, int value1_size))
QTD_FUNC(XML, QXmlDeclHandler_internalEntityDecl_string_string_dispatch)
bool  QXmlDeclHandler_QtDShell::internalEntityDecl(const QString&  name0, const QString&  value1)
{
    return qtd_QXmlDeclHandler_internalEntityDecl_string_string_dispatch(this->dId, name0.utf16(), name0.size(), value1.utf16(), value1.size());
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlDeclHandler_initCallBacks(VoidFunc *virts) {
    qtd_QXmlDeclHandler_attributeDecl_string_string_string_string_string_dispatch = (qtd_QXmlDeclHandler_attributeDecl_string_string_string_string_string_dispatch_t) virts[0];
    qtd_QXmlDeclHandler_errorString_const_dispatch = (qtd_QXmlDeclHandler_errorString_const_dispatch_t) virts[1];
    qtd_QXmlDeclHandler_externalEntityDecl_string_string_string_dispatch = (qtd_QXmlDeclHandler_externalEntityDecl_string_string_string_dispatch_t) virts[2];
    qtd_QXmlDeclHandler_internalEntityDecl_string_string_dispatch = (qtd_QXmlDeclHandler_internalEntityDecl_string_string_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
bool  QXmlDeclHandler_QtDShell::__override_attributeDecl(const QString&  eName0, const QString&  aName1, const QString&  type2, const QString&  valueDefault3, const QString&  value4, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return attributeDecl((const QString& )eName0, (const QString& )aName1, (const QString& )type2, (const QString& )valueDefault3, (const QString& )value4);
    }
}

QString  QXmlDeclHandler_QtDShell::__override_errorString(bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return errorString();
    }
}

bool  QXmlDeclHandler_QtDShell::__override_externalEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return externalEntityDecl((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2);
    }
}

bool  QXmlDeclHandler_QtDShell::__override_internalEntityDecl(const QString&  name0, const QString&  value1, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return internalEntityDecl((const QString& )name0, (const QString& )value1);
    }
}

// ---externC---
// QXmlDeclHandler::()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlDeclHandler_QXmlDeclHandler
(void *d_ptr)
{
    QXmlDeclHandler_QtDShell *__qt_this = new QXmlDeclHandler_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlDeclHandler::attributeDecl(const QString & eName, const QString & aName, const QString & type, const QString & valueDefault, const QString & value)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDeclHandler_attributeDecl_string_string_string_string_string
(void* __this_nativeId,
 DArray eName0,
 DArray aName1,
 DArray type2,
 DArray valueDefault3,
 DArray value4)
{
    QString __qt_eName0 = QString::fromUtf8((const char *)eName0.ptr, eName0.length);
    QString __qt_aName1 = QString::fromUtf8((const char *)aName1.ptr, aName1.length);
    QString __qt_type2 = QString::fromUtf8((const char *)type2.ptr, type2.length);
    QString __qt_valueDefault3 = QString::fromUtf8((const char *)valueDefault3.ptr, valueDefault3.length);
    QString __qt_value4 = QString::fromUtf8((const char *)value4.ptr, value4.length);
    QXmlDeclHandler_QtDShell *__qt_this = (QXmlDeclHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDeclHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_attributeDecl((const QString& )__qt_eName0, (const QString& )__qt_aName1, (const QString& )__qt_type2, (const QString& )__qt_valueDefault3, (const QString& )__qt_value4, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDeclHandler::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlDeclHandler_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlDeclHandler_QtDShell *__qt_this = (QXmlDeclHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDeclHandler*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_errorString(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlDeclHandler::externalEntityDecl(const QString & name, const QString & publicId, const QString & systemId)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDeclHandler_externalEntityDecl_string_string_string
(void* __this_nativeId,
 DArray name0,
 DArray publicId1,
 DArray systemId2)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_publicId1 = QString::fromUtf8((const char *)publicId1.ptr, publicId1.length);
    QString __qt_systemId2 = QString::fromUtf8((const char *)systemId2.ptr, systemId2.length);
    QXmlDeclHandler_QtDShell *__qt_this = (QXmlDeclHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDeclHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_externalEntityDecl((const QString& )__qt_name0, (const QString& )__qt_publicId1, (const QString& )__qt_systemId2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDeclHandler::internalEntityDecl(const QString & name, const QString & value)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDeclHandler_internalEntityDecl_string_string
(void* __this_nativeId,
 DArray name0,
 DArray value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_value1 = QString::fromUtf8((const char *)value1.ptr, value1.length);
    QXmlDeclHandler_QtDShell *__qt_this = (QXmlDeclHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDeclHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_internalEntityDecl((const QString& )__qt_name0, (const QString& )__qt_value1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


