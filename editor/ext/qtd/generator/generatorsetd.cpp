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

#include "generatorsetd.h"
#include "reporthandler.h"

#include "dgenerator.h"
#include "cppheadergenerator.h"
#include "cppimplgenerator.h"
#include "metainfogenerator.h"
#include "classlistgenerator.h"
#include "containergenerator.h"
#include "qdocgenerator.h"
#include "uiconverter.h"
#include "jumptable.h"

#include <QFileInfo>

GeneratorSet *GeneratorSet::getInstance() {
    return new GeneratorSetD();
}

void dumpMetaDTree(const AbstractMetaClassList &classes);

GeneratorSetD::GeneratorSetD() :
    no_d(false),
    no_cpp_h(false),
    no_cpp_impl(false),
    no_metainfo(false),
    build_class_list(false),
    build_qdoc_japi(false),
    docs_enabled(false),
    do_ui_convert(false),
    native_jump_table(false),
    doc_dir("../../main/doc/jdoc")
{}

QString GeneratorSetD::usage() {
    QString usage =
        "  --no-d                                 \n"
        "  --no-metainfo                             \n"
        "  --no-cpp-h                                \n"
        "  --no-cpp-impl                             \n"
        "  --convert-to-jui=[.ui-file name]          \n"
        "  --custom-widgets=[file names]             \n";

    return usage;
}

bool GeneratorSetD::readParameters(const QMap<QString, QString> args) {
    no_d = args.contains("no-d");
    no_cpp_h = args.contains("no-cpp-h");
    no_cpp_impl = args.contains("no-cpp-impl");
    no_metainfo = args.contains("no-metainfo");
    build_class_list = args.contains("build-class-list");
    native_jump_table = args.contains("native-jump-table");

    if (args.contains("build-qdoc-japi")) {
        no_d = true;
        no_cpp_h = true;
        no_cpp_impl = true;
        no_metainfo = true;
        build_qdoc_japi = true;
    }

    if (args.contains("jdoc-dir")) {
        doc_dir =  args.value("jdoc-dir");
    }

    docs_enabled = args.contains("jdoc-enabled");

    if (args.contains("custom-widgets"))
        custom_widgets = args.value("custom-widgets");

    if (args.contains("convert-to-jui")) {
        ui_file_name = args.value("convert-to-jui");
        do_ui_convert = true;

        if (!QFileInfo(ui_file_name).exists()) {
            printf(".ui file '%s' does not exist\n", qPrintable(ui_file_name));
            return false;
        }
    }
    return GeneratorSet::readParameters(args);
}

void GeneratorSetD::buildModel(const QString pp_file) {
    // Building the code inforamation...
    builder.setFileName(pp_file);
    builder.build();
}

void GeneratorSetD::dumpObjectTree() {
    dumpMetaDTree(builder.classes());
}

QString GeneratorSetD::generate() {

    // Ui conversion...
    if (do_ui_convert) {
        UiConverter converter;
        converter.setClasses(builder.classes());
        converter.convertToJui(ui_file_name, custom_widgets);
        return 0;
    } else if (!custom_widgets.isEmpty()) {
        fprintf(stderr, "NOTE: The --custom-widgets option only has an effect when used with --convert-to-jui");
    }

    // Code generation
    QList<Generator *> generators;
    PriGenerator *priGenerator = new PriGenerator;
    ContainerGenerator *cointainerGenerator;
    DGenerator *d_generator = 0;
    CppHeaderGenerator *cpp_header_generator = 0;
    CppImplGenerator *cpp_impl_generator = 0;
    MetaInfoGenerator *metainfo = 0;
    JumpTablePreprocessor *jumpTablePreprocessor = 0;
    JumpTableGenerator *jumpTableGenerator = 0;

    ClassFromEntry::construct(builder.classes());

    QStringList contexts;
    if (build_qdoc_japi) {
        generators << new QDocGenerator;
        contexts << "QDocGenerator";
    }

    if (native_jump_table) {
        jumpTablePreprocessor = new JumpTablePreprocessor();
        generators << jumpTablePreprocessor;
        contexts << "JumpTablePreprocessor";
    }

    if (!no_d) {
        d_generator = new DGenerator;
        d_generator->setDocumentationDirectory(doc_dir);
        d_generator->setDocumentationEnabled(docs_enabled);
        d_generator->setNativeJumpTable(native_jump_table);
        generators << d_generator;

        contexts << "JavaGenerator";
    }

    if (!no_cpp_h) {
        cpp_header_generator = new CppHeaderGenerator(priGenerator);
        generators << cpp_header_generator;
        contexts << "CppHeaderGenerator";
    }

    if (!no_cpp_impl) {
        cpp_impl_generator = new CppImplGenerator(priGenerator);
        cpp_impl_generator->setNativeJumpTable(native_jump_table);
        generators << cpp_impl_generator;
        contexts << "CppImplGenerator";
    }

    if (native_jump_table) {
        jumpTableGenerator = new JumpTableGenerator(jumpTablePreprocessor, priGenerator);
        generators << jumpTableGenerator;
        contexts << "JumpTableGenerator";
    }

    if (!no_metainfo) {
        metainfo = new MetaInfoGenerator(priGenerator);
        generators << metainfo;
        contexts << "MetaInfoGenerator";
    }

    if (build_class_list) {
        generators << new ClassListGenerator;
        contexts << "ClassListGenerator";
    }

    cointainerGenerator = new ContainerGenerator(cpp_impl_generator);


    generators << priGenerator;
    contexts << "PriGenerator";

    generators << cointainerGenerator;
    contexts << "cointainerGenerator";

    for (int i=0; i<generators.size(); ++i) {
        Generator *generator = generators.at(i);
        ReportHandler::setContext(contexts.at(i));

        generator->setOutputDirectory(outDir);
        generator->setClasses(builder.classes());
        if (printStdout)
            generator->printClasses();
        else
            generator->generate();
    }

    QString res;
    res = QString("Classes in typesystem: %1\n"
                  "Generated:\n"
                  "  - d.........: %2 (%3)\n"
                  "  - cpp-impl..: %4 (%5)\n"
                  "  - cpp-h.....: %6 (%7)\n"
                  "  - meta-info.: %8 (%9)\n"
                  "  - pri.......: %10 (%11)\n"
                  )
        .arg(builder.classes().size())
        .arg(d_generator ? d_generator->numGenerated() : 0)
        .arg(d_generator ? d_generator->numGeneratedAndWritten() : 0)
        .arg(cpp_impl_generator ? cpp_impl_generator->numGenerated() : 0)
        .arg(cpp_impl_generator ? cpp_impl_generator->numGeneratedAndWritten() : 0)
        .arg(cpp_header_generator ? cpp_header_generator->numGenerated() : 0)
        .arg(cpp_header_generator ? cpp_header_generator->numGeneratedAndWritten() : 0)
        .arg(metainfo ? metainfo->numGenerated() : 0)
        .arg(metainfo ? metainfo->numGeneratedAndWritten() : 0)
        .arg(priGenerator->numGenerated())
        .arg(priGenerator->numGeneratedAndWritten());

    return res;
}

void dumpMetaDAttributes(const AbstractMetaAttributes *attr)
{
    if (attr->isNative()) printf(" native");
    if (attr->isAbstract()) printf(" abstract");
    if (attr->isFinalInTargetLang()) printf(" final(d)");
    if (attr->isFinalInCpp()) printf(" final(cpp)");
    if (attr->isStatic()) printf(" static");
    if (attr->isPrivate()) printf(" private");
    if (attr->isProtected()) printf(" protected");
    if (attr->isPublic()) printf(" public");
    if (attr->isFriendly()) printf(" friendly");
}

void dumpMetaDType(const AbstractMetaType *type)
{
    if (!type) {
        printf("[void]");
    } else {
        printf("[type: %s", qPrintable(type->typeEntry()->qualifiedCppName()));
        if (type->isReference()) printf(" &");
        int indirections = type->indirections();
        if (indirections) printf(" %s", qPrintable(QString(indirections, '*')));

        printf(", %s", qPrintable(type->typeEntry()->qualifiedTargetLangName()));

        if (type->isPrimitive()) printf(" primitive");
        if (type->isEnum()) printf(" enum");
        if (type->isQObject()) printf(" q_obj");
        if (type->isNativePointer()) printf(" n_ptr");
        if (type->isTargetLangString()) printf(" d_string");
        if (type->isConstant()) printf(" const");
        printf("]");
    }
}

void dumpMetaDArgument(const AbstractMetaArgument *arg)
{
    printf("        ");
    dumpMetaDType(arg->type());
    printf(" %s", qPrintable(arg->argumentName()));
    if (!arg->defaultValueExpression().isEmpty())
        printf(" = %s", qPrintable(arg->defaultValueExpression()));
    printf("\n");
}

void dumpMetaDFunction(const AbstractMetaFunction *func)
{
    printf("    %s() - ", qPrintable(func->name()));
    dumpMetaDType(func->type());
    dumpMetaDAttributes(func);
    if (func->isConstant()) printf(" const");
    printf("\n      arguments:\n");
    foreach (AbstractMetaArgument *arg, func->arguments())
        dumpMetaDArgument(arg);
}

void dumpMetaDClass(const AbstractMetaClass *cls)
{
    printf("\nclass: %s, package: %s\n", qPrintable(cls->name()), qPrintable(cls->package()));
    if (cls->hasVirtualFunctions())
        printf("    shell based\n");
    printf("  baseclass: %s %s\n", qPrintable(cls->baseClassName()), cls->isQObject() ? "'QObject-type'" : "'not a QObject-type'");
    printf("  interfaces:");
    foreach (AbstractMetaClass *iface, cls->interfaces())
        printf(" %s", qPrintable(iface->name()));
    printf("\n");
    printf("  attributes:");
    dumpMetaDAttributes(cls);

    printf("\n  functions:\n");
    foreach (const AbstractMetaFunction *func, cls->functions())
        dumpMetaDFunction(func);

    //     printf("\n  fields:\n");
    //     foreach (const AbstractMetaField *field, cls->fields())
    //         dumpMetaJavaField(field);

    //     printf("\n  enums:\n");
    //     foreach (const AbstractMetaEnum *e, cls->enums())
    //         dumpMetaJavaEnum(e);
}

void dumpMetaDTree(const AbstractMetaClassList &classes)
{
    foreach (AbstractMetaClass *cls, classes) {
        dumpMetaDClass(cls);
    }
}

