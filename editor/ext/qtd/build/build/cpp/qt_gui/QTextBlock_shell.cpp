#include <QTextBlock>
#include <QVariant>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>

#include <iostream>
#include <qtextobject.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_delete(void* nativeId)
{
    delete (QTextBlock*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_destroy(void* nativeId)
{
    call_destructor((QTextBlock*)nativeId);
}

// ---externC---
// QTextBlock::QTextBlock()
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_QTextBlock
()
{
    QTextBlock *__qt_this = new QTextBlock();
    return (void *) __qt_this;

}

// QTextBlock::QTextBlock(const QTextBlock & o)
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_QTextBlock_QTextBlock
(void* o0)
{
    const QTextBlock&  __qt_o0 = (const QTextBlock& ) *(QTextBlock *)o0;
    QTextBlock *__qt_this = new QTextBlock((const QTextBlock& )__qt_o0);
    return (void *) __qt_this;

}

// QTextBlock::begin() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_begin_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    QTextBlock::iterator  __qt_return_value = __qt_this->begin();

    void* __d_return_value = (void*) new QTextBlock::iterator(__qt_return_value);

    return __d_return_value;
}

// QTextBlock::blockFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_blockFormat_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    QTextBlockFormat  __qt_return_value = __qt_this->blockFormat();

    void* __d_return_value = (void*) new QTextBlockFormat(__qt_return_value);

    return __d_return_value;
}

// QTextBlock::blockFormatIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlock_blockFormatIndex_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    int  __qt_return_value = __qt_this->blockFormatIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::blockNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlock_blockNumber_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    int  __qt_return_value = __qt_this->blockNumber();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::charFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_charFormat_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->charFormat();

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QTextBlock::charFormatIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlock_charFormatIndex_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    int  __qt_return_value = __qt_this->charFormatIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::clearLayout()
QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_clearLayout
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    __qt_this->clearLayout();

}

// QTextBlock::contains(int position) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_contains_int_const
(void* __this_nativeId,
 int position0)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((int )position0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::document() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_document_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    const QTextDocument*  __qt_return_value = __qt_this->document();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextBlock::end() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_end_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    QTextBlock::iterator  __qt_return_value = __qt_this->end();

    void* __d_return_value = (void*) new QTextBlock::iterator(__qt_return_value);

    return __d_return_value;
}

// QTextBlock::firstLineNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlock_firstLineNumber_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    int  __qt_return_value = __qt_this->firstLineNumber();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::fragmentIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlock_fragmentIndex_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    int  __qt_return_value = __qt_this->fragmentIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_isValid_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::isVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_isVisible_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::layout() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_layout_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    QTextLayout*  __qt_return_value = __qt_this->layout();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextBlock::length() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlock_length_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    int  __qt_return_value = __qt_this->length();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::lineCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlock_lineCount_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    int  __qt_return_value = __qt_this->lineCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::next() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_next_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->next();

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextBlock::operator<(const QTextBlock & o) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_operator_less_QTextBlock_const
(void* __this_nativeId,
 void* o0)
{
    const QTextBlock&  __qt_o0 = (const QTextBlock& ) *(QTextBlock *)o0;
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QTextBlock& )__qt_o0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::operator==(const QTextBlock & o) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_operator_equal_QTextBlock_const
(void* __this_nativeId,
 void* o0)
{
    const QTextBlock&  __qt_o0 = (const QTextBlock& ) *(QTextBlock *)o0;
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QTextBlock& )__qt_o0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::position() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlock_position_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    int  __qt_return_value = __qt_this->position();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::previous() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_previous_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->previous();

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextBlock::revision() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlock_revision_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    int  __qt_return_value = __qt_this->revision();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::setLineCount(int count)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_setLineCount_int
(void* __this_nativeId,
 int count0)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    __qt_this->setLineCount((int )count0);

}

// QTextBlock::setRevision(int rev)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_setRevision_int
(void* __this_nativeId,
 int rev0)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    __qt_this->setRevision((int )rev0);

}

// QTextBlock::setUserData(QTextBlockUserData * data)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_setUserData_QTextBlockUserData
(void* __this_nativeId,
 void* data0)
{
    QTextBlockUserData*  __qt_data0 = (QTextBlockUserData* ) data0;
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    __qt_this->setUserData((QTextBlockUserData* )__qt_data0);

}

// QTextBlock::setUserState(int state)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_setUserState_int
(void* __this_nativeId,
 int state0)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    __qt_this->setUserState((int )state0);

}

// QTextBlock::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    __qt_this->setVisible((bool )visible0);

}

// QTextBlock::text() const
QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextBlock::textDirection() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlock_textDirection_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    int  __qt_return_value = __qt_this->textDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBlock::textList() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_textList_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    QTextList*  __qt_return_value = __qt_this->textList();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextBlock::userData() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_userData_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    QTextBlockUserData*  __qt_return_value = __qt_this->userData();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextBlock::userState() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBlock_userState_const
(void* __this_nativeId)
{
    QTextBlock *__qt_this = (QTextBlock *) __this_nativeId;
    int  __qt_return_value = __qt_this->userState();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextBlock>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextBlock>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextBlock>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextBlock>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextBlock_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextBlock>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextBlock_placed_copy(void* orig, void* place) {
    const QTextBlock&  __qt_orig = (const QTextBlock& ) *(QTextBlock *)orig;
    QTextBlock *result = new (place) QTextBlock (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextBlock_native_copy(void* orig) {
    const QTextBlock&  __qt_orig = (const QTextBlock& ) *(QTextBlock *)orig;
    QTextBlock *result = new QTextBlock (__qt_orig);
    return result;
}

