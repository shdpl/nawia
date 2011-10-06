#include <QTextCodec>
#include <QVariant>
#include <qbytearray.h>
#include <qlist.h>
#include <qtextcodec.h>

#include "QTextCodec_shell.h"
#include <iostream>
#include <qtextcodec.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_delete(void* nativeId)
{
    delete (QTextCodec_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_destroy(void* nativeId)
{
    call_destructor((QTextCodec_QtDShell*)nativeId);
}

QTextCodec_QtDShell::QTextCodec_QtDShell(void *d_ptr)
    : QTextCodec(),
      QtdObjectLink(d_ptr)
{
}

QTextCodec_QtDShell::~QTextCodec_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QTextCodec_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QTextCodec*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QTextCodec_aliases_const_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(CORE, QTextCodec_aliases_const_dispatch)
QList<QByteArray >  QTextCodec_QtDShell::aliases() const
{
    QList<QByteArray > __d_return_value;
    qtd_QTextCodec_aliases_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(CORE, void*, QTextCodec_convertFromUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch, (void *dId, void* in0, int length1, void* state2))
QTD_FUNC(CORE, QTextCodec_convertFromUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch)
QByteArray  QTextCodec_QtDShell::convertFromUnicode(const QChar*  in0, int  length1, QTextCodec::ConverterState*  state2) const
{
    QByteArray *__qt_return_value = (QByteArray*) qtd_QTextCodec_convertFromUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch(this->dId, (QChar* )in0, (int )length1, (QTextCodec::ConverterState* )state2);
    return QByteArray(*__qt_return_value);
}

QTD_FUNC_DECL(CORE, void, QTextCodec_convertToUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch, (void *dId, DArray* ret_str, char* in0, int length1, void* state2))
QTD_FUNC(CORE, QTextCodec_convertToUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch)
QString  QTextCodec_QtDShell::convertToUnicode(const char*  in0, int  length1, QTextCodec::ConverterState*  state2) const
{
    DArray ret_str;
    qtd_QTextCodec_convertToUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch(this->dId, &ret_str, (char* )in0, (int )length1, (QTextCodec::ConverterState* )state2);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(CORE, int, QTextCodec_mibEnum_const_dispatch, (void *dId))
QTD_FUNC(CORE, QTextCodec_mibEnum_const_dispatch)
int  QTextCodec_QtDShell::mibEnum() const
{
    return qtd_QTextCodec_mibEnum_const_dispatch(this->dId);
}

QTD_FUNC_DECL(CORE, void*, QTextCodec_name_const_dispatch, (void *dId))
QTD_FUNC(CORE, QTextCodec_name_const_dispatch)
QByteArray  QTextCodec_QtDShell::name() const
{
    QByteArray *__qt_return_value = (QByteArray*) qtd_QTextCodec_name_const_dispatch(this->dId);
    return QByteArray(*__qt_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_initCallBacks(VoidFunc *virts) {
    qtd_QTextCodec_aliases_const_dispatch = (qtd_QTextCodec_aliases_const_dispatch_t) virts[0];
    qtd_QTextCodec_convertFromUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch = (qtd_QTextCodec_convertFromUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch_t) virts[1];
    qtd_QTextCodec_convertToUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch = (qtd_QTextCodec_convertToUnicode_nativepointerchar_int_QTextCodec_ConverterState_const_dispatch_t) virts[2];
    qtd_QTextCodec_mibEnum_const_dispatch = (qtd_QTextCodec_mibEnum_const_dispatch_t) virts[3];
    qtd_QTextCodec_name_const_dispatch = (qtd_QTextCodec_name_const_dispatch_t) virts[4];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QList<QByteArray >  QTextCodec_QtDShell::__override_aliases(bool static_call) const
{
    if (static_call) {
        return QTextCodec::aliases();
    } else {
        return aliases();
    }
}

QByteArray  QTextCodec_QtDShell::__override_convertFromUnicode(const QChar*  in0, int  length1, QTextCodec::ConverterState*  state2, bool static_call) const
{
    if (static_call) {
        return QByteArray();
    } else {
        return convertFromUnicode((const QChar* )in0, (int )length1, (QTextCodec::ConverterState* )state2);
    }
}

QString  QTextCodec_QtDShell::__override_convertToUnicode(const char*  in0, int  length1, QTextCodec::ConverterState*  state2, bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return convertToUnicode((const char* )in0, (int )length1, (QTextCodec::ConverterState* )state2);
    }
}

int  QTextCodec_QtDShell::__override_mibEnum(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return mibEnum();
    }
}

QByteArray  QTextCodec_QtDShell::__override_name(bool static_call) const
{
    if (static_call) {
        return QByteArray();
    } else {
        return name();
    }
}

// ---externC---
// QTextCodec::QTextCodec()
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_QTextCodec
(void *d_ptr)
{
    QTextCodec_QtDShell *__qt_this = new QTextCodec_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QTextCodec::canEncode(QChar arg__1) const
// QTextCodec::canEncode(const QString & arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCodec_canEncode_string_const
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->canEncode((const QString& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCodec::fromUnicode(const QString & uc) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_fromUnicode_string_const
(void* __this_nativeId,
 DArray uc0)
{
    QString __qt_uc0 = QString::fromUtf8((const char *)uc0.ptr, uc0.length);
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->fromUnicode((const QString& )__qt_uc0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QTextCodec::makeDecoder() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_makeDecoder_const
(void* __this_nativeId)
{
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    QTextDecoder*  __qt_return_value = __qt_this->makeDecoder();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::makeDecoder(QFlags<QTextCodec::ConversionFlag> flags) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_makeDecoder_ConversionFlags_const
(void* __this_nativeId,
 int flags0)
{
    QFlags<QTextCodec::ConversionFlag> __qt_flags0 = (QFlags<QTextCodec::ConversionFlag>) flags0;
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    QTextDecoder*  __qt_return_value = __qt_this->makeDecoder((QTextCodec::ConversionFlags )__qt_flags0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::makeEncoder() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_makeEncoder_const
(void* __this_nativeId)
{
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    QTextEncoder*  __qt_return_value = __qt_this->makeEncoder();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::makeEncoder(QFlags<QTextCodec::ConversionFlag> flags) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_makeEncoder_ConversionFlags_const
(void* __this_nativeId,
 int flags0)
{
    QFlags<QTextCodec::ConversionFlag> __qt_flags0 = (QFlags<QTextCodec::ConversionFlag>) flags0;
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    QTextEncoder*  __qt_return_value = __qt_this->makeEncoder((QTextCodec::ConversionFlags )__qt_flags0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::toUnicode(const QByteArray & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_toUnicode_QByteArray_const
(void* __this_nativeId,
 void* __d_return_value,
 void* arg__1)
{
    const QByteArray&  __qt_arg__1 = (const QByteArray& ) *(QByteArray *)arg__1;
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toUnicode((const QByteArray& )__qt_arg__1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextCodec::aliases() const
QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_aliases_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTextCodec*)__this_nativeId) != NULL;
    QList<QByteArray >  __qt_return_value = __qt_this->__override_aliases(__do_static_call);

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextCodec::convertFromUnicode(const QChar * in_, int length, QTextCodec::ConverterState * state) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_convertFromUnicode_nativepointerchar_int_QTextCodec_ConverterState_const
(void* __this_nativeId,
 void* in0,
 int length1,
 void* state2)
{
    const QChar*  __qt_in0 = (const QChar* ) in0;
    QTextCodec::ConverterState*  __qt_state2 = (QTextCodec::ConverterState* ) state2;
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTextCodec*)__this_nativeId) != NULL;
    QByteArray  __qt_return_value = __qt_this->__override_convertFromUnicode((const QChar* )__qt_in0, (int )length1, (QTextCodec::ConverterState* )__qt_state2, __do_static_call);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QTextCodec::convertToUnicode(const char * in_, int length, QTextCodec::ConverterState * state) const
QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_convertToUnicode_nativepointerchar_int_QTextCodec_ConverterState_const
(void* __this_nativeId,
 void* __d_return_value,
 char* in0,
 int length1,
 void* state2)
{
    const char*  __qt_in0 = (const char* ) in0;
    QTextCodec::ConverterState*  __qt_state2 = (QTextCodec::ConverterState* ) state2;
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTextCodec*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_convertToUnicode((const char* )__qt_in0, (int )length1, (QTextCodec::ConverterState* )__qt_state2, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextCodec::mibEnum() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCodec_mibEnum_const
(void* __this_nativeId)
{
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTextCodec*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_mibEnum(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCodec::name() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_name_const
(void* __this_nativeId)
{
    QTextCodec_QtDShell *__qt_this = (QTextCodec_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTextCodec*)__this_nativeId) != NULL;
    QByteArray  __qt_return_value = __qt_this->__override_name(__do_static_call);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QTextCodec::availableCodecs()
QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_availableCodecs
(void* __d_return_value)
{
    QList<QByteArray >  __qt_return_value = QTextCodec_QtDShell::availableCodecs();

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextCodec::availableMibs()
QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_availableMibs
(void* __d_return_value)
{
    QList<int >  __qt_return_value = QTextCodec_QtDShell::availableMibs();

QList<int > &__d_return_value_tmp = (*(QList<int > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextCodec::codecForCStrings()
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_codecForCStrings
()
{
    QTextCodec*  __qt_return_value = QTextCodec_QtDShell::codecForCStrings();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::codecForHtml(const QByteArray & ba)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_codecForHtml_QByteArray
(void* ba0)
{
    const QByteArray&  __qt_ba0 = (const QByteArray& ) *(QByteArray *)ba0;
    QTextCodec*  __qt_return_value = QTextCodec_QtDShell::codecForHtml((const QByteArray& )__qt_ba0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::codecForHtml(const QByteArray & ba, QTextCodec * defaultCodec)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_codecForHtml_QByteArray_QTextCodec
(void* ba0,
 void* defaultCodec1)
{
    const QByteArray&  __qt_ba0 = (const QByteArray& ) *(QByteArray *)ba0;
    QTextCodec*  __qt_defaultCodec1 = (QTextCodec* ) defaultCodec1;
    QTextCodec*  __qt_return_value = QTextCodec_QtDShell::codecForHtml((const QByteArray& )__qt_ba0, (QTextCodec* )__qt_defaultCodec1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::codecForLocale()
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_codecForLocale
()
{
    QTextCodec*  __qt_return_value = QTextCodec_QtDShell::codecForLocale();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::codecForMib(int mib)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_codecForMib_int
(int mib0)
{
    QTextCodec*  __qt_return_value = QTextCodec_QtDShell::codecForMib((int )mib0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::codecForName(const QByteArray & name)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_codecForName_QByteArray
(void* name0)
{
    const QByteArray&  __qt_name0 = (const QByteArray& ) *(QByteArray *)name0;
    QTextCodec*  __qt_return_value = QTextCodec_QtDShell::codecForName((const QByteArray& )__qt_name0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::codecForName(const char * name)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_codecForName_nativepointerchar
(char* name0)
{
    const char*  __qt_name0 = (const char* ) name0;
    QTextCodec*  __qt_return_value = QTextCodec_QtDShell::codecForName((const char* )__qt_name0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::codecForUtfText(const QByteArray & ba)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_codecForUtfText_QByteArray
(void* ba0)
{
    const QByteArray&  __qt_ba0 = (const QByteArray& ) *(QByteArray *)ba0;
    QTextCodec*  __qt_return_value = QTextCodec_QtDShell::codecForUtfText((const QByteArray& )__qt_ba0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::codecForUtfText(const QByteArray & ba, QTextCodec * defaultCodec)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodec_codecForUtfText_QByteArray_QTextCodec
(void* ba0,
 void* defaultCodec1)
{
    const QByteArray&  __qt_ba0 = (const QByteArray& ) *(QByteArray *)ba0;
    QTextCodec*  __qt_defaultCodec1 = (QTextCodec* ) defaultCodec1;
    QTextCodec*  __qt_return_value = QTextCodec_QtDShell::codecForUtfText((const QByteArray& )__qt_ba0, (QTextCodec* )__qt_defaultCodec1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodec::setCodecForCStrings(QTextCodec * c)
QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_setCodecForCStrings_QTextCodec
(void* c0)
{
    QTextCodec*  __qt_c0 = (QTextCodec* ) c0;
    QTextCodec_QtDShell::setCodecForCStrings((QTextCodec* )__qt_c0);

}

// QTextCodec::setCodecForLocale(QTextCodec * c)
QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_setCodecForLocale_QTextCodec
(void* c0)
{
    QTextCodec*  __qt_c0 = (QTextCodec* ) c0;
    QTextCodec_QtDShell::setCodecForLocale((QTextCodec* )__qt_c0);

}

// QTextCodec::setCodecForTr(QTextCodec * c)
QTD_EXTERN QTD_EXPORT void qtd_QTextCodec_setCodecForTr_QTextCodec
(void* c0)
{
    QTextCodec*  __qt_c0 = (QTextCodec* ) c0;
    QTextCodec_QtDShell::setCodecForTr((QTextCodec* )__qt_c0);

}

// ---externC---end
// Field accessors


