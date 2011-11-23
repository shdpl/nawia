#include <QPixmap>
#include <QVariant>
#include <qbitmap.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qpixmap.h>
#include <qvariant.h>

#include <iostream>
#include <qcursor.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QCursor_delete(void* nativeId)
{
    delete (QCursor*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QCursor_destroy(void* nativeId)
{
    call_destructor((QCursor*)nativeId);
}

// ---externC---
// QCursor::QCursor()
QTD_EXTERN QTD_EXPORT void* qtd_QCursor_QCursor
()
{
    QCursor *__qt_this = new QCursor();
    return (void *) __qt_this;

}

// QCursor::QCursor(Qt::CursorShape shape)
QTD_EXTERN QTD_EXPORT void* qtd_QCursor_QCursor_CursorShape
(int shape0)
{
    Qt::CursorShape __qt_shape0 = (Qt::CursorShape) shape0;
    QCursor *__qt_this = new QCursor((Qt::CursorShape )__qt_shape0);
    return (void *) __qt_this;

}

// QCursor::QCursor(const QBitmap & bitmap, const QBitmap & mask, int hotX, int hotY)
QTD_EXTERN QTD_EXPORT void* qtd_QCursor_QCursor_QBitmap_QBitmap_int_int
(void* bitmap0,
 void* mask1,
 int hotX2,
 int hotY3)
{
    const QBitmap&  __qt_bitmap0 = (const QBitmap& ) *(QBitmap *)bitmap0;
    const QBitmap&  __qt_mask1 = (const QBitmap& ) *(QBitmap *)mask1;
    QCursor *__qt_this = new QCursor((const QBitmap& )__qt_bitmap0, (const QBitmap& )__qt_mask1, (int )hotX2, (int )hotY3);
    return (void *) __qt_this;

}

// QCursor::QCursor(const QCursor & cursor)
QTD_EXTERN QTD_EXPORT void* qtd_QCursor_QCursor_QCursor
(void* cursor0)
{
    const QCursor&  __qt_cursor0 = (const QCursor& ) *(QCursor *)cursor0;
    QCursor *__qt_this = new QCursor((const QCursor& )__qt_cursor0);
    return (void *) __qt_this;

}

// QCursor::QCursor(const QPixmap & pixmap, int hotX, int hotY)
QTD_EXTERN QTD_EXPORT void* qtd_QCursor_QCursor_QPixmap_int_int
(void* pixmap0,
 int hotX1,
 int hotY2)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QCursor *__qt_this = new QCursor((const QPixmap& )__qt_pixmap0, (int )hotX1, (int )hotY2);
    return (void *) __qt_this;

}

// QCursor::bitmap() const
QTD_EXTERN QTD_EXPORT void* qtd_QCursor_bitmap_const
(void* __this_nativeId)
{
    QCursor *__qt_this = (QCursor *) __this_nativeId;
    const QBitmap*  __qt_return_value = __qt_this->bitmap();

    void* __d_return_value = (void*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QCursor::hotSpot() const
QTD_EXTERN QTD_EXPORT void qtd_QCursor_hotSpot_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QCursor *__qt_this = (QCursor *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->hotSpot();

    *__d_return_value = __qt_return_value;

}

// QCursor::mask() const
QTD_EXTERN QTD_EXPORT void* qtd_QCursor_mask_const
(void* __this_nativeId)
{
    QCursor *__qt_this = (QCursor *) __this_nativeId;
    const QBitmap*  __qt_return_value = __qt_this->mask();

    void* __d_return_value = (void*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QCursor::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QCursor_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QCursor *__qt_this = (QCursor *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QCursor::operator<<(QDataStream & outS)
QTD_EXTERN QTD_EXPORT void qtd_QCursor_writeTo_QDataStream
(void* __this_nativeId,
 void* outS0)
{
    QDataStream&  __qt_outS0 = (QDataStream& ) * (QDataStream *) outS0;
    QCursor *__qt_this = (QCursor *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_outS0, *__qt_this);

}

// QCursor::operator>>(QDataStream & inS)
QTD_EXTERN QTD_EXPORT void qtd_QCursor_readFrom_QDataStream
(void* __this_nativeId,
 void* inS0)
{
    QDataStream&  __qt_inS0 = (QDataStream& ) * (QDataStream *) inS0;
    QCursor *__qt_this = (QCursor *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_inS0, *__qt_this);

}

// QCursor::pixmap() const
QTD_EXTERN QTD_EXPORT void* qtd_QCursor_pixmap_const
(void* __this_nativeId)
{
    QCursor *__qt_this = (QCursor *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->pixmap();

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QCursor::setShape(Qt::CursorShape newShape)
QTD_EXTERN QTD_EXPORT void qtd_QCursor_setShape_CursorShape
(void* __this_nativeId,
 int newShape0)
{
    Qt::CursorShape __qt_newShape0 = (Qt::CursorShape) newShape0;
    QCursor *__qt_this = (QCursor *) __this_nativeId;
    __qt_this->setShape((Qt::CursorShape )__qt_newShape0);

}

// QCursor::shape() const
QTD_EXTERN QTD_EXPORT int qtd_QCursor_shape_const
(void* __this_nativeId)
{
    QCursor *__qt_this = (QCursor *) __this_nativeId;
    int  __qt_return_value = __qt_this->shape();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCursor::pos()
QTD_EXTERN QTD_EXPORT void qtd_QCursor_pos
(QPoint * __d_return_value)
{
    QPoint  __qt_return_value = QCursor::pos();

    *__d_return_value = __qt_return_value;

}

// QCursor::setPos(const QPoint & p)
QTD_EXTERN QTD_EXPORT void qtd_QCursor_setPos_QPoint
(QPoint p0)
{
    QCursor::setPos((const QPoint& )p0);

}

// QCursor::setPos(int x, int y)
QTD_EXTERN QTD_EXPORT void qtd_QCursor_setPos_int_int
(int x0,
 int y1)
{
    QCursor::setPos((int )x0, (int )y1);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QCursor_QTypeInfo_isComplex() { return (bool) QTypeInfo<QCursor>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QCursor_QTypeInfo_isStatic() { return (bool) QTypeInfo<QCursor>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QCursor_QTypeInfo_isLarge() { return (bool) QTypeInfo<QCursor>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QCursor_QTypeInfo_isPointer() { return (bool) QTypeInfo<QCursor>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QCursor_QTypeInfo_isDummy() { return (bool) QTypeInfo<QCursor>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QCursor_placed_copy(void* orig, void* place) {
    const QCursor&  __qt_orig = (const QCursor& ) *(QCursor *)orig;
    QCursor *result = new (place) QCursor (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QCursor_native_copy(void* orig) {
    const QCursor&  __qt_orig = (const QCursor& ) *(QCursor *)orig;
    QCursor *result = new QCursor (__qt_orig);
    return result;
}

