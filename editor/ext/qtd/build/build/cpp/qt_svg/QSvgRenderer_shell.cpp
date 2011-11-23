#include <QByteArray>
#include <QMatrix>
#include <QRectF>
#include <QSize>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpainter.h>
#include <qvariant.h>
#include <qxmlstream.h>

#include "QSvgRenderer_shell.h"
#include <iostream>
#include <qsvgrenderer.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"
#include "ArrayOps_qt_svg.h"

class QSvgRendererEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSvgRendererEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_createEntity(void *nativeId, void* dId)
{
    new QSvgRendererEntity((QObject*)nativeId, dId);
}

QSvgRenderer_QtDShell::QSvgRenderer_QtDShell(void *d_ptr, QObject*  parent0)
    : QSvgRenderer(parent0),
      QObjectLink(this, d_ptr)
{
}

QSvgRenderer_QtDShell::QSvgRenderer_QtDShell(void *d_ptr, QXmlStreamReader*  contents0, QObject*  parent1)
    : QSvgRenderer(contents0, parent1),
      QObjectLink(this, d_ptr)
{
}

QSvgRenderer_QtDShell::QSvgRenderer_QtDShell(void *d_ptr, const QByteArray&  contents0, QObject*  parent1)
    : QSvgRenderer(contents0, parent1),
      QObjectLink(this, d_ptr)
{
}

QSvgRenderer_QtDShell::QSvgRenderer_QtDShell(void *d_ptr, const QString&  filename0, QObject*  parent1)
    : QSvgRenderer(filename0, parent1),
      QObjectLink(this, d_ptr)
{
}

QSvgRenderer_QtDShell::~QSvgRenderer_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(SVG, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(SVG, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QSvgRenderer_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QSvgRenderer::metaObject();
}

int QSvgRenderer_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QSvgRenderer::qt_metacall(_c, _id, _a);
}

int QSvgRenderer_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QSvgRenderer::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QSvgRenderer_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(SVG, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QSvgRenderer_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(SVG, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSvgRenderer_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(SVG, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QSvgRenderer_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(SVG, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QSvgRenderer_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(SVG, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QSvgRenderer_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QSvgRenderer_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QSvgRenderer_QtDShell::__public_repaintNeeded()
{
    QSvgRenderer::repaintNeeded();
}

// Write virtual function overries used to decide on static/virtual calls
void QSvgRenderer_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QSvgRenderer_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QSvgRenderer_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QSvgRenderer_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QSvgRenderer_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QSvgRenderer::repaintNeeded()
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_repaintNeeded
(void* __this_nativeId)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    __qt_this->__public_repaintNeeded();

}

// ---externC---
// QSvgRenderer::QSvgRenderer(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSvgRenderer_QSvgRenderer_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QSvgRenderer_QtDShell *__qt_this = new QSvgRenderer_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QSvgRenderer::QSvgRenderer(QXmlStreamReader * contents, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSvgRenderer_QSvgRenderer_QXmlStreamReader_QObject
(void *d_ptr,
 void* contents0,
 void* parent1)
{
    QXmlStreamReader*  __qt_contents0 = (QXmlStreamReader* ) contents0;
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QSvgRenderer_QtDShell *__qt_this = new QSvgRenderer_QtDShell(d_ptr, (QXmlStreamReader* )__qt_contents0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QSvgRenderer::QSvgRenderer(const QByteArray & contents, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSvgRenderer_QSvgRenderer_QByteArray_QObject
(void *d_ptr,
 void* contents0,
 void* parent1)
{
    const QByteArray&  __qt_contents0 = (const QByteArray& ) *(QByteArray *)contents0;
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QSvgRenderer_QtDShell *__qt_this = new QSvgRenderer_QtDShell(d_ptr, (const QByteArray& )__qt_contents0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QSvgRenderer::QSvgRenderer(const QString & filename, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSvgRenderer_QSvgRenderer_string_QObject
(void *d_ptr,
 DArray filename0,
 void* parent1)
{
    QString __qt_filename0 = QString::fromUtf8((const char *)filename0.ptr, filename0.length);
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QSvgRenderer_QtDShell *__qt_this = new QSvgRenderer_QtDShell(d_ptr, (const QString& )__qt_filename0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QSvgRenderer::animated() const
QTD_EXTERN QTD_EXPORT bool qtd_QSvgRenderer_animated_const
(void* __this_nativeId)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->animated();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgRenderer::animationDuration() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgRenderer_animationDuration_const
(void* __this_nativeId)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->animationDuration();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgRenderer::boundsOnElement(const QString & id) const
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_boundsOnElement_string_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 DArray id0)
{
    QString __qt_id0 = QString::fromUtf8((const char *)id0.ptr, id0.length);
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->boundsOnElement((const QString& )__qt_id0);

    *__d_return_value = __qt_return_value;

}

// QSvgRenderer::currentFrame() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgRenderer_currentFrame_const
(void* __this_nativeId)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentFrame();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgRenderer::defaultSize() const
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_defaultSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->defaultSize();

    *__d_return_value = __qt_return_value;

}

// QSvgRenderer::elementExists(const QString & id) const
QTD_EXTERN QTD_EXPORT bool qtd_QSvgRenderer_elementExists_string_const
(void* __this_nativeId,
 DArray id0)
{
    QString __qt_id0 = QString::fromUtf8((const char *)id0.ptr, id0.length);
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->elementExists((const QString& )__qt_id0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgRenderer::framesPerSecond() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgRenderer_framesPerSecond_const
(void* __this_nativeId)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->framesPerSecond();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgRenderer::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QSvgRenderer_isValid_const
(void* __this_nativeId)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgRenderer::load(QXmlStreamReader * contents)
QTD_EXTERN QTD_EXPORT bool qtd_QSvgRenderer_load_QXmlStreamReader
(void* __this_nativeId,
 void* contents0)
{
    QXmlStreamReader*  __qt_contents0 = (QXmlStreamReader* ) contents0;
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->load((QXmlStreamReader* )__qt_contents0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgRenderer::load(const QByteArray & contents)
QTD_EXTERN QTD_EXPORT bool qtd_QSvgRenderer_load_QByteArray
(void* __this_nativeId,
 void* contents0)
{
    const QByteArray&  __qt_contents0 = (const QByteArray& ) *(QByteArray *)contents0;
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->load((const QByteArray& )__qt_contents0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgRenderer::load(const QString & filename)
QTD_EXTERN QTD_EXPORT bool qtd_QSvgRenderer_load_string
(void* __this_nativeId,
 DArray filename0)
{
    QString __qt_filename0 = QString::fromUtf8((const char *)filename0.ptr, filename0.length);
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->load((const QString& )__qt_filename0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgRenderer::matrixForElement(const QString & id) const
QTD_EXTERN QTD_EXPORT void* qtd_QSvgRenderer_matrixForElement_string_const
(void* __this_nativeId,
 DArray id0)
{
    QString __qt_id0 = QString::fromUtf8((const char *)id0.ptr, id0.length);
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    QMatrix  __qt_return_value = __qt_this->matrixForElement((const QString& )__qt_id0);

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QSvgRenderer::render(QPainter * p)
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_render_QPainter
(void* __this_nativeId,
 void* p0)
{
    QPainter*  __qt_p0 = (QPainter* ) p0;
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    __qt_this->render((QPainter* )__qt_p0);

}

// QSvgRenderer::render(QPainter * p, const QRectF & bounds)
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_render_QPainter_QRectF
(void* __this_nativeId,
 void* p0,
 QRectF bounds1)
{
    QPainter*  __qt_p0 = (QPainter* ) p0;
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    __qt_this->render((QPainter* )__qt_p0, (const QRectF& )bounds1);

}

// QSvgRenderer::render(QPainter * p, const QString & elementId, const QRectF & bounds)
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_render_QPainter_string_QRectF
(void* __this_nativeId,
 void* p0,
 DArray elementId1,
 QRectF bounds2)
{
    QPainter*  __qt_p0 = (QPainter* ) p0;
    QString __qt_elementId1 = QString::fromUtf8((const char *)elementId1.ptr, elementId1.length);
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    __qt_this->render((QPainter* )__qt_p0, (const QString& )__qt_elementId1, (const QRectF& )bounds2);

}

// QSvgRenderer::setCurrentFrame(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_setCurrentFrame_int
(void* __this_nativeId,
 int arg__1)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    __qt_this->setCurrentFrame((int )arg__1);

}

// QSvgRenderer::setFramesPerSecond(int num)
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_setFramesPerSecond_int
(void* __this_nativeId,
 int num0)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    __qt_this->setFramesPerSecond((int )num0);

}

// QSvgRenderer::setViewBox(const QRect & viewbox)
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_setViewBox_QRect
(void* __this_nativeId,
 QRect viewbox0)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    __qt_this->setViewBox((const QRect& )viewbox0);

}

// QSvgRenderer::setViewBox(const QRectF & viewbox)
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_setViewBox_QRectF
(void* __this_nativeId,
 QRectF viewbox0)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    __qt_this->setViewBox((const QRectF& )viewbox0);

}

// QSvgRenderer::viewBox() const
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_viewBox_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->viewBox();

    *__d_return_value = __qt_return_value;

}

// QSvgRenderer::viewBoxF() const
QTD_EXTERN QTD_EXPORT void qtd_QSvgRenderer_viewBoxF_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QSvgRenderer_QtDShell *__qt_this = (QSvgRenderer_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->viewBoxF();

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSvgRenderer_staticMetaObject() {
    return (void*)&QSvgRenderer::staticMetaObject;
}


