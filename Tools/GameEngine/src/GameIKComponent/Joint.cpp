// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// ****************************************************************************************
//

// ****************************************************************************************
//
// GameEngine IK Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#include "Joint.h"
#include <string.h>

std::map<H3DNode, Joint*> Joint::m_joints;

//////////////////////////
//Container functions
Joint* Joint::getInstance(H3DNode id)
{
	if(id <= 0)
		return 0;

	Joint *j = find(id);
	if(j == 0)
	{
		j = new Joint(id);
		m_joints[id] = j;
	}

	return j;
}

Joint* Joint::getInstance(H3DNode model, const char *name)
{
	h3dFindNodes( model, name, H3DNodeTypes::Joint );
	H3DNode id = h3dGetNodeFindResult(0);

	return getInstance(id);
}

Joint* Joint::find(H3DNode id)
{
	std::map<H3DNode, Joint*>::iterator iter = m_joints.find(id);

	if( iter == m_joints.end() )
		return 0;
	else
		return iter->second;
}

void Joint::deleteAll()
{
	std::map<H3DNode, Joint*>::iterator iter = m_joints.begin();
	while(iter != m_joints.end())
	{
		delete iter->second;
		iter++;
	}
	m_joints.clear();
}

void Joint::updateAll()
{
	std::map<H3DNode, Joint*>::iterator iter = m_joints.begin();
	while(iter != m_joints.end())
	{
		iter->second->update();
		iter++;
	}
}

//////////////////////////
//Instance funcitons
Joint::Joint(H3DNode id) : m_horde_id(id), m_dofr( DOFRestrictions::FULL_FREEDOM )
{
	memcpy_s(m_name, 32, h3dGetNodeParamStr( id, H3DNodeParams::NameStr ), 32);
	update();
}

void Joint::update()
{
	const float* rel;
	const float* abs;

	h3dGetNodeTransMats( m_horde_id, &rel, &abs );

	m_transf_rel = Matrix4f(rel);
	m_transf_abs = Matrix4f(abs);
}

Vec3f Joint::getAbsTranslation()
{
	return Vec3f( m_transf_abs.x[12], m_transf_abs.x[13], m_transf_abs.x[14] );
}

Vec3f Joint::getAbsRotation()
{
	Vec3f p,r,s;
	m_transf_abs.decompose(p,r,s);
	
	return r;
}

Vec3f Joint::getAbsScale()
{	
	return m_transf_abs.getScale();
}

Matrix4f* Joint::getAbsTransf()
{
	return &m_transf_abs;
}

Vec3f Joint::getTranslation()
{
	return Vec3f( m_transf_rel.x[12], m_transf_rel.x[13], m_transf_rel.x[14] );
}

Vec3f Joint::getRotation()
{
	Vec3f p,r,s;
	m_transf_rel.decompose(p,r,s);
	
	return r;
}

Vec3f Joint::getScale()
{	
	return m_transf_rel.getScale();
}

Matrix4f* Joint::getRelTransf()
{
	return &m_transf_rel;
}

Joint* Joint::getChild(int i)
{
	H3DNode c = h3dGetNodeChild(m_horde_id, i);
	return (c==0) ? 0 : getInstance(c);
}

Joint* Joint::getParent()
{
	H3DNode p = h3dGetNodeParent(m_horde_id);
	return (p==0) ? 0 : getInstance(p);
}

void Joint::setDOFR(DOFRestrictions *dofr)
{
	m_dofr = *dofr;
}

void Joint::setDOFR(float minX, float maxX, float minY, float maxY, float minZ, float maxZ, float damp)
{
	m_dofr = DOFRestrictions(minX, maxX, minY, maxY, minZ, maxZ, damp);
}

void Joint::setDOFR(XMLNode *ikXmlNode)
{
	m_dofr = DOFRestrictions(ikXmlNode);
}

void Joint::setDOFR(DOFRestrictions::DefaultValues dofr_type)
{
	m_dofr.useDefault(dofr_type);
}

DOFRestrictions* Joint::getDOFR()
{
	return &m_dofr;
}

H3DNode Joint::getHordeID()
{
	return m_horde_id;
}

const char* Joint::getName()
{
	return (const char *)m_name;
}