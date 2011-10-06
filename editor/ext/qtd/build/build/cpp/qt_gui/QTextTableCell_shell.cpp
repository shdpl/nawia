#include <QTextCursor>
#include <QTextFrame>
#include <QVariant>
#include <qtextcursor.h>
#include <qtextformat.h>
#include <qtexttable.h>

#include <iostream>
#include <qtexttable.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextTableCell_delete(void* nativeId)
{
    delete (QTextTableCell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextTableCell_destroy(void* nativeId)
{
    call_destructor((QTextTableCell*)nativeId);
}

// ---externC---
// QTextTableCell::QTextTableCell()
QTD_EXTERN QTD_EXPORT void* qtd_QTextTableCell_QTextTableCell
()
{
    QTextTableCell *__qt_this = new QTextTableCell();
    return (void *) __qt_this;

}

// QTextTableCell::QTextTableCell(const QTextTableCell & o)
QTD_EXTERN QTD_EXPORT void* qtd_QTextTableCell_QTextTableCell_QTextTableCell
(void* o0)
{
    const QTextTableCell&  __qt_o0 = (const QTextTableCell& ) *(QTextTableCell *)o0;
    QTextTableCell *__qt_this = new QTextTableCell((const QTextTableCell& )__qt_o0);
    return (void *) __qt_this;

}

// QTextTableCell::begin() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextTableCell_begin_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    QTextFrame::iterator  __qt_return_value = __qt_this->begin();

    void* __d_return_value = (void*) new QTextFrame::iterator(__qt_return_value);

    return __d_return_value;
}

// QTextTableCell::column() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTableCell_column_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    int  __qt_return_value = __qt_this->column();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCell::columnSpan() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTableCell_columnSpan_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnSpan();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCell::end() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextTableCell_end_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    QTextFrame::iterator  __qt_return_value = __qt_this->end();

    void* __d_return_value = (void*) new QTextFrame::iterator(__qt_return_value);

    return __d_return_value;
}

// QTextTableCell::firstCursorPosition() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextTableCell_firstCursorPosition_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->firstCursorPosition();

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextTableCell::firstPosition() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTableCell_firstPosition_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    int  __qt_return_value = __qt_this->firstPosition();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCell::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextTableCell_format_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QTextTableCell::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCell_isValid_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCell::lastCursorPosition() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextTableCell_lastCursorPosition_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->lastCursorPosition();

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextTableCell::lastPosition() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTableCell_lastPosition_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    int  __qt_return_value = __qt_this->lastPosition();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCell::operator==(const QTextTableCell & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCell_operator_equal_QTextTableCell_const
(void* __this_nativeId,
 void* other0)
{
    const QTextTableCell&  __qt_other0 = (const QTextTableCell& ) *(QTextTableCell *)other0;
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QTextTableCell& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCell::row() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTableCell_row_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    int  __qt_return_value = __qt_this->row();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCell::rowSpan() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTableCell_rowSpan_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowSpan();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCell::setFormat(const QTextCharFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableCell_setFormat_QTextCharFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextCharFormat&  __qt_format0 = (const QTextCharFormat& ) *(QTextCharFormat *)format0;
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    __qt_this->setFormat((const QTextCharFormat& )__qt_format0);

}

// QTextTableCell::tableCellFormatIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTableCell_tableCellFormatIndex_const
(void* __this_nativeId)
{
    QTextTableCell *__qt_this = (QTextTableCell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tableCellFormatIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCell_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextTableCell>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCell_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextTableCell>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCell_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextTableCell>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCell_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextTableCell>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCell_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextTableCell>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextTableCell_placed_copy(void* orig, void* place) {
    const QTextTableCell&  __qt_orig = (const QTextTableCell& ) *(QTextTableCell *)orig;
    QTextTableCell *result = new (place) QTextTableCell (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextTableCell_native_copy(void* orig) {
    const QTextTableCell&  __qt_orig = (const QTextTableCell& ) *(QTextTableCell *)orig;
    QTextTableCell *result = new QTextTableCell (__qt_orig);
    return result;
}

