#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QSound_shell.h"
#include <iostream>
#include <qsound.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QSoundEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSoundEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSound_createEntity(void *nativeId, void* dId)
{
    new QSoundEntity((QObject*)nativeId, dId);
}

QSound_QtDShell::QSound_QtDShell(void *d_ptr, const QString&  filename0, QObject*  parent1)
    : QSound(filename0, parent1),
      QObjectLink(this, d_ptr)
{
}

QSound_QtDShell::~QSound_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QSound_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QSound::metaObject();
}

int QSound_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QSound::qt_metacall(_c, _id, _a);
}

int QSound_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QSound::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QSound_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QSound_QtDShell *__qt_this = (QSound_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QSound_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSound_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QSound_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QSound_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QSound_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QSound_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QSound_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QSound_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QSound_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QSound_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QSound_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QSound_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QSound::QSound(const QString & filename, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSound_QSound_string_QObject
(void *d_ptr,
 DArray filename0,
 void* parent1)
{
    QString __qt_filename0 = QString::fromUtf8((const char *)filename0.ptr, filename0.length);
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QSound_QtDShell *__qt_this = new QSound_QtDShell(d_ptr, (const QString& )__qt_filename0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QSound::fileName() const
QTD_EXTERN QTD_EXPORT void qtd_QSound_fileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSound_QtDShell *__qt_this = (QSound_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSound::isFinished() const
QTD_EXTERN QTD_EXPORT bool qtd_QSound_isFinished_const
(void* __this_nativeId)
{
    QSound_QtDShell *__qt_this = (QSound_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFinished();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSound::loops() const
QTD_EXTERN QTD_EXPORT int qtd_QSound_loops_const
(void* __this_nativeId)
{
    QSound_QtDShell *__qt_this = (QSound_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->loops();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSound::loopsRemaining() const
QTD_EXTERN QTD_EXPORT int qtd_QSound_loopsRemaining_const
(void* __this_nativeId)
{
    QSound_QtDShell *__qt_this = (QSound_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->loopsRemaining();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSound::play()
QTD_EXTERN QTD_EXPORT void qtd_QSound_play
(void* __this_nativeId)
{
    QSound_QtDShell *__qt_this = (QSound_QtDShell *) __this_nativeId;
    __qt_this->play();

}

// QSound::setLoops(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSound_setLoops_int
(void* __this_nativeId,
 int arg__1)
{
    QSound_QtDShell *__qt_this = (QSound_QtDShell *) __this_nativeId;
    __qt_this->setLoops((int )arg__1);

}

// QSound::stop()
QTD_EXTERN QTD_EXPORT void qtd_QSound_stop
(void* __this_nativeId)
{
    QSound_QtDShell *__qt_this = (QSound_QtDShell *) __this_nativeId;
    __qt_this->stop();

}

// QSound::isAvailable()
QTD_EXTERN QTD_EXPORT bool qtd_QSound_isAvailable
()
{
    bool  __qt_return_value = QSound_QtDShell::isAvailable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSound::play(const QString & filename)
QTD_EXTERN QTD_EXPORT void qtd_QSound_play_string
(DArray filename0)
{
    QString __qt_filename0 = QString::fromUtf8((const char *)filename0.ptr, filename0.length);
    QSound_QtDShell::play((const QString& )__qt_filename0);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSound_staticMetaObject() {
    return (void*)&QSound::staticMetaObject;
}


