#include <QTextCodec>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtranslator.h>
#include <qvariant.h>

#include "QTranslator_shell.h"
#include <iostream>
#include <qtranslator.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QTranslatorEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTranslatorEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTranslator_createEntity(void *nativeId, void* dId)
{
    new QTranslatorEntity((QObject*)nativeId, dId);
}

QTranslator_QtDShell::QTranslator_QtDShell(void *d_ptr, QObject*  parent0)
    : QTranslator(parent0),
      QObjectLink(this, d_ptr)
{
}

QTranslator_QtDShell::~QTranslator_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTranslator_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTranslator::metaObject();
}

int QTranslator_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTranslator::qt_metacall(_c, _id, _a);
}

int QTranslator_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTranslator::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTranslator_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTranslator_QtDShell *__qt_this = (QTranslator_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTranslator_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTranslator_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTranslator_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTranslator_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, bool, QTranslator_isEmpty_const_dispatch, (void *dId))
QTD_FUNC(CORE, QTranslator_isEmpty_const_dispatch)
bool  QTranslator_QtDShell::isEmpty() const
{
    return qtd_QTranslator_isEmpty_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTranslator_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QTranslator_translate_nativepointerchar_nativepointerchar_nativepointerchar_const_dispatch, (void *dId, DArray* ret_str, char* context0, char* sourceText1, char* disambiguation2))
QTD_FUNC(CORE, QTranslator_translate_nativepointerchar_nativepointerchar_nativepointerchar_const_dispatch)
QString  QTranslator_QtDShell::translate(const char*  context0, const char*  sourceText1, const char*  disambiguation2) const
{
    DArray ret_str;
    qtd_QTranslator_translate_nativepointerchar_nativepointerchar_nativepointerchar_const_dispatch(QObjectLink::getLink(this)->dId, &ret_str, (char* )context0, (char* )sourceText1, (char* )disambiguation2);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_EXTERN QTD_EXPORT void qtd_QTranslator_initCallBacks(VoidFunc *virts) {
    qtd_QTranslator_isEmpty_const_dispatch = (qtd_QTranslator_isEmpty_const_dispatch_t) virts[0];
    qtd_QTranslator_translate_nativepointerchar_nativepointerchar_nativepointerchar_const_dispatch = (qtd_QTranslator_translate_nativepointerchar_nativepointerchar_nativepointerchar_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QTranslator_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QTranslator_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTranslator_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTranslator_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTranslator_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QTranslator_QtDShell::__override_isEmpty(bool static_call) const
{
    if (static_call) {
        return QTranslator::isEmpty();
    } else {
        return isEmpty();
    }
}

void QTranslator_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

QString  QTranslator_QtDShell::__override_translate(const char*  context0, const char*  sourceText1, const char*  disambiguation2, bool static_call) const
{
    if (static_call) {
        return QTranslator::translate((const char* )context0, (const char* )sourceText1, (const char* )disambiguation2);
    } else {
        return translate((const char* )context0, (const char* )sourceText1, (const char* )disambiguation2);
    }
}

// ---externC---
// QTranslator::QTranslator(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTranslator_QTranslator_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QTranslator_QtDShell *__qt_this = new QTranslator_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QTranslator::load(const QString & filename, const QString & directory, const QString & search_delimiters, const QString & suffix)
QTD_EXTERN QTD_EXPORT bool qtd_QTranslator_load_string_string_string_string
(void* __this_nativeId,
 DArray filename0,
 DArray directory1,
 DArray search_delimiters2,
 DArray suffix3)
{
    QString __qt_filename0 = QString::fromUtf8((const char *)filename0.ptr, filename0.length);
    QString __qt_directory1 = QString::fromUtf8((const char *)directory1.ptr, directory1.length);
    QString __qt_search_delimiters2 = QString::fromUtf8((const char *)search_delimiters2.ptr, search_delimiters2.length);
    QString __qt_suffix3 = QString::fromUtf8((const char *)suffix3.ptr, suffix3.length);
    QTranslator_QtDShell *__qt_this = (QTranslator_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->load((const QString& )__qt_filename0, (const QString& )__qt_directory1, (const QString& )__qt_search_delimiters2, (const QString& )__qt_suffix3);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTranslator::load(const unsigned char * data, int len)
QTD_EXTERN QTD_EXPORT bool qtd_QTranslator_load_nativepointerubyte_int
(void* __this_nativeId,
 unsigned char* data0,
 int len1)
{
    const unsigned char*  __qt_data0 = (const unsigned char* ) data0;
    QTranslator_QtDShell *__qt_this = (QTranslator_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->load((const unsigned char* )__qt_data0, (int )len1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTranslator::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QTranslator_isEmpty_const
(void* __this_nativeId)
{
    QTranslator_QtDShell *__qt_this = (QTranslator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isEmpty(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTranslator::translate(const char * context, const char * sourceText, const char * disambiguation) const
QTD_EXTERN QTD_EXPORT void qtd_QTranslator_translate_nativepointerchar_nativepointerchar_nativepointerchar_const
(void* __this_nativeId,
 void* __d_return_value,
 char* context0,
 char* sourceText1,
 char* disambiguation2)
{
    
    const char* __qt_context0 = context0;
    
    
    const char* __qt_sourceText1 = sourceText1;
    
    
    const char* __qt_disambiguation2 = disambiguation2;
    
    QTranslator_QtDShell *__qt_this = (QTranslator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_translate((const char* )__qt_context0, (const char* )__qt_sourceText1, (const char* )__qt_disambiguation2, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTranslator_staticMetaObject() {
    return (void*)&QTranslator::staticMetaObject;
}


