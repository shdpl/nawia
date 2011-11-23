#include <QTextLayout>
#include <QTextOption>
#include <QVariant>
#include <qfont.h>
#include <qlist.h>
#include <qpaintdevice.h>
#include <qpainter.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qvector.h>

#include "QTextLayout_shell.h"
#include <iostream>
#include <qtextlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_delete(void* nativeId)
{
    delete (QTextLayout_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_destroy(void* nativeId)
{
    call_destructor((QTextLayout_QtDShell*)nativeId);
}

QTextLayout_QtDShell::QTextLayout_QtDShell()
    : QTextLayout()
{
}

QTextLayout_QtDShell::QTextLayout_QtDShell(const QString&  text0)
    : QTextLayout(text0)
{
}

QTextLayout_QtDShell::QTextLayout_QtDShell(const QString&  text0, const QFont&  font1, QPaintDevice*  paintdevice2)
    : QTextLayout(text0, font1, paintdevice2)
{
}

QTextLayout_QtDShell::QTextLayout_QtDShell(const QTextBlock&  b0)
    : QTextLayout(b0)
{
}

QTextLayout_QtDShell::~QTextLayout_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextLayout::QTextLayout()
QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_QTextLayout
(void *d_ptr)
{
    QTextLayout_QtDShell *__qt_this = new QTextLayout_QtDShell();
    return (void *) __qt_this;

}

// QTextLayout::QTextLayout(const QString & text)
QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_QTextLayout_string
(void *d_ptr,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTextLayout_QtDShell *__qt_this = new QTextLayout_QtDShell((const QString& )__qt_text0);
    return (void *) __qt_this;

}

// QTextLayout::QTextLayout(const QString & text, const QFont & font, QPaintDevice * paintdevice)
QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_QTextLayout_string_QFont_QPaintDevice
(void *d_ptr,
 DArray text0,
 void* font1,
 void* paintdevice2)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    const QFont&  __qt_font1 = (const QFont& ) *(QFont *)font1;
    QPaintDevice*  __qt_paintdevice2 = (QPaintDevice* ) paintdevice2;
    QTextLayout_QtDShell *__qt_this = new QTextLayout_QtDShell((const QString& )__qt_text0, (const QFont& )__qt_font1, (QPaintDevice* )__qt_paintdevice2);
    return (void *) __qt_this;

}

// QTextLayout::QTextLayout(const QTextBlock & b)
QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_QTextLayout_QTextBlock
(void *d_ptr,
 void* b0)
{
    const QTextBlock&  __qt_b0 = (const QTextBlock& ) *(QTextBlock *)b0;
    QTextLayout_QtDShell *__qt_this = new QTextLayout_QtDShell((const QTextBlock& )__qt_b0);
    return (void *) __qt_this;

}

// QTextLayout::additionalFormats() const
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_additionalFormats_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    QList<QTextLayout::FormatRange >  __qt_return_value = __qt_this->additionalFormats();

QList<QTextLayout::FormatRange > &__d_return_value_tmp = (*(QList<QTextLayout::FormatRange > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextLayout::beginLayout()
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_beginLayout
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->beginLayout();

}

// QTextLayout::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_boundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->boundingRect();

    *__d_return_value = __qt_return_value;

}

// QTextLayout::cacheEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextLayout_cacheEnabled_const
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->cacheEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLayout::clearAdditionalFormats()
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_clearAdditionalFormats
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->clearAdditionalFormats();

}

// QTextLayout::clearLayout()
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_clearLayout
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->clearLayout();

}

// QTextLayout::createLine()
QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_createLine
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    QTextLine  __qt_return_value = __qt_this->createLine();

    void* __d_return_value = (void*) new QTextLine(__qt_return_value);

    return __d_return_value;
}

// QTextLayout::draw(QPainter * p, const QPointF & pos, const QVector<QTextLayout::FormatRange > & selections, const QRectF & clip) const
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_draw_QPainter_QPointF_QVector_QRectF_const
(void* __this_nativeId,
 void* p0,
 QPointF pos1,
 DArray* selections2,
 QRectF clip3)
{
    QPainter*  __qt_p0 = (QPainter* ) p0;
    QVector<QTextLayout::FormatRange > __qt_selections2;
    __qt_selections2.reserve(selections2->length);
    for (int i=0; i<selections2->length; ++i) {
        QTextLayout::FormatRange* __d_element;
        qtd_get_QTextLayout_FormatRange_from_array(selections2, i, &__d_element);
        QTextLayout::FormatRange  __qt_element = (QTextLayout::FormatRange ) *(QTextLayout::FormatRange *)__d_element;
        __qt_selections2 << __qt_element;
    }
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->draw((QPainter* )__qt_p0, (const QPointF& )pos1, (const QVector<QTextLayout::FormatRange >& )__qt_selections2, (const QRectF& )clip3);

}

// QTextLayout::drawCursor(QPainter * p, const QPointF & pos, int cursorPosition) const
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_drawCursor_QPainter_QPointF_int_const
(void* __this_nativeId,
 void* p0,
 QPointF pos1,
 int cursorPosition2)
{
    QPainter*  __qt_p0 = (QPainter* ) p0;
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->drawCursor((QPainter* )__qt_p0, (const QPointF& )pos1, (int )cursorPosition2);

}

// QTextLayout::drawCursor(QPainter * p, const QPointF & pos, int cursorPosition, int width) const
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_drawCursor_QPainter_QPointF_int_int_const
(void* __this_nativeId,
 void* p0,
 QPointF pos1,
 int cursorPosition2,
 int width3)
{
    QPainter*  __qt_p0 = (QPainter* ) p0;
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->drawCursor((QPainter* )__qt_p0, (const QPointF& )pos1, (int )cursorPosition2, (int )width3);

}

// QTextLayout::endLayout()
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_endLayout
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->endLayout();

}

// QTextLayout::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_font_const
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QTextLayout::isValidCursorPosition(int pos) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextLayout_isValidCursorPosition_int_const
(void* __this_nativeId,
 int pos0)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValidCursorPosition((int )pos0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLayout::lineAt(int i) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_lineAt_int_const
(void* __this_nativeId,
 int i0)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    QTextLine  __qt_return_value = __qt_this->lineAt((int )i0);

    void* __d_return_value = (void*) new QTextLine(__qt_return_value);

    return __d_return_value;
}

// QTextLayout::lineCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTextLayout_lineCount_const
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->lineCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLayout::lineForTextPosition(int pos) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_lineForTextPosition_int_const
(void* __this_nativeId,
 int pos0)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    QTextLine  __qt_return_value = __qt_this->lineForTextPosition((int )pos0);

    void* __d_return_value = (void*) new QTextLine(__qt_return_value);

    return __d_return_value;
}

// QTextLayout::maximumWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLayout_maximumWidth_const
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->maximumWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLayout::minimumWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QTextLayout_minimumWidth_const
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->minimumWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLayout::nextCursorPosition(int oldPos, QTextLayout::CursorMode mode) const
QTD_EXTERN QTD_EXPORT int qtd_QTextLayout_nextCursorPosition_int_CursorMode_const
(void* __this_nativeId,
 int oldPos0,
 int mode1)
{
    QTextLayout::CursorMode __qt_mode1 = (QTextLayout::CursorMode) mode1;
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->nextCursorPosition((int )oldPos0, (QTextLayout::CursorMode )__qt_mode1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLayout::position() const
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_position_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->position();

    *__d_return_value = __qt_return_value;

}

// QTextLayout::preeditAreaPosition() const
QTD_EXTERN QTD_EXPORT int qtd_QTextLayout_preeditAreaPosition_const
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->preeditAreaPosition();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLayout::preeditAreaText() const
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_preeditAreaText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->preeditAreaText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextLayout::previousCursorPosition(int oldPos, QTextLayout::CursorMode mode) const
QTD_EXTERN QTD_EXPORT int qtd_QTextLayout_previousCursorPosition_int_CursorMode_const
(void* __this_nativeId,
 int oldPos0,
 int mode1)
{
    QTextLayout::CursorMode __qt_mode1 = (QTextLayout::CursorMode) mode1;
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->previousCursorPosition((int )oldPos0, (QTextLayout::CursorMode )__qt_mode1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextLayout::setAdditionalFormats(const QList<QTextLayout::FormatRange > & overrides)
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_setAdditionalFormats_QList
(void* __this_nativeId,
 void* overrides0)
{
QList<QTextLayout::FormatRange > __qt_overrides0 = (*(QList<QTextLayout::FormatRange > *)overrides0);
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->setAdditionalFormats((const QList<QTextLayout::FormatRange >& )__qt_overrides0);

}

// QTextLayout::setCacheEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_setCacheEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->setCacheEnabled((bool )enable0);

}

// QTextLayout::setFlags(int flags)
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_setFlags_int
(void* __this_nativeId,
 int flags0)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->setFlags((int )flags0);

}

// QTextLayout::setFont(const QFont & f)
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_setFont_QFont
(void* __this_nativeId,
 void* f0)
{
    const QFont&  __qt_f0 = (const QFont& ) *(QFont *)f0;
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->setFont((const QFont& )__qt_f0);

}

// QTextLayout::setPosition(const QPointF & p)
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_setPosition_QPointF
(void* __this_nativeId,
 QPointF p0)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->setPosition((const QPointF& )p0);

}

// QTextLayout::setPreeditArea(int position, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_setPreeditArea_int_string
(void* __this_nativeId,
 int position0,
 DArray text1)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->setPreeditArea((int )position0, (const QString& )__qt_text1);

}

// QTextLayout::setText(const QString & string)
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_setText_string
(void* __this_nativeId,
 DArray string0)
{
    QString __qt_string0 = QString::fromUtf8((const char *)string0.ptr, string0.length);
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_string0);

}

// QTextLayout::setTextOption(const QTextOption & option)
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_setTextOption_QTextOption
(void* __this_nativeId,
 void* option0)
{
    const QTextOption&  __qt_option0 = (const QTextOption& ) *(QTextOption *)option0;
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    __qt_this->setTextOption((const QTextOption& )__qt_option0);

}

// QTextLayout::text() const
QTD_EXTERN QTD_EXPORT void qtd_QTextLayout_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextLayout::textOption() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextLayout_textOption_const
(void* __this_nativeId)
{
    QTextLayout_QtDShell *__qt_this = (QTextLayout_QtDShell *) __this_nativeId;
    QTextOption  __qt_return_value = __qt_this->textOption();

    void* __d_return_value = (void*) new QTextOption(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


