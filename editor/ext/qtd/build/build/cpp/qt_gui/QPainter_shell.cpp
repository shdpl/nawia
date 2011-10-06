#include <QPainterPath>
#include <QPixmap>
#include <QVariant>
#include <QWidget>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qimage.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qtextoption.h>
#include <qtransform.h>
#include <qwidget.h>

#include "QPainter_shell.h"
#include <iostream>
#include <qpainter.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPainter_delete(void* nativeId)
{
    delete (QPainter_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPainter_destroy(void* nativeId)
{
    call_destructor((QPainter_QtDShell*)nativeId);
}

QPainter_QtDShell::QPainter_QtDShell()
    : QPainter()
{
}

QPainter_QtDShell::QPainter_QtDShell(QPaintDevice*  arg__1)
    : QPainter(arg__1)
{
}

QPainter_QtDShell::~QPainter_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QPainter_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QPainter::QPainter()
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_QPainter
(void *d_ptr)
{
    QPainter_QtDShell *__qt_this = new QPainter_QtDShell();
    return (void *) __qt_this;

}

// QPainter::QPainter(QPaintDevice * arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_QPainter_QPaintDevice
(void *d_ptr,
 void* arg__1)
{
    QPaintDevice*  __qt_arg__1 = (QPaintDevice* ) arg__1;
    QPainter_QtDShell *__qt_this = new QPainter_QtDShell((QPaintDevice* )__qt_arg__1);
    return (void *) __qt_this;

}

// QPainter::background() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_background_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->background();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPainter::backgroundMode() const
QTD_EXTERN QTD_EXPORT int qtd_QPainter_backgroundMode_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->backgroundMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::begin(QPaintDevice * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QPainter_begin_QPaintDevice
(void* __this_nativeId,
 void* arg__1)
{
    QPaintDevice*  __qt_arg__1 = (QPaintDevice* ) arg__1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->begin((QPaintDevice* )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::beginNativePainting()
QTD_EXTERN QTD_EXPORT void qtd_QPainter_beginNativePainting
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->beginNativePainting();

}

// QPainter::boundingRect(const QRect & rect, int flags, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_boundingRect_QRect_int_string
(void* __this_nativeId,
 QRect * __d_return_value,
 QRect rect0,
 int flags1,
 DArray text2)
{
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->boundingRect((const QRect& )rect0, (int )flags1, (const QString& )__qt_text2);

    *__d_return_value = __qt_return_value;

}

// QPainter::boundingRect(const QRectF & rect, const QString & text, const QTextOption & o)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_boundingRect_QRectF_string_QTextOption
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0,
 DArray text1,
 void* o2)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    const QTextOption&  __qt_o2 = (const QTextOption& ) *(QTextOption *)o2;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->boundingRect((const QRectF& )rect0, (const QString& )__qt_text1, (const QTextOption& )__qt_o2);

    *__d_return_value = __qt_return_value;

}

// QPainter::boundingRect(const QRectF & rect, int flags, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_boundingRect_QRectF_int_string
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0,
 int flags1,
 DArray text2)
{
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->boundingRect((const QRectF& )rect0, (int )flags1, (const QString& )__qt_text2);

    *__d_return_value = __qt_return_value;

}

// QPainter::boundingRect(int x, int y, int w, int h, int flags, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_boundingRect_int_int_int_int_int_string
(void* __this_nativeId,
 QRect * __d_return_value,
 int x0,
 int y1,
 int w2,
 int h3,
 int flags4,
 DArray text5)
{
    QString __qt_text5 = QString::fromUtf8((const char *)text5.ptr, text5.length);
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->boundingRect((int )x0, (int )y1, (int )w2, (int )h3, (int )flags4, (const QString& )__qt_text5);

    *__d_return_value = __qt_return_value;

}

// QPainter::brush() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_brush_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->brush();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPainter::brushOrigin() const
QTD_EXTERN QTD_EXPORT void qtd_QPainter_brushOrigin_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->brushOrigin();

    *__d_return_value = __qt_return_value;

}

// QPainter::clipPath() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_clipPath_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->clipPath();

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainter::clipRegion() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_clipRegion_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->clipRegion();

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QPainter::combinedMatrix() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_combinedMatrix_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QMatrix  __qt_return_value = __qt_this->combinedMatrix();

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QPainter::combinedTransform() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_combinedTransform_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->combinedTransform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QPainter::compositionMode() const
QTD_EXTERN QTD_EXPORT int qtd_QPainter_compositionMode_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->compositionMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::device() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_device_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QPaintDevice*  __qt_return_value = __qt_this->device();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPainter::deviceMatrix() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_deviceMatrix_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    const QMatrix&  __qt_return_value = __qt_this->deviceMatrix();

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QPainter::deviceTransform() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_deviceTransform_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    const QTransform&  __qt_return_value = __qt_this->deviceTransform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QPainter::drawArc(const QRect & arg__1, int a, int alen)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawArc_QRect_int_int
(void* __this_nativeId,
 QRect arg__1,
 int a1,
 int alen2)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawArc((const QRect& )arg__1, (int )a1, (int )alen2);

}

// QPainter::drawArc(const QRectF & rect, int a, int alen)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawArc_QRectF_int_int
(void* __this_nativeId,
 QRectF rect0,
 int a1,
 int alen2)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawArc((const QRectF& )rect0, (int )a1, (int )alen2);

}

// QPainter::drawArc(int x, int y, int w, int h, int a, int alen)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawArc_int_int_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int a4,
 int alen5)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawArc((int )x0, (int )y1, (int )w2, (int )h3, (int )a4, (int )alen5);

}

// QPainter::drawChord(const QRect & arg__1, int a, int alen)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawChord_QRect_int_int
(void* __this_nativeId,
 QRect arg__1,
 int a1,
 int alen2)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawChord((const QRect& )arg__1, (int )a1, (int )alen2);

}

// QPainter::drawChord(const QRectF & rect, int a, int alen)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawChord_QRectF_int_int
(void* __this_nativeId,
 QRectF rect0,
 int a1,
 int alen2)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawChord((const QRectF& )rect0, (int )a1, (int )alen2);

}

// QPainter::drawChord(int x, int y, int w, int h, int a, int alen)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawChord_int_int_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int a4,
 int alen5)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawChord((int )x0, (int )y1, (int )w2, (int )h3, (int )a4, (int )alen5);

}

// QPainter::drawConvexPolygon(const QPoint * points, int pointCount)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawConvexPolygon_nativepointerQPoint_int
(void* __this_nativeId,
 void* points0,
 int pointCount1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawConvexPolygon((const QPoint* )points0, (int )pointCount1);

}

// QPainter::drawConvexPolygon(const QPointF * points, int pointCount)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawConvexPolygon_nativepointerQPointF_int
(void* __this_nativeId,
 void* points0,
 int pointCount1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawConvexPolygon((const QPointF* )points0, (int )pointCount1);

}

// QPainter::drawConvexPolygon(const QPolygon & polygon)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawConvexPolygon_QPolygon
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygon&  __qt_polygon0 = (const QPolygon& ) *(QPolygon *)polygon0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawConvexPolygon((const QPolygon& )__qt_polygon0);

}

// QPainter::drawConvexPolygon(const QPolygonF & polygon)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawConvexPolygon_QPolygonF
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawConvexPolygon((const QPolygonF& )__qt_polygon0);

}

// QPainter::drawEllipse(const QPoint & center, int rx, int ry)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawEllipse_QPoint_int_int
(void* __this_nativeId,
 QPoint center0,
 int rx1,
 int ry2)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawEllipse((const QPoint& )center0, (int )rx1, (int )ry2);

}

// QPainter::drawEllipse(const QPointF & center, double rx, double ry)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawEllipse_QPointF_double_double
(void* __this_nativeId,
 QPointF center0,
 double rx1,
 double ry2)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawEllipse((const QPointF& )center0, (double )rx1, (double )ry2);

}

// QPainter::drawEllipse(const QRect & r)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawEllipse_QRect
(void* __this_nativeId,
 QRect r0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawEllipse((const QRect& )r0);

}

// QPainter::drawEllipse(const QRectF & r)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawEllipse_QRectF
(void* __this_nativeId,
 QRectF r0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawEllipse((const QRectF& )r0);

}

// QPainter::drawEllipse(int x, int y, int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawEllipse_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawEllipse((int )x0, (int )y1, (int )w2, (int )h3);

}

// QPainter::drawImage(const QPoint & p, const QImage & image)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawImage_QPoint_QImage
(void* __this_nativeId,
 QPoint p0,
 void* image1)
{
    const QImage&  __qt_image1 = (const QImage& ) *(QImage *)image1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawImage((const QPoint& )p0, (const QImage& )__qt_image1);

}

// QPainter::drawImage(const QPoint & p, const QImage & image, const QRect & sr, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawImage_QPoint_QImage_QRect_ImageConversionFlags
(void* __this_nativeId,
 QPoint p0,
 void* image1,
 QRect sr2,
 int flags3)
{
    const QImage&  __qt_image1 = (const QImage& ) *(QImage *)image1;
    QFlags<Qt::ImageConversionFlag> __qt_flags3 = (QFlags<Qt::ImageConversionFlag>) flags3;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawImage((const QPoint& )p0, (const QImage& )__qt_image1, (const QRect& )sr2, (Qt::ImageConversionFlags )__qt_flags3);

}

// QPainter::drawImage(const QPointF & p, const QImage & image)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawImage_QPointF_QImage
(void* __this_nativeId,
 QPointF p0,
 void* image1)
{
    const QImage&  __qt_image1 = (const QImage& ) *(QImage *)image1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawImage((const QPointF& )p0, (const QImage& )__qt_image1);

}

// QPainter::drawImage(const QPointF & p, const QImage & image, const QRectF & sr, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawImage_QPointF_QImage_QRectF_ImageConversionFlags
(void* __this_nativeId,
 QPointF p0,
 void* image1,
 QRectF sr2,
 int flags3)
{
    const QImage&  __qt_image1 = (const QImage& ) *(QImage *)image1;
    QFlags<Qt::ImageConversionFlag> __qt_flags3 = (QFlags<Qt::ImageConversionFlag>) flags3;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawImage((const QPointF& )p0, (const QImage& )__qt_image1, (const QRectF& )sr2, (Qt::ImageConversionFlags )__qt_flags3);

}

// QPainter::drawImage(const QRect & r, const QImage & image)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawImage_QRect_QImage
(void* __this_nativeId,
 QRect r0,
 void* image1)
{
    const QImage&  __qt_image1 = (const QImage& ) *(QImage *)image1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawImage((const QRect& )r0, (const QImage& )__qt_image1);

}

// QPainter::drawImage(const QRect & targetRect, const QImage & image, const QRect & sourceRect, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawImage_QRect_QImage_QRect_ImageConversionFlags
(void* __this_nativeId,
 QRect targetRect0,
 void* image1,
 QRect sourceRect2,
 int flags3)
{
    const QImage&  __qt_image1 = (const QImage& ) *(QImage *)image1;
    QFlags<Qt::ImageConversionFlag> __qt_flags3 = (QFlags<Qt::ImageConversionFlag>) flags3;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawImage((const QRect& )targetRect0, (const QImage& )__qt_image1, (const QRect& )sourceRect2, (Qt::ImageConversionFlags )__qt_flags3);

}

// QPainter::drawImage(const QRectF & r, const QImage & image)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawImage_QRectF_QImage
(void* __this_nativeId,
 QRectF r0,
 void* image1)
{
    const QImage&  __qt_image1 = (const QImage& ) *(QImage *)image1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawImage((const QRectF& )r0, (const QImage& )__qt_image1);

}

// QPainter::drawImage(const QRectF & targetRect, const QImage & image, const QRectF & sourceRect, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawImage_QRectF_QImage_QRectF_ImageConversionFlags
(void* __this_nativeId,
 QRectF targetRect0,
 void* image1,
 QRectF sourceRect2,
 int flags3)
{
    const QImage&  __qt_image1 = (const QImage& ) *(QImage *)image1;
    QFlags<Qt::ImageConversionFlag> __qt_flags3 = (QFlags<Qt::ImageConversionFlag>) flags3;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawImage((const QRectF& )targetRect0, (const QImage& )__qt_image1, (const QRectF& )sourceRect2, (Qt::ImageConversionFlags )__qt_flags3);

}

// QPainter::drawImage(int x, int y, const QImage & image, int sx, int sy, int sw, int sh, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawImage_int_int_QImage_int_int_int_int_ImageConversionFlags
(void* __this_nativeId,
 int x0,
 int y1,
 void* image2,
 int sx3,
 int sy4,
 int sw5,
 int sh6,
 int flags7)
{
    const QImage&  __qt_image2 = (const QImage& ) *(QImage *)image2;
    QFlags<Qt::ImageConversionFlag> __qt_flags7 = (QFlags<Qt::ImageConversionFlag>) flags7;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawImage((int )x0, (int )y1, (const QImage& )__qt_image2, (int )sx3, (int )sy4, (int )sw5, (int )sh6, (Qt::ImageConversionFlags )__qt_flags7);

}

// QPainter::drawLine(const QLine & line)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawLine_QLine
(void* __this_nativeId,
 QLine line0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawLine((const QLine& )line0);

}

// QPainter::drawLine(const QLineF & line)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawLine_QLineF
(void* __this_nativeId,
 QLineF line0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawLine((const QLineF& )line0);

}

// QPainter::drawLine(const QPoint & p1, const QPoint & p2)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawLine_QPoint_QPoint
(void* __this_nativeId,
 QPoint p10,
 QPoint p21)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawLine((const QPoint& )p10, (const QPoint& )p21);

}

// QPainter::drawLine(const QPointF & p1, const QPointF & p2)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawLine_QPointF_QPointF
(void* __this_nativeId,
 QPointF p10,
 QPointF p21)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawLine((const QPointF& )p10, (const QPointF& )p21);

}

// QPainter::drawLine(int x1, int y1, int x2, int y2)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawLine_int_int_int_int
(void* __this_nativeId,
 int x10,
 int y11,
 int x22,
 int y23)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawLine((int )x10, (int )y11, (int )x22, (int )y23);

}

// QPainter::drawLines(const QLine * lines, int lineCount)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawLines_nativepointerQLine_int
(void* __this_nativeId,
 void* lines0,
 int lineCount1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawLines((const QLine* )lines0, (int )lineCount1);

}

// QPainter::drawLines(const QLineF * lines, int lineCount)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawLines_nativepointerQLineF_int
(void* __this_nativeId,
 void* lines0,
 int lineCount1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawLines((const QLineF* )lines0, (int )lineCount1);

}

// QPainter::drawPath(const QPainterPath & path)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPath_QPainterPath
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPath((const QPainterPath& )__qt_path0);

}

// QPainter::drawPicture(const QPoint & p, const QPicture & picture)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPicture_QPoint_QPicture
(void* __this_nativeId,
 QPoint p0,
 void* picture1)
{
    const QPicture&  __qt_picture1 = (const QPicture& ) *(QPicture *)picture1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPicture((const QPoint& )p0, (const QPicture& )__qt_picture1);

}

// QPainter::drawPicture(const QPointF & p, const QPicture & picture)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPicture_QPointF_QPicture
(void* __this_nativeId,
 QPointF p0,
 void* picture1)
{
    const QPicture&  __qt_picture1 = (const QPicture& ) *(QPicture *)picture1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPicture((const QPointF& )p0, (const QPicture& )__qt_picture1);

}

// QPainter::drawPicture(int x, int y, const QPicture & picture)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPicture_int_int_QPicture
(void* __this_nativeId,
 int x0,
 int y1,
 void* picture2)
{
    const QPicture&  __qt_picture2 = (const QPicture& ) *(QPicture *)picture2;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPicture((int )x0, (int )y1, (const QPicture& )__qt_picture2);

}

// QPainter::drawPie(const QRect & arg__1, int a, int alen)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPie_QRect_int_int
(void* __this_nativeId,
 QRect arg__1,
 int a1,
 int alen2)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPie((const QRect& )arg__1, (int )a1, (int )alen2);

}

// QPainter::drawPie(const QRectF & rect, int a, int alen)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPie_QRectF_int_int
(void* __this_nativeId,
 QRectF rect0,
 int a1,
 int alen2)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPie((const QRectF& )rect0, (int )a1, (int )alen2);

}

// QPainter::drawPie(int x, int y, int w, int h, int a, int alen)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPie_int_int_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int a4,
 int alen5)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPie((int )x0, (int )y1, (int )w2, (int )h3, (int )a4, (int )alen5);

}

// QPainter::drawPixmap(const QPoint & p, const QPixmap & pm)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPixmap_QPoint_QPixmap
(void* __this_nativeId,
 QPoint p0,
 void* pm1)
{
    const QPixmap&  __qt_pm1 = (const QPixmap& ) *(QPixmap *)pm1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPixmap((const QPoint& )p0, (const QPixmap& )__qt_pm1);

}

// QPainter::drawPixmap(const QPoint & p, const QPixmap & pm, const QRect & sr)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPixmap_QPoint_QPixmap_QRect
(void* __this_nativeId,
 QPoint p0,
 void* pm1,
 QRect sr2)
{
    const QPixmap&  __qt_pm1 = (const QPixmap& ) *(QPixmap *)pm1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPixmap((const QPoint& )p0, (const QPixmap& )__qt_pm1, (const QRect& )sr2);

}

// QPainter::drawPixmap(const QPointF & p, const QPixmap & pm)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPixmap_QPointF_QPixmap
(void* __this_nativeId,
 QPointF p0,
 void* pm1)
{
    const QPixmap&  __qt_pm1 = (const QPixmap& ) *(QPixmap *)pm1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPixmap((const QPointF& )p0, (const QPixmap& )__qt_pm1);

}

// QPainter::drawPixmap(const QPointF & p, const QPixmap & pm, const QRectF & sr)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPixmap_QPointF_QPixmap_QRectF
(void* __this_nativeId,
 QPointF p0,
 void* pm1,
 QRectF sr2)
{
    const QPixmap&  __qt_pm1 = (const QPixmap& ) *(QPixmap *)pm1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPixmap((const QPointF& )p0, (const QPixmap& )__qt_pm1, (const QRectF& )sr2);

}

// QPainter::drawPixmap(const QRect & r, const QPixmap & pm)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPixmap_QRect_QPixmap
(void* __this_nativeId,
 QRect r0,
 void* pm1)
{
    const QPixmap&  __qt_pm1 = (const QPixmap& ) *(QPixmap *)pm1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPixmap((const QRect& )r0, (const QPixmap& )__qt_pm1);

}

// QPainter::drawPixmap(const QRect & targetRect, const QPixmap & pixmap, const QRect & sourceRect)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPixmap_QRect_QPixmap_QRect
(void* __this_nativeId,
 QRect targetRect0,
 void* pixmap1,
 QRect sourceRect2)
{
    const QPixmap&  __qt_pixmap1 = (const QPixmap& ) *(QPixmap *)pixmap1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPixmap((const QRect& )targetRect0, (const QPixmap& )__qt_pixmap1, (const QRect& )sourceRect2);

}

// QPainter::drawPixmap(const QRectF & targetRect, const QPixmap & pixmap, const QRectF & sourceRect)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPixmap_QRectF_QPixmap_QRectF
(void* __this_nativeId,
 QRectF targetRect0,
 void* pixmap1,
 QRectF sourceRect2)
{
    const QPixmap&  __qt_pixmap1 = (const QPixmap& ) *(QPixmap *)pixmap1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPixmap((const QRectF& )targetRect0, (const QPixmap& )__qt_pixmap1, (const QRectF& )sourceRect2);

}

// QPainter::drawPixmap(int x, int y, const QPixmap & pm)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPixmap_int_int_QPixmap
(void* __this_nativeId,
 int x0,
 int y1,
 void* pm2)
{
    const QPixmap&  __qt_pm2 = (const QPixmap& ) *(QPixmap *)pm2;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPixmap((int )x0, (int )y1, (const QPixmap& )__qt_pm2);

}

// QPainter::drawPixmap(int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPixmap_int_int_QPixmap_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 void* pm2,
 int sx3,
 int sy4,
 int sw5,
 int sh6)
{
    const QPixmap&  __qt_pm2 = (const QPixmap& ) *(QPixmap *)pm2;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPixmap((int )x0, (int )y1, (const QPixmap& )__qt_pm2, (int )sx3, (int )sy4, (int )sw5, (int )sh6);

}

// QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPixmap_int_int_int_int_QPixmap
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 void* pm4)
{
    const QPixmap&  __qt_pm4 = (const QPixmap& ) *(QPixmap *)pm4;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPixmap((int )x0, (int )y1, (int )w2, (int )h3, (const QPixmap& )__qt_pm4);

}

// QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm, int sx, int sy, int sw, int sh)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPixmap_int_int_int_int_QPixmap_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 void* pm4,
 int sx5,
 int sy6,
 int sw7,
 int sh8)
{
    const QPixmap&  __qt_pm4 = (const QPixmap& ) *(QPixmap *)pm4;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPixmap((int )x0, (int )y1, (int )w2, (int )h3, (const QPixmap& )__qt_pm4, (int )sx5, (int )sy6, (int )sw7, (int )sh8);

}

// QPainter::drawPoint(const QPoint & p)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPoint_QPoint
(void* __this_nativeId,
 QPoint p0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPoint((const QPoint& )p0);

}

// QPainter::drawPoint(const QPointF & pt)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPoint_QPointF
(void* __this_nativeId,
 QPointF pt0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPoint((const QPointF& )pt0);

}

// QPainter::drawPoint(int x, int y)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPoint_int_int
(void* __this_nativeId,
 int x0,
 int y1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPoint((int )x0, (int )y1);

}

// QPainter::drawPoints(const QPoint * points, int pointCount)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPoints_nativepointerQPoint_int
(void* __this_nativeId,
 void* points0,
 int pointCount1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPoints((const QPoint* )points0, (int )pointCount1);

}

// QPainter::drawPoints(const QPointF * points, int pointCount)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPoints_nativepointerQPointF_int
(void* __this_nativeId,
 void* points0,
 int pointCount1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPoints((const QPointF* )points0, (int )pointCount1);

}

// QPainter::drawPoints(const QPolygon & points)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPoints_QPolygon
(void* __this_nativeId,
 void* points0)
{
    const QPolygon&  __qt_points0 = (const QPolygon& ) *(QPolygon *)points0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPoints((const QPolygon& )__qt_points0);

}

// QPainter::drawPoints(const QPolygonF & points)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPoints_QPolygonF
(void* __this_nativeId,
 void* points0)
{
    const QPolygonF&  __qt_points0 = (const QPolygonF& ) *(QPolygonF *)points0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPoints((const QPolygonF& )__qt_points0);

}

// QPainter::drawPolygon(const QPoint * points, int pointCount, Qt::FillRule fillRule)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPolygon_nativepointerQPoint_int_FillRule
(void* __this_nativeId,
 void* points0,
 int pointCount1,
 int fillRule2)
{
    Qt::FillRule __qt_fillRule2 = (Qt::FillRule) fillRule2;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPolygon((const QPoint* )points0, (int )pointCount1, (Qt::FillRule )__qt_fillRule2);

}

// QPainter::drawPolygon(const QPointF * points, int pointCount, Qt::FillRule fillRule)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPolygon_nativepointerQPointF_int_FillRule
(void* __this_nativeId,
 void* points0,
 int pointCount1,
 int fillRule2)
{
    Qt::FillRule __qt_fillRule2 = (Qt::FillRule) fillRule2;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPolygon((const QPointF* )points0, (int )pointCount1, (Qt::FillRule )__qt_fillRule2);

}

// QPainter::drawPolygon(const QPolygon & polygon, Qt::FillRule fillRule)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPolygon_QPolygon_FillRule
(void* __this_nativeId,
 void* polygon0,
 int fillRule1)
{
    const QPolygon&  __qt_polygon0 = (const QPolygon& ) *(QPolygon *)polygon0;
    Qt::FillRule __qt_fillRule1 = (Qt::FillRule) fillRule1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPolygon((const QPolygon& )__qt_polygon0, (Qt::FillRule )__qt_fillRule1);

}

// QPainter::drawPolygon(const QPolygonF & polygon, Qt::FillRule fillRule)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPolygon_QPolygonF_FillRule
(void* __this_nativeId,
 void* polygon0,
 int fillRule1)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    Qt::FillRule __qt_fillRule1 = (Qt::FillRule) fillRule1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPolygon((const QPolygonF& )__qt_polygon0, (Qt::FillRule )__qt_fillRule1);

}

// QPainter::drawPolyline(const QPoint * points, int pointCount)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPolyline_nativepointerQPoint_int
(void* __this_nativeId,
 void* points0,
 int pointCount1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPolyline((const QPoint* )points0, (int )pointCount1);

}

// QPainter::drawPolyline(const QPointF * points, int pointCount)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPolyline_nativepointerQPointF_int
(void* __this_nativeId,
 void* points0,
 int pointCount1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPolyline((const QPointF* )points0, (int )pointCount1);

}

// QPainter::drawPolyline(const QPolygon & polygon)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPolyline_QPolygon
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygon&  __qt_polygon0 = (const QPolygon& ) *(QPolygon *)polygon0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPolyline((const QPolygon& )__qt_polygon0);

}

// QPainter::drawPolyline(const QPolygonF & polyline)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawPolyline_QPolygonF
(void* __this_nativeId,
 void* polyline0)
{
    const QPolygonF&  __qt_polyline0 = (const QPolygonF& ) *(QPolygonF *)polyline0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawPolyline((const QPolygonF& )__qt_polyline0);

}

// QPainter::drawRect(const QRect & rect)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawRect_QRect
(void* __this_nativeId,
 QRect rect0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawRect((const QRect& )rect0);

}

// QPainter::drawRect(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawRect_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawRect((const QRectF& )rect0);

}

// QPainter::drawRect(int x1, int y1, int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawRect_int_int_int_int
(void* __this_nativeId,
 int x10,
 int y11,
 int w2,
 int h3)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawRect((int )x10, (int )y11, (int )w2, (int )h3);

}

// QPainter::drawRects(const QRect * rects, int rectCount)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawRects_nativepointerQRect_int
(void* __this_nativeId,
 void* rects0,
 int rectCount1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawRects((const QRect* )rects0, (int )rectCount1);

}

// QPainter::drawRects(const QRectF * rects, int rectCount)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawRects_nativepointerQRectF_int
(void* __this_nativeId,
 void* rects0,
 int rectCount1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawRects((const QRectF* )rects0, (int )rectCount1);

}

// QPainter::drawRoundRect(const QRect & r, int xround, int yround)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawRoundRect_QRect_int_int
(void* __this_nativeId,
 QRect r0,
 int xround1,
 int yround2)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawRoundRect((const QRect& )r0, (int )xround1, (int )yround2);

}

// QPainter::drawRoundRect(const QRectF & r, int xround, int yround)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawRoundRect_QRectF_int_int
(void* __this_nativeId,
 QRectF r0,
 int xround1,
 int yround2)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawRoundRect((const QRectF& )r0, (int )xround1, (int )yround2);

}

// QPainter::drawRoundRect(int x, int y, int w, int h, int arg__5, int arg__6)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawRoundRect_int_int_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int arg__5,
 int arg__6)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawRoundRect((int )x0, (int )y1, (int )w2, (int )h3, (int )arg__5, (int )arg__6);

}

// QPainter::drawRoundedRect(const QRect & rect, double xRadius, double yRadius, Qt::SizeMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawRoundedRect_QRect_double_double_SizeMode
(void* __this_nativeId,
 QRect rect0,
 double xRadius1,
 double yRadius2,
 int mode3)
{
    Qt::SizeMode __qt_mode3 = (Qt::SizeMode) mode3;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawRoundedRect((const QRect& )rect0, (double )xRadius1, (double )yRadius2, (Qt::SizeMode )__qt_mode3);

}

// QPainter::drawRoundedRect(const QRectF & rect, double xRadius, double yRadius, Qt::SizeMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawRoundedRect_QRectF_double_double_SizeMode
(void* __this_nativeId,
 QRectF rect0,
 double xRadius1,
 double yRadius2,
 int mode3)
{
    Qt::SizeMode __qt_mode3 = (Qt::SizeMode) mode3;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawRoundedRect((const QRectF& )rect0, (double )xRadius1, (double )yRadius2, (Qt::SizeMode )__qt_mode3);

}

// QPainter::drawRoundedRect(int x, int y, int w, int h, double xRadius, double yRadius, Qt::SizeMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawRoundedRect_int_int_int_int_double_double_SizeMode
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 double xRadius4,
 double yRadius5,
 int mode6)
{
    Qt::SizeMode __qt_mode6 = (Qt::SizeMode) mode6;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawRoundedRect((int )x0, (int )y1, (int )w2, (int )h3, (double )xRadius4, (double )yRadius5, (Qt::SizeMode )__qt_mode6);

}

// QPainter::drawText(const QPoint & p, const QString & s)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawText_QPoint_string
(void* __this_nativeId,
 QPoint p0,
 DArray s1)
{
    QString __qt_s1 = QString::fromUtf8((const char *)s1.ptr, s1.length);
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawText((const QPoint& )p0, (const QString& )__qt_s1);

}

// QPainter::drawText(const QPointF & p, const QString & s)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawText_QPointF_string
(void* __this_nativeId,
 QPointF p0,
 DArray s1)
{
    QString __qt_s1 = QString::fromUtf8((const char *)s1.ptr, s1.length);
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawText((const QPointF& )p0, (const QString& )__qt_s1);

}

// QPainter::drawText(const QRect & r, int flags, const QString & text, QRect * br)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawText_QRect_int_string_nativepointerQRect
(void* __this_nativeId,
 QRect r0,
 int flags1,
 DArray text2,
 void* br3)
{
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawText((const QRect& )r0, (int )flags1, (const QString& )__qt_text2, (QRect* )br3);

}

// QPainter::drawText(const QRectF & r, const QString & text, const QTextOption & o)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawText_QRectF_string_QTextOption
(void* __this_nativeId,
 QRectF r0,
 DArray text1,
 void* o2)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    const QTextOption&  __qt_o2 = (const QTextOption& ) *(QTextOption *)o2;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawText((const QRectF& )r0, (const QString& )__qt_text1, (const QTextOption& )__qt_o2);

}

// QPainter::drawText(const QRectF & r, int flags, const QString & text, QRectF * br)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawText_QRectF_int_string_nativepointerQRectF
(void* __this_nativeId,
 QRectF r0,
 int flags1,
 DArray text2,
 void* br3)
{
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawText((const QRectF& )r0, (int )flags1, (const QString& )__qt_text2, (QRectF* )br3);

}

// QPainter::drawText(int x, int y, const QString & s)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawText_int_int_string
(void* __this_nativeId,
 int x0,
 int y1,
 DArray s2)
{
    QString __qt_s2 = QString::fromUtf8((const char *)s2.ptr, s2.length);
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawText((int )x0, (int )y1, (const QString& )__qt_s2);

}

// QPainter::drawText(int x, int y, int w, int h, int flags, const QString & text, QRect * br)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawText_int_int_int_int_int_string_nativepointerQRect
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int flags4,
 DArray text5,
 void* br6)
{
    QString __qt_text5 = QString::fromUtf8((const char *)text5.ptr, text5.length);
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawText((int )x0, (int )y1, (int )w2, (int )h3, (int )flags4, (const QString& )__qt_text5, (QRect* )br6);

}

// QPainter::drawTextItem(const QPoint & p, const QTextItem & ti)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawTextItem_QPoint_QTextItem
(void* __this_nativeId,
 QPoint p0,
 void* ti1)
{
    const QTextItem&  __qt_ti1 = (const QTextItem& ) * (QTextItem *) ti1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawTextItem((const QPoint& )p0, (const QTextItem& )__qt_ti1);

}

// QPainter::drawTextItem(const QPointF & p, const QTextItem & ti)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawTextItem_QPointF_QTextItem
(void* __this_nativeId,
 QPointF p0,
 void* ti1)
{
    const QTextItem&  __qt_ti1 = (const QTextItem& ) * (QTextItem *) ti1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawTextItem((const QPointF& )p0, (const QTextItem& )__qt_ti1);

}

// QPainter::drawTextItem(int x, int y, const QTextItem & ti)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawTextItem_int_int_QTextItem
(void* __this_nativeId,
 int x0,
 int y1,
 void* ti2)
{
    const QTextItem&  __qt_ti2 = (const QTextItem& ) * (QTextItem *) ti2;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawTextItem((int )x0, (int )y1, (const QTextItem& )__qt_ti2);

}

// QPainter::drawTiledPixmap(const QRect & arg__1, const QPixmap & arg__2, const QPoint & arg__3)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawTiledPixmap_QRect_QPixmap_QPoint
(void* __this_nativeId,
 QRect arg__1,
 void* arg__2,
 QPoint arg__3)
{
    const QPixmap&  __qt_arg__2 = (const QPixmap& ) *(QPixmap *)arg__2;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawTiledPixmap((const QRect& )arg__1, (const QPixmap& )__qt_arg__2, (const QPoint& )arg__3);

}

// QPainter::drawTiledPixmap(const QRectF & rect, const QPixmap & pm, const QPointF & offset)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawTiledPixmap_QRectF_QPixmap_QPointF
(void* __this_nativeId,
 QRectF rect0,
 void* pm1,
 QPointF offset2)
{
    const QPixmap&  __qt_pm1 = (const QPixmap& ) *(QPixmap *)pm1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawTiledPixmap((const QRectF& )rect0, (const QPixmap& )__qt_pm1, (const QPointF& )offset2);

}

// QPainter::drawTiledPixmap(int x, int y, int w, int h, const QPixmap & arg__5, int sx, int sy)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_drawTiledPixmap_int_int_int_int_QPixmap_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 void* arg__5,
 int sx5,
 int sy6)
{
    const QPixmap&  __qt_arg__5 = (const QPixmap& ) *(QPixmap *)arg__5;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->drawTiledPixmap((int )x0, (int )y1, (int )w2, (int )h3, (const QPixmap& )__qt_arg__5, (int )sx5, (int )sy6);

}

// QPainter::end()
QTD_EXTERN QTD_EXPORT bool qtd_QPainter_end
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->end();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::endNativePainting()
QTD_EXTERN QTD_EXPORT void qtd_QPainter_endNativePainting
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->endNativePainting();

}

// QPainter::eraseRect(const QRect & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_eraseRect_QRect
(void* __this_nativeId,
 QRect arg__1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->eraseRect((const QRect& )arg__1);

}

// QPainter::eraseRect(const QRectF & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_eraseRect_QRectF
(void* __this_nativeId,
 QRectF arg__1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->eraseRect((const QRectF& )arg__1);

}

// QPainter::eraseRect(int x, int y, int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_eraseRect_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->eraseRect((int )x0, (int )y1, (int )w2, (int )h3);

}

// QPainter::fillPath(const QPainterPath & path, const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillPath_QPainterPath_QBrush
(void* __this_nativeId,
 void* path0,
 void* brush1)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    const QBrush&  __qt_brush1 = (const QBrush& ) *(QBrush *)brush1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillPath((const QPainterPath& )__qt_path0, (const QBrush& )__qt_brush1);

}

// QPainter::fillRect(const QRect & arg__1, const QBrush & arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_QRect_QBrush
(void* __this_nativeId,
 QRect arg__1,
 void* arg__2)
{
    const QBrush&  __qt_arg__2 = (const QBrush& ) *(QBrush *)arg__2;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((const QRect& )arg__1, (const QBrush& )__qt_arg__2);

}

// QPainter::fillRect(const QRect & arg__1, const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_QRect_QColor
(void* __this_nativeId,
 QRect arg__1,
 void* color1)
{
    const QColor&  __qt_color1 = (const QColor& ) *(QColor *)color1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((const QRect& )arg__1, (const QColor& )__qt_color1);

}

// QPainter::fillRect(const QRect & r, Qt::BrushStyle style)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_QRect_BrushStyle
(void* __this_nativeId,
 QRect r0,
 int style1)
{
    Qt::BrushStyle __qt_style1 = (Qt::BrushStyle) style1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((const QRect& )r0, (Qt::BrushStyle )__qt_style1);

}

// QPainter::fillRect(const QRect & r, Qt::GlobalColor c)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_QRect_GlobalColor
(void* __this_nativeId,
 QRect r0,
 int c1)
{
    Qt::GlobalColor __qt_c1 = (Qt::GlobalColor) c1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((const QRect& )r0, (Qt::GlobalColor )__qt_c1);

}

// QPainter::fillRect(const QRectF & arg__1, const QBrush & arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_QRectF_QBrush
(void* __this_nativeId,
 QRectF arg__1,
 void* arg__2)
{
    const QBrush&  __qt_arg__2 = (const QBrush& ) *(QBrush *)arg__2;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((const QRectF& )arg__1, (const QBrush& )__qt_arg__2);

}

// QPainter::fillRect(const QRectF & arg__1, const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_QRectF_QColor
(void* __this_nativeId,
 QRectF arg__1,
 void* color1)
{
    const QColor&  __qt_color1 = (const QColor& ) *(QColor *)color1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((const QRectF& )arg__1, (const QColor& )__qt_color1);

}

// QPainter::fillRect(const QRectF & r, Qt::BrushStyle style)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_QRectF_BrushStyle
(void* __this_nativeId,
 QRectF r0,
 int style1)
{
    Qt::BrushStyle __qt_style1 = (Qt::BrushStyle) style1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((const QRectF& )r0, (Qt::BrushStyle )__qt_style1);

}

// QPainter::fillRect(const QRectF & r, Qt::GlobalColor c)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_QRectF_GlobalColor
(void* __this_nativeId,
 QRectF r0,
 int c1)
{
    Qt::GlobalColor __qt_c1 = (Qt::GlobalColor) c1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((const QRectF& )r0, (Qt::GlobalColor )__qt_c1);

}

// QPainter::fillRect(int x, int y, int w, int h, Qt::BrushStyle style)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_int_int_int_int_BrushStyle
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int style4)
{
    Qt::BrushStyle __qt_style4 = (Qt::BrushStyle) style4;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((int )x0, (int )y1, (int )w2, (int )h3, (Qt::BrushStyle )__qt_style4);

}

// QPainter::fillRect(int x, int y, int w, int h, Qt::GlobalColor c)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_int_int_int_int_GlobalColor
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int c4)
{
    Qt::GlobalColor __qt_c4 = (Qt::GlobalColor) c4;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((int )x0, (int )y1, (int )w2, (int )h3, (Qt::GlobalColor )__qt_c4);

}

// QPainter::fillRect(int x, int y, int w, int h, const QBrush & arg__5)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_int_int_int_int_QBrush
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 void* arg__5)
{
    const QBrush&  __qt_arg__5 = (const QBrush& ) *(QBrush *)arg__5;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((int )x0, (int )y1, (int )w2, (int )h3, (const QBrush& )__qt_arg__5);

}

// QPainter::fillRect(int x, int y, int w, int h, const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_fillRect_int_int_int_int_QColor
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 void* color4)
{
    const QColor&  __qt_color4 = (const QColor& ) *(QColor *)color4;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->fillRect((int )x0, (int )y1, (int )w2, (int )h3, (const QColor& )__qt_color4);

}

// QPainter::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_font_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    const QFont&  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QPainter::fontInfo() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_fontInfo_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QFontInfo  __qt_return_value = __qt_this->fontInfo();

    void* __d_return_value = (void*) new QFontInfo(__qt_return_value);

    return __d_return_value;
}

// QPainter::fontMetrics() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_fontMetrics_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QFontMetrics  __qt_return_value = __qt_this->fontMetrics();

    void* __d_return_value = (void*) new QFontMetrics(__qt_return_value);

    return __d_return_value;
}

// QPainter::hasClipping() const
QTD_EXTERN QTD_EXPORT bool qtd_QPainter_hasClipping_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasClipping();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::initFrom(const QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_initFrom_QWidget
(void* __this_nativeId,
 void* widget0)
{
    const QWidget*  __qt_widget0 = (const QWidget* ) widget0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->initFrom((const QWidget* )__qt_widget0);

}

// QPainter::isActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QPainter_isActive_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::layoutDirection() const
QTD_EXTERN QTD_EXPORT int qtd_QPainter_layoutDirection_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->layoutDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::opacity() const
QTD_EXTERN QTD_EXPORT double qtd_QPainter_opacity_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->opacity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::paintEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_paintEngine_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QPaintEngine*  __qt_return_value = __qt_this->paintEngine();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPainter::pen() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_pen_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    const QPen&  __qt_return_value = __qt_this->pen();

    void* __d_return_value = (void*) new QPen(__qt_return_value);

    return __d_return_value;
}

// QPainter::renderHints() const
QTD_EXTERN QTD_EXPORT int qtd_QPainter_renderHints_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->renderHints();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::resetMatrix()
QTD_EXTERN QTD_EXPORT void qtd_QPainter_resetMatrix
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->resetMatrix();

}

// QPainter::resetTransform()
QTD_EXTERN QTD_EXPORT void qtd_QPainter_resetTransform
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->resetTransform();

}

// QPainter::restore()
QTD_EXTERN QTD_EXPORT void qtd_QPainter_restore
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->restore();

}

// QPainter::rotate(double a)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_rotate_double
(void* __this_nativeId,
 double a0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->rotate((double )a0);

}

// QPainter::save()
QTD_EXTERN QTD_EXPORT void qtd_QPainter_save
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->save();

}

// QPainter::scale(double sx, double sy)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_scale_double_double
(void* __this_nativeId,
 double sx0,
 double sy1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->scale((double )sx0, (double )sy1);

}

// QPainter::setBackground(const QBrush & bg)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setBackground_QBrush
(void* __this_nativeId,
 void* bg0)
{
    const QBrush&  __qt_bg0 = (const QBrush& ) *(QBrush *)bg0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setBackground((const QBrush& )__qt_bg0);

}

// QPainter::setBackgroundMode(Qt::BGMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setBackgroundMode_BGMode
(void* __this_nativeId,
 int mode0)
{
    Qt::BGMode __qt_mode0 = (Qt::BGMode) mode0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setBackgroundMode((Qt::BGMode )__qt_mode0);

}

// QPainter::setBrush(Qt::BrushStyle style)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setBrush_BrushStyle
(void* __this_nativeId,
 int style0)
{
    Qt::BrushStyle __qt_style0 = (Qt::BrushStyle) style0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setBrush((Qt::BrushStyle )__qt_style0);

}

// QPainter::setBrush(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setBrush_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setBrush((const QBrush& )__qt_brush0);

}

// QPainter::setBrushOrigin(const QPoint & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setBrushOrigin_QPoint
(void* __this_nativeId,
 QPoint arg__1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setBrushOrigin((const QPoint& )arg__1);

}

// QPainter::setBrushOrigin(const QPointF & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setBrushOrigin_QPointF
(void* __this_nativeId,
 QPointF arg__1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setBrushOrigin((const QPointF& )arg__1);

}

// QPainter::setBrushOrigin(int x, int y)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setBrushOrigin_int_int
(void* __this_nativeId,
 int x0,
 int y1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setBrushOrigin((int )x0, (int )y1);

}

// QPainter::setClipPath(const QPainterPath & path, Qt::ClipOperation op)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setClipPath_QPainterPath_ClipOperation
(void* __this_nativeId,
 void* path0,
 int op1)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    Qt::ClipOperation __qt_op1 = (Qt::ClipOperation) op1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setClipPath((const QPainterPath& )__qt_path0, (Qt::ClipOperation )__qt_op1);

}

// QPainter::setClipRect(const QRect & arg__1, Qt::ClipOperation op)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setClipRect_QRect_ClipOperation
(void* __this_nativeId,
 QRect arg__1,
 int op1)
{
    Qt::ClipOperation __qt_op1 = (Qt::ClipOperation) op1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setClipRect((const QRect& )arg__1, (Qt::ClipOperation )__qt_op1);

}

// QPainter::setClipRect(const QRectF & arg__1, Qt::ClipOperation op)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setClipRect_QRectF_ClipOperation
(void* __this_nativeId,
 QRectF arg__1,
 int op1)
{
    Qt::ClipOperation __qt_op1 = (Qt::ClipOperation) op1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setClipRect((const QRectF& )arg__1, (Qt::ClipOperation )__qt_op1);

}

// QPainter::setClipRect(int x, int y, int w, int h, Qt::ClipOperation op)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setClipRect_int_int_int_int_ClipOperation
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int op4)
{
    Qt::ClipOperation __qt_op4 = (Qt::ClipOperation) op4;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setClipRect((int )x0, (int )y1, (int )w2, (int )h3, (Qt::ClipOperation )__qt_op4);

}

// QPainter::setClipRegion(const QRegion & arg__1, Qt::ClipOperation op)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setClipRegion_QRegion_ClipOperation
(void* __this_nativeId,
 void* arg__1,
 int op1)
{
    const QRegion&  __qt_arg__1 = (const QRegion& ) *(QRegion *)arg__1;
    Qt::ClipOperation __qt_op1 = (Qt::ClipOperation) op1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setClipRegion((const QRegion& )__qt_arg__1, (Qt::ClipOperation )__qt_op1);

}

// QPainter::setClipping(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setClipping_bool
(void* __this_nativeId,
 bool enable0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setClipping((bool )enable0);

}

// QPainter::setCompositionMode(QPainter::CompositionMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setCompositionMode_CompositionMode
(void* __this_nativeId,
 int mode0)
{
    QPainter::CompositionMode __qt_mode0 = (QPainter::CompositionMode) mode0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setCompositionMode((QPainter::CompositionMode )__qt_mode0);

}

// QPainter::setFont(const QFont & f)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setFont_QFont
(void* __this_nativeId,
 void* f0)
{
    const QFont&  __qt_f0 = (const QFont& ) *(QFont *)f0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setFont((const QFont& )__qt_f0);

}

// QPainter::setLayoutDirection(Qt::LayoutDirection direction)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setLayoutDirection_LayoutDirection
(void* __this_nativeId,
 int direction0)
{
    Qt::LayoutDirection __qt_direction0 = (Qt::LayoutDirection) direction0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setLayoutDirection((Qt::LayoutDirection )__qt_direction0);

}

// QPainter::setOpacity(double opacity)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setOpacity_double
(void* __this_nativeId,
 double opacity0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setOpacity((double )opacity0);

}

// QPainter::setPen(Qt::PenStyle style)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setPen_PenStyle
(void* __this_nativeId,
 int style0)
{
    Qt::PenStyle __qt_style0 = (Qt::PenStyle) style0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setPen((Qt::PenStyle )__qt_style0);

}

// QPainter::setPen(const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setPen_QColor
(void* __this_nativeId,
 void* color0)
{
    const QColor&  __qt_color0 = (const QColor& ) *(QColor *)color0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setPen((const QColor& )__qt_color0);

}

// QPainter::setPen(const QPen & pen)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setPen_QPen
(void* __this_nativeId,
 void* pen0)
{
    const QPen&  __qt_pen0 = (const QPen& ) *(QPen *)pen0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setPen((const QPen& )__qt_pen0);

}

// QPainter::setRenderHint(QPainter::RenderHint hint, bool on)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setRenderHint_RenderHint_bool
(void* __this_nativeId,
 int hint0,
 bool on1)
{
    QPainter::RenderHint __qt_hint0 = (QPainter::RenderHint) hint0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setRenderHint((QPainter::RenderHint )__qt_hint0, (bool )on1);

}

// QPainter::setRenderHints(QFlags<QPainter::RenderHint> hints, bool on)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setRenderHints_RenderHints_bool
(void* __this_nativeId,
 int hints0,
 bool on1)
{
    QFlags<QPainter::RenderHint> __qt_hints0 = (QFlags<QPainter::RenderHint>) hints0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setRenderHints((QPainter::RenderHints )__qt_hints0, (bool )on1);

}

// QPainter::setTransform(const QTransform & transform, bool combine)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setTransform_QTransform_bool
(void* __this_nativeId,
 void* transform0,
 bool combine1)
{
    const QTransform&  __qt_transform0 = (const QTransform& ) *(QTransform *)transform0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setTransform((const QTransform& )__qt_transform0, (bool )combine1);

}

// QPainter::setViewTransformEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setViewTransformEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setViewTransformEnabled((bool )enable0);

}

// QPainter::setViewport(const QRect & viewport)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setViewport_QRect
(void* __this_nativeId,
 QRect viewport0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setViewport((const QRect& )viewport0);

}

// QPainter::setViewport(int x, int y, int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setViewport_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setViewport((int )x0, (int )y1, (int )w2, (int )h3);

}

// QPainter::setWindow(const QRect & window)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setWindow_QRect
(void* __this_nativeId,
 QRect window0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setWindow((const QRect& )window0);

}

// QPainter::setWindow(int x, int y, int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setWindow_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setWindow((int )x0, (int )y1, (int )w2, (int )h3);

}

// QPainter::setWorldMatrix(const QMatrix & matrix, bool combine)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setWorldMatrix_QMatrix_bool
(void* __this_nativeId,
 void* matrix0,
 bool combine1)
{
    const QMatrix&  __qt_matrix0 = (const QMatrix& ) *(QMatrix *)matrix0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setWorldMatrix((const QMatrix& )__qt_matrix0, (bool )combine1);

}

// QPainter::setWorldMatrixEnabled(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setWorldMatrixEnabled_bool
(void* __this_nativeId,
 bool enabled0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setWorldMatrixEnabled((bool )enabled0);

}

// QPainter::setWorldTransform(const QTransform & matrix, bool combine)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setWorldTransform_QTransform_bool
(void* __this_nativeId,
 void* matrix0,
 bool combine1)
{
    const QTransform&  __qt_matrix0 = (const QTransform& ) *(QTransform *)matrix0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->setWorldTransform((const QTransform& )__qt_matrix0, (bool )combine1);

}

// QPainter::shear(double sh, double sv)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_shear_double_double
(void* __this_nativeId,
 double sh0,
 double sv1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->shear((double )sh0, (double )sv1);

}

// QPainter::strokePath(const QPainterPath & path, const QPen & pen)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_strokePath_QPainterPath_QPen
(void* __this_nativeId,
 void* path0,
 void* pen1)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    const QPen&  __qt_pen1 = (const QPen& ) *(QPen *)pen1;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->strokePath((const QPainterPath& )__qt_path0, (const QPen& )__qt_pen1);

}

// QPainter::testRenderHint(QPainter::RenderHint hint) const
QTD_EXTERN QTD_EXPORT bool qtd_QPainter_testRenderHint_RenderHint_const
(void* __this_nativeId,
 int hint0)
{
    QPainter::RenderHint __qt_hint0 = (QPainter::RenderHint) hint0;
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->testRenderHint((QPainter::RenderHint )__qt_hint0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::transform() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_transform_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    const QTransform&  __qt_return_value = __qt_this->transform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QPainter::translate(const QPoint & offset)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_translate_QPoint
(void* __this_nativeId,
 QPoint offset0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->translate((const QPoint& )offset0);

}

// QPainter::translate(const QPointF & offset)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_translate_QPointF
(void* __this_nativeId,
 QPointF offset0)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->translate((const QPointF& )offset0);

}

// QPainter::translate(double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_translate_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    __qt_this->translate((double )dx0, (double )dy1);

}

// QPainter::viewTransformEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QPainter_viewTransformEnabled_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->viewTransformEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::viewport() const
QTD_EXTERN QTD_EXPORT void qtd_QPainter_viewport_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->viewport();

    *__d_return_value = __qt_return_value;

}

// QPainter::window() const
QTD_EXTERN QTD_EXPORT void qtd_QPainter_window_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->window();

    *__d_return_value = __qt_return_value;

}

// QPainter::worldMatrix() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_worldMatrix_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    const QMatrix&  __qt_return_value = __qt_this->worldMatrix();

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QPainter::worldMatrixEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QPainter_worldMatrixEnabled_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->worldMatrixEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainter::worldTransform() const
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_worldTransform_const
(void* __this_nativeId)
{
    QPainter_QtDShell *__qt_this = (QPainter_QtDShell *) __this_nativeId;
    const QTransform&  __qt_return_value = __qt_this->worldTransform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QPainter::redirected(const QPaintDevice * device, QPoint * offset)
QTD_EXTERN QTD_EXPORT void* qtd_QPainter_redirected_QPaintDevice_nativepointerQPoint
(void* device0,
 void* offset1)
{
    const QPaintDevice*  __qt_device0 = (const QPaintDevice* ) device0;
    QPaintDevice*  __qt_return_value = QPainter_QtDShell::redirected((const QPaintDevice* )__qt_device0, (QPoint* )offset1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPainter::restoreRedirected(const QPaintDevice * device)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_restoreRedirected_QPaintDevice
(void* device0)
{
    const QPaintDevice*  __qt_device0 = (const QPaintDevice* ) device0;
    QPainter_QtDShell::restoreRedirected((const QPaintDevice* )__qt_device0);

}

// QPainter::setRedirected(const QPaintDevice * device, QPaintDevice * replacement, const QPoint & offset)
QTD_EXTERN QTD_EXPORT void qtd_QPainter_setRedirected_QPaintDevice_QPaintDevice_QPoint
(void* device0,
 void* replacement1,
 QPoint offset2)
{
    const QPaintDevice*  __qt_device0 = (const QPaintDevice* ) device0;
    QPaintDevice*  __qt_replacement1 = (QPaintDevice* ) replacement1;
    QPainter_QtDShell::setRedirected((const QPaintDevice* )__qt_device0, (QPaintDevice* )__qt_replacement1, (const QPoint& )offset2);

}

// ---externC---end
// Field accessors


