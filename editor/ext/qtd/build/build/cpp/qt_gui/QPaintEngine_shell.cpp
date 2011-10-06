#include <QVarLengthArray>
#include <QVariant>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpixmap.h>
#include <qregion.h>

#include "QPaintEngine_shell.h"
#include <iostream>
#include <qpaintengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_delete(void* nativeId)
{
    delete (QPaintEngine_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_destroy(void* nativeId)
{
    call_destructor((QPaintEngine_QtDShell*)nativeId);
}

QPaintEngine_QtDShell::QPaintEngine_QtDShell(void *d_ptr, QPaintEngine::PaintEngineFeatures  features0)
    : QPaintEngine(features0),
      QtdObjectLink(d_ptr)
{
}

QPaintEngine_QtDShell::~QPaintEngine_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QPaintEngine_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QPaintEngine*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, bool, QPaintEngine_begin_QPaintDevice_dispatch, (void *dId, void* pdev0))
QTD_FUNC(GUI, QPaintEngine_begin_QPaintDevice_dispatch)
bool  QPaintEngine_QtDShell::begin(QPaintDevice*  pdev0)
{
    return qtd_QPaintEngine_begin_QPaintDevice_dispatch(this->dId, (QPaintDevice* )pdev0);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_coordinateOffset_const_dispatch, (void *dId, QPoint *__d_return_value))
QTD_FUNC(GUI, QPaintEngine_coordinateOffset_const_dispatch)
QPoint  QPaintEngine_QtDShell::coordinateOffset() const
{
    QPoint __d_return_value;
    qtd_QPaintEngine_coordinateOffset_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawEllipse_QRect_dispatch, (void *dId, QRect* r0))
QTD_FUNC(GUI, QPaintEngine_drawEllipse_QRect_dispatch)
void QPaintEngine_QtDShell::drawEllipse(const QRect&  r0)
{
    qtd_QPaintEngine_drawEllipse_QRect_dispatch(this->dId, &(QRect& )r0);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawEllipse_QRectF_dispatch, (void *dId, QRectF* r0))
QTD_FUNC(GUI, QPaintEngine_drawEllipse_QRectF_dispatch)
void QPaintEngine_QtDShell::drawEllipse(const QRectF&  r0)
{
    qtd_QPaintEngine_drawEllipse_QRectF_dispatch(this->dId, &(QRectF& )r0);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawImage_QRectF_QImage_QRectF_ImageConversionFlags_dispatch, (void *dId, QRectF* r0, void* pm1, QRectF* sr2, int flags3))
QTD_FUNC(GUI, QPaintEngine_drawImage_QRectF_QImage_QRectF_ImageConversionFlags_dispatch)
void QPaintEngine_QtDShell::drawImage(const QRectF&  r0, const QImage&  pm1, const QRectF&  sr2, Qt::ImageConversionFlags  flags3)
{
    qtd_QPaintEngine_drawImage_QRectF_QImage_QRectF_ImageConversionFlags_dispatch(this->dId, &(QRectF& )r0, &(QImage& )pm1, &(QRectF& )sr2, (Qt::ImageConversionFlags )flags3);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawLines_nativepointerQLine_int_dispatch, (void *dId, QLine* lines0, int lineCount1))
QTD_FUNC(GUI, QPaintEngine_drawLines_nativepointerQLine_int_dispatch)
void QPaintEngine_QtDShell::drawLines(const QLine*  lines0, int  lineCount1)
{
    qtd_QPaintEngine_drawLines_nativepointerQLine_int_dispatch(this->dId, (QLine* )lines0, (int )lineCount1);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawLines_nativepointerQLineF_int_dispatch, (void *dId, QLineF* lines0, int lineCount1))
QTD_FUNC(GUI, QPaintEngine_drawLines_nativepointerQLineF_int_dispatch)
void QPaintEngine_QtDShell::drawLines(const QLineF*  lines0, int  lineCount1)
{
    qtd_QPaintEngine_drawLines_nativepointerQLineF_int_dispatch(this->dId, (QLineF* )lines0, (int )lineCount1);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawPath_QPainterPath_dispatch, (void *dId, void* path0))
QTD_FUNC(GUI, QPaintEngine_drawPath_QPainterPath_dispatch)
void QPaintEngine_QtDShell::drawPath(const QPainterPath&  path0)
{
    qtd_QPaintEngine_drawPath_QPainterPath_dispatch(this->dId, &(QPainterPath& )path0);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawPixmap_QRectF_QPixmap_QRectF_dispatch, (void *dId, QRectF* r0, void* pm1, QRectF* sr2))
QTD_FUNC(GUI, QPaintEngine_drawPixmap_QRectF_QPixmap_QRectF_dispatch)
void QPaintEngine_QtDShell::drawPixmap(const QRectF&  r0, const QPixmap&  pm1, const QRectF&  sr2)
{
    qtd_QPaintEngine_drawPixmap_QRectF_QPixmap_QRectF_dispatch(this->dId, &(QRectF& )r0, &(QPixmap& )pm1, &(QRectF& )sr2);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawPoints_nativepointerQPoint_int_dispatch, (void *dId, QPoint* points0, int pointCount1))
QTD_FUNC(GUI, QPaintEngine_drawPoints_nativepointerQPoint_int_dispatch)
void QPaintEngine_QtDShell::drawPoints(const QPoint*  points0, int  pointCount1)
{
    qtd_QPaintEngine_drawPoints_nativepointerQPoint_int_dispatch(this->dId, (QPoint* )points0, (int )pointCount1);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawPoints_nativepointerQPointF_int_dispatch, (void *dId, QPointF* points0, int pointCount1))
QTD_FUNC(GUI, QPaintEngine_drawPoints_nativepointerQPointF_int_dispatch)
void QPaintEngine_QtDShell::drawPoints(const QPointF*  points0, int  pointCount1)
{
    qtd_QPaintEngine_drawPoints_nativepointerQPointF_int_dispatch(this->dId, (QPointF* )points0, (int )pointCount1);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawPolygon_nativepointerQPoint_int_PolygonDrawMode_dispatch, (void *dId, QPoint* points0, int pointCount1, int mode2))
QTD_FUNC(GUI, QPaintEngine_drawPolygon_nativepointerQPoint_int_PolygonDrawMode_dispatch)
void QPaintEngine_QtDShell::drawPolygon(const QPoint*  points0, int  pointCount1, QPaintEngine::PolygonDrawMode  mode2)
{
    qtd_QPaintEngine_drawPolygon_nativepointerQPoint_int_PolygonDrawMode_dispatch(this->dId, (QPoint* )points0, (int )pointCount1, (QPaintEngine::PolygonDrawMode )mode2);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawPolygon_nativepointerQPointF_int_PolygonDrawMode_dispatch, (void *dId, QPointF* points0, int pointCount1, int mode2))
QTD_FUNC(GUI, QPaintEngine_drawPolygon_nativepointerQPointF_int_PolygonDrawMode_dispatch)
void QPaintEngine_QtDShell::drawPolygon(const QPointF*  points0, int  pointCount1, QPaintEngine::PolygonDrawMode  mode2)
{
    qtd_QPaintEngine_drawPolygon_nativepointerQPointF_int_PolygonDrawMode_dispatch(this->dId, (QPointF* )points0, (int )pointCount1, (QPaintEngine::PolygonDrawMode )mode2);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawRects_nativepointerQRect_int_dispatch, (void *dId, QRect* rects0, int rectCount1))
QTD_FUNC(GUI, QPaintEngine_drawRects_nativepointerQRect_int_dispatch)
void QPaintEngine_QtDShell::drawRects(const QRect*  rects0, int  rectCount1)
{
    qtd_QPaintEngine_drawRects_nativepointerQRect_int_dispatch(this->dId, (QRect* )rects0, (int )rectCount1);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawRects_nativepointerQRectF_int_dispatch, (void *dId, QRectF* rects0, int rectCount1))
QTD_FUNC(GUI, QPaintEngine_drawRects_nativepointerQRectF_int_dispatch)
void QPaintEngine_QtDShell::drawRects(const QRectF*  rects0, int  rectCount1)
{
    qtd_QPaintEngine_drawRects_nativepointerQRectF_int_dispatch(this->dId, (QRectF* )rects0, (int )rectCount1);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawTextItem_QPointF_QTextItem_dispatch, (void *dId, QPointF* p0, void* textItem1))
QTD_FUNC(GUI, QPaintEngine_drawTextItem_QPointF_QTextItem_dispatch)
void QPaintEngine_QtDShell::drawTextItem(const QPointF&  p0, const QTextItem&  textItem1)
{
    qtd_QPaintEngine_drawTextItem_QPointF_QTextItem_dispatch(this->dId, &(QPointF& )p0, &(QTextItem& )textItem1);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_drawTiledPixmap_QRectF_QPixmap_QPointF_dispatch, (void *dId, QRectF* r0, void* pixmap1, QPointF* s2))
QTD_FUNC(GUI, QPaintEngine_drawTiledPixmap_QRectF_QPixmap_QPointF_dispatch)
void QPaintEngine_QtDShell::drawTiledPixmap(const QRectF&  r0, const QPixmap&  pixmap1, const QPointF&  s2)
{
    qtd_QPaintEngine_drawTiledPixmap_QRectF_QPixmap_QPointF_dispatch(this->dId, &(QRectF& )r0, &(QPixmap& )pixmap1, &(QPointF& )s2);
}

QTD_FUNC_DECL(GUI, bool, QPaintEngine_end_dispatch, (void *dId))
QTD_FUNC(GUI, QPaintEngine_end_dispatch)
bool  QPaintEngine_QtDShell::end()
{
    return qtd_QPaintEngine_end_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QPaintEngine_type_const_dispatch, (void *dId))
QTD_FUNC(GUI, QPaintEngine_type_const_dispatch)
QPaintEngine::Type  QPaintEngine_QtDShell::type() const
{
    return (QPaintEngine::Type) qtd_QPaintEngine_type_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QPaintEngine_updateState_QPaintEngineState_dispatch, (void *dId, void* state0))
QTD_FUNC(GUI, QPaintEngine_updateState_QPaintEngineState_dispatch)
void QPaintEngine_QtDShell::updateState(const QPaintEngineState&  state0)
{
    qtd_QPaintEngine_updateState_QPaintEngineState_dispatch(this->dId, &(QPaintEngineState& )state0);
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_initCallBacks(VoidFunc *virts) {
    qtd_QPaintEngine_begin_QPaintDevice_dispatch = (qtd_QPaintEngine_begin_QPaintDevice_dispatch_t) virts[0];
    qtd_QPaintEngine_coordinateOffset_const_dispatch = (qtd_QPaintEngine_coordinateOffset_const_dispatch_t) virts[1];
    qtd_QPaintEngine_drawEllipse_QRect_dispatch = (qtd_QPaintEngine_drawEllipse_QRect_dispatch_t) virts[2];
    qtd_QPaintEngine_drawEllipse_QRectF_dispatch = (qtd_QPaintEngine_drawEllipse_QRectF_dispatch_t) virts[3];
    qtd_QPaintEngine_drawImage_QRectF_QImage_QRectF_ImageConversionFlags_dispatch = (qtd_QPaintEngine_drawImage_QRectF_QImage_QRectF_ImageConversionFlags_dispatch_t) virts[4];
    qtd_QPaintEngine_drawLines_nativepointerQLine_int_dispatch = (qtd_QPaintEngine_drawLines_nativepointerQLine_int_dispatch_t) virts[5];
    qtd_QPaintEngine_drawLines_nativepointerQLineF_int_dispatch = (qtd_QPaintEngine_drawLines_nativepointerQLineF_int_dispatch_t) virts[6];
    qtd_QPaintEngine_drawPath_QPainterPath_dispatch = (qtd_QPaintEngine_drawPath_QPainterPath_dispatch_t) virts[7];
    qtd_QPaintEngine_drawPixmap_QRectF_QPixmap_QRectF_dispatch = (qtd_QPaintEngine_drawPixmap_QRectF_QPixmap_QRectF_dispatch_t) virts[8];
    qtd_QPaintEngine_drawPoints_nativepointerQPoint_int_dispatch = (qtd_QPaintEngine_drawPoints_nativepointerQPoint_int_dispatch_t) virts[9];
    qtd_QPaintEngine_drawPoints_nativepointerQPointF_int_dispatch = (qtd_QPaintEngine_drawPoints_nativepointerQPointF_int_dispatch_t) virts[10];
    qtd_QPaintEngine_drawPolygon_nativepointerQPoint_int_PolygonDrawMode_dispatch = (qtd_QPaintEngine_drawPolygon_nativepointerQPoint_int_PolygonDrawMode_dispatch_t) virts[11];
    qtd_QPaintEngine_drawPolygon_nativepointerQPointF_int_PolygonDrawMode_dispatch = (qtd_QPaintEngine_drawPolygon_nativepointerQPointF_int_PolygonDrawMode_dispatch_t) virts[12];
    qtd_QPaintEngine_drawRects_nativepointerQRect_int_dispatch = (qtd_QPaintEngine_drawRects_nativepointerQRect_int_dispatch_t) virts[13];
    qtd_QPaintEngine_drawRects_nativepointerQRectF_int_dispatch = (qtd_QPaintEngine_drawRects_nativepointerQRectF_int_dispatch_t) virts[14];
    qtd_QPaintEngine_drawTextItem_QPointF_QTextItem_dispatch = (qtd_QPaintEngine_drawTextItem_QPointF_QTextItem_dispatch_t) virts[15];
    qtd_QPaintEngine_drawTiledPixmap_QRectF_QPixmap_QPointF_dispatch = (qtd_QPaintEngine_drawTiledPixmap_QRectF_QPixmap_QPointF_dispatch_t) virts[16];
    qtd_QPaintEngine_end_dispatch = (qtd_QPaintEngine_end_dispatch_t) virts[17];
    qtd_QPaintEngine_type_const_dispatch = (qtd_QPaintEngine_type_const_dispatch_t) virts[18];
    qtd_QPaintEngine_updateState_QPaintEngineState_dispatch = (qtd_QPaintEngine_updateState_QPaintEngineState_dispatch_t) virts[19];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
bool  QPaintEngine_QtDShell::__override_begin(QPaintDevice*  pdev0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return begin((QPaintDevice* )pdev0);
    }
}

QPoint  QPaintEngine_QtDShell::__override_coordinateOffset(bool static_call) const
{
    if (static_call) {
        return QPaintEngine::coordinateOffset();
    } else {
        return coordinateOffset();
    }
}

void QPaintEngine_QtDShell::__override_drawEllipse(const QRect&  r0, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawEllipse((const QRect& )r0);
    } else {
        drawEllipse((const QRect& )r0);
    }
}

void QPaintEngine_QtDShell::__override_drawEllipse(const QRectF&  r0, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawEllipse((const QRectF& )r0);
    } else {
        drawEllipse((const QRectF& )r0);
    }
}

void QPaintEngine_QtDShell::__override_drawImage(const QRectF&  r0, const QImage&  pm1, const QRectF&  sr2, int  flags3, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawImage((const QRectF& )r0, (const QImage& )pm1, (const QRectF& )sr2, (Qt::ImageConversionFlags )flags3);
    } else {
        drawImage((const QRectF& )r0, (const QImage& )pm1, (const QRectF& )sr2, (Qt::ImageConversionFlags )flags3);
    }
}

void QPaintEngine_QtDShell::__override_drawLines(const QLine*  lines0, int  lineCount1, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawLines((const QLine* )lines0, (int )lineCount1);
    } else {
        drawLines((const QLine* )lines0, (int )lineCount1);
    }
}

void QPaintEngine_QtDShell::__override_drawLines(const QLineF*  lines0, int  lineCount1, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawLines((const QLineF* )lines0, (int )lineCount1);
    } else {
        drawLines((const QLineF* )lines0, (int )lineCount1);
    }
}

void QPaintEngine_QtDShell::__override_drawPath(const QPainterPath&  path0, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawPath((const QPainterPath& )path0);
    } else {
        drawPath((const QPainterPath& )path0);
    }
}

void QPaintEngine_QtDShell::__override_drawPixmap(const QRectF&  r0, const QPixmap&  pm1, const QRectF&  sr2, bool static_call)
{
    if (static_call) {
        return;
    } else {
        drawPixmap((const QRectF& )r0, (const QPixmap& )pm1, (const QRectF& )sr2);
    }
}

void QPaintEngine_QtDShell::__override_drawPoints(const QPoint*  points0, int  pointCount1, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawPoints((const QPoint* )points0, (int )pointCount1);
    } else {
        drawPoints((const QPoint* )points0, (int )pointCount1);
    }
}

void QPaintEngine_QtDShell::__override_drawPoints(const QPointF*  points0, int  pointCount1, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawPoints((const QPointF* )points0, (int )pointCount1);
    } else {
        drawPoints((const QPointF* )points0, (int )pointCount1);
    }
}

void QPaintEngine_QtDShell::__override_drawPolygon(const QPoint*  points0, int  pointCount1, int  mode2, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawPolygon((const QPoint* )points0, (int )pointCount1, (QPaintEngine::PolygonDrawMode )mode2);
    } else {
        drawPolygon((const QPoint* )points0, (int )pointCount1, (QPaintEngine::PolygonDrawMode )mode2);
    }
}

void QPaintEngine_QtDShell::__override_drawPolygon(const QPointF*  points0, int  pointCount1, int  mode2, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawPolygon((const QPointF* )points0, (int )pointCount1, (QPaintEngine::PolygonDrawMode )mode2);
    } else {
        drawPolygon((const QPointF* )points0, (int )pointCount1, (QPaintEngine::PolygonDrawMode )mode2);
    }
}

void QPaintEngine_QtDShell::__override_drawRects(const QRect*  rects0, int  rectCount1, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawRects((const QRect* )rects0, (int )rectCount1);
    } else {
        drawRects((const QRect* )rects0, (int )rectCount1);
    }
}

void QPaintEngine_QtDShell::__override_drawRects(const QRectF*  rects0, int  rectCount1, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawRects((const QRectF* )rects0, (int )rectCount1);
    } else {
        drawRects((const QRectF* )rects0, (int )rectCount1);
    }
}

void QPaintEngine_QtDShell::__override_drawTextItem(const QPointF&  p0, const QTextItem&  textItem1, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawTextItem((const QPointF& )p0, (const QTextItem& )textItem1);
    } else {
        drawTextItem((const QPointF& )p0, (const QTextItem& )textItem1);
    }
}

void QPaintEngine_QtDShell::__override_drawTiledPixmap(const QRectF&  r0, const QPixmap&  pixmap1, const QPointF&  s2, bool static_call)
{
    if (static_call) {
        QPaintEngine::drawTiledPixmap((const QRectF& )r0, (const QPixmap& )pixmap1, (const QPointF& )s2);
    } else {
        drawTiledPixmap((const QRectF& )r0, (const QPixmap& )pixmap1, (const QPointF& )s2);
    }
}

bool  QPaintEngine_QtDShell::__override_end(bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return end();
    }
}

int  QPaintEngine_QtDShell::__override_type(bool static_call) const
{
    if (static_call) {
        return QPaintEngine::Type(0);
    } else {
        return type();
    }
}

void QPaintEngine_QtDShell::__override_updateState(const QPaintEngineState&  state0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        updateState((const QPaintEngineState& )state0);
    }
}

// ---externC---
// QPaintEngine::QPaintEngine(QFlags<QPaintEngine::PaintEngineFeature> features)
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngine_QPaintEngine_PaintEngineFeatures
(void *d_ptr,
 int features0)
{
    QFlags<QPaintEngine::PaintEngineFeature> __qt_features0 = (QFlags<QPaintEngine::PaintEngineFeature>) features0;
    QPaintEngine_QtDShell *__qt_this = new QPaintEngine_QtDShell(d_ptr, (QPaintEngine::PaintEngineFeatures )__qt_features0);
    return (void *) __qt_this;

}

// QPaintEngine::clearDirty(QFlags<QPaintEngine::DirtyFlag> df)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_clearDirty_DirtyFlags
(void* __this_nativeId,
 int df0)
{
    QFlags<QPaintEngine::DirtyFlag> __qt_df0 = (QFlags<QPaintEngine::DirtyFlag>) df0;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    __qt_this->clearDirty((QPaintEngine::DirtyFlags )__qt_df0);

}

// QPaintEngine::hasFeature(QFlags<QPaintEngine::PaintEngineFeature> feature) const
QTD_EXTERN QTD_EXPORT bool qtd_QPaintEngine_hasFeature_PaintEngineFeatures_const
(void* __this_nativeId,
 int feature0)
{
    QFlags<QPaintEngine::PaintEngineFeature> __qt_feature0 = (QFlags<QPaintEngine::PaintEngineFeature>) feature0;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFeature((QPaintEngine::PaintEngineFeatures )__qt_feature0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngine::isActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QPaintEngine_isActive_const
(void* __this_nativeId)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngine::isExtended() const
QTD_EXTERN QTD_EXPORT bool qtd_QPaintEngine_isExtended_const
(void* __this_nativeId)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isExtended();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngine::paintDevice() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngine_paintDevice_const
(void* __this_nativeId)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    QPaintDevice*  __qt_return_value = __qt_this->paintDevice();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPaintEngine::painter() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngine_painter_const
(void* __this_nativeId)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    QPainter*  __qt_return_value = __qt_this->painter();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPaintEngine::setActive(bool newState)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_setActive_bool
(void* __this_nativeId,
 bool newState0)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    __qt_this->setActive((bool )newState0);

}

// QPaintEngine::setDirty(QFlags<QPaintEngine::DirtyFlag> df)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_setDirty_DirtyFlags
(void* __this_nativeId,
 int df0)
{
    QFlags<QPaintEngine::DirtyFlag> __qt_df0 = (QFlags<QPaintEngine::DirtyFlag>) df0;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    __qt_this->setDirty((QPaintEngine::DirtyFlags )__qt_df0);

}

// QPaintEngine::setSystemClip(const QRegion & baseClip)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_setSystemClip_QRegion
(void* __this_nativeId,
 void* baseClip0)
{
    const QRegion&  __qt_baseClip0 = (const QRegion& ) *(QRegion *)baseClip0;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    __qt_this->setSystemClip((const QRegion& )__qt_baseClip0);

}

// QPaintEngine::setSystemRect(const QRect & rect)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_setSystemRect_QRect
(void* __this_nativeId,
 QRect rect0)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    __qt_this->setSystemRect((const QRect& )rect0);

}

// QPaintEngine::syncState()
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_syncState
(void* __this_nativeId)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    __qt_this->syncState();

}

// QPaintEngine::systemClip() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEngine_systemClip_const
(void* __this_nativeId)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->systemClip();

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QPaintEngine::systemRect() const
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_systemRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->systemRect();

    *__d_return_value = __qt_return_value;

}

// QPaintEngine::testDirty(QFlags<QPaintEngine::DirtyFlag> df)
QTD_EXTERN QTD_EXPORT bool qtd_QPaintEngine_testDirty_DirtyFlags
(void* __this_nativeId,
 int df0)
{
    QFlags<QPaintEngine::DirtyFlag> __qt_df0 = (QFlags<QPaintEngine::DirtyFlag>) df0;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->testDirty((QPaintEngine::DirtyFlags )__qt_df0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngine::begin(QPaintDevice * pdev)
QTD_EXTERN QTD_EXPORT bool qtd_QPaintEngine_begin_QPaintDevice
(void* __this_nativeId,
 void* pdev0)
{
    QPaintDevice*  __qt_pdev0 = (QPaintDevice* ) pdev0;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_begin((QPaintDevice* )__qt_pdev0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngine::coordinateOffset() const
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_coordinateOffset_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    QPoint  __qt_return_value = __qt_this->__override_coordinateOffset(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QPaintEngine::drawEllipse(const QRect & r)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawEllipse_QRect
(void* __this_nativeId,
 QRect r0)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawEllipse((const QRect& )r0, __do_static_call);

}

// QPaintEngine::drawEllipse(const QRectF & r)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawEllipse_QRectF
(void* __this_nativeId,
 QRectF r0)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawEllipse((const QRectF& )r0, __do_static_call);

}

// QPaintEngine::drawImage(const QRectF & r, const QImage & pm, const QRectF & sr, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawImage_QRectF_QImage_QRectF_ImageConversionFlags
(void* __this_nativeId,
 QRectF r0,
 void* pm1,
 QRectF sr2,
 int flags3)
{
    const QImage&  __qt_pm1 = (const QImage& ) *(QImage *)pm1;
    QFlags<Qt::ImageConversionFlag> __qt_flags3 = (QFlags<Qt::ImageConversionFlag>) flags3;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawImage((const QRectF& )r0, (const QImage& )__qt_pm1, (const QRectF& )sr2, (Qt::ImageConversionFlags )__qt_flags3, __do_static_call);

}

// QPaintEngine::drawLines(const QLine * lines, int lineCount)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawLines_nativepointerQLine_int
(void* __this_nativeId,
 void* lines0,
 int lineCount1)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawLines((const QLine* )lines0, (int )lineCount1, __do_static_call);

}

// QPaintEngine::drawLines(const QLineF * lines, int lineCount)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawLines_nativepointerQLineF_int
(void* __this_nativeId,
 void* lines0,
 int lineCount1)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawLines((const QLineF* )lines0, (int )lineCount1, __do_static_call);

}

// QPaintEngine::drawPath(const QPainterPath & path)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawPath_QPainterPath
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawPath((const QPainterPath& )__qt_path0, __do_static_call);

}

// QPaintEngine::drawPixmap(const QRectF & r, const QPixmap & pm, const QRectF & sr)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawPixmap_QRectF_QPixmap_QRectF
(void* __this_nativeId,
 QRectF r0,
 void* pm1,
 QRectF sr2)
{
    const QPixmap&  __qt_pm1 = (const QPixmap& ) *(QPixmap *)pm1;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawPixmap((const QRectF& )r0, (const QPixmap& )__qt_pm1, (const QRectF& )sr2, __do_static_call);

}

// QPaintEngine::drawPoints(const QPoint * points, int pointCount)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawPoints_nativepointerQPoint_int
(void* __this_nativeId,
 void* points0,
 int pointCount1)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawPoints((const QPoint* )points0, (int )pointCount1, __do_static_call);

}

// QPaintEngine::drawPoints(const QPointF * points, int pointCount)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawPoints_nativepointerQPointF_int
(void* __this_nativeId,
 void* points0,
 int pointCount1)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawPoints((const QPointF* )points0, (int )pointCount1, __do_static_call);

}

// QPaintEngine::drawPolygon(const QPoint * points, int pointCount, QPaintEngine::PolygonDrawMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawPolygon_nativepointerQPoint_int_PolygonDrawMode
(void* __this_nativeId,
 void* points0,
 int pointCount1,
 int mode2)
{
    QPaintEngine::PolygonDrawMode __qt_mode2 = (QPaintEngine::PolygonDrawMode) mode2;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawPolygon((const QPoint* )points0, (int )pointCount1, (QPaintEngine::PolygonDrawMode )__qt_mode2, __do_static_call);

}

// QPaintEngine::drawPolygon(const QPointF * points, int pointCount, QPaintEngine::PolygonDrawMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawPolygon_nativepointerQPointF_int_PolygonDrawMode
(void* __this_nativeId,
 void* points0,
 int pointCount1,
 int mode2)
{
    QPaintEngine::PolygonDrawMode __qt_mode2 = (QPaintEngine::PolygonDrawMode) mode2;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawPolygon((const QPointF* )points0, (int )pointCount1, (QPaintEngine::PolygonDrawMode )__qt_mode2, __do_static_call);

}

// QPaintEngine::drawRects(const QRect * rects, int rectCount)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawRects_nativepointerQRect_int
(void* __this_nativeId,
 void* rects0,
 int rectCount1)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawRects((const QRect* )rects0, (int )rectCount1, __do_static_call);

}

// QPaintEngine::drawRects(const QRectF * rects, int rectCount)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawRects_nativepointerQRectF_int
(void* __this_nativeId,
 void* rects0,
 int rectCount1)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawRects((const QRectF* )rects0, (int )rectCount1, __do_static_call);

}

// QPaintEngine::drawTextItem(const QPointF & p, const QTextItem & textItem)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawTextItem_QPointF_QTextItem
(void* __this_nativeId,
 QPointF p0,
 void* textItem1)
{
    const QTextItem&  __qt_textItem1 = (const QTextItem& ) * (QTextItem *) textItem1;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawTextItem((const QPointF& )p0, (const QTextItem& )__qt_textItem1, __do_static_call);

}

// QPaintEngine::drawTiledPixmap(const QRectF & r, const QPixmap & pixmap, const QPointF & s)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_drawTiledPixmap_QRectF_QPixmap_QPointF
(void* __this_nativeId,
 QRectF r0,
 void* pixmap1,
 QPointF s2)
{
    const QPixmap&  __qt_pixmap1 = (const QPixmap& ) *(QPixmap *)pixmap1;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_drawTiledPixmap((const QRectF& )r0, (const QPixmap& )__qt_pixmap1, (const QPointF& )s2, __do_static_call);

}

// QPaintEngine::end()
QTD_EXTERN QTD_EXPORT bool qtd_QPaintEngine_end
(void* __this_nativeId)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_end(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngine::type() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintEngine_type_const
(void* __this_nativeId)
{
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_type(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintEngine::updateState(const QPaintEngineState & state)
QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_updateState_QPaintEngineState
(void* __this_nativeId,
 void* state0)
{
    const QPaintEngineState&  __qt_state0 = (const QPaintEngineState& ) * (QPaintEngineState *) state0;
    QPaintEngine_QtDShell *__qt_this = (QPaintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_updateState((const QPaintEngineState& )__qt_state0, __do_static_call);

}

// ---externC---end
// Field accessors
uint  QPaintEngine_QtDShell::extended_getter()
{
    return extended;
}

QTD_EXTERN QTD_EXPORT uint qtd_QPaintEngine_extended
(void* __this_nativeId){
    QPaintEngine_QtDShell *__qt_object = (QPaintEngine_QtDShell *) __this_nativeId;
    uint __tmp_extended = __qt_object->extended_getter();
    uint __d_return_value = __tmp_extended;
    return __d_return_value;
}

void QPaintEngine_QtDShell::setExtended_setter(uint  extended0)
{
    this->extended = extended0;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_setExtended_uint
(void* __this_nativeId,
 uint extended0){
    QPaintEngine_QtDShell *__qt_object = (QPaintEngine_QtDShell *) __this_nativeId;
    __qt_object->setExtended_setter(extended0);
}

uint  QPaintEngine_QtDShell::selfDestruct_getter()
{
    return selfDestruct;
}

QTD_EXTERN QTD_EXPORT uint qtd_QPaintEngine_selfDestruct
(void* __this_nativeId){
    QPaintEngine_QtDShell *__qt_object = (QPaintEngine_QtDShell *) __this_nativeId;
    uint __tmp_selfDestruct = __qt_object->selfDestruct_getter();
    uint __d_return_value = __tmp_selfDestruct;
    return __d_return_value;
}

void QPaintEngine_QtDShell::setSelfDestruct_setter(uint  selfDestruct0)
{
    this->selfDestruct = selfDestruct0;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_setSelfDestruct_uint
(void* __this_nativeId,
 uint selfDestruct0){
    QPaintEngine_QtDShell *__qt_object = (QPaintEngine_QtDShell *) __this_nativeId;
    __qt_object->setSelfDestruct_setter(selfDestruct0);
}

uint  QPaintEngine_QtDShell::active_getter()
{
    return active;
}

QTD_EXTERN QTD_EXPORT uint qtd_QPaintEngine_active
(void* __this_nativeId){
    QPaintEngine_QtDShell *__qt_object = (QPaintEngine_QtDShell *) __this_nativeId;
    uint __tmp_active = __qt_object->active_getter();
    uint __d_return_value = __tmp_active;
    return __d_return_value;
}

void QPaintEngine_QtDShell::setActive_setter(uint  active0)
{
    this->active = active0;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_setActive_uint
(void* __this_nativeId,
 uint active0){
    QPaintEngine_QtDShell *__qt_object = (QPaintEngine_QtDShell *) __this_nativeId;
    __qt_object->setActive_setter(active0);
}

QPaintEngine::PaintEngineFeatures  QPaintEngine_QtDShell::gccaps_getter()
{
    return gccaps;
}

QTD_EXTERN QTD_EXPORT int qtd_QPaintEngine_gccaps
(void* __this_nativeId){
    QPaintEngine_QtDShell *__qt_object = (QPaintEngine_QtDShell *) __this_nativeId;
    QPaintEngine::PaintEngineFeatures __tmp_gccaps = __qt_object->gccaps_getter();
    int __d_return_value = __tmp_gccaps;
    return __d_return_value;
}

void QPaintEngine_QtDShell::setGccaps_setter(QPaintEngine::PaintEngineFeatures  gccaps0)
{
    this->gccaps = gccaps0;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEngine_setGccaps_PaintEngineFeatures
(void* __this_nativeId,
 int gccaps0){
    QFlags<QPaintEngine::PaintEngineFeature> __qt_gccaps0 = (QFlags<QPaintEngine::PaintEngineFeature>) gccaps0;
    QPaintEngine_QtDShell *__qt_object = (QPaintEngine_QtDShell *) __this_nativeId;
    __qt_object->setGccaps_setter(__qt_gccaps0);
}



