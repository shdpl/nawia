#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qvector.h>

#include <iostream>
#include <qtextformat.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_delete(void* nativeId)
{
    delete (QTextFormat*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_destroy(void* nativeId)
{
    call_destructor((QTextFormat*)nativeId);
}

// ---externC---
// QTextFormat::QTextFormat()
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_QTextFormat
()
{
    QTextFormat *__qt_this = new QTextFormat();
    return (void *) __qt_this;

}

// QTextFormat::QTextFormat(const QTextFormat & rhs)
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_QTextFormat_QTextFormat
(void* rhs0)
{
    const QTextFormat&  __qt_rhs0 = (const QTextFormat& ) *(QTextFormat *)rhs0;
    QTextFormat *__qt_this = new QTextFormat((const QTextFormat& )__qt_rhs0);
    return (void *) __qt_this;

}

// QTextFormat::QTextFormat(int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_QTextFormat_int
(int type0)
{
    QTextFormat *__qt_this = new QTextFormat((int )type0);
    return (void *) __qt_this;

}

// QTextFormat::background() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_background_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->background();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::boolProperty(int propertyId) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_boolProperty_int_const
(void* __this_nativeId,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->boolProperty((int )propertyId0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::brushProperty(int propertyId) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_brushProperty_int_const
(void* __this_nativeId,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->brushProperty((int )propertyId0);

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::clearBackground()
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_clearBackground
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    __qt_this->clearBackground();

}

// QTextFormat::clearForeground()
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_clearForeground
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    __qt_this->clearForeground();

}

// QTextFormat::clearProperty(int propertyId)
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_clearProperty_int
(void* __this_nativeId,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    __qt_this->clearProperty((int )propertyId0);

}

// QTextFormat::colorProperty(int propertyId) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_colorProperty_int_const
(void* __this_nativeId,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->colorProperty((int )propertyId0);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::doubleProperty(int propertyId) const
QTD_EXTERN QTD_EXPORT double qtd_QTextFormat_doubleProperty_int_const
(void* __this_nativeId,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    double  __qt_return_value = __qt_this->doubleProperty((int )propertyId0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::foreground() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_foreground_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->foreground();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::hasProperty(int propertyId) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_hasProperty_int_const
(void* __this_nativeId,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasProperty((int )propertyId0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::intProperty(int propertyId) const
QTD_EXTERN QTD_EXPORT int qtd_QTextFormat_intProperty_int_const
(void* __this_nativeId,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->intProperty((int )propertyId0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::isBlockFormat() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_isBlockFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isBlockFormat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::isCharFormat() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_isCharFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCharFormat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::isFrameFormat() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_isFrameFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFrameFormat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::isImageFormat() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_isImageFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isImageFormat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::isListFormat() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_isListFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isListFormat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::isTableCellFormat() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_isTableCellFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTableCellFormat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::isTableFormat() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_isTableFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTableFormat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_isValid_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::layoutDirection() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFormat_layoutDirection_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->layoutDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::lengthProperty(int propertyId) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_lengthProperty_int_const
(void* __this_nativeId,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QTextLength  __qt_return_value = __qt_this->lengthProperty((int )propertyId0);

    void* __d_return_value = (void*) new QTextLength(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::lengthVectorProperty(int propertyId) const
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_lengthVectorProperty_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QVector<QTextLength >  __qt_return_value = __qt_this->lengthVectorProperty((int )propertyId0);


    qtd_allocate_QTextLength_array(__d_return_value, __qt_return_value.size());
    QVector<QTextLength > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QTextLength > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QTextLength  __qt_tmp = *__qt_return_value_it;
        void* __java_tmp = (void*) new QTextLength(__qt_tmp);
        qtd_assign_QTextLength_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QTextFormat::merge(const QTextFormat & other)
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_merge_QTextFormat
(void* __this_nativeId,
 void* other0)
{
    const QTextFormat&  __qt_other0 = (const QTextFormat& ) *(QTextFormat *)other0;
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    __qt_this->merge((const QTextFormat& )__qt_other0);

}

// QTextFormat::objectIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFormat_objectIndex_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->objectIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::objectType() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFormat_objectType_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->objectType();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QTextFormat::operator==(const QTextFormat & rhs) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_operator_equal_QTextFormat_const
(void* __this_nativeId,
 void* rhs0)
{
    const QTextFormat&  __qt_rhs0 = (const QTextFormat& ) *(QTextFormat *)rhs0;
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QTextFormat& )__qt_rhs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QTextFormat::penProperty(int propertyId) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_penProperty_int_const
(void* __this_nativeId,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QPen  __qt_return_value = __qt_this->penProperty((int )propertyId0);

    void* __d_return_value = (void*) new QPen(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::properties() const
// QTextFormat::property(int propertyId) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_property_int_const
(void* __this_nativeId,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->property((int )propertyId0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::propertyCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFormat_propertyCount_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->propertyCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextFormat::setBackground(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_setBackground_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    __qt_this->setBackground((const QBrush& )__qt_brush0);

}

// QTextFormat::setForeground(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_setForeground_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    __qt_this->setForeground((const QBrush& )__qt_brush0);

}

// QTextFormat::setLayoutDirection(Qt::LayoutDirection direction)
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_setLayoutDirection_LayoutDirection
(void* __this_nativeId,
 int direction0)
{
    Qt::LayoutDirection __qt_direction0 = (Qt::LayoutDirection) direction0;
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    __qt_this->setLayoutDirection((Qt::LayoutDirection )__qt_direction0);

}

// QTextFormat::setObjectIndex(int object)
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_setObjectIndex_int
(void* __this_nativeId,
 int object0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    __qt_this->setObjectIndex((int )object0);

}

// QTextFormat::setObjectType(int type)
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_setObjectType_int
(void* __this_nativeId,
 int type0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    __qt_this->setObjectType((int )type0);

}

// QTextFormat::setProperty(int propertyId, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_setProperty_int_QVariant
(void* __this_nativeId,
 int propertyId0,
 QVariant* value1)
{
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    __qt_this->setProperty((int )propertyId0, (const QVariant& )__qt_value1);

}

// QTextFormat::setProperty(int propertyId, const QVector<QTextLength > & lengths)
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_setProperty_int_QVector
(void* __this_nativeId,
 int propertyId0,
 DArray* lengths1)
{
    QVector<QTextLength > __qt_lengths1;
    __qt_lengths1.reserve(lengths1->length);
    for (int i=0; i<lengths1->length; ++i) {
        QTextLength* __d_element;
        qtd_get_QTextLength_from_array(lengths1, i, &__d_element);
        QTextLength  __qt_element = (QTextLength ) *(QTextLength *)__d_element;
        __qt_lengths1 << __qt_element;
    }
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    __qt_this->setProperty((int )propertyId0, (const QVector<QTextLength >& )__qt_lengths1);

}

// QTextFormat::stringProperty(int propertyId) const
QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_stringProperty_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int propertyId0)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QString  __qt_return_value = __qt_this->stringProperty((int )propertyId0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextFormat::toBlockFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_toBlockFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QTextBlockFormat  __qt_return_value = __qt_this->toBlockFormat();

    void* __d_return_value = (void*) new QTextBlockFormat(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::toCharFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_toCharFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->toCharFormat();

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::toFrameFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_toFrameFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QTextFrameFormat  __qt_return_value = __qt_this->toFrameFormat();

    void* __d_return_value = (void*) new QTextFrameFormat(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::toImageFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_toImageFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QTextImageFormat  __qt_return_value = __qt_this->toImageFormat();

    void* __d_return_value = (void*) new QTextImageFormat(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::toListFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_toListFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QTextListFormat  __qt_return_value = __qt_this->toListFormat();

    void* __d_return_value = (void*) new QTextListFormat(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::toTableCellFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_toTableCellFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QTextTableCellFormat  __qt_return_value = __qt_this->toTableCellFormat();

    void* __d_return_value = (void*) new QTextTableCellFormat(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::toTableFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_toTableFormat_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    QTextTableFormat  __qt_return_value = __qt_this->toTableFormat();

    void* __d_return_value = (void*) new QTextTableFormat(__qt_return_value);

    return __d_return_value;
}

// QTextFormat::type() const
QTD_EXTERN QTD_EXPORT int qtd_QTextFormat_type_const
(void* __this_nativeId)
{
    QTextFormat *__qt_this = (QTextFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextFormat>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextFormat>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextFormat>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextFormat>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextFormat_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextFormat>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextFormat_placed_copy(void* orig, void* place) {
    const QTextFormat&  __qt_orig = (const QTextFormat& ) *(QTextFormat *)orig;
    QTextFormat *result = new (place) QTextFormat (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextFormat_native_copy(void* orig) {
    const QTextFormat&  __qt_orig = (const QTextFormat& ) *(QTextFormat *)orig;
    QTextFormat *result = new QTextFormat (__qt_orig);
    return result;
}

