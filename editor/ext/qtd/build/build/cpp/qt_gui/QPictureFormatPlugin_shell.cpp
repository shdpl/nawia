#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpicture.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QPictureFormatPlugin_shell.h"
#include <iostream>
#include <qpictureformatplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QPictureFormatInterface* qtd_QPictureFormatPlugin_cast_to_QAbstractPictureFormat(QPictureFormatPlugin *ptr)
{
    return dynamic_cast<QPictureFormatInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QPictureFormatPlugin_cast_to_QAbstractFactory(QPictureFormatPlugin *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

class QPictureFormatPluginEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QPictureFormatPluginEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QPictureFormatPlugin_createEntity(void *nativeId, void* dId)
{
    new QPictureFormatPluginEntity((QObject*)nativeId, dId);
}

QPictureFormatPlugin_QtDShell::QPictureFormatPlugin_QtDShell(void *d_ptr, QObject*  parent0)
    : QPictureFormatPlugin(parent0),
      QObjectLink(this, d_ptr)
{
}

QPictureFormatPlugin_QtDShell::~QPictureFormatPlugin_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QPictureFormatPlugin_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QPictureFormatPlugin::metaObject();
}

int QPictureFormatPlugin_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QPictureFormatPlugin::qt_metacall(_c, _id, _a);
}

int QPictureFormatPlugin_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QPictureFormatPlugin::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QPictureFormatPlugin_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QPictureFormatPlugin_QtDShell *__qt_this = (QPictureFormatPlugin_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QPictureFormatPlugin_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QPictureFormatPlugin_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QPictureFormatPlugin_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QPictureFormatPlugin_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, bool, QAbstractPictureFormat_installIOHandler_string_dispatch, (void *dId, const unsigned short* format0, int format0_size))
bool  QPictureFormatPlugin_QtDShell::installIOHandler(const QString&  format0)
{
    return qtd_QAbstractPictureFormat_installIOHandler_string_dispatch(QObjectLink::getLink(this)->dId, format0.utf16(), format0.size());
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QPictureFormatPlugin_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture_dispatch, (void *dId, const unsigned short* format0, int format0_size, const unsigned short* filename1, int filename1_size, void* pic2))
bool  QPictureFormatPlugin_QtDShell::loadPicture(const QString&  format0, const QString&  filename1, QPicture*  pic2)
{
    return qtd_QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture_dispatch(QObjectLink::getLink(this)->dId, format0.utf16(), format0.size(), filename1.utf16(), filename1.size(), (QPicture* )pic2);
}

QTD_FUNC_DECL(GUI, bool, QAbstractPictureFormat_savePicture_string_string_QPicture_dispatch, (void *dId, const unsigned short* format0, int format0_size, const unsigned short* filename1, int filename1_size, void* pic2))
bool  QPictureFormatPlugin_QtDShell::savePicture(const QString&  format0, const QString&  filename1, const QPicture&  pic2)
{
    return qtd_QAbstractPictureFormat_savePicture_string_string_QPicture_dispatch(QObjectLink::getLink(this)->dId, format0.utf16(), format0.size(), filename1.utf16(), filename1.size(), &(QPicture& )pic2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QPictureFormatPlugin_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QPictureFormatPlugin_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QPictureFormatPlugin_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QPictureFormatPlugin_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QPictureFormatPlugin_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QPictureFormatPlugin_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QPictureFormatPlugin_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QPictureFormatPlugin_QtDShell::__override_installIOHandler(const QString&  format0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return installIOHandler((const QString& )format0);
    }
}

QStringList  QPictureFormatPlugin_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

bool  QPictureFormatPlugin_QtDShell::__override_loadPicture(const QString&  format0, const QString&  filename1, QPicture*  pic2, bool static_call)
{
    if (static_call) {
        return QPictureFormatPlugin::loadPicture((const QString& )format0, (const QString& )filename1, (QPicture* )pic2);
    } else {
        return loadPicture((const QString& )format0, (const QString& )filename1, (QPicture* )pic2);
    }
}

bool  QPictureFormatPlugin_QtDShell::__override_savePicture(const QString&  format0, const QString&  filename1, const QPicture&  pic2, bool static_call)
{
    if (static_call) {
        return QPictureFormatPlugin::savePicture((const QString& )format0, (const QString& )filename1, (const QPicture& )pic2);
    } else {
        return savePicture((const QString& )format0, (const QString& )filename1, (const QPicture& )pic2);
    }
}

void QPictureFormatPlugin_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QPictureFormatPlugin::QPictureFormatPlugin(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QPictureFormatPlugin_QPictureFormatPlugin_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QPictureFormatPlugin_QtDShell *__qt_this = new QPictureFormatPlugin_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QPictureFormatPlugin::installIOHandler(const QString & format)
QTD_EXTERN QTD_EXPORT bool qtd_QPictureFormatPlugin_installIOHandler_string
(void* __this_nativeId,
 DArray format0)
{
    QString __qt_format0 = QString::fromUtf8((const char *)format0.ptr, format0.length);
    QPictureFormatPlugin_QtDShell *__qt_this = (QPictureFormatPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_installIOHandler((const QString& )__qt_format0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPictureFormatPlugin::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QPictureFormatPlugin_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPictureFormatPlugin_QtDShell *__qt_this = (QPictureFormatPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPictureFormatPlugin::loadPicture(const QString & format, const QString & filename, QPicture * pic)
QTD_EXTERN QTD_EXPORT bool qtd_QPictureFormatPlugin_loadPicture_string_string_nativepointerQPicture
(void* __this_nativeId,
 DArray format0,
 DArray filename1,
 void* pic2)
{
    QString __qt_format0 = QString::fromUtf8((const char *)format0.ptr, format0.length);
    QString __qt_filename1 = QString::fromUtf8((const char *)filename1.ptr, filename1.length);
    QPicture*  __qt_pic2 = (QPicture* ) pic2;
    QPictureFormatPlugin_QtDShell *__qt_this = (QPictureFormatPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_loadPicture((const QString& )__qt_format0, (const QString& )__qt_filename1, (QPicture* )__qt_pic2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPictureFormatPlugin::savePicture(const QString & format, const QString & filename, const QPicture & pic)
QTD_EXTERN QTD_EXPORT bool qtd_QPictureFormatPlugin_savePicture_string_string_QPicture
(void* __this_nativeId,
 DArray format0,
 DArray filename1,
 void* pic2)
{
    QString __qt_format0 = QString::fromUtf8((const char *)format0.ptr, format0.length);
    QString __qt_filename1 = QString::fromUtf8((const char *)filename1.ptr, filename1.length);
    const QPicture&  __qt_pic2 = (const QPicture& ) *(QPicture *)pic2;
    QPictureFormatPlugin_QtDShell *__qt_this = (QPictureFormatPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_savePicture((const QString& )__qt_format0, (const QString& )__qt_filename1, (const QPicture& )__qt_pic2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QPictureFormatPlugin_staticMetaObject() {
    return (void*)&QPictureFormatPlugin::staticMetaObject;
}


