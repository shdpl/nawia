#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QFileSystemWatcher_shell.h"
#include <iostream>
#include <qfilesystemwatcher.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QFileSystemWatcherEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QFileSystemWatcherEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QFileSystemWatcher_createEntity(void *nativeId, void* dId)
{
    new QFileSystemWatcherEntity((QObject*)nativeId, dId);
}

QFileSystemWatcher_QtDShell::QFileSystemWatcher_QtDShell(void *d_ptr, QObject*  parent0)
    : QFileSystemWatcher(parent0),
      QObjectLink(this, d_ptr)
{
}

QFileSystemWatcher_QtDShell::QFileSystemWatcher_QtDShell(void *d_ptr, const QStringList&  paths0, QObject*  parent1)
    : QFileSystemWatcher(paths0, parent1),
      QObjectLink(this, d_ptr)
{
}

QFileSystemWatcher_QtDShell::~QFileSystemWatcher_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QFileSystemWatcher_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QFileSystemWatcher::metaObject();
}

int QFileSystemWatcher_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QFileSystemWatcher::qt_metacall(_c, _id, _a);
}

int QFileSystemWatcher_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QFileSystemWatcher::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QFileSystemWatcher_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QFileSystemWatcher_QtDShell *__qt_this = (QFileSystemWatcher_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QFileSystemWatcher_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFileSystemWatcher_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QFileSystemWatcher_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QFileSystemWatcher_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QFileSystemWatcher_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QFileSystemWatcher_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QFileSystemWatcher_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QFileSystemWatcher_QtDShell::__public_directoryChanged(const QString&  path0)
{
    QFileSystemWatcher::directoryChanged((const QString& )path0);
}

void QFileSystemWatcher_QtDShell::__public_fileChanged(const QString&  path0)
{
    QFileSystemWatcher::fileChanged((const QString& )path0);
}

// Write virtual function overries used to decide on static/virtual calls
void QFileSystemWatcher_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QFileSystemWatcher_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QFileSystemWatcher_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QFileSystemWatcher_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QFileSystemWatcher_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QFileSystemWatcher::directoryChanged(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemWatcher_directoryChanged_string
(void* __this_nativeId,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QFileSystemWatcher_QtDShell *__qt_this = (QFileSystemWatcher_QtDShell *) __this_nativeId;
    __qt_this->__public_directoryChanged((const QString& )__qt_path0);

}

// QFileSystemWatcher::fileChanged(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemWatcher_fileChanged_string
(void* __this_nativeId,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QFileSystemWatcher_QtDShell *__qt_this = (QFileSystemWatcher_QtDShell *) __this_nativeId;
    __qt_this->__public_fileChanged((const QString& )__qt_path0);

}

// ---externC---
// QFileSystemWatcher::QFileSystemWatcher(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemWatcher_QFileSystemWatcher_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QFileSystemWatcher_QtDShell *__qt_this = new QFileSystemWatcher_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QFileSystemWatcher::QFileSystemWatcher(const QStringList & paths, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemWatcher_QFileSystemWatcher_QList_QObject
(void *d_ptr,
 void* paths0,
 void* parent1)
{
QStringList __qt_paths0 = (*(QStringList *)paths0);
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QFileSystemWatcher_QtDShell *__qt_this = new QFileSystemWatcher_QtDShell(d_ptr, (const QStringList& )__qt_paths0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QFileSystemWatcher::addPath(const QString & file)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemWatcher_addPath_string
(void* __this_nativeId,
 DArray file0)
{
    QString __qt_file0 = QString::fromUtf8((const char *)file0.ptr, file0.length);
    QFileSystemWatcher_QtDShell *__qt_this = (QFileSystemWatcher_QtDShell *) __this_nativeId;
    __qt_this->addPath((const QString& )__qt_file0);

}

// QFileSystemWatcher::addPaths(const QStringList & files)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemWatcher_addPaths_QList
(void* __this_nativeId,
 void* files0)
{
QStringList __qt_files0 = (*(QStringList *)files0);
    QFileSystemWatcher_QtDShell *__qt_this = (QFileSystemWatcher_QtDShell *) __this_nativeId;
    __qt_this->addPaths((const QStringList& )__qt_files0);

}

// QFileSystemWatcher::directories() const
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemWatcher_directories_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileSystemWatcher_QtDShell *__qt_this = (QFileSystemWatcher_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->directories();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFileSystemWatcher::files() const
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemWatcher_files_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileSystemWatcher_QtDShell *__qt_this = (QFileSystemWatcher_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->files();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFileSystemWatcher::removePath(const QString & file)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemWatcher_removePath_string
(void* __this_nativeId,
 DArray file0)
{
    QString __qt_file0 = QString::fromUtf8((const char *)file0.ptr, file0.length);
    QFileSystemWatcher_QtDShell *__qt_this = (QFileSystemWatcher_QtDShell *) __this_nativeId;
    __qt_this->removePath((const QString& )__qt_file0);

}

// QFileSystemWatcher::removePaths(const QStringList & files)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemWatcher_removePaths_QList
(void* __this_nativeId,
 void* files0)
{
QStringList __qt_files0 = (*(QStringList *)files0);
    QFileSystemWatcher_QtDShell *__qt_this = (QFileSystemWatcher_QtDShell *) __this_nativeId;
    __qt_this->removePaths((const QStringList& )__qt_files0);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemWatcher_staticMetaObject() {
    return (void*)&QFileSystemWatcher::staticMetaObject;
}


