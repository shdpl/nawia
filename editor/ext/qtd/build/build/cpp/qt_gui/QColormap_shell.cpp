#include <QColor>
#include <QVariant>
#include <qcolor.h>
#include <qcolormap.h>
#include <qvector.h>

#include <iostream>
#include <qcolormap.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QColormap_delete(void* nativeId)
{
    delete (QColormap*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QColormap_destroy(void* nativeId)
{
    call_destructor((QColormap*)nativeId);
}

// ---externC---
// QColormap::QColormap(const QColormap & colormap)
QTD_EXTERN QTD_EXPORT void* qtd_QColormap_QColormap_QColormap
(void* colormap0)
{
    const QColormap&  __qt_colormap0 = (const QColormap& ) *(QColormap *)colormap0;
    QColormap *__qt_this = new QColormap((const QColormap& )__qt_colormap0);
    return (void *) __qt_this;

}

// QColormap::colorAt(uint pixel) const
QTD_EXTERN QTD_EXPORT void* qtd_QColormap_colorAt_uint_const
(void* __this_nativeId,
 uint pixel0)
{
    QColormap *__qt_this = (QColormap *) __this_nativeId;
    const QColor  __qt_return_value = __qt_this->colorAt((uint )pixel0);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QColormap::colormap() const
QTD_EXTERN QTD_EXPORT void qtd_QColormap_colormap_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QColormap *__qt_this = (QColormap *) __this_nativeId;
    const QVector<QColor >  __qt_return_value = __qt_this->colormap();


    qtd_allocate_QColor_array(__d_return_value, __qt_return_value.size());
    QVector<QColor > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QColor > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QColor  __qt_tmp = *__qt_return_value_it;
        void* __java_tmp = (void*) new QColor(__qt_tmp);
        qtd_assign_QColor_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QColormap::depth() const
QTD_EXTERN QTD_EXPORT int qtd_QColormap_depth_const
(void* __this_nativeId)
{
    QColormap *__qt_this = (QColormap *) __this_nativeId;
    int  __qt_return_value = __qt_this->depth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColormap::mode() const
QTD_EXTERN QTD_EXPORT int qtd_QColormap_mode_const
(void* __this_nativeId)
{
    QColormap *__qt_this = (QColormap *) __this_nativeId;
    int  __qt_return_value = __qt_this->mode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColormap::pixel(const QColor & color) const
QTD_EXTERN QTD_EXPORT uint qtd_QColormap_pixel_QColor_const
(void* __this_nativeId,
 void* color0)
{
    const QColor&  __qt_color0 = (const QColor& ) *(QColor *)color0;
    QColormap *__qt_this = (QColormap *) __this_nativeId;
    uint  __qt_return_value = __qt_this->pixel((const QColor& )__qt_color0);

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColormap::size() const
QTD_EXTERN QTD_EXPORT int qtd_QColormap_size_const
(void* __this_nativeId)
{
    QColormap *__qt_this = (QColormap *) __this_nativeId;
    int  __qt_return_value = __qt_this->size();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColormap::cleanup()
QTD_EXTERN QTD_EXPORT void qtd_QColormap_cleanup
()
{
    QColormap::cleanup();

}

// QColormap::initialize()
QTD_EXTERN QTD_EXPORT void qtd_QColormap_initialize
()
{
    QColormap::initialize();

}

// QColormap::instance(int screen)
QTD_EXTERN QTD_EXPORT void* qtd_QColormap_instance_int
(int screen0)
{
    QColormap  __qt_return_value = QColormap::instance((int )screen0);

    void* __d_return_value = (void*) new QColormap(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QColormap_QTypeInfo_isComplex() { return (bool) QTypeInfo<QColormap>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QColormap_QTypeInfo_isStatic() { return (bool) QTypeInfo<QColormap>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QColormap_QTypeInfo_isLarge() { return (bool) QTypeInfo<QColormap>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QColormap_QTypeInfo_isPointer() { return (bool) QTypeInfo<QColormap>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QColormap_QTypeInfo_isDummy() { return (bool) QTypeInfo<QColormap>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QColormap_placed_copy(void* orig, void* place) {
    const QColormap&  __qt_orig = (const QColormap& ) *(QColormap *)orig;
    QColormap *result = new (place) QColormap (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QColormap_native_copy(void* orig) {
    const QColormap&  __qt_orig = (const QColormap& ) *(QColormap *)orig;
    QColormap *result = new QColormap (__qt_orig);
    return result;
}

