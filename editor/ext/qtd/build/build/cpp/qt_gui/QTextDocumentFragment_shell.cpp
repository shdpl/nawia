#include <QVariant>
#include <qbytearray.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>

#include <iostream>
#include <qtextdocumentfragment.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextDocumentFragment_delete(void* nativeId)
{
    delete (QTextDocumentFragment*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextDocumentFragment_destroy(void* nativeId)
{
    call_destructor((QTextDocumentFragment*)nativeId);
}

// ---externC---
// QTextDocumentFragment::QTextDocumentFragment()
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocumentFragment_QTextDocumentFragment
()
{
    QTextDocumentFragment *__qt_this = new QTextDocumentFragment();
    return (void *) __qt_this;

}

// QTextDocumentFragment::QTextDocumentFragment(const QTextCursor & range)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocumentFragment_QTextDocumentFragment_QTextCursor
(void* range0)
{
    const QTextCursor&  __qt_range0 = (const QTextCursor& ) *(QTextCursor *)range0;
    QTextDocumentFragment *__qt_this = new QTextDocumentFragment((const QTextCursor& )__qt_range0);
    return (void *) __qt_this;

}

// QTextDocumentFragment::QTextDocumentFragment(const QTextDocument * document)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocumentFragment_QTextDocumentFragment_QTextDocument
(void* document0)
{
    const QTextDocument*  __qt_document0 = (const QTextDocument* ) document0;
    QTextDocumentFragment *__qt_this = new QTextDocumentFragment((const QTextDocument* )__qt_document0);
    return (void *) __qt_this;

}

// QTextDocumentFragment::QTextDocumentFragment(const QTextDocumentFragment & rhs)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocumentFragment_QTextDocumentFragment_QTextDocumentFragment
(void* rhs0)
{
    const QTextDocumentFragment&  __qt_rhs0 = (const QTextDocumentFragment& ) *(QTextDocumentFragment *)rhs0;
    QTextDocumentFragment *__qt_this = new QTextDocumentFragment((const QTextDocumentFragment& )__qt_rhs0);
    return (void *) __qt_this;

}

// QTextDocumentFragment::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocumentFragment_isEmpty_const
(void* __this_nativeId)
{
    QTextDocumentFragment *__qt_this = (QTextDocumentFragment *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocumentFragment::toHtml() const
QTD_EXTERN QTD_EXPORT void qtd_QTextDocumentFragment_toHtml_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextDocumentFragment *__qt_this = (QTextDocumentFragment *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toHtml();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextDocumentFragment::toHtml(const QByteArray & encoding) const
QTD_EXTERN QTD_EXPORT void qtd_QTextDocumentFragment_toHtml_QByteArray_const
(void* __this_nativeId,
 void* __d_return_value,
 void* encoding0)
{
    const QByteArray&  __qt_encoding0 = (const QByteArray& ) *(QByteArray *)encoding0;
    QTextDocumentFragment *__qt_this = (QTextDocumentFragment *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toHtml((const QByteArray& )__qt_encoding0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextDocumentFragment::toPlainText() const
QTD_EXTERN QTD_EXPORT void qtd_QTextDocumentFragment_toPlainText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextDocumentFragment *__qt_this = (QTextDocumentFragment *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toPlainText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextDocumentFragment::fromHtml(const QString & html)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocumentFragment_fromHtml_string
(DArray html0)
{
    QString __qt_html0 = QString::fromUtf8((const char *)html0.ptr, html0.length);
    QTextDocumentFragment  __qt_return_value = QTextDocumentFragment::fromHtml((const QString& )__qt_html0);

    void* __d_return_value = (void*) new QTextDocumentFragment(__qt_return_value);

    return __d_return_value;
}

// QTextDocumentFragment::fromHtml(const QString & html, const QTextDocument * resourceProvider)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocumentFragment_fromHtml_string_QTextDocument
(DArray html0,
 void* resourceProvider1)
{
    QString __qt_html0 = QString::fromUtf8((const char *)html0.ptr, html0.length);
    const QTextDocument*  __qt_resourceProvider1 = (const QTextDocument* ) resourceProvider1;
    QTextDocumentFragment  __qt_return_value = QTextDocumentFragment::fromHtml((const QString& )__qt_html0, (const QTextDocument* )__qt_resourceProvider1);

    void* __d_return_value = (void*) new QTextDocumentFragment(__qt_return_value);

    return __d_return_value;
}

// QTextDocumentFragment::fromPlainText(const QString & plainText)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocumentFragment_fromPlainText_string
(DArray plainText0)
{
    QString __qt_plainText0 = QString::fromUtf8((const char *)plainText0.ptr, plainText0.length);
    QTextDocumentFragment  __qt_return_value = QTextDocumentFragment::fromPlainText((const QString& )__qt_plainText0);

    void* __d_return_value = (void*) new QTextDocumentFragment(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocumentFragment_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextDocumentFragment>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocumentFragment_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextDocumentFragment>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocumentFragment_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextDocumentFragment>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocumentFragment_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextDocumentFragment>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocumentFragment_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextDocumentFragment>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextDocumentFragment_placed_copy(void* orig, void* place) {
    const QTextDocumentFragment&  __qt_orig = (const QTextDocumentFragment& ) *(QTextDocumentFragment *)orig;
    QTextDocumentFragment *result = new (place) QTextDocumentFragment (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextDocumentFragment_native_copy(void* orig) {
    const QTextDocumentFragment&  __qt_orig = (const QTextDocumentFragment& ) *(QTextDocumentFragment *)orig;
    QTextDocumentFragment *result = new QTextDocumentFragment (__qt_orig);
    return result;
}

