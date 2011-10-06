#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsettings.h>
#include <qstringlist.h>
#include <qtextcodec.h>
#include <qvariant.h>

#include "QSettings_shell.h"
#include <iostream>
#include <qsettings.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QSettingsEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSettingsEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSettings_createEntity(void *nativeId, void* dId)
{
    new QSettingsEntity((QObject*)nativeId, dId);
}

QSettings_QtDShell::QSettings_QtDShell(void *d_ptr, QObject*  parent0)
    : QSettings(parent0),
      QObjectLink(this, d_ptr)
{
}

QSettings_QtDShell::QSettings_QtDShell(void *d_ptr, QSettings::Format  format0, QSettings::Scope  scope1, const QString&  organization2, const QString&  application3, QObject*  parent4)
    : QSettings(format0, scope1, organization2, application3, parent4),
      QObjectLink(this, d_ptr)
{
}

QSettings_QtDShell::QSettings_QtDShell(void *d_ptr, QSettings::Scope  scope0, const QString&  organization1, const QString&  application2, QObject*  parent3)
    : QSettings(scope0, organization1, application2, parent3),
      QObjectLink(this, d_ptr)
{
}

QSettings_QtDShell::QSettings_QtDShell(void *d_ptr, const QString&  fileName0, QSettings::Format  format1, QObject*  parent2)
    : QSettings(fileName0, format1, parent2),
      QObjectLink(this, d_ptr)
{
}

QSettings_QtDShell::QSettings_QtDShell(void *d_ptr, const QString&  organization0, const QString&  application1, QObject*  parent2)
    : QSettings(organization0, application1, parent2),
      QObjectLink(this, d_ptr)
{
}

QSettings_QtDShell::~QSettings_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QSettings_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QSettings::metaObject();
}

int QSettings_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QSettings::qt_metacall(_c, _id, _a);
}

int QSettings_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QSettings::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QSettings_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QSettings_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSettings_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QSettings_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QSettings_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QSettings_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QSettings_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QSettings_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QSettings_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QSettings_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QSettings_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QSettings::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QSettings_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QSettings_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QSettings::QSettings(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSettings_QSettings_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QSettings_QtDShell *__qt_this = new QSettings_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QSettings::QSettings(QSettings::Format format, QSettings::Scope scope_, const QString & organization, const QString & application, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSettings_QSettings_Format_Scope_string_string_QObject
(void *d_ptr,
 int format0,
 int scope1,
 DArray organization2,
 DArray application3,
 void* parent4)
{
    QSettings::Format __qt_format0 = (QSettings::Format) format0;
    QSettings::Scope __qt_scope1 = (QSettings::Scope) scope1;
    QString __qt_organization2 = QString::fromUtf8((const char *)organization2.ptr, organization2.length);
    QString __qt_application3 = QString::fromUtf8((const char *)application3.ptr, application3.length);
    QObject*  __qt_parent4 = (QObject* ) parent4;
    QSettings_QtDShell *__qt_this = new QSettings_QtDShell(d_ptr, (QSettings::Format )__qt_format0, (QSettings::Scope )__qt_scope1, (const QString& )__qt_organization2, (const QString& )__qt_application3, (QObject* )__qt_parent4);
    return (void *) __qt_this;

}

// QSettings::QSettings(QSettings::Scope scope_, const QString & organization, const QString & application, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSettings_QSettings_Scope_string_string_QObject
(void *d_ptr,
 int scope0,
 DArray organization1,
 DArray application2,
 void* parent3)
{
    QSettings::Scope __qt_scope0 = (QSettings::Scope) scope0;
    QString __qt_organization1 = QString::fromUtf8((const char *)organization1.ptr, organization1.length);
    QString __qt_application2 = QString::fromUtf8((const char *)application2.ptr, application2.length);
    QObject*  __qt_parent3 = (QObject* ) parent3;
    QSettings_QtDShell *__qt_this = new QSettings_QtDShell(d_ptr, (QSettings::Scope )__qt_scope0, (const QString& )__qt_organization1, (const QString& )__qt_application2, (QObject* )__qt_parent3);
    return (void *) __qt_this;

}

// QSettings::QSettings(const QString & fileName, QSettings::Format format, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSettings_QSettings_string_Format_QObject
(void *d_ptr,
 DArray fileName0,
 int format1,
 void* parent2)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QSettings::Format __qt_format1 = (QSettings::Format) format1;
    QObject*  __qt_parent2 = (QObject* ) parent2;
    QSettings_QtDShell *__qt_this = new QSettings_QtDShell(d_ptr, (const QString& )__qt_fileName0, (QSettings::Format )__qt_format1, (QObject* )__qt_parent2);
    return (void *) __qt_this;

}

// QSettings::QSettings(const QString & organization, const QString & application, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSettings_QSettings_string_string_QObject
(void *d_ptr,
 DArray organization0,
 DArray application1,
 void* parent2)
{
    QString __qt_organization0 = QString::fromUtf8((const char *)organization0.ptr, organization0.length);
    QString __qt_application1 = QString::fromUtf8((const char *)application1.ptr, application1.length);
    QObject*  __qt_parent2 = (QObject* ) parent2;
    QSettings_QtDShell *__qt_this = new QSettings_QtDShell(d_ptr, (const QString& )__qt_organization0, (const QString& )__qt_application1, (QObject* )__qt_parent2);
    return (void *) __qt_this;

}

// QSettings::allKeys() const
QTD_EXTERN QTD_EXPORT void qtd_QSettings_allKeys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->allKeys();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSettings::applicationName() const
QTD_EXTERN QTD_EXPORT void qtd_QSettings_applicationName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->applicationName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSettings::beginGroup(const QString & prefix)
QTD_EXTERN QTD_EXPORT void qtd_QSettings_beginGroup_string
(void* __this_nativeId,
 DArray prefix0)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->beginGroup((const QString& )__qt_prefix0);

}

// QSettings::beginReadArray(const QString & prefix)
QTD_EXTERN QTD_EXPORT int qtd_QSettings_beginReadArray_string
(void* __this_nativeId,
 DArray prefix0)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->beginReadArray((const QString& )__qt_prefix0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSettings::beginWriteArray(const QString & prefix, int size)
QTD_EXTERN QTD_EXPORT void qtd_QSettings_beginWriteArray_string_int
(void* __this_nativeId,
 DArray prefix0,
 int size1)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->beginWriteArray((const QString& )__qt_prefix0, (int )size1);

}

// QSettings::childGroups() const
QTD_EXTERN QTD_EXPORT void qtd_QSettings_childGroups_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->childGroups();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSettings::childKeys() const
QTD_EXTERN QTD_EXPORT void qtd_QSettings_childKeys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->childKeys();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSettings::clear()
QTD_EXTERN QTD_EXPORT void qtd_QSettings_clear
(void* __this_nativeId)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QSettings::contains(const QString & key) const
QTD_EXTERN QTD_EXPORT bool qtd_QSettings_contains_string_const
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QString& )__qt_key0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSettings::endArray()
QTD_EXTERN QTD_EXPORT void qtd_QSettings_endArray
(void* __this_nativeId)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->endArray();

}

// QSettings::endGroup()
QTD_EXTERN QTD_EXPORT void qtd_QSettings_endGroup
(void* __this_nativeId)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->endGroup();

}

// QSettings::fallbacksEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QSettings_fallbacksEnabled_const
(void* __this_nativeId)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fallbacksEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSettings::fileName() const
QTD_EXTERN QTD_EXPORT void qtd_QSettings_fileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSettings::format() const
QTD_EXTERN QTD_EXPORT int qtd_QSettings_format_const
(void* __this_nativeId)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->format();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSettings::group() const
QTD_EXTERN QTD_EXPORT void qtd_QSettings_group_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->group();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSettings::iniCodec() const
QTD_EXTERN QTD_EXPORT void* qtd_QSettings_iniCodec_const
(void* __this_nativeId)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    QTextCodec*  __qt_return_value = __qt_this->iniCodec();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSettings::isWritable() const
QTD_EXTERN QTD_EXPORT bool qtd_QSettings_isWritable_const
(void* __this_nativeId)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isWritable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSettings::organizationName() const
QTD_EXTERN QTD_EXPORT void qtd_QSettings_organizationName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->organizationName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSettings::remove(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QSettings_remove_string
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->remove((const QString& )__qt_key0);

}

// QSettings::scope() const
QTD_EXTERN QTD_EXPORT int qtd_QSettings_scope__const
(void* __this_nativeId)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->scope();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSettings::setArrayIndex(int i)
QTD_EXTERN QTD_EXPORT void qtd_QSettings_setArrayIndex_int
(void* __this_nativeId,
 int i0)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->setArrayIndex((int )i0);

}

// QSettings::setFallbacksEnabled(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QSettings_setFallbacksEnabled_bool
(void* __this_nativeId,
 bool b0)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->setFallbacksEnabled((bool )b0);

}

// QSettings::setIniCodec(QTextCodec * codec)
QTD_EXTERN QTD_EXPORT void qtd_QSettings_setIniCodec_QTextCodec
(void* __this_nativeId,
 void* codec0)
{
    QTextCodec*  __qt_codec0 = (QTextCodec* ) codec0;
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->setIniCodec((QTextCodec* )__qt_codec0);

}

// QSettings::setIniCodec(const char * codecName)
QTD_EXTERN QTD_EXPORT void qtd_QSettings_setIniCodec_nativepointerchar
(void* __this_nativeId,
 char* codecName0)
{
    const char*  __qt_codecName0 = (const char* ) codecName0;
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->setIniCodec((const char* )__qt_codecName0);

}

// QSettings::setValue(const QString & key, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QSettings_setValue_string_QVariant
(void* __this_nativeId,
 DArray key0,
 QVariant* value1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->setValue((const QString& )__qt_key0, (const QVariant& )__qt_value1);

}

// QSettings::status() const
QTD_EXTERN QTD_EXPORT int qtd_QSettings_status_const
(void* __this_nativeId)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->status();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSettings::sync()
QTD_EXTERN QTD_EXPORT void qtd_QSettings_sync
(void* __this_nativeId)
{
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    __qt_this->sync();

}

// QSettings::value(const QString & key, const QVariant & defaultValue) const
QTD_EXTERN QTD_EXPORT void* qtd_QSettings_value_string_QVariant_const
(void* __this_nativeId,
 DArray key0,
 QVariant* defaultValue1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QVariant __qt_defaultValue1 = defaultValue1 == NULL ? QVariant() : QVariant(*defaultValue1);
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->value((const QString& )__qt_key0, (const QVariant& )__qt_defaultValue1);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QSettings::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QSettings_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QSettings_QtDShell *__qt_this = (QSettings_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSettings::defaultFormat()
QTD_EXTERN QTD_EXPORT int qtd_QSettings_defaultFormat
()
{
    int  __qt_return_value = QSettings_QtDShell::defaultFormat();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSettings::setDefaultFormat(QSettings::Format format)
QTD_EXTERN QTD_EXPORT void qtd_QSettings_setDefaultFormat_Format
(int format0)
{
    QSettings::Format __qt_format0 = (QSettings::Format) format0;
    QSettings_QtDShell::setDefaultFormat((QSettings::Format )__qt_format0);

}

// QSettings::setPath(QSettings::Format format, QSettings::Scope scope_, const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QSettings_setPath_Format_Scope_string
(int format0,
 int scope1,
 DArray path2)
{
    QSettings::Format __qt_format0 = (QSettings::Format) format0;
    QSettings::Scope __qt_scope1 = (QSettings::Scope) scope1;
    QString __qt_path2 = QString::fromUtf8((const char *)path2.ptr, path2.length);
    QSettings_QtDShell::setPath((QSettings::Format )__qt_format0, (QSettings::Scope )__qt_scope1, (const QString& )__qt_path2);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSettings_staticMetaObject() {
    return (void*)&QSettings::staticMetaObject;
}


