#include <QVariant>
#include <qtextoption.h>

#include "QTextOption_Tab_shell.h"
#include <iostream>
#include <qtextoption.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextOption_Tab_delete(void* nativeId)
{
    delete (QTextOption_Tab_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextOption_Tab_destroy(void* nativeId)
{
    call_destructor((QTextOption_Tab_QtDShell*)nativeId);
}

QTextOption_Tab_QtDShell::QTextOption_Tab_QtDShell()
    : QTextOption::Tab()
{
}

QTextOption_Tab_QtDShell::QTextOption_Tab_QtDShell(double  pos0, QTextOption::TabType  tabType1, QChar  delim2)
    : QTextOption::Tab(pos0, tabType1, delim2)
{
}

QTextOption_Tab_QtDShell::~QTextOption_Tab_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextOption_Tab_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextOption_Tab::Tab()
QTD_EXTERN QTD_EXPORT void* qtd_QTextOption_Tab_QTextOption_Tab
()
{
    QTextOption_Tab_QtDShell *__qt_this = new QTextOption_Tab_QtDShell();
    return (void *) __qt_this;

}

// QTextOption_Tab::Tab(double pos, QTextOption::TabType tabType, QChar delim)
// QTextOption_Tab::operator==(const QTextOption::Tab & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_Tab_operator_equal_QTextOption_Tab_const
(void* __this_nativeId,
 void* other0)
{
    const QTextOption::Tab&  __qt_other0 = (const QTextOption::Tab& ) *(QTextOption::Tab *)other0;
    QTextOption_Tab_QtDShell *__qt_this = (QTextOption_Tab_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QTextOption::Tab& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT double qtd_QTextOption_Tab_position
(void* __this_nativeId){
    QTextOption_Tab_QtDShell *__qt_object = (QTextOption_Tab_QtDShell *) __this_nativeId;
    double __tmp_position = __qt_object->position;
    double __d_return_value = __tmp_position;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextOption_Tab_setPosition_double
(void* __this_nativeId,
 double position0){
    QTextOption_Tab_QtDShell *__qt_object = (QTextOption_Tab_QtDShell *) __this_nativeId;
    __qt_object->position = position0;
}

QTD_EXTERN QTD_EXPORT int qtd_QTextOption_Tab_type
(void* __this_nativeId){
    QTextOption_Tab_QtDShell *__qt_object = (QTextOption_Tab_QtDShell *) __this_nativeId;
    QTextOption::TabType __tmp_type = __qt_object->type;
    int __d_return_value = __tmp_type;
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextOption_Tab_setType_TabType
(void* __this_nativeId,
 int type0){
    QTextOption::TabType __qt_type0 = (QTextOption::TabType) type0;
    QTextOption_Tab_QtDShell *__qt_object = (QTextOption_Tab_QtDShell *) __this_nativeId;
    __qt_object->type = __qt_type0;
}

QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_Tab_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextOption::Tab>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_Tab_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextOption::Tab>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_Tab_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextOption::Tab>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_Tab_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextOption::Tab>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextOption_Tab_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextOption::Tab>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextOption_Tab_placed_copy(void* orig, void* place) {
    const QTextOption_Tab_QtDShell&  __qt_orig = (const QTextOption_Tab_QtDShell& ) *(QTextOption_Tab_QtDShell *)orig;
    QTextOption::Tab *result = new (place) QTextOption::Tab (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextOption_Tab_native_copy(void* orig) {
    const QTextOption_Tab_QtDShell&  __qt_orig = (const QTextOption_Tab_QtDShell& ) *(QTextOption_Tab_QtDShell *)orig;
    QTextOption::Tab *result = new QTextOption::Tab (__qt_orig);
    return result;
}

