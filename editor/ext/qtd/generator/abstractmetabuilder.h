/****************************************************************************
**
** Copyright (C) 1992-2008 Nokia. All rights reserved.
**
** This file is part of Qt Jambi.
**
** * Commercial Usage
* Licensees holding valid Qt Commercial licenses may use this file in
* accordance with the Qt Commercial License Agreement provided with the
* Software or, alternatively, in accordance with the terms contained in
* a written agreement between you and Nokia.
*
*
* GNU General Public License Usage
* Alternatively, this file may be used under the terms of the GNU
* General Public License versions 2.0 or 3.0 as published by the Free
* Software Foundation and appearing in the file LICENSE.GPL included in
* the packaging of this file.  Please review the following information
* to ensure GNU General Public Licensing requirements will be met:
* http://www.fsf.org/licensing/licenses/info/GPLv2.html and
* http://www.gnu.org/copyleft/gpl.html.  In addition, as a special
* exception, Nokia gives you certain additional rights. These rights
* are described in the Nokia Qt GPL Exception version 1.2, included in
* the file GPL_EXCEPTION.txt in this package.
* 
* Qt for Windows(R) Licensees
* As a special exception, Nokia, as the sole copyright holder for Qt
* Designer, grants users of the Qt/Eclipse Integration plug-in the
* right for the Qt/Eclipse Integration to link to functionality
* provided by Qt Designer and its related libraries.
*
*
* If you are unsure which license is appropriate for your use, please
* contact the sales department at qt-sales@nokia.com.

**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#ifndef ABSTRACTMETABUILDER_H
#define ABSTRACTMETABUILDER_H

#include "codemodel.h"
#include "abstractmetalang.h"
#include "typesystem.h"
#include "typeparser.h"

#include <QtCore/QSet>

class AbstractMetaBuilder
{
public:
    enum RejectReason {
        NotInTypeSystem,
        GenerationDisabled,
        RedefinedToNotClass,
        UnmatchedArgumentType,
        UnmatchedReturnType,
        NoReason
    };

    AbstractMetaBuilder();
    virtual ~AbstractMetaBuilder() {};

    AbstractMetaClassList classes() const { return m_meta_classes; }
    AbstractMetaClassList classesTopologicalSorted() const;

    FileModelItem model() const { return m_dom; }
    void setModel(FileModelItem item) { m_dom = item; }


    ScopeModelItem popScope() { return m_scopes.takeLast(); }
    void pushScope(ScopeModelItem item) { m_scopes << item; }
    ScopeModelItem currentScope() const { return m_scopes.last(); }

    QString fileName() const { return m_file_name; }
    void setFileName(const QString &fileName) { m_file_name = fileName; }

    void dumpLog();

    bool build();

    void figureOutEnumValuesForClass(AbstractMetaClass *meta_class, QSet<AbstractMetaClass *> *classes);
    int figureOutEnumValue(const QString &name, int value, AbstractMetaEnum *meta_enum, AbstractMetaFunction *meta_function = 0);
    void figureOutEnumValues();
    void figureOutDefaultEnumArguments();

    void addAbstractMetaClass(AbstractMetaClass *cls);
    AbstractMetaClass *traverseTypeAlias(TypeAliasModelItem item);
    AbstractMetaClass *traverseClass(ClassModelItem item);
    bool setupInheritance(AbstractMetaClass *meta_class);
    AbstractMetaClass *traverseNamespace(NamespaceModelItem item);
    AbstractMetaEnum *traverseEnum(EnumModelItem item, AbstractMetaClass *enclosing, const QSet<QString> &enumsDeclarations);
    void traverseEnums(ScopeModelItem item, AbstractMetaClass *parent, const QStringList &enumsDeclarations);
    void traverseFunctions(ScopeModelItem item, AbstractMetaClass *parent);
    void traverseFields(ScopeModelItem item, AbstractMetaClass *parent);
    void traverseStreamOperator(FunctionModelItem function_item);
    void traverseCompareOperator(FunctionModelItem item);
    AbstractMetaFunction *traverseFunction(FunctionModelItem function);
    AbstractMetaField *traverseField(VariableModelItem field, const AbstractMetaClass *cls);
    void checkFunctionModifications();
    void registerHashFunction(FunctionModelItem function_item);
    void registerToStringCapability(FunctionModelItem function_item);

    void parseQ_Property(AbstractMetaClass *meta_class, const QStringList &declarations);
    void setupEquals(AbstractMetaClass *meta_class);
    void setupComparable(AbstractMetaClass *meta_class);
    void setupClonable(AbstractMetaClass *cls);
    void setupFunctionDefaults(AbstractMetaFunction *meta_function, AbstractMetaClass *meta_class);

    QString translateDefaultValue(ArgumentModelItem item, AbstractMetaType *type,
                                               AbstractMetaFunction *fnc, AbstractMetaClass *,
                                               int argument_index);
    AbstractMetaType *translateType(const TypeInfo &type, bool *ok, bool resolveType = true, bool resolveScope = true);

    void decideUsagePattern(AbstractMetaType *type);

    bool inheritTemplate(AbstractMetaClass *subclass,
                         const AbstractMetaClass *template_class,
                         const TypeParser::Info &info);
    AbstractMetaType *inheritTemplateType(const QList<AbstractMetaType *> &template_types, AbstractMetaType *meta_type, bool *ok = 0);

    bool isQObject(const QString &qualified_name);
    bool isEnum(const QStringList &qualified_name);

    void fixQObjectForScope  (TypeDatabase *types,
                  NamespaceModelItem item);
protected:
    AbstractMetaClass *argumentToClass(ArgumentModelItem);

    virtual AbstractMetaClass *createMetaClass() = 0;
    virtual AbstractMetaEnum *createMetaEnum() = 0;
    virtual AbstractMetaEnumValue *createMetaEnumValue() = 0;
    virtual AbstractMetaField *createMetaField() = 0;
    virtual AbstractMetaFunction *createMetaFunction() = 0;
    virtual AbstractMetaArgument *createMetaArgument() = 0;
    virtual AbstractMetaType *createMetaType() = 0;

private:
    void sortLists();

    QString m_file_name;

    AbstractMetaClassList m_meta_classes;
    AbstractMetaClassList m_templates;
    FileModelItem m_dom;

    QSet<const TypeEntry *> m_used_types;

    QMap<QString, RejectReason> m_rejected_classes;
    QMap<QString, RejectReason> m_rejected_enums;
    QMap<QString, RejectReason> m_rejected_functions;
    QMap<QString, RejectReason> m_rejected_fields;

    QList<AbstractMetaEnum *> m_enums;

    QList<QPair<AbstractMetaArgument *, AbstractMetaFunction *> > m_enum_default_arguments;

    QHash<QString, AbstractMetaEnumValue *> m_enum_values;

    AbstractMetaClass *m_current_class;
    QList<ScopeModelItem> m_scopes;
    QString m_namespace_prefix;

    QSet<AbstractMetaClass *> m_setup_inheritance_done;
};

#endif // ABSTRACTMETBUILDER_H
