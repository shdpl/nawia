// ****************************************************************************************
//
// Horde3D Scene Editor 
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the Horde3D Scene Editor.
//
// The Horde3D Scene Editor is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation version 3 of the License 
//
// The Horde3D Scene Editor is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// ****************************************************************************************
#ifndef QPIPELINENODE_H_
#define QPIPELINENODE_H_

#include <QXmlTree/QXmlTreeNode.h>
#include <QtCore/QVariant>

class QPipelineNode : public QXmlTreeNode
{
	Q_OBJECT
public:
	enum NodeType
	{
		PIPELINENODE = 0x1000, 
		PIPELINECONFIGNODE = 0x6000, 
		PIPELINESTAGENODE = 0xE000, 
		PIPELINESETUPNODE = 0xF000, 
		PIPELINERENDERTARGETNODE = 0x1F000, 
		PIPELINECOMMANDQUEUENODE = 0x3F000
	};

	QPipelineNode(unsigned int pipelineID, const QDomElement& xmlNode, int row, QXmlTreeModel* model, QXmlTreeNode* parent = 0);
	virtual ~QPipelineNode();

	unsigned int hordeId() {return m_pipelineID;}

protected:
	QXmlTreeNode* createChild(const QDomElement& childNode, int row);
	
private:
	bool			m_noSetupNode;
	unsigned int	m_pipelineID;
};
#endif
