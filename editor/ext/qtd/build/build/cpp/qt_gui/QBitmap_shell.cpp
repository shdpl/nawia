#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qimage.h>
#include <qimagereader.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpixmap.h>
#include <qregion.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QBitmap_shell.h"
#include <iostream>
#include <qbitmap.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QBitmap_delete(void* nativeId)
{
    delete (QBitmap_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QBitmap_destroy(void* nativeId)
{
    call_destructor((QBitmap_QtDShell*)nativeId);
}

QBitmap_QtDShell::QBitmap_QtDShell(void *d_ptr)
    : QBitmap(),
      QtdObjectLink(d_ptr)
{
}

QBitmap_QtDShell::QBitmap_QtDShell(void *d_ptr, const QPixmap&  arg__1)
    : QBitmap(arg__1),
      QtdObjectLink(d_ptr)
{
}

QBitmap_QtDShell::QBitmap_QtDShell(void *d_ptr, const QSize&  arg__1)
    : QBitmap(arg__1),
      QtdObjectLink(d_ptr)
{
}

QBitmap_QtDShell::QBitmap_QtDShell(void *d_ptr, const QString&  fileName0, const char*  format1)
    : QBitmap(fileName0, format1),
      QtdObjectLink(d_ptr)
{
}

QBitmap_QtDShell::QBitmap_QtDShell(void *d_ptr, int  w0, int  h1)
    : QBitmap(w0, h1),
      QtdObjectLink(d_ptr)
{
}

QBitmap_QtDShell::~QBitmap_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QBitmap_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QBitmap*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QBitmap_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QBitmap_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(this->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QBitmap_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QBitmap_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QBitmap_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QPixmap::devType();
    } else {
        return devType();
    }
}

int  QBitmap_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QPixmap::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QPaintEngine*  QBitmap_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QPixmap::paintEngine();
    } else {
        return paintEngine();
    }
}

// ---externC---
// QBitmap::QBitmap()
QTD_EXTERN QTD_EXPORT void* qtd_QBitmap_QBitmap
(void *d_ptr)
{
    QBitmap_QtDShell *__qt_this = new QBitmap_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QBitmap::QBitmap(const QPixmap & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QBitmap_QBitmap_QPixmap
(void *d_ptr,
 void* arg__1)
{
    const QPixmap&  __qt_arg__1 = (const QPixmap& ) *(QPixmap *)arg__1;
    QBitmap_QtDShell *__qt_this = new QBitmap_QtDShell(d_ptr, (const QPixmap& )__qt_arg__1);
    return (void *) __qt_this;

}

// QBitmap::QBitmap(const QSize & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QBitmap_QBitmap_QSize
(void *d_ptr,
 QSize arg__1)
{
    QBitmap_QtDShell *__qt_this = new QBitmap_QtDShell(d_ptr, (const QSize& )arg__1);
    return (void *) __qt_this;

}

// QBitmap::QBitmap(const QString & fileName, const char * format)
QTD_EXTERN QTD_EXPORT void* qtd_QBitmap_QBitmap_string_nativepointerchar
(void *d_ptr,
 DArray fileName0,
 char* format1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const char*  __qt_format1 = (const char* ) format1;
    QBitmap_QtDShell *__qt_this = new QBitmap_QtDShell(d_ptr, (const QString& )__qt_fileName0, (const char* )__qt_format1);
    return (void *) __qt_this;

}

// QBitmap::QBitmap(int w, int h)
QTD_EXTERN QTD_EXPORT void* qtd_QBitmap_QBitmap_int_int
(void *d_ptr,
 int w0,
 int h1)
{
    QBitmap_QtDShell *__qt_this = new QBitmap_QtDShell(d_ptr, (int )w0, (int )h1);
    return (void *) __qt_this;

}

// QBitmap::clear()
QTD_EXTERN QTD_EXPORT void qtd_QBitmap_clear
(void* __this_nativeId)
{
    QBitmap_QtDShell *__qt_this = (QBitmap_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QBitmap::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QBitmap_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QBitmap_QtDShell *__qt_this = (QBitmap_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QBitmap::transformed(const QMatrix & arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QBitmap_transformed_QMatrix_const
(void* __this_nativeId,
 void* arg__1)
{
    const QMatrix&  __qt_arg__1 = (const QMatrix& ) *(QMatrix *)arg__1;
    QBitmap_QtDShell *__qt_this = (QBitmap_QtDShell *) __this_nativeId;
    QBitmap  __qt_return_value = __qt_this->transformed((const QMatrix& )__qt_arg__1);

    void* __d_return_value = (void*) new QBitmap(__qt_return_value);

    return __d_return_value;
}

// QBitmap::transformed(const QTransform & matrix) const
QTD_EXTERN QTD_EXPORT void* qtd_QBitmap_transformed_QTransform_const
(void* __this_nativeId,
 void* matrix0)
{
    const QTransform&  __qt_matrix0 = (const QTransform& ) *(QTransform *)matrix0;
    QBitmap_QtDShell *__qt_this = (QBitmap_QtDShell *) __this_nativeId;
    QBitmap  __qt_return_value = __qt_this->transformed((const QTransform& )__qt_matrix0);

    void* __d_return_value = (void*) new QBitmap(__qt_return_value);

    return __d_return_value;
}

// QBitmap::fromData(const QSize & size, const unsigned char * bits, QImage::Format monoFormat)
QTD_EXTERN QTD_EXPORT void* qtd_QBitmap_fromData_QSize_nativepointerubyte_Format
(QSize size0,
 unsigned char* bits1,
 int monoFormat2)
{
    const unsigned char*  __qt_bits1 = (const unsigned char* ) bits1;
    QImage::Format __qt_monoFormat2 = (QImage::Format) monoFormat2;
    QBitmap  __qt_return_value = QBitmap_QtDShell::fromData((const QSize& )size0, (const unsigned char* )__qt_bits1, (QImage::Format )__qt_monoFormat2);

    void* __d_return_value = (void*) new QBitmap(__qt_return_value);

    return __d_return_value;
}

// QBitmap::fromImage(const QImage & image, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QBitmap_fromImage_QImage_ImageConversionFlags
(void* image0,
 int flags1)
{
    const QImage&  __qt_image0 = (const QImage& ) *(QImage *)image0;
    QFlags<Qt::ImageConversionFlag> __qt_flags1 = (QFlags<Qt::ImageConversionFlag>) flags1;
    QBitmap  __qt_return_value = QBitmap_QtDShell::fromImage((const QImage& )__qt_image0, (Qt::ImageConversionFlags )__qt_flags1);

    void* __d_return_value = (void*) new QBitmap(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QBitmap_QTypeInfo_isComplex() { return (bool) QTypeInfo<QBitmap>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QBitmap_QTypeInfo_isStatic() { return (bool) QTypeInfo<QBitmap>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QBitmap_QTypeInfo_isLarge() { return (bool) QTypeInfo<QBitmap>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QBitmap_QTypeInfo_isPointer() { return (bool) QTypeInfo<QBitmap>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QBitmap_QTypeInfo_isDummy() { return (bool) QTypeInfo<QBitmap>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QBitmap_placed_copy(void* orig, void* place) {
    const QBitmap_QtDShell&  __qt_orig = (const QBitmap_QtDShell& ) *(QBitmap_QtDShell *)orig;
    QBitmap *result = new (place) QBitmap (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QBitmap_native_copy(void* orig) {
    const QBitmap_QtDShell&  __qt_orig = (const QBitmap_QtDShell& ) *(QBitmap_QtDShell *)orig;
    QBitmap *result = new QBitmap (__qt_orig);
    return result;
}

