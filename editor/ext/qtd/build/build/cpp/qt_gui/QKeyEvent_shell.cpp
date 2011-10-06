#include <QVariant>

#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

// ---externC---
// QKeyEvent::count() const
QTD_EXTERN QTD_EXPORT int qtd_QKeyEvent_count_const
(void* __this_nativeId)
{
    QKeyEvent *__qt_this = (QKeyEvent *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeyEvent::hasExtendedInfo() const
QTD_EXTERN QTD_EXPORT bool qtd_QKeyEvent_hasExtendedInfo_const
(void* __this_nativeId)
{
    QKeyEvent *__qt_this = (QKeyEvent *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasExtendedInfo();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeyEvent::isAutoRepeat() const
QTD_EXTERN QTD_EXPORT bool qtd_QKeyEvent_isAutoRepeat_const
(void* __this_nativeId)
{
    QKeyEvent *__qt_this = (QKeyEvent *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAutoRepeat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeyEvent::key() const
QTD_EXTERN QTD_EXPORT int qtd_QKeyEvent_key_const
(void* __this_nativeId)
{
    QKeyEvent *__qt_this = (QKeyEvent *) __this_nativeId;
    int  __qt_return_value = __qt_this->key();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeyEvent::matches(QKeySequence::StandardKey key) const
QTD_EXTERN QTD_EXPORT bool qtd_QKeyEvent_matches_StandardKey_const
(void* __this_nativeId,
 int key0)
{
    QKeySequence::StandardKey __qt_key0 = (QKeySequence::StandardKey) key0;
    QKeyEvent *__qt_this = (QKeyEvent *) __this_nativeId;
    bool  __qt_return_value = __qt_this->matches((QKeySequence::StandardKey )__qt_key0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeyEvent::modifiers() const
QTD_EXTERN QTD_EXPORT int qtd_QKeyEvent_modifiers_const
(void* __this_nativeId)
{
    QKeyEvent *__qt_this = (QKeyEvent *) __this_nativeId;
    int  __qt_return_value = __qt_this->modifiers();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeyEvent::nativeModifiers() const
QTD_EXTERN QTD_EXPORT unsigned int qtd_QKeyEvent_nativeModifiers_const
(void* __this_nativeId)
{
    QKeyEvent *__qt_this = (QKeyEvent *) __this_nativeId;
    unsigned int  __qt_return_value = __qt_this->nativeModifiers();

    unsigned int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeyEvent::nativeScanCode() const
QTD_EXTERN QTD_EXPORT unsigned int qtd_QKeyEvent_nativeScanCode_const
(void* __this_nativeId)
{
    QKeyEvent *__qt_this = (QKeyEvent *) __this_nativeId;
    unsigned int  __qt_return_value = __qt_this->nativeScanCode();

    unsigned int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeyEvent::nativeVirtualKey() const
QTD_EXTERN QTD_EXPORT unsigned int qtd_QKeyEvent_nativeVirtualKey_const
(void* __this_nativeId)
{
    QKeyEvent *__qt_this = (QKeyEvent *) __this_nativeId;
    unsigned int  __qt_return_value = __qt_this->nativeVirtualKey();

    unsigned int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QKeyEvent::text() const
QTD_EXTERN QTD_EXPORT void qtd_QKeyEvent_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QKeyEvent *__qt_this = (QKeyEvent *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


