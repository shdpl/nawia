#include <QVariant>
#include <qstringlist.h>
#include <qtextcodec.h>

#include "QAbstractTextCodecFactory_shell.h"
#include <iostream>
#include <qtextcodecplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QTextCodecFactoryInterface* qtd_QAbstractTextCodecFactory_cast_to_QAbstractTextCodecFactory(QTextCodecFactoryInterface *ptr)
{
    return dynamic_cast<QTextCodecFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QAbstractTextCodecFactory_cast_to_QAbstractFactory(QTextCodecFactoryInterface *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextCodecFactory_delete(void* nativeId)
{
    delete (QAbstractTextCodecFactory_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextCodecFactory_destroy(void* nativeId)
{
    call_destructor((QAbstractTextCodecFactory_QtDShell*)nativeId);
}

QAbstractTextCodecFactory_QtDShell::QAbstractTextCodecFactory_QtDShell(void *d_ptr)
    : QTextCodecFactoryInterface(),
      QtdObjectLink(d_ptr)
{
}

QAbstractTextCodecFactory_QtDShell::~QAbstractTextCodecFactory_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAbstractTextCodecFactory_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QTextCodecFactoryInterface*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QAbstractTextCodecFactory_create_string_dispatch, (void *dId, const unsigned short* key0, int key0_size))
QTD_FUNC(GUI, QAbstractTextCodecFactory_create_string_dispatch)
QTextCodec*  QAbstractTextCodecFactory_QtDShell::create(const QString&  key0)
{
    return (QTextCodec*) qtd_QAbstractTextCodecFactory_create_string_dispatch(this->dId, key0.utf16(), key0.size());
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QAbstractTextCodecFactory_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextCodecFactory_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractTextCodecFactory_create_string_dispatch = (qtd_QAbstractTextCodecFactory_create_string_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QTextCodec*  QAbstractTextCodecFactory_QtDShell::__override_create(const QString&  key0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return create((const QString& )key0);
    }
}

QStringList  QAbstractTextCodecFactory_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

// ---externC---
// QAbstractTextCodecFactory::()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextCodecFactory_QAbstractTextCodecFactory
(void *d_ptr)
{
    QAbstractTextCodecFactory_QtDShell *__qt_this = new QAbstractTextCodecFactory_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAbstractTextCodecFactory::create(const QString & key)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractTextCodecFactory_create_string
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QAbstractTextCodecFactory_QtDShell *__qt_this = (QAbstractTextCodecFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTextCodecFactoryInterface*)__this_nativeId) != NULL;
    QTextCodec*  __qt_return_value = __qt_this->__override_create((const QString& )__qt_key0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractTextCodecFactory::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractTextCodecFactory_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractTextCodecFactory_QtDShell *__qt_this = (QAbstractTextCodecFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTextCodecFactoryInterface*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


