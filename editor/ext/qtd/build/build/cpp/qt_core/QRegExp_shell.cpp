#include <QStringList>
#include <QVariant>
#include <qdatastream.h>
#include <qregexp.h>
#include <qstringlist.h>

#include <iostream>
#include <qregexp.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QRegExp_delete(void* nativeId)
{
    delete (QRegExp*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QRegExp_destroy(void* nativeId)
{
    call_destructor((QRegExp*)nativeId);
}

// ---externC---
// QRegExp::QRegExp()
QTD_EXTERN QTD_EXPORT void* qtd_QRegExp_QRegExp
()
{
    QRegExp *__qt_this = new QRegExp();
    return (void *) __qt_this;

}

// QRegExp::QRegExp(const QRegExp & rx)
QTD_EXTERN QTD_EXPORT void* qtd_QRegExp_QRegExp_QRegExp
(void* rx0)
{
    const QRegExp&  __qt_rx0 = (const QRegExp& ) *(QRegExp *)rx0;
    QRegExp *__qt_this = new QRegExp((const QRegExp& )__qt_rx0);
    return (void *) __qt_this;

}

// QRegExp::QRegExp(const QString & pattern, Qt::CaseSensitivity cs, QRegExp::PatternSyntax syntax)
QTD_EXTERN QTD_EXPORT void* qtd_QRegExp_QRegExp_string_CaseSensitivity_PatternSyntax
(DArray pattern0,
 int cs1,
 int syntax2)
{
    QString __qt_pattern0 = QString::fromUtf8((const char *)pattern0.ptr, pattern0.length);
    Qt::CaseSensitivity __qt_cs1 = (Qt::CaseSensitivity) cs1;
    QRegExp::PatternSyntax __qt_syntax2 = (QRegExp::PatternSyntax) syntax2;
    QRegExp *__qt_this = new QRegExp((const QString& )__qt_pattern0, (Qt::CaseSensitivity )__qt_cs1, (QRegExp::PatternSyntax )__qt_syntax2);
    return (void *) __qt_this;

}

// QRegExp::cap(int nth)
QTD_EXTERN QTD_EXPORT void qtd_QRegExp_cap_int
(void* __this_nativeId,
 void* __d_return_value,
 int nth0)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    QString  __qt_return_value = __qt_this->cap((int )nth0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QRegExp::captureCount() const
QTD_EXTERN QTD_EXPORT int qtd_QRegExp_captureCount_const
(void* __this_nativeId)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    int  __qt_return_value = __qt_this->captureCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::capturedTexts()
QTD_EXTERN QTD_EXPORT void qtd_QRegExp_capturedTexts
(void* __this_nativeId,
 void* __d_return_value)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->capturedTexts();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QRegExp::caseSensitivity() const
QTD_EXTERN QTD_EXPORT int qtd_QRegExp_caseSensitivity_const
(void* __this_nativeId)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    int  __qt_return_value = __qt_this->caseSensitivity();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::errorString()
QTD_EXTERN QTD_EXPORT void qtd_QRegExp_errorString
(void* __this_nativeId,
 void* __d_return_value)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QRegExp::exactMatch(const QString & str) const
QTD_EXTERN QTD_EXPORT bool qtd_QRegExp_exactMatch_string_const
(void* __this_nativeId,
 DArray str0)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    bool  __qt_return_value = __qt_this->exactMatch((const QString& )__qt_str0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::indexIn(const QString & str, int offset, QRegExp::CaretMode caretMode) const
QTD_EXTERN QTD_EXPORT int qtd_QRegExp_indexIn_string_int_CaretMode_const
(void* __this_nativeId,
 DArray str0,
 int offset1,
 int caretMode2)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QRegExp::CaretMode __qt_caretMode2 = (QRegExp::CaretMode) caretMode2;
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexIn((const QString& )__qt_str0, (int )offset1, (QRegExp::CaretMode )__qt_caretMode2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QRegExp_isEmpty_const
(void* __this_nativeId)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::isMinimal() const
QTD_EXTERN QTD_EXPORT bool qtd_QRegExp_isMinimal_const
(void* __this_nativeId)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isMinimal();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QRegExp_isValid_const
(void* __this_nativeId)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::lastIndexIn(const QString & str, int offset, QRegExp::CaretMode caretMode) const
QTD_EXTERN QTD_EXPORT int qtd_QRegExp_lastIndexIn_string_int_CaretMode_const
(void* __this_nativeId,
 DArray str0,
 int offset1,
 int caretMode2)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QRegExp::CaretMode __qt_caretMode2 = (QRegExp::CaretMode) caretMode2;
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    int  __qt_return_value = __qt_this->lastIndexIn((const QString& )__qt_str0, (int )offset1, (QRegExp::CaretMode )__qt_caretMode2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::matchedLength() const
QTD_EXTERN QTD_EXPORT int qtd_QRegExp_matchedLength_const
(void* __this_nativeId)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    int  __qt_return_value = __qt_this->matchedLength();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::numCaptures() const
QTD_EXTERN QTD_EXPORT int qtd_QRegExp_numCaptures_const
(void* __this_nativeId)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    int  __qt_return_value = __qt_this->numCaptures();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::operator<<(QDataStream & out_)
QTD_EXTERN QTD_EXPORT void qtd_QRegExp_writeTo_QDataStream
(void* __this_nativeId,
 void* out0)
{
    QDataStream&  __qt_out0 = (QDataStream& ) * (QDataStream *) out0;
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_out0, *__qt_this);

}

// QRegExp::operator==(const QRegExp & rx) const
QTD_EXTERN QTD_EXPORT bool qtd_QRegExp_operator_equal_QRegExp_const
(void* __this_nativeId,
 void* rx0)
{
    const QRegExp&  __qt_rx0 = (const QRegExp& ) *(QRegExp *)rx0;
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QRegExp& )__qt_rx0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::operator>>(QDataStream & in_)
QTD_EXTERN QTD_EXPORT void qtd_QRegExp_readFrom_QDataStream
(void* __this_nativeId,
 void* in0)
{
    QDataStream&  __qt_in0 = (QDataStream& ) * (QDataStream *) in0;
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_in0, *__qt_this);

}

// QRegExp::pattern() const
QTD_EXTERN QTD_EXPORT void qtd_QRegExp_pattern_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    QString  __qt_return_value = __qt_this->pattern();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QRegExp::patternSyntax() const
QTD_EXTERN QTD_EXPORT int qtd_QRegExp_patternSyntax_const
(void* __this_nativeId)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    int  __qt_return_value = __qt_this->patternSyntax();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::pos(int nth)
QTD_EXTERN QTD_EXPORT int qtd_QRegExp_pos_int
(void* __this_nativeId,
 int nth0)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    int  __qt_return_value = __qt_this->pos((int )nth0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRegExp::setCaseSensitivity(Qt::CaseSensitivity cs)
QTD_EXTERN QTD_EXPORT void qtd_QRegExp_setCaseSensitivity_CaseSensitivity
(void* __this_nativeId,
 int cs0)
{
    Qt::CaseSensitivity __qt_cs0 = (Qt::CaseSensitivity) cs0;
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    __qt_this->setCaseSensitivity((Qt::CaseSensitivity )__qt_cs0);

}

// QRegExp::setMinimal(bool minimal)
QTD_EXTERN QTD_EXPORT void qtd_QRegExp_setMinimal_bool
(void* __this_nativeId,
 bool minimal0)
{
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    __qt_this->setMinimal((bool )minimal0);

}

// QRegExp::setPattern(const QString & pattern)
QTD_EXTERN QTD_EXPORT void qtd_QRegExp_setPattern_string
(void* __this_nativeId,
 DArray pattern0)
{
    QString __qt_pattern0 = QString::fromUtf8((const char *)pattern0.ptr, pattern0.length);
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    __qt_this->setPattern((const QString& )__qt_pattern0);

}

// QRegExp::setPatternSyntax(QRegExp::PatternSyntax syntax)
QTD_EXTERN QTD_EXPORT void qtd_QRegExp_setPatternSyntax_PatternSyntax
(void* __this_nativeId,
 int syntax0)
{
    QRegExp::PatternSyntax __qt_syntax0 = (QRegExp::PatternSyntax) syntax0;
    QRegExp *__qt_this = (QRegExp *) __this_nativeId;
    __qt_this->setPatternSyntax((QRegExp::PatternSyntax )__qt_syntax0);

}

// QRegExp::escape(const QString & str)
QTD_EXTERN QTD_EXPORT void qtd_QRegExp_escape_string
(void* __d_return_value,
 DArray str0)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QString  __qt_return_value = QRegExp::escape((const QString& )__qt_str0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QRegExp_QTypeInfo_isComplex() { return (bool) QTypeInfo<QRegExp>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QRegExp_QTypeInfo_isStatic() { return (bool) QTypeInfo<QRegExp>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QRegExp_QTypeInfo_isLarge() { return (bool) QTypeInfo<QRegExp>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QRegExp_QTypeInfo_isPointer() { return (bool) QTypeInfo<QRegExp>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QRegExp_QTypeInfo_isDummy() { return (bool) QTypeInfo<QRegExp>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QRegExp_placed_copy(void* orig, void* place) {
    const QRegExp&  __qt_orig = (const QRegExp& ) *(QRegExp *)orig;
    QRegExp *result = new (place) QRegExp (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QRegExp_native_copy(void* orig) {
    const QRegExp&  __qt_orig = (const QRegExp& ) *(QRegExp *)orig;
    QRegExp *result = new QRegExp (__qt_orig);
    return result;
}

