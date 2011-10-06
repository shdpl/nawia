#ifndef QPAINTENGINE_SHELL_H
#define QPAINTENGINE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qpaintengine.h>

#include <QVarLengthArray>
#include <QVariant>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpixmap.h>
#include <qregion.h>

class QPaintEngine_QtDShell : public QPaintEngine, public QtdObjectLink
{
public:
    QPaintEngine_QtDShell(void *d_ptr, QPaintEngine::PaintEngineFeatures  features0);
    ~QPaintEngine_QtDShell();

    bool  begin(QPaintDevice*  pdev0);
    QPoint  coordinateOffset() const;
    void drawEllipse(const QRect&  r0);
    void drawEllipse(const QRectF&  r0);
    void drawImage(const QRectF&  r0, const QImage&  pm1, const QRectF&  sr2, Qt::ImageConversionFlags  flags3);
    void drawLines(const QLine*  lines0, int  lineCount1);
    void drawLines(const QLineF*  lines0, int  lineCount1);
    void drawPath(const QPainterPath&  path0);
    void drawPixmap(const QRectF&  r0, const QPixmap&  pm1, const QRectF&  sr2);
    void drawPoints(const QPoint*  points0, int  pointCount1);
    void drawPoints(const QPointF*  points0, int  pointCount1);
    void drawPolygon(const QPoint*  points0, int  pointCount1, QPaintEngine::PolygonDrawMode  mode2);
    void drawPolygon(const QPointF*  points0, int  pointCount1, QPaintEngine::PolygonDrawMode  mode2);
    void drawRects(const QRect*  rects0, int  rectCount1);
    void drawRects(const QRectF*  rects0, int  rectCount1);
    void drawTextItem(const QPointF&  p0, const QTextItem&  textItem1);
    void drawTiledPixmap(const QRectF&  r0, const QPixmap&  pixmap1, const QPointF&  s2);
    bool  end();
    QPaintEngine::Type  type() const;
    void updateState(const QPaintEngineState&  state0);
    bool  __override_begin(QPaintDevice*  pdev0, bool static_call);
    QPoint  __override_coordinateOffset(bool static_call) const;
    void __override_drawEllipse(const QRect&  r0, bool static_call);
    void __override_drawEllipse(const QRectF&  r0, bool static_call);
    void __override_drawImage(const QRectF&  r0, const QImage&  pm1, const QRectF&  sr2, int  flags3, bool static_call);
    void __override_drawLines(const QLine*  lines0, int  lineCount1, bool static_call);
    void __override_drawLines(const QLineF*  lines0, int  lineCount1, bool static_call);
    void __override_drawPath(const QPainterPath&  path0, bool static_call);
    void __override_drawPixmap(const QRectF&  r0, const QPixmap&  pm1, const QRectF&  sr2, bool static_call);
    void __override_drawPoints(const QPoint*  points0, int  pointCount1, bool static_call);
    void __override_drawPoints(const QPointF*  points0, int  pointCount1, bool static_call);
    void __override_drawPolygon(const QPoint*  points0, int  pointCount1, int  mode2, bool static_call);
    void __override_drawPolygon(const QPointF*  points0, int  pointCount1, int  mode2, bool static_call);
    void __override_drawRects(const QRect*  rects0, int  rectCount1, bool static_call);
    void __override_drawRects(const QRectF*  rects0, int  rectCount1, bool static_call);
    void __override_drawTextItem(const QPointF&  p0, const QTextItem&  textItem1, bool static_call);
    void __override_drawTiledPixmap(const QRectF&  r0, const QPixmap&  pixmap1, const QPointF&  s2, bool static_call);
    bool  __override_end(bool static_call);
    int  __override_type(bool static_call) const;
    void __override_updateState(const QPaintEngineState&  state0, bool static_call);
    uint  extended_getter();
    void setExtended_setter(uint  extended0);
    uint  selfDestruct_getter();
    void setSelfDestruct_setter(uint  selfDestruct0);
    uint  active_getter();
    void setActive_setter(uint  active0);
    QPaintEngineState*  state_getter();
    void setState_setter(QPaintEngineState*  state0);
    QPaintEngine::PaintEngineFeatures  gccaps_getter();
    void setGccaps_setter(QPaintEngine::PaintEngineFeatures  gccaps0);
};

#endif // QPAINTENGINE_SHELL_H
