#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

#include <iostream>
#include <qsessionmanager.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QSessionManagerEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSessionManagerEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_createEntity(void *nativeId, void* dId)
{
    new QSessionManagerEntity((QObject*)nativeId, dId);
}

// ---externC---
// QSessionManager::allowsErrorInteraction()
QTD_EXTERN QTD_EXPORT bool qtd_QSessionManager_allowsErrorInteraction
(void* __this_nativeId)
{
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    bool  __qt_return_value = __qt_this->allowsErrorInteraction();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSessionManager::allowsInteraction()
QTD_EXTERN QTD_EXPORT bool qtd_QSessionManager_allowsInteraction
(void* __this_nativeId)
{
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    bool  __qt_return_value = __qt_this->allowsInteraction();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSessionManager::cancel()
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_cancel
(void* __this_nativeId)
{
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    __qt_this->cancel();

}

// QSessionManager::discardCommand() const
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_discardCommand_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->discardCommand();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSessionManager::isPhase2() const
QTD_EXTERN QTD_EXPORT bool qtd_QSessionManager_isPhase2_const
(void* __this_nativeId)
{
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isPhase2();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSessionManager::release()
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_release
(void* __this_nativeId)
{
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    __qt_this->release();

}

// QSessionManager::requestPhase2()
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_requestPhase2
(void* __this_nativeId)
{
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    __qt_this->requestPhase2();

}

// QSessionManager::restartCommand() const
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_restartCommand_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->restartCommand();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSessionManager::restartHint() const
QTD_EXTERN QTD_EXPORT int qtd_QSessionManager_restartHint_const
(void* __this_nativeId)
{
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    int  __qt_return_value = __qt_this->restartHint();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSessionManager::sessionId() const
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_sessionId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    QString  __qt_return_value = __qt_this->sessionId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSessionManager::sessionKey() const
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_sessionKey_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    QString  __qt_return_value = __qt_this->sessionKey();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSessionManager::setDiscardCommand(const QStringList & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_setDiscardCommand_QList
(void* __this_nativeId,
 void* arg__1)
{
QStringList __qt_arg__1 = (*(QStringList *)arg__1);
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    __qt_this->setDiscardCommand((const QStringList& )__qt_arg__1);

}

// QSessionManager::setManagerProperty(const QString & name, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_setManagerProperty_string_string
(void* __this_nativeId,
 DArray name0,
 DArray value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_value1 = QString::fromUtf8((const char *)value1.ptr, value1.length);
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    __qt_this->setManagerProperty((const QString& )__qt_name0, (const QString& )__qt_value1);

}

// QSessionManager::setManagerProperty(const QString & name, const QStringList & value)
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_setManagerProperty_string_QList
(void* __this_nativeId,
 DArray name0,
 void* value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
QStringList __qt_value1 = (*(QStringList *)value1);
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    __qt_this->setManagerProperty((const QString& )__qt_name0, (const QStringList& )__qt_value1);

}

// QSessionManager::setRestartCommand(const QStringList & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_setRestartCommand_QList
(void* __this_nativeId,
 void* arg__1)
{
QStringList __qt_arg__1 = (*(QStringList *)arg__1);
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    __qt_this->setRestartCommand((const QStringList& )__qt_arg__1);

}

// QSessionManager::setRestartHint(QSessionManager::RestartHint arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSessionManager_setRestartHint_RestartHint
(void* __this_nativeId,
 int arg__1)
{
    QSessionManager::RestartHint __qt_arg__1 = (QSessionManager::RestartHint) arg__1;
    QSessionManager *__qt_this = (QSessionManager *) __this_nativeId;
    __qt_this->setRestartHint((QSessionManager::RestartHint )__qt_arg__1);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSessionManager_staticMetaObject() {
    return (void*)&QSessionManager::staticMetaObject;
}


