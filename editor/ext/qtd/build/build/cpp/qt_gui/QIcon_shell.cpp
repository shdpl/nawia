#include <QVariant>
#include <qdatastream.h>
#include <qicon.h>
#include <qiconengine.h>
#include <qlist.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qstringlist.h>
#include <qvariant.h>

#include <iostream>
#include <qicon.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QIcon_delete(void* nativeId)
{
    delete (QIcon*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QIcon_destroy(void* nativeId)
{
    call_destructor((QIcon*)nativeId);
}

// TEMPLATE - gui.class_from_variant_native - START
// QIcon from QVariant
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_QIcon_QVariant
    (void *d_ptr,
    void* arg__1)
{
    const QVariant&  __qt_arg__1 = (const QVariant& ) *(QVariant *)arg__1;
    QIcon __qt_casted = qvariant_cast<QIcon>(__qt_arg__1);
    QIcon *__qt_this = new QIcon((const QIcon& )__qt_casted);
    return (void *) __qt_this;
}
// TEMPLATE - gui.class_from_variant_native - END


// ---externC---
// QIcon::QIcon()
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_QIcon
()
{
    QIcon *__qt_this = new QIcon();
    return (void *) __qt_this;

}

// QIcon::QIcon(QIconEngine * engine)
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_QIcon_QIconEngine
(void* engine0)
{
    QIconEngine*  __qt_engine0 = (QIconEngine* ) engine0;
    QIcon *__qt_this = new QIcon((QIconEngine* )__qt_engine0);
    return (void *) __qt_this;

}

// QIcon::QIcon(QIconEngineV2 * engine)
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_QIcon_QIconEngineV2
(void* engine0)
{
    QIconEngineV2*  __qt_engine0 = (QIconEngineV2* ) engine0;
    QIcon *__qt_this = new QIcon((QIconEngineV2* )__qt_engine0);
    return (void *) __qt_this;

}

// QIcon::QIcon(const QIcon & other)
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_QIcon_QIcon
(void* other0)
{
    const QIcon&  __qt_other0 = (const QIcon& ) *(QIcon *)other0;
    QIcon *__qt_this = new QIcon((const QIcon& )__qt_other0);
    return (void *) __qt_this;

}

// QIcon::QIcon(const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_QIcon_QPixmap
(void* pixmap0)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QIcon *__qt_this = new QIcon((const QPixmap& )__qt_pixmap0);
    return (void *) __qt_this;

}

// QIcon::QIcon(const QString & fileName)
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_QIcon_string
(DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QIcon *__qt_this = new QIcon((const QString& )__qt_fileName0);
    return (void *) __qt_this;

}

// QIcon::actualSize(const QSize & size, QIcon::Mode mode, QIcon::State state) const
QTD_EXTERN QTD_EXPORT void qtd_QIcon_actualSize_QSize_Mode_State_const
(void* __this_nativeId,
 QSize * __d_return_value,
 QSize size0,
 int mode1,
 int state2)
{
    QIcon::Mode __qt_mode1 = (QIcon::Mode) mode1;
    QIcon::State __qt_state2 = (QIcon::State) state2;
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->actualSize((const QSize& )size0, (QIcon::Mode )__qt_mode1, (QIcon::State )__qt_state2);

    *__d_return_value = __qt_return_value;

}

// QIcon::addFile(const QString & fileName, const QSize & size, QIcon::Mode mode, QIcon::State state)
QTD_EXTERN QTD_EXPORT void qtd_QIcon_addFile_string_QSize_Mode_State
(void* __this_nativeId,
 DArray fileName0,
 QSize size1,
 int mode2,
 int state3)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QIcon::Mode __qt_mode2 = (QIcon::Mode) mode2;
    QIcon::State __qt_state3 = (QIcon::State) state3;
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    __qt_this->addFile((const QString& )__qt_fileName0, (const QSize& )size1, (QIcon::Mode )__qt_mode2, (QIcon::State )__qt_state3);

}

// QIcon::addPixmap(const QPixmap & pixmap, QIcon::Mode mode, QIcon::State state)
QTD_EXTERN QTD_EXPORT void qtd_QIcon_addPixmap_QPixmap_Mode_State
(void* __this_nativeId,
 void* pixmap0,
 int mode1,
 int state2)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QIcon::Mode __qt_mode1 = (QIcon::Mode) mode1;
    QIcon::State __qt_state2 = (QIcon::State) state2;
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    __qt_this->addPixmap((const QPixmap& )__qt_pixmap0, (QIcon::Mode )__qt_mode1, (QIcon::State )__qt_state2);

}

// QIcon::availableSizes(QIcon::Mode mode, QIcon::State state) const
QTD_EXTERN QTD_EXPORT void qtd_QIcon_availableSizes_Mode_State_const
(void* __this_nativeId,
 void* __d_return_value,
 int mode0,
 int state1)
{
    QIcon::Mode __qt_mode0 = (QIcon::Mode) mode0;
    QIcon::State __qt_state1 = (QIcon::State) state1;
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    QList<QSize >  __qt_return_value = __qt_this->availableSizes((QIcon::Mode )__qt_mode0, (QIcon::State )__qt_state1);

QList<QSize > &__d_return_value_tmp = (*(QList<QSize > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QIcon::cacheKey() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QIcon_cacheKey_const
(void* __this_nativeId)
{
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->cacheKey();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIcon::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QIcon_isNull_const
(void* __this_nativeId)
{
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIcon::name() const
QTD_EXTERN QTD_EXPORT void qtd_QIcon_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    QString  __qt_return_value = __qt_this->name();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QIcon::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QIcon::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QIcon_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QIcon::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QIcon_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QIcon::paint(QPainter * painter, const QRect & rect, QFlags<Qt::AlignmentFlag> alignment, QIcon::Mode mode, QIcon::State state) const
QTD_EXTERN QTD_EXPORT void qtd_QIcon_paint_QPainter_QRect_Alignment_Mode_State_const
(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int alignment2,
 int mode3,
 int state4)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QFlags<Qt::AlignmentFlag> __qt_alignment2 = (QFlags<Qt::AlignmentFlag>) alignment2;
    QIcon::Mode __qt_mode3 = (QIcon::Mode) mode3;
    QIcon::State __qt_state4 = (QIcon::State) state4;
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    __qt_this->paint((QPainter* )__qt_painter0, (const QRect& )rect1, (Qt::Alignment )__qt_alignment2, (QIcon::Mode )__qt_mode3, (QIcon::State )__qt_state4);

}

// QIcon::paint(QPainter * painter, int x, int y, int w, int h, QFlags<Qt::AlignmentFlag> alignment, QIcon::Mode mode, QIcon::State state) const
QTD_EXTERN QTD_EXPORT void qtd_QIcon_paint_QPainter_int_int_int_int_Alignment_Mode_State_const
(void* __this_nativeId,
 void* painter0,
 int x1,
 int y2,
 int w3,
 int h4,
 int alignment5,
 int mode6,
 int state7)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QFlags<Qt::AlignmentFlag> __qt_alignment5 = (QFlags<Qt::AlignmentFlag>) alignment5;
    QIcon::Mode __qt_mode6 = (QIcon::Mode) mode6;
    QIcon::State __qt_state7 = (QIcon::State) state7;
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    __qt_this->paint((QPainter* )__qt_painter0, (int )x1, (int )y2, (int )w3, (int )h4, (Qt::Alignment )__qt_alignment5, (QIcon::Mode )__qt_mode6, (QIcon::State )__qt_state7);

}

// QIcon::pixmap(const QSize & size, QIcon::Mode mode, QIcon::State state) const
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_pixmap_QSize_Mode_State_const
(void* __this_nativeId,
 QSize size0,
 int mode1,
 int state2)
{
    QIcon::Mode __qt_mode1 = (QIcon::Mode) mode1;
    QIcon::State __qt_state2 = (QIcon::State) state2;
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->pixmap((const QSize& )size0, (QIcon::Mode )__qt_mode1, (QIcon::State )__qt_state2);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QIcon::pixmap(int extent, QIcon::Mode mode, QIcon::State state) const
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_pixmap_int_Mode_State_const
(void* __this_nativeId,
 int extent0,
 int mode1,
 int state2)
{
    QIcon::Mode __qt_mode1 = (QIcon::Mode) mode1;
    QIcon::State __qt_state2 = (QIcon::State) state2;
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->pixmap((int )extent0, (QIcon::Mode )__qt_mode1, (QIcon::State )__qt_state2);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QIcon::pixmap(int w, int h, QIcon::Mode mode, QIcon::State state) const
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_pixmap_int_int_Mode_State_const
(void* __this_nativeId,
 int w0,
 int h1,
 int mode2,
 int state3)
{
    QIcon::Mode __qt_mode2 = (QIcon::Mode) mode2;
    QIcon::State __qt_state3 = (QIcon::State) state3;
    QIcon *__qt_this = (QIcon *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->pixmap((int )w0, (int )h1, (QIcon::Mode )__qt_mode2, (QIcon::State )__qt_state3);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QIcon::fromTheme(const QString & name, const QIcon & fallback)
QTD_EXTERN QTD_EXPORT void* qtd_QIcon_fromTheme_string_QIcon
(DArray name0,
 void* fallback1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    const QIcon&  __qt_fallback1 = (const QIcon& ) *(QIcon *)fallback1;
    QIcon  __qt_return_value = QIcon::fromTheme((const QString& )__qt_name0, (const QIcon& )__qt_fallback1);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QIcon::hasThemeIcon(const QString & name)
QTD_EXTERN QTD_EXPORT bool qtd_QIcon_hasThemeIcon_string
(DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    bool  __qt_return_value = QIcon::hasThemeIcon((const QString& )__qt_name0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIcon::setThemeName(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QIcon_setThemeName_string
(DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QIcon::setThemeName((const QString& )__qt_path0);

}

// QIcon::setThemeSearchPaths(const QStringList & searchpath)
QTD_EXTERN QTD_EXPORT void qtd_QIcon_setThemeSearchPaths_QList
(void* searchpath0)
{
QStringList __qt_searchpath0 = (*(QStringList *)searchpath0);
    QIcon::setThemeSearchPaths((const QStringList& )__qt_searchpath0);

}

// QIcon::themeName()
QTD_EXTERN QTD_EXPORT void qtd_QIcon_themeName
(void* __d_return_value)
{
    QString  __qt_return_value = QIcon::themeName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QIcon::themeSearchPaths()
QTD_EXTERN QTD_EXPORT void qtd_QIcon_themeSearchPaths
(void* __d_return_value)
{
    QStringList  __qt_return_value = QIcon::themeSearchPaths();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QIcon_QTypeInfo_isComplex() { return (bool) QTypeInfo<QIcon>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QIcon_QTypeInfo_isStatic() { return (bool) QTypeInfo<QIcon>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QIcon_QTypeInfo_isLarge() { return (bool) QTypeInfo<QIcon>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QIcon_QTypeInfo_isPointer() { return (bool) QTypeInfo<QIcon>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QIcon_QTypeInfo_isDummy() { return (bool) QTypeInfo<QIcon>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QIcon_placed_copy(void* orig, void* place) {
    const QIcon&  __qt_orig = (const QIcon& ) *(QIcon *)orig;
    QIcon *result = new (place) QIcon (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QIcon_native_copy(void* orig) {
    const QIcon&  __qt_orig = (const QIcon& ) *(QIcon *)orig;
    QIcon *result = new QIcon (__qt_orig);
    return result;
}

