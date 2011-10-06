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

#ifndef UICONVERTER_H
#define UICONVERTER_H

#include "metajava.h"

#include <QtXml>

class UiConverter
{
public:
    enum SearchType {
        SignalSearch,
        SlotSearch
    };

    void setClasses(const AbstractMetaClassList &classes) { m_java_classes = classes; }
    AbstractMetaClassList classes() const { return m_java_classes; }

    void convertToJui(const QString &uiFile, const QString &customWidgetFiles);

private:
    typedef QPair<QString, AbstractMetaClass *> CustomWidget;

    void traverse(QDomNode node, QDomDocument *doc);
    void fixUiNode(QDomElement node, QDomDocument *doc);
    void fixSetNode(QDomElement node, QDomDocument *doc);
    void fixEnumNode(QDomElement node, QDomDocument *doc);
    void fixConnectionNode(QDomElement node, QDomDocument *doc);
    void fixWidgetNode(QDomElement, QDomDocument *doc);
    void fixCustomWidgetNode(QDomElement, QDomDocument *doc);

    void traverseCustomWidgets(const QString &customWidgetFiles);
    void traverseCustomWidgetFile(const QString &customWidgetFile);
    QString translateEnumValue(const QString &enumValue);
    const AbstractMetaFunction *findFunction(AbstractMetaClass *javaClass, const QString &signature,
                                         SearchType type);

    AbstractMetaClassList m_java_classes;
    QHash<QString, AbstractMetaClass *> m_named_widgets;
    QMultiMap<QString, CustomWidget> m_custom_widgets;
};

#endif // UICONVERTER_H
