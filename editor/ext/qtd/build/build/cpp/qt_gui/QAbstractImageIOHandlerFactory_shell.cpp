#include <QVariant>
#include <qbytearray.h>
#include <qimageiohandler.h>
#include <qiodevice.h>
#include <qstringlist.h>

#include "QAbstractImageIOHandlerFactory_shell.h"
#include <iostream>
#include <qimageiohandler.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QImageIOHandlerFactoryInterface* qtd_QAbstractImageIOHandlerFactory_cast_to_QAbstractImageIOHandlerFactory(QImageIOHandlerFactoryInterface *ptr)
{
    return dynamic_cast<QImageIOHandlerFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QAbstractImageIOHandlerFactory_cast_to_QAbstractFactory(QImageIOHandlerFactoryInterface *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractImageIOHandlerFactory_delete(void* nativeId)
{
    delete (QAbstractImageIOHandlerFactory_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractImageIOHandlerFactory_destroy(void* nativeId)
{
    call_destructor((QAbstractImageIOHandlerFactory_QtDShell*)nativeId);
}

QAbstractImageIOHandlerFactory_QtDShell::QAbstractImageIOHandlerFactory_QtDShell(void *d_ptr)
    : QImageIOHandlerFactoryInterface(),
      QtdObjectLink(d_ptr)
{
}

QAbstractImageIOHandlerFactory_QtDShell::~QAbstractImageIOHandlerFactory_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAbstractImageIOHandlerFactory_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QImageIOHandlerFactoryInterface*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const_dispatch, (void *dId, void* device0, void* format1))
QTD_FUNC(GUI, QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const_dispatch)
QImageIOHandler*  QAbstractImageIOHandlerFactory_QtDShell::create(QIODevice*  device0, const QByteArray&  format1) const
{
    return (QImageIOHandler*) qtd_QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const_dispatch(this->dId, (QIODevice* )device0, &(QByteArray& )format1);
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QAbstractImageIOHandlerFactory_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractImageIOHandlerFactory_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const_dispatch = (qtd_QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QImageIOHandler*  QAbstractImageIOHandlerFactory_QtDShell::__override_create(QIODevice*  device0, const QByteArray&  format1, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return create((QIODevice* )device0, (const QByteArray& )format1);
    }
}

QStringList  QAbstractImageIOHandlerFactory_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

// ---externC---
// QAbstractImageIOHandlerFactory::()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractImageIOHandlerFactory_QAbstractImageIOHandlerFactory
(void *d_ptr)
{
    QAbstractImageIOHandlerFactory_QtDShell *__qt_this = new QAbstractImageIOHandlerFactory_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAbstractImageIOHandlerFactory::create(QIODevice * device, const QByteArray & format) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const
(void* __this_nativeId,
 void* device0,
 void* format1)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    const QByteArray&  __qt_format1 = (const QByteArray& ) *(QByteArray *)format1;
    QAbstractImageIOHandlerFactory_QtDShell *__qt_this = (QAbstractImageIOHandlerFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandlerFactoryInterface*)__this_nativeId) != NULL;
    QImageIOHandler*  __qt_return_value = __qt_this->__override_create((QIODevice* )__qt_device0, (const QByteArray& )__qt_format1, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractImageIOHandlerFactory::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractImageIOHandlerFactory_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractImageIOHandlerFactory_QtDShell *__qt_this = (QAbstractImageIOHandlerFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImageIOHandlerFactoryInterface*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


