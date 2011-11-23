#include <QStringList>
#include <QUrl>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvariant.h>

#include "QMimeData_shell.h"
#include <iostream>
#include <qmimedata.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QMimeDataEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QMimeDataEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QMimeData_createEntity(void *nativeId, void* dId)
{
    new QMimeDataEntity((QObject*)nativeId, dId);
}

QMimeData_QtDShell::QMimeData_QtDShell(void *d_ptr)
    : QMimeData(),
      QObjectLink(this, d_ptr)
{
}

QMimeData_QtDShell::~QMimeData_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QMimeData_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QMimeData::metaObject();
}

int QMimeData_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QMimeData::qt_metacall(_c, _id, _a);
}

int QMimeData_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QMimeData::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QMimeData_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QMimeData_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMimeData_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QMimeData_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QMimeData_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QMimeData_formats_const_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(CORE, QMimeData_formats_const_dispatch)
QStringList  QMimeData_QtDShell::formats() const
{
    QStringList __d_return_value;
    qtd_QMimeData_formats_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(CORE, bool, QMimeData_hasFormat_string_const_dispatch, (void *dId, const unsigned short* mimetype0, int mimetype0_size))
QTD_FUNC(CORE, QMimeData_hasFormat_string_const_dispatch)
bool  QMimeData_QtDShell::hasFormat(const QString&  mimetype0) const
{
    return qtd_QMimeData_hasFormat_string_const_dispatch(QObjectLink::getLink(this)->dId, mimetype0.utf16(), mimetype0.size());
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QMimeData_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QMimeData_initCallBacks(VoidFunc *virts) {
    qtd_QMimeData_formats_const_dispatch = (qtd_QMimeData_formats_const_dispatch_t) virts[0];
    qtd_QMimeData_hasFormat_string_const_dispatch = (qtd_QMimeData_hasFormat_string_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QMimeData_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QMimeData_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QMimeData_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QMimeData_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QMimeData_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QStringList  QMimeData_QtDShell::__override_formats(bool static_call) const
{
    if (static_call) {
        return QMimeData::formats();
    } else {
        return formats();
    }
}

bool  QMimeData_QtDShell::__override_hasFormat(const QString&  mimetype0, bool static_call) const
{
    if (static_call) {
        return QMimeData::hasFormat((const QString& )mimetype0);
    } else {
        return hasFormat((const QString& )mimetype0);
    }
}

void QMimeData_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QMimeData::QMimeData()
QTD_EXTERN QTD_EXPORT void* qtd_QMimeData_QMimeData
(void *d_ptr)
{
    QMimeData_QtDShell *__qt_this = new QMimeData_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QMimeData::clear()
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_clear
(void* __this_nativeId)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QMimeData::colorData() const
QTD_EXTERN QTD_EXPORT void* qtd_QMimeData_colorData_const
(void* __this_nativeId)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->colorData();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QMimeData::data(const QString & mimetype) const
QTD_EXTERN QTD_EXPORT void* qtd_QMimeData_data_string_const
(void* __this_nativeId,
 DArray mimetype0)
{
    QString __qt_mimetype0 = QString::fromUtf8((const char *)mimetype0.ptr, mimetype0.length);
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->data((const QString& )__qt_mimetype0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QMimeData::hasColor() const
QTD_EXTERN QTD_EXPORT bool qtd_QMimeData_hasColor_const
(void* __this_nativeId)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasColor();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMimeData::hasHtml() const
QTD_EXTERN QTD_EXPORT bool qtd_QMimeData_hasHtml_const
(void* __this_nativeId)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasHtml();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMimeData::hasImage() const
QTD_EXTERN QTD_EXPORT bool qtd_QMimeData_hasImage_const
(void* __this_nativeId)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasImage();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMimeData::hasText() const
QTD_EXTERN QTD_EXPORT bool qtd_QMimeData_hasText_const
(void* __this_nativeId)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasText();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMimeData::hasUrls() const
QTD_EXTERN QTD_EXPORT bool qtd_QMimeData_hasUrls_const
(void* __this_nativeId)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasUrls();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMimeData::html() const
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_html_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->html();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QMimeData::imageData() const
QTD_EXTERN QTD_EXPORT void* qtd_QMimeData_imageData_const
(void* __this_nativeId)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->imageData();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QMimeData::removeFormat(const QString & mimetype)
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_removeFormat_string
(void* __this_nativeId,
 DArray mimetype0)
{
    QString __qt_mimetype0 = QString::fromUtf8((const char *)mimetype0.ptr, mimetype0.length);
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    __qt_this->removeFormat((const QString& )__qt_mimetype0);

}

// QMimeData::setColorData(const QVariant & color)
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_setColorData_QVariant
(void* __this_nativeId,
 QVariant* color0)
{
    QVariant __qt_color0 = color0 == NULL ? QVariant() : QVariant(*color0);
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    __qt_this->setColorData((const QVariant& )__qt_color0);

}

// QMimeData::setData(const QString & mimetype, const QByteArray & data)
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_setData_string_QByteArray
(void* __this_nativeId,
 DArray mimetype0,
 void* data1)
{
    QString __qt_mimetype0 = QString::fromUtf8((const char *)mimetype0.ptr, mimetype0.length);
    const QByteArray&  __qt_data1 = (const QByteArray& ) *(QByteArray *)data1;
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    __qt_this->setData((const QString& )__qt_mimetype0, (const QByteArray& )__qt_data1);

}

// QMimeData::setHtml(const QString & html)
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_setHtml_string
(void* __this_nativeId,
 DArray html0)
{
    QString __qt_html0 = QString::fromUtf8((const char *)html0.ptr, html0.length);
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    __qt_this->setHtml((const QString& )__qt_html0);

}

// QMimeData::setImageData(const QVariant & image)
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_setImageData_QVariant
(void* __this_nativeId,
 QVariant* image0)
{
    QVariant __qt_image0 = image0 == NULL ? QVariant() : QVariant(*image0);
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    __qt_this->setImageData((const QVariant& )__qt_image0);

}

// QMimeData::setText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_setText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_text0);

}

// QMimeData::setUrls(const QList<QUrl > & urls)
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_setUrls_QList
(void* __this_nativeId,
 void* urls0)
{
QList<QUrl > __qt_urls0 = (*(QList<QUrl > *)urls0);
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    __qt_this->setUrls((const QList<QUrl >& )__qt_urls0);

}

// QMimeData::text() const
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QMimeData::urls() const
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_urls_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    QList<QUrl >  __qt_return_value = __qt_this->urls();

QList<QUrl > &__d_return_value_tmp = (*(QList<QUrl > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QMimeData::formats() const
QTD_EXTERN QTD_EXPORT void qtd_QMimeData_formats_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_formats(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QMimeData::hasFormat(const QString & mimetype) const
QTD_EXTERN QTD_EXPORT bool qtd_QMimeData_hasFormat_string_const
(void* __this_nativeId,
 DArray mimetype0)
{
    QString __qt_mimetype0 = QString::fromUtf8((const char *)mimetype0.ptr, mimetype0.length);
    QMimeData_QtDShell *__qt_this = (QMimeData_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasFormat((const QString& )__qt_mimetype0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QMimeData_staticMetaObject() {
    return (void*)&QMimeData::staticMetaObject;
}


