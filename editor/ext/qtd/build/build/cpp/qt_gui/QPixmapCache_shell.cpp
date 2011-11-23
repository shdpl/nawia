#include <QVariant>
#include <qpixmap.h>

#include "QPixmapCache_shell.h"
#include <iostream>
#include <qpixmapcache.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPixmapCache_delete(void* nativeId)
{
    delete (QPixmapCache_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPixmapCache_destroy(void* nativeId)
{
    call_destructor((QPixmapCache_QtDShell*)nativeId);
}

QPixmapCache_QtDShell::QPixmapCache_QtDShell()
    : QPixmapCache()
{
}

QPixmapCache_QtDShell::~QPixmapCache_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QPixmapCache_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QPixmapCache::()
QTD_EXTERN QTD_EXPORT void* qtd_QPixmapCache_QPixmapCache
(void *d_ptr)
{
    QPixmapCache_QtDShell *__qt_this = new QPixmapCache_QtDShell();
    return (void *) __qt_this;

}

// QPixmapCache::cacheLimit()
QTD_EXTERN QTD_EXPORT int qtd_QPixmapCache_cacheLimit
()
{
    int  __qt_return_value = QPixmapCache_QtDShell::cacheLimit();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmapCache::clear()
QTD_EXTERN QTD_EXPORT void qtd_QPixmapCache_clear
()
{
    QPixmapCache_QtDShell::clear();

}

// QPixmapCache::find(const QString & key, QPixmap * pixmap)
QTD_EXTERN QTD_EXPORT bool qtd_QPixmapCache_find_string_nativepointerQPixmap
(DArray key0,
 void* pixmap1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QPixmap*  __qt_pixmap1 = (QPixmap* ) pixmap1;
    bool  __qt_return_value = QPixmapCache_QtDShell::find((const QString& )__qt_key0, (QPixmap* )__qt_pixmap1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmapCache::insert(const QString & key, const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT bool qtd_QPixmapCache_insert_string_QPixmap
(DArray key0,
 void* pixmap1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    const QPixmap&  __qt_pixmap1 = (const QPixmap& ) *(QPixmap *)pixmap1;
    bool  __qt_return_value = QPixmapCache_QtDShell::insert((const QString& )__qt_key0, (const QPixmap& )__qt_pixmap1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmapCache::remove(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QPixmapCache_remove_string
(DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QPixmapCache_QtDShell::remove((const QString& )__qt_key0);

}

// QPixmapCache::setCacheLimit(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPixmapCache_setCacheLimit_int
(int arg__1)
{
    QPixmapCache_QtDShell::setCacheLimit((int )arg__1);

}

// ---externC---end
// Field accessors


