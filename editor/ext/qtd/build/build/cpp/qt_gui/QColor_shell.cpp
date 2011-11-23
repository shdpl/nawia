#include <QVariant>
#include <qcolor.h>
#include <qdatastream.h>
#include <qstringlist.h>
#include <qvariant.h>

#include <iostream>
#include <qcolor.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QColor_delete(void* nativeId)
{
    delete (QColor*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QColor_destroy(void* nativeId)
{
    call_destructor((QColor*)nativeId);
}

// ---externC---
// QColor::QColor()
QTD_EXTERN QTD_EXPORT void* qtd_QColor_QColor
()
{
    QColor *__qt_this = new QColor();
    return (void *) __qt_this;

}

// QColor::QColor(Qt::GlobalColor color)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_QColor_GlobalColor
(int color0)
{
    Qt::GlobalColor __qt_color0 = (Qt::GlobalColor) color0;
    QColor *__qt_this = new QColor((Qt::GlobalColor )__qt_color0);
    return (void *) __qt_this;

}

// QColor::QColor(const QColor & color)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_QColor_QColor
(void* color0)
{
    const QColor&  __qt_color0 = (const QColor& ) *(QColor *)color0;
    QColor *__qt_this = new QColor((const QColor& )__qt_color0);
    return (void *) __qt_this;

}

// QColor::QColor(const QString & name)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_QColor_string
(DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QColor *__qt_this = new QColor((const QString& )__qt_name0);
    return (void *) __qt_this;

}

// QColor::QColor(int r, int g, int b, int a)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_QColor_int_int_int_int
(int r0,
 int g1,
 int b2,
 int a3)
{
    QColor *__qt_this = new QColor((int )r0, (int )g1, (int )b2, (int )a3);
    return (void *) __qt_this;

}

// QColor::QColor(unsigned int rgb)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_QColor_uint
(unsigned int rgb0)
{
    QColor *__qt_this = new QColor((unsigned int )rgb0);
    return (void *) __qt_this;

}

// QColor::alpha() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_alpha_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->alpha();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::alphaF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_alphaF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->alphaF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::black() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_black_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->black();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::blackF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_blackF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->blackF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::blue() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_blue_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->blue();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::blueF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_blueF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->blueF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::convertTo(QColor::Spec colorSpec) const
QTD_EXTERN QTD_EXPORT void* qtd_QColor_convertTo_Spec_const
(void* __this_nativeId,
 int colorSpec0)
{
    QColor::Spec __qt_colorSpec0 = (QColor::Spec) colorSpec0;
    QColor *__qt_this = (QColor *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->convertTo((QColor::Spec )__qt_colorSpec0);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::cyan() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_cyan_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->cyan();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::cyanF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_cyanF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->cyanF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::darker(int f) const
QTD_EXTERN QTD_EXPORT void* qtd_QColor_darker_int_const
(void* __this_nativeId,
 int f0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->darker((int )f0);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::getHsl(int * h, int * s, int * l, int * a) const
QTD_EXTERN QTD_EXPORT void qtd_QColor_getHsl_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const
(void* __this_nativeId,
 int* h0,
 int* s1,
 int* l2,
 int* a3)
{
    int*  __qt_h0 = (int* ) h0;
    int*  __qt_s1 = (int* ) s1;
    int*  __qt_l2 = (int* ) l2;
    int*  __qt_a3 = (int* ) a3;
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->getHsl((int* )__qt_h0, (int* )__qt_s1, (int* )__qt_l2, (int* )__qt_a3);

}

// QColor::getHslF(double * h, double * s, double * l, double * a) const
QTD_EXTERN QTD_EXPORT void qtd_QColor_getHslF_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_const
(void* __this_nativeId,
 double* h0,
 double* s1,
 double* l2,
 double* a3)
{
    double*  __qt_h0 = (double* ) h0;
    double*  __qt_s1 = (double* ) s1;
    double*  __qt_l2 = (double* ) l2;
    double*  __qt_a3 = (double* ) a3;
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->getHslF((double* )__qt_h0, (double* )__qt_s1, (double* )__qt_l2, (double* )__qt_a3);

}

// QColor::green() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_green_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->green();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::greenF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_greenF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->greenF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::hslHue() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_hslHue_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->hslHue();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::hslHueF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_hslHueF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->hslHueF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::hslSaturation() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_hslSaturation_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->hslSaturation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::hslSaturationF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_hslSaturationF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->hslSaturationF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::hsvHue() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_hsvHue_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->hsvHue();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::hsvHueF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_hsvHueF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->hsvHueF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::hsvSaturation() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_hsvSaturation_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->hsvSaturation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::hsvSaturationF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_hsvSaturationF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->hsvSaturationF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::hue() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_hue_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->hue();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::hueF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_hueF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->hueF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QColor_isValid_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::lighter(int f) const
QTD_EXTERN QTD_EXPORT void* qtd_QColor_lighter_int_const
(void* __this_nativeId,
 int f0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->lighter((int )f0);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::lightness() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_lightness_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->lightness();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::lightnessF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_lightnessF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->lightnessF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::magenta() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_magenta_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->magenta();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::magentaF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_magentaF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->magentaF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::name() const
QTD_EXTERN QTD_EXPORT void qtd_QColor_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    QString  __qt_return_value = __qt_this->name();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QColor::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QColor_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QColor::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QColor_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QColor *__qt_this = (QColor *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QColor::operator==(const QColor & c) const
QTD_EXTERN QTD_EXPORT bool qtd_QColor_operator_equal_QColor_const
(void* __this_nativeId,
 void* c0)
{
    const QColor&  __qt_c0 = (const QColor& ) *(QColor *)c0;
    QColor *__qt_this = (QColor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QColor& )__qt_c0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QColor_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QColor *__qt_this = (QColor *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QColor::red() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_red_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->red();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::redF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_redF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->redF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::rgb() const
QTD_EXTERN QTD_EXPORT unsigned int qtd_QColor_rgb_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    unsigned int  __qt_return_value = __qt_this->rgb();

    unsigned int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::rgba() const
QTD_EXTERN QTD_EXPORT unsigned int qtd_QColor_rgba_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    unsigned int  __qt_return_value = __qt_this->rgba();

    unsigned int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::saturation() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_saturation_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->saturation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::saturationF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_saturationF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->saturationF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::setAlpha(int alpha)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setAlpha_int
(void* __this_nativeId,
 int alpha0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setAlpha((int )alpha0);

}

// QColor::setAlphaF(double alpha)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setAlphaF_double
(void* __this_nativeId,
 double alpha0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setAlphaF((double )alpha0);

}

// QColor::setBlue(int blue)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setBlue_int
(void* __this_nativeId,
 int blue0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setBlue((int )blue0);

}

// QColor::setBlueF(double blue)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setBlueF_double
(void* __this_nativeId,
 double blue0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setBlueF((double )blue0);

}

// QColor::setCmyk(int c, int m, int y, int k, int a)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setCmyk_int_int_int_int_int
(void* __this_nativeId,
 int c0,
 int m1,
 int y2,
 int k3,
 int a4)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setCmyk((int )c0, (int )m1, (int )y2, (int )k3, (int )a4);

}

// QColor::setCmykF(double c, double m, double y, double k, double a)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setCmykF_double_double_double_double_double
(void* __this_nativeId,
 double c0,
 double m1,
 double y2,
 double k3,
 double a4)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setCmykF((double )c0, (double )m1, (double )y2, (double )k3, (double )a4);

}

// QColor::setGreen(int green)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setGreen_int
(void* __this_nativeId,
 int green0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setGreen((int )green0);

}

// QColor::setGreenF(double green)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setGreenF_double
(void* __this_nativeId,
 double green0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setGreenF((double )green0);

}

// QColor::setHsl(int h, int s, int l, int a)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setHsl_int_int_int_int
(void* __this_nativeId,
 int h0,
 int s1,
 int l2,
 int a3)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setHsl((int )h0, (int )s1, (int )l2, (int )a3);

}

// QColor::setHslF(double h, double s, double l, double a)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setHslF_double_double_double_double
(void* __this_nativeId,
 double h0,
 double s1,
 double l2,
 double a3)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setHslF((double )h0, (double )s1, (double )l2, (double )a3);

}

// QColor::setHsv(int h, int s, int v, int a)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setHsv_int_int_int_int
(void* __this_nativeId,
 int h0,
 int s1,
 int v2,
 int a3)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setHsv((int )h0, (int )s1, (int )v2, (int )a3);

}

// QColor::setHsvF(double h, double s, double v, double a)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setHsvF_double_double_double_double
(void* __this_nativeId,
 double h0,
 double s1,
 double v2,
 double a3)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setHsvF((double )h0, (double )s1, (double )v2, (double )a3);

}

// QColor::setNamedColor(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setNamedColor_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setNamedColor((const QString& )__qt_name0);

}

// QColor::setRed(int red)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setRed_int
(void* __this_nativeId,
 int red0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setRed((int )red0);

}

// QColor::setRedF(double red)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setRedF_double
(void* __this_nativeId,
 double red0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setRedF((double )red0);

}

// QColor::setRgb(int r, int g, int b, int a)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setRgb_int_int_int_int
(void* __this_nativeId,
 int r0,
 int g1,
 int b2,
 int a3)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setRgb((int )r0, (int )g1, (int )b2, (int )a3);

}

// QColor::setRgb(unsigned int rgb)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setRgb_uint
(void* __this_nativeId,
 unsigned int rgb0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setRgb((unsigned int )rgb0);

}

// QColor::setRgbF(double r, double g, double b, double a)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setRgbF_double_double_double_double
(void* __this_nativeId,
 double r0,
 double g1,
 double b2,
 double a3)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setRgbF((double )r0, (double )g1, (double )b2, (double )a3);

}

// QColor::setRgba(unsigned int rgba)
QTD_EXTERN QTD_EXPORT void qtd_QColor_setRgba_uint
(void* __this_nativeId,
 unsigned int rgba0)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    __qt_this->setRgba((unsigned int )rgba0);

}

// QColor::spec() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_spec_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->spec();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::toCmyk() const
QTD_EXTERN QTD_EXPORT void* qtd_QColor_toCmyk_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->toCmyk();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::toHsl() const
QTD_EXTERN QTD_EXPORT void* qtd_QColor_toHsl_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->toHsl();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::toHsv() const
QTD_EXTERN QTD_EXPORT void* qtd_QColor_toHsv_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->toHsv();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::toRgb() const
QTD_EXTERN QTD_EXPORT void* qtd_QColor_toRgb_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->toRgb();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::value() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_value_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->value();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::valueF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_valueF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->valueF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::yellow() const
QTD_EXTERN QTD_EXPORT int qtd_QColor_yellow_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    int  __qt_return_value = __qt_this->yellow();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::yellowF() const
QTD_EXTERN QTD_EXPORT double qtd_QColor_yellowF_const
(void* __this_nativeId)
{
    QColor *__qt_this = (QColor *) __this_nativeId;
    double  __qt_return_value = __qt_this->yellowF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColor::colorNames()
QTD_EXTERN QTD_EXPORT void qtd_QColor_colorNames
(void* __d_return_value)
{
    QStringList  __qt_return_value = QColor::colorNames();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QColor::fromCmyk(int c, int m, int y, int k, int a)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_fromCmyk_int_int_int_int_int
(int c0,
 int m1,
 int y2,
 int k3,
 int a4)
{
    QColor  __qt_return_value = QColor::fromCmyk((int )c0, (int )m1, (int )y2, (int )k3, (int )a4);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::fromCmykF(double c, double m, double y, double k, double a)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_fromCmykF_double_double_double_double_double
(double c0,
 double m1,
 double y2,
 double k3,
 double a4)
{
    QColor  __qt_return_value = QColor::fromCmykF((double )c0, (double )m1, (double )y2, (double )k3, (double )a4);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::fromHsl(int h, int s, int l, int a)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_fromHsl_int_int_int_int
(int h0,
 int s1,
 int l2,
 int a3)
{
    QColor  __qt_return_value = QColor::fromHsl((int )h0, (int )s1, (int )l2, (int )a3);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::fromHslF(double h, double s, double l, double a)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_fromHslF_double_double_double_double
(double h0,
 double s1,
 double l2,
 double a3)
{
    QColor  __qt_return_value = QColor::fromHslF((double )h0, (double )s1, (double )l2, (double )a3);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::fromHsv(int h, int s, int v, int a)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_fromHsv_int_int_int_int
(int h0,
 int s1,
 int v2,
 int a3)
{
    QColor  __qt_return_value = QColor::fromHsv((int )h0, (int )s1, (int )v2, (int )a3);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::fromHsvF(double h, double s, double v, double a)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_fromHsvF_double_double_double_double
(double h0,
 double s1,
 double v2,
 double a3)
{
    QColor  __qt_return_value = QColor::fromHsvF((double )h0, (double )s1, (double )v2, (double )a3);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::fromRgb(int r, int g, int b, int a)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_fromRgb_int_int_int_int
(int r0,
 int g1,
 int b2,
 int a3)
{
    QColor  __qt_return_value = QColor::fromRgb((int )r0, (int )g1, (int )b2, (int )a3);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::fromRgb(unsigned int rgb)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_fromRgb_uint
(unsigned int rgb0)
{
    QColor  __qt_return_value = QColor::fromRgb((unsigned int )rgb0);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::fromRgbF(double r, double g, double b, double a)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_fromRgbF_double_double_double_double
(double r0,
 double g1,
 double b2,
 double a3)
{
    QColor  __qt_return_value = QColor::fromRgbF((double )r0, (double )g1, (double )b2, (double )a3);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::fromRgba(unsigned int rgba)
QTD_EXTERN QTD_EXPORT void* qtd_QColor_fromRgba_uint
(unsigned int rgba0)
{
    QColor  __qt_return_value = QColor::fromRgba((unsigned int )rgba0);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColor::isValidColor(const QString & name)
QTD_EXTERN QTD_EXPORT bool qtd_QColor_isValidColor_string
(DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    bool  __qt_return_value = QColor::isValidColor((const QString& )__qt_name0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QColor_QTypeInfo_isComplex() { return (bool) QTypeInfo<QColor>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QColor_QTypeInfo_isStatic() { return (bool) QTypeInfo<QColor>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QColor_QTypeInfo_isLarge() { return (bool) QTypeInfo<QColor>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QColor_QTypeInfo_isPointer() { return (bool) QTypeInfo<QColor>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QColor_QTypeInfo_isDummy() { return (bool) QTypeInfo<QColor>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QColor_placed_copy(void* orig, void* place) {
    const QColor&  __qt_orig = (const QColor& ) *(QColor *)orig;
    QColor *result = new (place) QColor (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QColor_native_copy(void* orig) {
    const QColor&  __qt_orig = (const QColor& ) *(QColor *)orig;
    QColor *result = new QColor (__qt_orig);
    return result;
}

