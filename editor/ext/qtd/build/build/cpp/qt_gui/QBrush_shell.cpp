#include <QPixmap>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qmatrix.h>
#include <qpixmap.h>
#include <qtransform.h>
#include <qvariant.h>

#include <iostream>
#include <qbrush.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QBrush_delete(void* nativeId)
{
    delete (QBrush*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QBrush_destroy(void* nativeId)
{
    call_destructor((QBrush*)nativeId);
}

// ---externC---
// QBrush::QBrush()
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_QBrush
()
{
    QBrush *__qt_this = new QBrush();
    return (void *) __qt_this;

}

// QBrush::QBrush(Qt::BrushStyle bs)
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_QBrush_BrushStyle
(int bs0)
{
    Qt::BrushStyle __qt_bs0 = (Qt::BrushStyle) bs0;
    QBrush *__qt_this = new QBrush((Qt::BrushStyle )__qt_bs0);
    return (void *) __qt_this;

}

// QBrush::QBrush(Qt::GlobalColor color, Qt::BrushStyle bs)
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_QBrush_GlobalColor_BrushStyle
(int color0,
 int bs1)
{
    Qt::GlobalColor __qt_color0 = (Qt::GlobalColor) color0;
    Qt::BrushStyle __qt_bs1 = (Qt::BrushStyle) bs1;
    QBrush *__qt_this = new QBrush((Qt::GlobalColor )__qt_color0, (Qt::BrushStyle )__qt_bs1);
    return (void *) __qt_this;

}

// QBrush::QBrush(Qt::GlobalColor color, const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_QBrush_GlobalColor_QPixmap
(int color0,
 void* pixmap1)
{
    Qt::GlobalColor __qt_color0 = (Qt::GlobalColor) color0;
    const QPixmap&  __qt_pixmap1 = (const QPixmap& ) *(QPixmap *)pixmap1;
    QBrush *__qt_this = new QBrush((Qt::GlobalColor )__qt_color0, (const QPixmap& )__qt_pixmap1);
    return (void *) __qt_this;

}

// QBrush::QBrush(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_QBrush_QBrush
(void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QBrush *__qt_this = new QBrush((const QBrush& )__qt_brush0);
    return (void *) __qt_this;

}

// QBrush::QBrush(const QColor & color, Qt::BrushStyle bs)
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_QBrush_QColor_BrushStyle
(void* color0,
 int bs1)
{
    const QColor&  __qt_color0 = (const QColor& ) *(QColor *)color0;
    Qt::BrushStyle __qt_bs1 = (Qt::BrushStyle) bs1;
    QBrush *__qt_this = new QBrush((const QColor& )__qt_color0, (Qt::BrushStyle )__qt_bs1);
    return (void *) __qt_this;

}

// QBrush::QBrush(const QColor & color, const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_QBrush_QColor_QPixmap
(void* color0,
 void* pixmap1)
{
    const QColor&  __qt_color0 = (const QColor& ) *(QColor *)color0;
    const QPixmap&  __qt_pixmap1 = (const QPixmap& ) *(QPixmap *)pixmap1;
    QBrush *__qt_this = new QBrush((const QColor& )__qt_color0, (const QPixmap& )__qt_pixmap1);
    return (void *) __qt_this;

}

// QBrush::QBrush(const QGradient & gradient)
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_QBrush_QGradient
(void* gradient0)
{
    const QGradient&  __qt_gradient0 = (const QGradient& ) *(QGradient *)gradient0;
    QBrush *__qt_this = new QBrush((const QGradient& )__qt_gradient0);
    return (void *) __qt_this;

}

// QBrush::QBrush(const QImage & image)
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_QBrush_QImage
(void* image0)
{
    const QImage&  __qt_image0 = (const QImage& ) *(QImage *)image0;
    QBrush *__qt_this = new QBrush((const QImage& )__qt_image0);
    return (void *) __qt_this;

}

// QBrush::QBrush(const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_QBrush_QPixmap
(void* pixmap0)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QBrush *__qt_this = new QBrush((const QPixmap& )__qt_pixmap0);
    return (void *) __qt_this;

}

// QBrush::color() const
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_color_const
(void* __this_nativeId)
{
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    const QColor&  __qt_return_value = __qt_this->color();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QBrush::isOpaque() const
QTD_EXTERN QTD_EXPORT bool qtd_QBrush_isOpaque_const
(void* __this_nativeId)
{
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isOpaque();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBrush::matrix() const
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_matrix_const
(void* __this_nativeId)
{
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    const QMatrix&  __qt_return_value = __qt_this->matrix();

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QBrush::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QBrush::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBrush_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QBrush::operator==(const QBrush & b) const
QTD_EXTERN QTD_EXPORT bool qtd_QBrush_operator_equal_QBrush_const
(void* __this_nativeId,
 void* b0)
{
    const QBrush&  __qt_b0 = (const QBrush& ) *(QBrush *)b0;
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QBrush& )__qt_b0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBrush::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBrush_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QBrush::setColor(Qt::GlobalColor color)
QTD_EXTERN QTD_EXPORT void qtd_QBrush_setColor_GlobalColor
(void* __this_nativeId,
 int color0)
{
    Qt::GlobalColor __qt_color0 = (Qt::GlobalColor) color0;
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    __qt_this->setColor((Qt::GlobalColor )__qt_color0);

}

// QBrush::setColor(const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QBrush_setColor_QColor
(void* __this_nativeId,
 void* color0)
{
    const QColor&  __qt_color0 = (const QColor& ) *(QColor *)color0;
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    __qt_this->setColor((const QColor& )__qt_color0);

}

// QBrush::setMatrix(const QMatrix & mat)
QTD_EXTERN QTD_EXPORT void qtd_QBrush_setMatrix_QMatrix
(void* __this_nativeId,
 void* mat0)
{
    const QMatrix&  __qt_mat0 = (const QMatrix& ) *(QMatrix *)mat0;
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    __qt_this->setMatrix((const QMatrix& )__qt_mat0);

}

// QBrush::setStyle(Qt::BrushStyle arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBrush_setStyle_BrushStyle
(void* __this_nativeId,
 int arg__1)
{
    Qt::BrushStyle __qt_arg__1 = (Qt::BrushStyle) arg__1;
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    __qt_this->setStyle((Qt::BrushStyle )__qt_arg__1);

}

// QBrush::setTexture(const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT void qtd_QBrush_setTexture_QPixmap
(void* __this_nativeId,
 void* pixmap0)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    __qt_this->setTexture((const QPixmap& )__qt_pixmap0);

}

// QBrush::setTextureImage(const QImage & image)
QTD_EXTERN QTD_EXPORT void qtd_QBrush_setTextureImage_QImage
(void* __this_nativeId,
 void* image0)
{
    const QImage&  __qt_image0 = (const QImage& ) *(QImage *)image0;
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    __qt_this->setTextureImage((const QImage& )__qt_image0);

}

// QBrush::setTransform(const QTransform & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBrush_setTransform_QTransform
(void* __this_nativeId,
 void* arg__1)
{
    const QTransform&  __qt_arg__1 = (const QTransform& ) *(QTransform *)arg__1;
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    __qt_this->setTransform((const QTransform& )__qt_arg__1);

}

// QBrush::style() const
QTD_EXTERN QTD_EXPORT int qtd_QBrush_style_const
(void* __this_nativeId)
{
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    int  __qt_return_value = __qt_this->style();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBrush::texture() const
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_texture_const
(void* __this_nativeId)
{
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->texture();

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QBrush::textureImage() const
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_textureImage_const
(void* __this_nativeId)
{
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->textureImage();

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QBrush::transform() const
QTD_EXTERN QTD_EXPORT void* qtd_QBrush_transform_const
(void* __this_nativeId)
{
    QBrush *__qt_this = (QBrush *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->transform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QBrush_QTypeInfo_isComplex() { return (bool) QTypeInfo<QBrush>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QBrush_QTypeInfo_isStatic() { return (bool) QTypeInfo<QBrush>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QBrush_QTypeInfo_isLarge() { return (bool) QTypeInfo<QBrush>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QBrush_QTypeInfo_isPointer() { return (bool) QTypeInfo<QBrush>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QBrush_QTypeInfo_isDummy() { return (bool) QTypeInfo<QBrush>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QBrush_placed_copy(void* orig, void* place) {
    const QBrush&  __qt_orig = (const QBrush& ) *(QBrush *)orig;
    QBrush *result = new (place) QBrush (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QBrush_native_copy(void* orig) {
    const QBrush&  __qt_orig = (const QBrush& ) *(QBrush *)orig;
    QBrush *result = new QBrush (__qt_orig);
    return result;
}

