#include <QPainterPath>
#include <QVariant>
#include <qbrush.h>
#include <qfont.h>
#include <qmatrix.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qregion.h>
#include <qtransform.h>

#include "QPaintEngineState_shell.h"
#include <iostream>
#include <qpaintengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPaintEngineState_delete(void* nativeId)
{
    delete (QPaintEngineState_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEngineState_destroy(void* nativeId)
{
    call_destructor((QPaintEngineState_QtDShell*)nativeId);
}

QPaintEngineState_QtDShell::QPaintEngineState_QtDShell()
    : QPaintEngineState()
{
}

QPaintEngineState_QtDShell::~QPaintEngineState_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngineState_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QPaintEngineState::()
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngineState_QPaintEngineState
(void *d_ptr)
{
    QPaintEngineState_QtDShell *__qt_this = new QPaintEngineState_QtDShell();
    return (void *) __qt_this;

}

// QPaintEngineState::backgroundBrush() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngineState_backgroundBrush_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->backgroundBrush();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPaintEngineState::backgroundMode() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintEngineState_backgroundMode_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->backgroundMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngineState::brush() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngineState_brush_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->brush();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPaintEngineState::brushNeedsResolving() const
QTD_EXTERN QTD_EXPORT bool qtd_QPaintEngineState_brushNeedsResolving_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->brushNeedsResolving();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngineState::brushOrigin() const
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngineState_brushOrigin_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->brushOrigin();

    *__d_return_value = __qt_return_value;

}

// QPaintEngineState::clipOperation() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintEngineState_clipOperation_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->clipOperation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngineState::clipPath() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngineState_clipPath_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->clipPath();

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPaintEngineState::clipRegion() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngineState_clipRegion_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->clipRegion();

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QPaintEngineState::compositionMode() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintEngineState_compositionMode_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->compositionMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngineState::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngineState_font_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QPaintEngineState::isClipEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QPaintEngineState_isClipEnabled_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isClipEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngineState::matrix() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngineState_matrix_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    QMatrix  __qt_return_value = __qt_this->matrix();

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QPaintEngineState::opacity() const
QTD_EXTERN QTD_EXPORT double qtd_QPaintEngineState_opacity_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->opacity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngineState::painter() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngineState_painter_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    QPainter*  __qt_return_value = __qt_this->painter();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPaintEngineState::pen() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngineState_pen_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    QPen  __qt_return_value = __qt_this->pen();

    void* __d_return_value = (void*) new QPen(__qt_return_value);

    return __d_return_value;
}

// QPaintEngineState::penNeedsResolving() const
QTD_EXTERN QTD_EXPORT bool qtd_QPaintEngineState_penNeedsResolving_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->penNeedsResolving();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngineState::renderHints() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintEngineState_renderHints_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->renderHints();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngineState::state() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintEngineState_state_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->state();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngineState::transform() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngineState_transform_const
(void* __this_nativeId)
{
    QPaintEngineState_QtDShell *__qt_this = (QPaintEngineState_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->transform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QPaintEngine::DirtyFlags  QPaintEngineState_QtDShell::dirtyFlags_getter()
{
    return dirtyFlags;
}

QTD_EXTERN QTD_EXPORT int qtd_QPaintEngineState_dirtyFlags
(void* __this_nativeId){
    QPaintEngineState_QtDShell *__qt_object = (QPaintEngineState_QtDShell *) __this_nativeId;
    QPaintEngine::DirtyFlags __tmp_dirtyFlags = __qt_object->dirtyFlags_getter();
    int __d_return_value = __tmp_dirtyFlags;
    return __d_return_value;
}

void QPaintEngineState_QtDShell::setDirtyFlags_setter(QPaintEngine::DirtyFlags  dirtyFlags0)
{
    this->dirtyFlags = dirtyFlags0;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEngineState_setDirtyFlags_DirtyFlags
(void* __this_nativeId,
 int dirtyFlags0){
    QFlags<QPaintEngine::DirtyFlag> __qt_dirtyFlags0 = (QFlags<QPaintEngine::DirtyFlag>) dirtyFlags0;
    QPaintEngineState_QtDShell *__qt_object = (QPaintEngineState_QtDShell *) __this_nativeId;
    __qt_object->setDirtyFlags_setter(__qt_dirtyFlags0);
}



