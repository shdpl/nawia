#include <QTextBlock>
#include <QTextDocumentFragment>
#include <QVariant>
#include <qimage.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextformat.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtexttable.h>

#include <iostream>
#include <qtextcursor.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_delete(void* nativeId)
{
    delete (QTextCursor*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_destroy(void* nativeId)
{
    call_destructor((QTextCursor*)nativeId);
}

// ---externC---
// QTextCursor::QTextCursor()
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_QTextCursor
()
{
    QTextCursor *__qt_this = new QTextCursor();
    return (void *) __qt_this;

}

// QTextCursor::QTextCursor(QTextDocument * document)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_QTextCursor_QTextDocument
(void* document0)
{
    QTextDocument*  __qt_document0 = (QTextDocument* ) document0;
    QTextCursor *__qt_this = new QTextCursor((QTextDocument* )__qt_document0);
    return (void *) __qt_this;

}

// QTextCursor::QTextCursor(QTextFrame * frame)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_QTextCursor_QTextFrame
(void* frame0)
{
    QTextFrame*  __qt_frame0 = (QTextFrame* ) frame0;
    QTextCursor *__qt_this = new QTextCursor((QTextFrame* )__qt_frame0);
    return (void *) __qt_this;

}

// QTextCursor::QTextCursor(const QTextBlock & block)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_QTextCursor_QTextBlock
(void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QTextCursor *__qt_this = new QTextCursor((const QTextBlock& )__qt_block0);
    return (void *) __qt_this;

}

// QTextCursor::QTextCursor(const QTextCursor & cursor)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_QTextCursor_QTextCursor
(void* cursor0)
{
    const QTextCursor&  __qt_cursor0 = (const QTextCursor& ) *(QTextCursor *)cursor0;
    QTextCursor *__qt_this = new QTextCursor((const QTextCursor& )__qt_cursor0);
    return (void *) __qt_this;

}

// QTextCursor::anchor() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCursor_anchor_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    int  __qt_return_value = __qt_this->anchor();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::atBlockEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_atBlockEnd_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->atBlockEnd();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::atBlockStart() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_atBlockStart_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->atBlockStart();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_atEnd_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->atEnd();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::atStart() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_atStart_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->atStart();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::beginEditBlock()
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_beginEditBlock
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->beginEditBlock();

}

// QTextCursor::block() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_block_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->block();

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextCursor::blockCharFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_blockCharFormat_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->blockCharFormat();

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QTextCursor::blockFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_blockFormat_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextBlockFormat  __qt_return_value = __qt_this->blockFormat();

    void* __d_return_value = (void*) new QTextBlockFormat(__qt_return_value);

    return __d_return_value;
}

// QTextCursor::blockNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCursor_blockNumber_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    int  __qt_return_value = __qt_this->blockNumber();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::charFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_charFormat_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->charFormat();

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QTextCursor::clearSelection()
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_clearSelection
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->clearSelection();

}

// QTextCursor::columnNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCursor_columnNumber_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnNumber();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::createList(QTextListFormat::Style style)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_createList_Style
(void* __this_nativeId,
 int style0)
{
    QTextListFormat::Style __qt_style0 = (QTextListFormat::Style) style0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextList*  __qt_return_value = __qt_this->createList((QTextListFormat::Style )__qt_style0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCursor::createList(const QTextListFormat & format)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_createList_QTextListFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextListFormat&  __qt_format0 = (const QTextListFormat& ) *(QTextListFormat *)format0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextList*  __qt_return_value = __qt_this->createList((const QTextListFormat& )__qt_format0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCursor::currentFrame() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_currentFrame_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextFrame*  __qt_return_value = __qt_this->currentFrame();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCursor::currentList() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_currentList_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextList*  __qt_return_value = __qt_this->currentList();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCursor::currentTable() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_currentTable_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextTable*  __qt_return_value = __qt_this->currentTable();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCursor::deleteChar()
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_deleteChar
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->deleteChar();

}

// QTextCursor::deletePreviousChar()
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_deletePreviousChar
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->deletePreviousChar();

}

// QTextCursor::document() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_document_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextDocument*  __qt_return_value = __qt_this->document();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCursor::endEditBlock()
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_endEditBlock
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->endEditBlock();

}

// QTextCursor::hasComplexSelection() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_hasComplexSelection_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasComplexSelection();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::hasSelection() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_hasSelection_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasSelection();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::insertBlock()
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_insertBlock
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->insertBlock();

}

// QTextCursor::insertBlock(const QTextBlockFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_insertBlock_QTextBlockFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextBlockFormat&  __qt_format0 = (const QTextBlockFormat& ) *(QTextBlockFormat *)format0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->insertBlock((const QTextBlockFormat& )__qt_format0);

}

// QTextCursor::insertBlock(const QTextBlockFormat & format, const QTextCharFormat & charFormat)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_insertBlock_QTextBlockFormat_QTextCharFormat
(void* __this_nativeId,
 void* format0,
 void* charFormat1)
{
    const QTextBlockFormat&  __qt_format0 = (const QTextBlockFormat& ) *(QTextBlockFormat *)format0;
    const QTextCharFormat&  __qt_charFormat1 = (const QTextCharFormat& ) *(QTextCharFormat *)charFormat1;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->insertBlock((const QTextBlockFormat& )__qt_format0, (const QTextCharFormat& )__qt_charFormat1);

}

// QTextCursor::insertFragment(const QTextDocumentFragment & fragment)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_insertFragment_QTextDocumentFragment
(void* __this_nativeId,
 void* fragment0)
{
    const QTextDocumentFragment&  __qt_fragment0 = (const QTextDocumentFragment& ) *(QTextDocumentFragment *)fragment0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->insertFragment((const QTextDocumentFragment& )__qt_fragment0);

}

// QTextCursor::insertFrame(const QTextFrameFormat & format)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_insertFrame_QTextFrameFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextFrameFormat&  __qt_format0 = (const QTextFrameFormat& ) *(QTextFrameFormat *)format0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextFrame*  __qt_return_value = __qt_this->insertFrame((const QTextFrameFormat& )__qt_format0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCursor::insertHtml(const QString & html)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_insertHtml_string
(void* __this_nativeId,
 DArray html0)
{
    QString __qt_html0 = QString::fromUtf8((const char *)html0.ptr, html0.length);
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->insertHtml((const QString& )__qt_html0);

}

// QTextCursor::insertImage(const QImage & image, const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_insertImage_QImage_string
(void* __this_nativeId,
 void* image0,
 DArray name1)
{
    const QImage&  __qt_image0 = (const QImage& ) *(QImage *)image0;
    QString __qt_name1 = QString::fromUtf8((const char *)name1.ptr, name1.length);
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->insertImage((const QImage& )__qt_image0, (const QString& )__qt_name1);

}

// QTextCursor::insertImage(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_insertImage_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->insertImage((const QString& )__qt_name0);

}

// QTextCursor::insertImage(const QTextImageFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_insertImage_QTextImageFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextImageFormat&  __qt_format0 = (const QTextImageFormat& ) *(QTextImageFormat *)format0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->insertImage((const QTextImageFormat& )__qt_format0);

}

// QTextCursor::insertImage(const QTextImageFormat & format, QTextFrameFormat::Position alignment)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_insertImage_QTextImageFormat_Position
(void* __this_nativeId,
 void* format0,
 int alignment1)
{
    const QTextImageFormat&  __qt_format0 = (const QTextImageFormat& ) *(QTextImageFormat *)format0;
    QTextFrameFormat::Position __qt_alignment1 = (QTextFrameFormat::Position) alignment1;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->insertImage((const QTextImageFormat& )__qt_format0, (QTextFrameFormat::Position )__qt_alignment1);

}

// QTextCursor::insertList(QTextListFormat::Style style)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_insertList_Style
(void* __this_nativeId,
 int style0)
{
    QTextListFormat::Style __qt_style0 = (QTextListFormat::Style) style0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextList*  __qt_return_value = __qt_this->insertList((QTextListFormat::Style )__qt_style0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCursor::insertList(const QTextListFormat & format)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_insertList_QTextListFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextListFormat&  __qt_format0 = (const QTextListFormat& ) *(QTextListFormat *)format0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextList*  __qt_return_value = __qt_this->insertList((const QTextListFormat& )__qt_format0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCursor::insertTable(int rows, int cols)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_insertTable_int_int
(void* __this_nativeId,
 int rows0,
 int cols1)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextTable*  __qt_return_value = __qt_this->insertTable((int )rows0, (int )cols1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCursor::insertTable(int rows, int cols, const QTextTableFormat & format)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_insertTable_int_int_QTextTableFormat
(void* __this_nativeId,
 int rows0,
 int cols1,
 void* format2)
{
    const QTextTableFormat&  __qt_format2 = (const QTextTableFormat& ) *(QTextTableFormat *)format2;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextTable*  __qt_return_value = __qt_this->insertTable((int )rows0, (int )cols1, (const QTextTableFormat& )__qt_format2);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCursor::insertText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_insertText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->insertText((const QString& )__qt_text0);

}

// QTextCursor::insertText(const QString & text, const QTextCharFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_insertText_string_QTextCharFormat
(void* __this_nativeId,
 DArray text0,
 void* format1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    const QTextCharFormat&  __qt_format1 = (const QTextCharFormat& ) *(QTextCharFormat *)format1;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->insertText((const QString& )__qt_text0, (const QTextCharFormat& )__qt_format1);

}

// QTextCursor::isCopyOf(const QTextCursor & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_isCopyOf_QTextCursor_const
(void* __this_nativeId,
 void* other0)
{
    const QTextCursor&  __qt_other0 = (const QTextCursor& ) *(QTextCursor *)other0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCopyOf((const QTextCursor& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_isNull_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::joinPreviousEditBlock()
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_joinPreviousEditBlock
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->joinPreviousEditBlock();

}

// QTextCursor::keepPositionOnInsert() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_keepPositionOnInsert_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->keepPositionOnInsert();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::mergeBlockCharFormat(const QTextCharFormat & modifier)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_mergeBlockCharFormat_QTextCharFormat
(void* __this_nativeId,
 void* modifier0)
{
    const QTextCharFormat&  __qt_modifier0 = (const QTextCharFormat& ) *(QTextCharFormat *)modifier0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->mergeBlockCharFormat((const QTextCharFormat& )__qt_modifier0);

}

// QTextCursor::mergeBlockFormat(const QTextBlockFormat & modifier)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_mergeBlockFormat_QTextBlockFormat
(void* __this_nativeId,
 void* modifier0)
{
    const QTextBlockFormat&  __qt_modifier0 = (const QTextBlockFormat& ) *(QTextBlockFormat *)modifier0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->mergeBlockFormat((const QTextBlockFormat& )__qt_modifier0);

}

// QTextCursor::mergeCharFormat(const QTextCharFormat & modifier)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_mergeCharFormat_QTextCharFormat
(void* __this_nativeId,
 void* modifier0)
{
    const QTextCharFormat&  __qt_modifier0 = (const QTextCharFormat& ) *(QTextCharFormat *)modifier0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->mergeCharFormat((const QTextCharFormat& )__qt_modifier0);

}

// QTextCursor::movePosition(QTextCursor::MoveOperation op, QTextCursor::MoveMode arg__2, int n)
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_movePosition_MoveOperation_MoveMode_int
(void* __this_nativeId,
 int op0,
 int arg__2,
 int n2)
{
    QTextCursor::MoveOperation __qt_op0 = (QTextCursor::MoveOperation) op0;
    QTextCursor::MoveMode __qt_arg__2 = (QTextCursor::MoveMode) arg__2;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->movePosition((QTextCursor::MoveOperation )__qt_op0, (QTextCursor::MoveMode )__qt_arg__2, (int )n2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::operator<(const QTextCursor & rhs) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_operator_less_QTextCursor_const
(void* __this_nativeId,
 void* rhs0)
{
    const QTextCursor&  __qt_rhs0 = (const QTextCursor& ) *(QTextCursor *)rhs0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QTextCursor& )__qt_rhs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::operator==(const QTextCursor & rhs) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_operator_equal_QTextCursor_const
(void* __this_nativeId,
 void* rhs0)
{
    const QTextCursor&  __qt_rhs0 = (const QTextCursor& ) *(QTextCursor *)rhs0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QTextCursor& )__qt_rhs0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::position() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCursor_position_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    int  __qt_return_value = __qt_this->position();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::positionInBlock() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCursor_positionInBlock_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    int  __qt_return_value = __qt_this->positionInBlock();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::removeSelectedText()
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_removeSelectedText
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->removeSelectedText();

}

// QTextCursor::select(QTextCursor::SelectionType selection)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_select_SelectionType
(void* __this_nativeId,
 int selection0)
{
    QTextCursor::SelectionType __qt_selection0 = (QTextCursor::SelectionType) selection0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->select((QTextCursor::SelectionType )__qt_selection0);

}

// QTextCursor::selectedTableCells(int * firstRow, int * numRows, int * firstColumn, int * numColumns) const
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_selectedTableCells_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const
(void* __this_nativeId,
 int* firstRow0,
 int* numRows1,
 int* firstColumn2,
 int* numColumns3)
{
    int*  __qt_firstRow0 = (int* ) firstRow0;
    int*  __qt_numRows1 = (int* ) numRows1;
    int*  __qt_firstColumn2 = (int* ) firstColumn2;
    int*  __qt_numColumns3 = (int* ) numColumns3;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->selectedTableCells((int* )__qt_firstRow0, (int* )__qt_numRows1, (int* )__qt_firstColumn2, (int* )__qt_numColumns3);

}

// QTextCursor::selectedText() const
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_selectedText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QString  __qt_return_value = __qt_this->selectedText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextCursor::selection() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_selection_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    QTextDocumentFragment  __qt_return_value = __qt_this->selection();

    void* __d_return_value = (void*) new QTextDocumentFragment(__qt_return_value);

    return __d_return_value;
}

// QTextCursor::selectionEnd() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCursor_selectionEnd_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    int  __qt_return_value = __qt_this->selectionEnd();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::selectionStart() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCursor_selectionStart_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    int  __qt_return_value = __qt_this->selectionStart();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::setBlockCharFormat(const QTextCharFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_setBlockCharFormat_QTextCharFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextCharFormat&  __qt_format0 = (const QTextCharFormat& ) *(QTextCharFormat *)format0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->setBlockCharFormat((const QTextCharFormat& )__qt_format0);

}

// QTextCursor::setBlockFormat(const QTextBlockFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_setBlockFormat_QTextBlockFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextBlockFormat&  __qt_format0 = (const QTextBlockFormat& ) *(QTextBlockFormat *)format0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->setBlockFormat((const QTextBlockFormat& )__qt_format0);

}

// QTextCursor::setCharFormat(const QTextCharFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_setCharFormat_QTextCharFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextCharFormat&  __qt_format0 = (const QTextCharFormat& ) *(QTextCharFormat *)format0;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->setCharFormat((const QTextCharFormat& )__qt_format0);

}

// QTextCursor::setKeepPositionOnInsert(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_setKeepPositionOnInsert_bool
(void* __this_nativeId,
 bool b0)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->setKeepPositionOnInsert((bool )b0);

}

// QTextCursor::setPosition(int pos, QTextCursor::MoveMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_setPosition_int_MoveMode
(void* __this_nativeId,
 int pos0,
 int mode1)
{
    QTextCursor::MoveMode __qt_mode1 = (QTextCursor::MoveMode) mode1;
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->setPosition((int )pos0, (QTextCursor::MoveMode )__qt_mode1);

}

// QTextCursor::setVerticalMovementX(int x)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_setVerticalMovementX_int
(void* __this_nativeId,
 int x0)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->setVerticalMovementX((int )x0);

}

// QTextCursor::setVisualNavigation(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_setVisualNavigation_bool
(void* __this_nativeId,
 bool b0)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    __qt_this->setVisualNavigation((bool )b0);

}

// QTextCursor::verticalMovementX() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCursor_verticalMovementX_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    int  __qt_return_value = __qt_this->verticalMovementX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCursor::visualNavigation() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_visualNavigation_const
(void* __this_nativeId)
{
    QTextCursor *__qt_this = (QTextCursor *) __this_nativeId;
    bool  __qt_return_value = __qt_this->visualNavigation();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextCursor>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextCursor>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextCursor>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextCursor>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextCursor_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextCursor>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextCursor_placed_copy(void* orig, void* place) {
    const QTextCursor&  __qt_orig = (const QTextCursor& ) *(QTextCursor *)orig;
    QTextCursor *result = new (place) QTextCursor (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextCursor_native_copy(void* orig) {
    const QTextCursor&  __qt_orig = (const QTextCursor& ) *(QTextCursor *)orig;
    QTextCursor *result = new QTextCursor (__qt_orig);
    return result;
}

