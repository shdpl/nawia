#include <QVariant>
#include <qcolor.h>
#include <qglcolormap.h>

#include "QGLColormap_shell.h"
#include <iostream>
#include <qglcolormap.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_opengl.h"

QTD_EXTERN QTD_EXPORT void qtd_QGLColormap_delete(void* nativeId)
{
    delete (QGLColormap_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGLColormap_destroy(void* nativeId)
{
    call_destructor((QGLColormap_QtDShell*)nativeId);
}

QGLColormap_QtDShell::QGLColormap_QtDShell()
    : QGLColormap()
{
}

QGLColormap_QtDShell::QGLColormap_QtDShell(const QGLColormap&  arg__1)
    : QGLColormap(arg__1)
{
}

QGLColormap_QtDShell::~QGLColormap_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QGLColormap_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
Qt::HANDLE  QGLColormap_QtDShell::__public_handle()
{
    return QGLColormap::handle();
}

void QGLColormap_QtDShell::__public_setHandle(Qt::HANDLE  ahandle0)
{
    QGLColormap::setHandle((Qt::HANDLE )ahandle0);
}

// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QGLColormap::QGLColormap()
QTD_EXTERN QTD_EXPORT void* qtd_QGLColormap_QGLColormap
()
{
    QGLColormap_QtDShell *__qt_this = new QGLColormap_QtDShell();
    return (void *) __qt_this;

}

// QGLColormap::QGLColormap(const QGLColormap & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QGLColormap_QGLColormap_QGLColormap
(void* arg__1)
{
    const QGLColormap&  __qt_arg__1 = (const QGLColormap& ) *(QGLColormap *)arg__1;
    QGLColormap_QtDShell *__qt_this = new QGLColormap_QtDShell((const QGLColormap& )__qt_arg__1);
    return (void *) __qt_this;

}

// QGLColormap::entryColor(int idx) const
QTD_EXTERN QTD_EXPORT void* qtd_QGLColormap_entryColor_int_const
(void* __this_nativeId,
 int idx0)
{
    QGLColormap_QtDShell *__qt_this = (QGLColormap_QtDShell *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->entryColor((int )idx0);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QGLColormap::entryRgb(int idx) const
QTD_EXTERN QTD_EXPORT unsigned int qtd_QGLColormap_entryRgb_int_const
(void* __this_nativeId,
 int idx0)
{
    QGLColormap_QtDShell *__qt_this = (QGLColormap_QtDShell *) __this_nativeId;
    unsigned int  __qt_return_value = __qt_this->entryRgb((int )idx0);

    unsigned int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLColormap::find(unsigned int color) const
QTD_EXTERN QTD_EXPORT int qtd_QGLColormap_find_uint_const
(void* __this_nativeId,
 unsigned int color0)
{
    QGLColormap_QtDShell *__qt_this = (QGLColormap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->find((unsigned int )color0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLColormap::findNearest(unsigned int color) const
QTD_EXTERN QTD_EXPORT int qtd_QGLColormap_findNearest_uint_const
(void* __this_nativeId,
 unsigned int color0)
{
    QGLColormap_QtDShell *__qt_this = (QGLColormap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->findNearest((unsigned int )color0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLColormap::handle()
QTD_EXTERN QTD_EXPORT Qt::HANDLE qtd_QGLColormap_handle
(void* __this_nativeId)
{
    QGLColormap_QtDShell *__qt_this = (QGLColormap_QtDShell *) __this_nativeId;
    Qt::HANDLE  __qt_return_value = __qt_this->__public_handle();

    Qt::HANDLE __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLColormap::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLColormap_isEmpty_const
(void* __this_nativeId)
{
    QGLColormap_QtDShell *__qt_this = (QGLColormap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLColormap::setEntries(int count, const unsigned int * colors, int base)
QTD_EXTERN QTD_EXPORT void qtd_QGLColormap_setEntries_int_nativepointeruint_int
(void* __this_nativeId,
 int count0,
 unsigned int* colors1,
 int base2)
{
    const unsigned int*  __qt_colors1 = (const unsigned int* ) colors1;
    QGLColormap_QtDShell *__qt_this = (QGLColormap_QtDShell *) __this_nativeId;
    __qt_this->setEntries((int )count0, (const unsigned int* )__qt_colors1, (int )base2);

}

// QGLColormap::setEntry(int idx, const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QGLColormap_setEntry_int_QColor
(void* __this_nativeId,
 int idx0,
 void* color1)
{
    const QColor&  __qt_color1 = (const QColor& ) *(QColor *)color1;
    QGLColormap_QtDShell *__qt_this = (QGLColormap_QtDShell *) __this_nativeId;
    __qt_this->setEntry((int )idx0, (const QColor& )__qt_color1);

}

// QGLColormap::setEntry(int idx, unsigned int color)
QTD_EXTERN QTD_EXPORT void qtd_QGLColormap_setEntry_int_uint
(void* __this_nativeId,
 int idx0,
 unsigned int color1)
{
    QGLColormap_QtDShell *__qt_this = (QGLColormap_QtDShell *) __this_nativeId;
    __qt_this->setEntry((int )idx0, (unsigned int )color1);

}

// QGLColormap::setHandle(Qt::HANDLE ahandle)
QTD_EXTERN QTD_EXPORT void qtd_QGLColormap_setHandle_long
(void* __this_nativeId,
 Qt::HANDLE ahandle0)
{
    QGLColormap_QtDShell *__qt_this = (QGLColormap_QtDShell *) __this_nativeId;
    __qt_this->__public_setHandle((Qt::HANDLE )ahandle0);

}

// QGLColormap::size() const
QTD_EXTERN QTD_EXPORT int qtd_QGLColormap_size_const
(void* __this_nativeId)
{
    QGLColormap_QtDShell *__qt_this = (QGLColormap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->size();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QGLColormap_QTypeInfo_isComplex() { return (bool) QTypeInfo<QGLColormap>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QGLColormap_QTypeInfo_isStatic() { return (bool) QTypeInfo<QGLColormap>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QGLColormap_QTypeInfo_isLarge() { return (bool) QTypeInfo<QGLColormap>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QGLColormap_QTypeInfo_isPointer() { return (bool) QTypeInfo<QGLColormap>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QGLColormap_QTypeInfo_isDummy() { return (bool) QTypeInfo<QGLColormap>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QGLColormap_placed_copy(void* orig, void* place) {
    const QGLColormap_QtDShell&  __qt_orig = (const QGLColormap_QtDShell& ) *(QGLColormap_QtDShell *)orig;
    QGLColormap *result = new (place) QGLColormap (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QGLColormap_native_copy(void* orig) {
    const QGLColormap_QtDShell&  __qt_orig = (const QGLColormap_QtDShell& ) *(QGLColormap_QtDShell *)orig;
    QGLColormap *result = new QGLColormap (__qt_orig);
    return result;
}

