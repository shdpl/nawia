#include <QVariant>
#include <qpicture.h>
#include <qstringlist.h>

#include "QAbstractPictureFormat_shell.h"
#include <iostream>
#include <qpictureformatplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QPictureFormatInterface* qtd_QAbstractPictureFormat_cast_to_QAbstractPictureFormat(QPictureFormatInterface *ptr)
{
    return dynamic_cast<QPictureFormatInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QAbstractPictureFormat_cast_to_QAbstractFactory(QPictureFormatInterface *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractPictureFormat_delete(void* nativeId)
{
    delete (QAbstractPictureFormat_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractPictureFormat_destroy(void* nativeId)
{
    call_destructor((QAbstractPictureFormat_QtDShell*)nativeId);
}

QAbstractPictureFormat_QtDShell::QAbstractPictureFormat_QtDShell(void *d_ptr)
    : QPictureFormatInterface(),
      QtdObjectLink(d_ptr)
{
}

QAbstractPictureFormat_QtDShell::~QAbstractPictureFormat_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAbstractPictureFormat_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QPictureFormatInterface*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, bool, QAbstractPictureFormat_installIOHandler_string_dispatch, (void *dId, const unsigned short* arg__1, int arg__1_size))
QTD_FUNC(GUI, QAbstractPictureFormat_installIOHandler_string_dispatch)
bool  QAbstractPictureFormat_QtDShell::installIOHandler(const QString&  arg__1)
{
    return qtd_QAbstractPictureFormat_installIOHandler_string_dispatch(this->dId, arg__1.utf16(), arg__1.size());
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QAbstractPictureFormat_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture_dispatch, (void *dId, const unsigned short* format0, int format0_size, const unsigned short* filename1, int filename1_size, void* arg__3))
QTD_FUNC(GUI, QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture_dispatch)
bool  QAbstractPictureFormat_QtDShell::loadPicture(const QString&  format0, const QString&  filename1, QPicture*  arg__3)
{
    return qtd_QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture_dispatch(this->dId, format0.utf16(), format0.size(), filename1.utf16(), filename1.size(), (QPicture* )arg__3);
}

QTD_FUNC_DECL(GUI, bool, QAbstractPictureFormat_savePicture_string_string_QPicture_dispatch, (void *dId, const unsigned short* format0, int format0_size, const unsigned short* filename1, int filename1_size, void* arg__3))
QTD_FUNC(GUI, QAbstractPictureFormat_savePicture_string_string_QPicture_dispatch)
bool  QAbstractPictureFormat_QtDShell::savePicture(const QString&  format0, const QString&  filename1, const QPicture&  arg__3)
{
    return qtd_QAbstractPictureFormat_savePicture_string_string_QPicture_dispatch(this->dId, format0.utf16(), format0.size(), filename1.utf16(), filename1.size(), &(QPicture& )arg__3);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractPictureFormat_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractPictureFormat_installIOHandler_string_dispatch = (qtd_QAbstractPictureFormat_installIOHandler_string_dispatch_t) virts[0];
    qtd_QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture_dispatch = (qtd_QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture_dispatch_t) virts[1];
    qtd_QAbstractPictureFormat_savePicture_string_string_QPicture_dispatch = (qtd_QAbstractPictureFormat_savePicture_string_string_QPicture_dispatch_t) virts[2];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
bool  QAbstractPictureFormat_QtDShell::__override_installIOHandler(const QString&  arg__1, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return installIOHandler((const QString& )arg__1);
    }
}

QStringList  QAbstractPictureFormat_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

bool  QAbstractPictureFormat_QtDShell::__override_loadPicture(const QString&  format0, const QString&  filename1, QPicture*  arg__3, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return loadPicture((const QString& )format0, (const QString& )filename1, (QPicture* )arg__3);
    }
}

bool  QAbstractPictureFormat_QtDShell::__override_savePicture(const QString&  format0, const QString&  filename1, const QPicture&  arg__3, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return savePicture((const QString& )format0, (const QString& )filename1, (const QPicture& )arg__3);
    }
}

// ---externC---
// QAbstractPictureFormat::()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractPictureFormat_QAbstractPictureFormat
(void *d_ptr)
{
    QAbstractPictureFormat_QtDShell *__qt_this = new QAbstractPictureFormat_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAbstractPictureFormat::installIOHandler(const QString & arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractPictureFormat_installIOHandler_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QAbstractPictureFormat_QtDShell *__qt_this = (QAbstractPictureFormat_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPictureFormatInterface*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_installIOHandler((const QString& )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractPictureFormat::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractPictureFormat_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractPictureFormat_QtDShell *__qt_this = (QAbstractPictureFormat_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPictureFormatInterface*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAbstractPictureFormat::loadPicture(const QString & format, const QString & filename, QPicture * arg__3)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture
(void* __this_nativeId,
 DArray format0,
 DArray filename1,
 void* arg__3)
{
    QString __qt_format0 = QString::fromUtf8((const char *)format0.ptr, format0.length);
    QString __qt_filename1 = QString::fromUtf8((const char *)filename1.ptr, filename1.length);
    QPicture*  __qt_arg__3 = (QPicture* ) arg__3;
    QAbstractPictureFormat_QtDShell *__qt_this = (QAbstractPictureFormat_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPictureFormatInterface*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_loadPicture((const QString& )__qt_format0, (const QString& )__qt_filename1, (QPicture* )__qt_arg__3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractPictureFormat::savePicture(const QString & format, const QString & filename, const QPicture & arg__3)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractPictureFormat_savePicture_string_string_QPicture
(void* __this_nativeId,
 DArray format0,
 DArray filename1,
 void* arg__3)
{
    QString __qt_format0 = QString::fromUtf8((const char *)format0.ptr, format0.length);
    QString __qt_filename1 = QString::fromUtf8((const char *)filename1.ptr, filename1.length);
    const QPicture&  __qt_arg__3 = (const QPicture& ) *(QPicture *)arg__3;
    QAbstractPictureFormat_QtDShell *__qt_this = (QAbstractPictureFormat_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPictureFormatInterface*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_savePicture((const QString& )__qt_format0, (const QString& )__qt_filename1, (const QPicture& )__qt_arg__3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


