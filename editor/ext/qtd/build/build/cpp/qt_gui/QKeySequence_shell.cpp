#include <QVariant>
#include <qdatastream.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qvariant.h>

#include <iostream>
#include <qkeysequence.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QKeySequence_delete(void* nativeId)
{
    delete (QKeySequence*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QKeySequence_destroy(void* nativeId)
{
    call_destructor((QKeySequence*)nativeId);
}

// ---externC---
// QKeySequence::QKeySequence()
QTD_EXTERN QTD_EXPORT void* qtd_QKeySequence_QKeySequence
()
{
    QKeySequence *__qt_this = new QKeySequence();
    return (void *) __qt_this;

}

// QKeySequence::QKeySequence(QKeySequence::StandardKey key)
QTD_EXTERN QTD_EXPORT void* qtd_QKeySequence_QKeySequence_StandardKey
(int key0)
{
    QKeySequence::StandardKey __qt_key0 = (QKeySequence::StandardKey) key0;
    QKeySequence *__qt_this = new QKeySequence((QKeySequence::StandardKey )__qt_key0);
    return (void *) __qt_this;

}

// QKeySequence::QKeySequence(const QKeySequence & ks)
QTD_EXTERN QTD_EXPORT void* qtd_QKeySequence_QKeySequence_QKeySequence
(void* ks0)
{
    const QKeySequence&  __qt_ks0 = (const QKeySequence& ) *(QKeySequence *)ks0;
    QKeySequence *__qt_this = new QKeySequence((const QKeySequence& )__qt_ks0);
    return (void *) __qt_this;

}

// QKeySequence::QKeySequence(const QString & key)
QTD_EXTERN QTD_EXPORT void* qtd_QKeySequence_QKeySequence_string
(DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QKeySequence *__qt_this = new QKeySequence((const QString& )__qt_key0);
    return (void *) __qt_this;

}

// QKeySequence::QKeySequence(const QString & key, QKeySequence::SequenceFormat format)
QTD_EXTERN QTD_EXPORT void* qtd_QKeySequence_QKeySequence_string_SequenceFormat
(DArray key0,
 int format1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QKeySequence::SequenceFormat __qt_format1 = (QKeySequence::SequenceFormat) format1;
    QKeySequence *__qt_this = new QKeySequence((const QString& )__qt_key0, (QKeySequence::SequenceFormat )__qt_format1);
    return (void *) __qt_this;

}

// QKeySequence::QKeySequence(int k1, int k2, int k3, int k4)
QTD_EXTERN QTD_EXPORT void* qtd_QKeySequence_QKeySequence_int_int_int_int
(int k10,
 int k21,
 int k32,
 int k43)
{
    QKeySequence *__qt_this = new QKeySequence((int )k10, (int )k21, (int )k32, (int )k43);
    return (void *) __qt_this;

}

// QKeySequence::count() const
QTD_EXTERN QTD_EXPORT uint qtd_QKeySequence_count_const
(void* __this_nativeId)
{
    QKeySequence *__qt_this = (QKeySequence *) __this_nativeId;
    uint  __qt_return_value = __qt_this->count();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeySequence::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QKeySequence_isEmpty_const
(void* __this_nativeId)
{
    QKeySequence *__qt_this = (QKeySequence *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeySequence::matches(const QKeySequence & seq) const
QTD_EXTERN QTD_EXPORT int qtd_QKeySequence_matches_QKeySequence_const
(void* __this_nativeId,
 void* seq0)
{
    const QKeySequence&  __qt_seq0 = (const QKeySequence& ) *(QKeySequence *)seq0;
    QKeySequence *__qt_this = (QKeySequence *) __this_nativeId;
    int  __qt_return_value = __qt_this->matches((const QKeySequence& )__qt_seq0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeySequence::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QKeySequence_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QKeySequence *__qt_this = (QKeySequence *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QKeySequence::operator int() const
QTD_EXTERN QTD_EXPORT int qtd_QKeySequence_operator_cast_int_const
(void* __this_nativeId)
{
    QKeySequence *__qt_this = (QKeySequence *) __this_nativeId;
    int  __qt_return_value = __qt_this->operator int();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeySequence::operator<(const QKeySequence & ks) const
QTD_EXTERN QTD_EXPORT bool qtd_QKeySequence_operator_less_QKeySequence_const
(void* __this_nativeId,
 void* ks0)
{
    const QKeySequence&  __qt_ks0 = (const QKeySequence& ) *(QKeySequence *)ks0;
    QKeySequence *__qt_this = (QKeySequence *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QKeySequence& )__qt_ks0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeySequence::operator<<(QDataStream & in_)
QTD_EXTERN QTD_EXPORT void qtd_QKeySequence_writeTo_QDataStream
(void* __this_nativeId,
 void* in0)
{
    QDataStream&  __qt_in0 = (QDataStream& ) * (QDataStream *) in0;
    QKeySequence *__qt_this = (QKeySequence *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_in0, *__qt_this);

}

// QKeySequence::operator==(const QKeySequence & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QKeySequence_operator_equal_QKeySequence_const
(void* __this_nativeId,
 void* other0)
{
    const QKeySequence&  __qt_other0 = (const QKeySequence& ) *(QKeySequence *)other0;
    QKeySequence *__qt_this = (QKeySequence *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QKeySequence& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeySequence::operator>>(QDataStream & out_)
QTD_EXTERN QTD_EXPORT void qtd_QKeySequence_readFrom_QDataStream
(void* __this_nativeId,
 void* out0)
{
    QDataStream&  __qt_out0 = (QDataStream& ) * (QDataStream *) out0;
    QKeySequence *__qt_this = (QKeySequence *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_out0, *__qt_this);

}

// QKeySequence::operator[](uint i) const
QTD_EXTERN QTD_EXPORT int qtd_QKeySequence_operator_subscript_uint_const
(void* __this_nativeId,
 uint i0)
{
    QKeySequence *__qt_this = (QKeySequence *) __this_nativeId;
    int  __qt_return_value = __qt_this->operator[]((uint )i0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeySequence::toString(QKeySequence::SequenceFormat format) const
QTD_EXTERN QTD_EXPORT void qtd_QKeySequence_toString_SequenceFormat_const
(void* __this_nativeId,
 void* __d_return_value,
 int format0)
{
    QKeySequence::SequenceFormat __qt_format0 = (QKeySequence::SequenceFormat) format0;
    QKeySequence *__qt_this = (QKeySequence *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((QKeySequence::SequenceFormat )__qt_format0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QKeySequence::fromString(const QString & str, QKeySequence::SequenceFormat format)
QTD_EXTERN QTD_EXPORT void* qtd_QKeySequence_fromString_string_SequenceFormat
(DArray str0,
 int format1)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QKeySequence::SequenceFormat __qt_format1 = (QKeySequence::SequenceFormat) format1;
    QKeySequence  __qt_return_value = QKeySequence::fromString((const QString& )__qt_str0, (QKeySequence::SequenceFormat )__qt_format1);

    void* __d_return_value = (void*) new QKeySequence(__qt_return_value);

    return __d_return_value;
}

// QKeySequence::keyBindings(QKeySequence::StandardKey key)
QTD_EXTERN QTD_EXPORT void qtd_QKeySequence_keyBindings_StandardKey
(void* __d_return_value,
 int key0)
{
    QKeySequence::StandardKey __qt_key0 = (QKeySequence::StandardKey) key0;
    QList<QKeySequence >  __qt_return_value = QKeySequence::keyBindings((QKeySequence::StandardKey )__qt_key0);

QList<QKeySequence > &__d_return_value_tmp = (*(QList<QKeySequence > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QKeySequence::mnemonic(const QString & text)
QTD_EXTERN QTD_EXPORT void* qtd_QKeySequence_mnemonic_string
(DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QKeySequence  __qt_return_value = QKeySequence::mnemonic((const QString& )__qt_text0);

    void* __d_return_value = (void*) new QKeySequence(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QKeySequence_QTypeInfo_isComplex() { return (bool) QTypeInfo<QKeySequence>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QKeySequence_QTypeInfo_isStatic() { return (bool) QTypeInfo<QKeySequence>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QKeySequence_QTypeInfo_isLarge() { return (bool) QTypeInfo<QKeySequence>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QKeySequence_QTypeInfo_isPointer() { return (bool) QTypeInfo<QKeySequence>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QKeySequence_QTypeInfo_isDummy() { return (bool) QTypeInfo<QKeySequence>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QKeySequence_placed_copy(void* orig, void* place) {
    const QKeySequence&  __qt_orig = (const QKeySequence& ) *(QKeySequence *)orig;
    QKeySequence *result = new (place) QKeySequence (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QKeySequence_native_copy(void* orig) {
    const QKeySequence&  __qt_orig = (const QKeySequence& ) *(QKeySequence *)orig;
    QKeySequence *result = new QKeySequence (__qt_orig);
    return result;
}

