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
#include "Gaze.h"
#include "GameEngine\GameLog.h"

Gaze::Gaze(Joint *head, Joint *lefteye, Joint *righteye) : 
m_head(head), m_leye(lefteye), m_reye(righteye), m_aux_leye(0), m_aux_reye(0), m_headpitch(0), m_targetIsSet(false), m_gazeaux_res(0)
{
	Horde3D::Vec3f p,r,s;

	//clear rotations
	lefteye->update();
	s = lefteye->getScale();
	p = lefteye->getTranslation();
	h3dSetNodeTransform( lefteye->getHordeID(), 
		p.x,p.y,p.z, 
		Config::getParamF(IK_Param::DfltEyeRotX_F), Config::getParamF(IK_Param::DfltEyeRotY_F), Config::getParamF(IK_Param::DfltEyeRotZ_F),
		s.x,s.y,s.z );

	righteye->update();
	s = righteye->getScale();
	p = righteye->getTranslation();
	h3dSetNodeTransform( righteye->getHordeID(), 
		p.x,p.y,p.z, 
		Config::getParamF(IK_Param::DfltEyeRotX_F), Config::getParamF(IK_Param::DfltEyeRotY_F), Config::getParamF(IK_Param::DfltEyeRotZ_F),
		s.x,s.y,s.z );

	
	//Generating 2 auxiliary eye nodes which will help us detrmine the orientation of each eye.
	#ifdef IK_DEBUG
		m_aux_leye = createGazeAux(lefteye, "gazeaux.scene.xml", "models/gazeaux/"); //WARNING, requires external gazeaux file
		m_aux_reye = createGazeAux(righteye, "gazeaux.scene.xml", "models/gazeaux/"); //WARNING, requires external gazeaux file
	#else
		m_aux_leye = createGazeAux(lefteye);
		m_aux_reye = createGazeAux(righteye);
	#endif
	//making a small position offset between the eye and the eyeaux
	//ASSUMING the eye is oriented (1,0,0)
	//Setting the auxiliar eye joint (in)visible
	#ifdef IK_DEBUG
		s = m_leye->getAbsScale();
		h3dSetNodeTransform( m_aux_leye->getHordeID(), 0.5f, 0, 0, 0, 0, 0, 4.0f/s.x, 0.2f/s.y, 0.2f/s.z );
		h3dSetNodeActivation( m_aux_leye->getHordeID(), true );

		s = m_reye->getAbsScale();
		h3dSetNodeTransform( m_aux_reye->getHordeID(), 0.5f, 0, 0, 0, 0, 0, 4.0f/s.x, 0.2f/s.y, 0.2f/s.z );
		h3dSetNodeActivation( m_aux_reye->getHordeID(), true );
	#else
		h3dSetNodeTransform( m_aux_leye->getHordeID(), 0.5f, 0, 0, 0, 0, 0, 1, 1, 1 );
		h3dSetNodeActivation( m_aux_leye->getHordeID(), false );

		h3dSetNodeTransform( m_aux_reye->getHordeID(), 0.5f, 0, 0, 0, 0, 0, 1, 1, 1 );
		h3dSetNodeActivation( m_aux_reye->getHordeID(), false );
	#endif

	if(m_head > 0 && m_leye > 0 && m_reye > 0 && m_aux_leye > 0 && m_aux_reye > 0)
		GameLog::logMessage( "IKComponent loaded and initialized");
	else
		GameLog::errorMessage( "IKComponent: gaze failed to initialize" );

	//Chek for missing DOFR information
	if(m_head->getDOFR()->isWeak())		m_head->setDOFR(DOFRestrictions::HEAD);
	if(m_leye->getDOFR()->isWeak())		m_leye->setDOFR(DOFRestrictions::LEFT_EYE);
	if(m_reye->getDOFR()->isWeak())		m_reye->setDOFR(DOFRestrictions::RIGHT_EYE);
}

Gaze::~Gaze()
{
	h3dRemoveNode( m_aux_leye->getHordeID() );
	Joint::deleteJoint(m_aux_leye);
	m_aux_leye = 0;

	h3dRemoveNode( m_aux_reye->getHordeID() );
	Joint::deleteJoint(m_aux_reye);
	m_aux_reye = 0;
}

void Gaze::setTarget(Horde3D::Vec3f target)
{	
	m_target = target;
	m_targetIsSet = true;
}

void Gaze::setHeadpitch(int head_pitch)
{
	m_headpitch = head_pitch;
}

IK_GazeResult::List Gaze::execute(bool move_head, bool move_leye, bool move_reye, bool simulate)
{
	if(!m_targetIsSet)
		return IK_GazeResult::GAZE_ERROR;
	
	int result_head = 0;
	int result_eyes = 0;

	if(move_head)
		if( !moveHead(simulate) )
			result_head = 1;

	if(move_leye)
		if( !moveEye(m_leye, m_aux_leye, simulate) )
			result_eyes = 1;

	if(move_reye)
		if( !moveEye(m_reye, m_aux_reye, simulate) )
			result_eyes = 1;
	
	m_targetIsSet = false;
	return (IK_GazeResult::List)(1 + result_eyes + 2*result_head);
}

bool Gaze::moveHead(bool simulate)
{
	bool result = true;	
	float angle;
	Horde3D::Vec3f axis;
	AxisLock lock(false, false, (Config::getParamI(IK_Param::UseZLock_I) == 0) ? false : true);

	//clear head rotation
	m_head->update();
	Horde3D::Vec3f s = m_head->getScale();
	Horde3D::Vec3f p = m_head->getTranslation();
	h3dSetNodeTransform( m_head->getHordeID(), 
		p.x,p.y,p.z, 
		0,0,0,
		s.x,s.y,s.z );
	
	if( computeHeadRotation(&axis, &angle) )
	{
		if(!simulate)
			result = applyRotation(m_head, axis, angle, &lock, false);
		else
			result = simulateRotation(m_head, axis, angle, &lock);
	}
	return result;
}

bool Gaze::moveEye(Joint *eye, Joint *aux_eye, bool simulate)
{
	bool result = true;
	float angle;
	Horde3D::Vec3f axis;
	AxisLock lock(true, false, false);
		
	//clear eye rotation
	eye->update();
	Horde3D::Vec3f s = eye->getScale();
	Horde3D::Vec3f p = eye->getTranslation();
	h3dSetNodeTransform( eye->getHordeID(), 
		p.x,p.y,p.z, 
		Config::getParamF(IK_Param::DfltEyeRotX_F), Config::getParamF(IK_Param::DfltEyeRotY_F), Config::getParamF(IK_Param::DfltEyeRotZ_F),
		s.x,s.y,s.z );
	
	m_endEffector = aux_eye;
	if( computeRotation(eye, &axis, &angle) )
	{		
		if(!simulate)
			result = applyRotation(eye, axis, angle, &lock, false);
		else
			result = simulateRotation(eye, axis, angle, &lock);
	}
	return result;
}

bool Gaze::computeHeadRotation( Horde3D::Vec3f *out_axis, float *out_angleRad)
{
	//Saving the current eye transformation
	Horde3D::Vec3f p,r,s;
	m_leye->update();
	Horde3D::Matrix4f eyeTransf( m_leye->getRelTransf()->x );
	eyeTransf.decompose( p, r, s );

	//Computing the head pitch
	// Allow (-10 , +10) values for head_picth 
	// where -10 means a higher angle for the "pointing joint" therefor a "less arrogant" gaze
	// and +10 means a lower angle for the "point joint" therefor a "more arrogant" gaze
	if(m_headpitch > 10) m_headpitch = 10;
	else if(m_headpitch < -10) m_headpitch = -10;		
	m_headpitch = (m_headpitch > 0) ?
		m_headpitch + (int)((m_headpitch/2)*(m_headpitch/2)) :
		m_headpitch - (int)((m_headpitch/2)*(m_headpitch/2));
	
	//First, we must temporary position the eye in the center of the face, 
	//clear its rotations and calculate the endPos		
	h3dSetNodeTransform( m_leye->getHordeID(), 
		p.x, 0, p.z, 
		0, (float)(90 + m_headpitch), 0, 
		1, 1, 1);

	m_aux_leye->update();
	Horde3D::Vec3f endPos = m_aux_leye->getAbsTranslation();
	
	//Second, we have to align the eye's coordinate system with the neck's coordinate system
	//Therfor we eliminate all rotations from the eye's coordinate system
	h3dSetNodeTransform( m_leye->getHordeID(), 
		p.x, 0, p.z, 
		0, 0, 0, 
		1, 1, 1);

	m_leye->update();
	//We create the 2 vectors and normalize them
	Horde3D::Vec3f targetVec = m_leye->getAbsTransf()->inverted() * m_target;
	Horde3D::Vec3f currentVec = m_leye->getAbsTransf()->inverted() * endPos;

	targetVec = targetVec.normalized();
	currentVec = currentVec.normalized();

	//Finally, we reset the transformations
	h3dSetNodeTransMat( m_leye->getHordeID(), eyeTransf.x );

	//get angle between vectors
	float angleCos = targetVec.dot(currentVec);

	if(angleCos < 1.0f - Config::getParamF(IK_Param::CCDRotJitterTolerance_F) ) 
	{
		*out_angleRad = -acosf(angleCos);
		
		//get vector perpendicular to the plain described by two vectors
		*out_axis = targetVec.cross( currentVec );
		*out_axis = out_axis->normalized();

		return true;
	}
	return false;
}

/**
 * generates a model node based on a minimal geometry resource and attaches it to the joint eye
 */
Joint* Gaze::createGazeAux(Joint* eye)
{
	if(m_gazeaux_res == 0)
	{
		m_gazeaux_res = h3dAddResource(H3DResTypes::Geometry, "_gazeaux_geo",0);
		if( !h3dIsResLoaded(m_gazeaux_res) )	
			if(!loadGazeAuxRes(m_gazeaux_res))
				GameLog::errorMessage( "IKComponent: failed to load gazeaux resource" );
	}

	H3DNode node = h3dAddModelNode( eye->getHordeID(), "_gazeaux_", m_gazeaux_res);
	return Joint::getInstance(node);
}

/**
 * loads a node from the given xml file and attaches it to the joint eye
 */
Joint* Gaze::createGazeAux(Joint* eye, const char* filename, const char* filedir)
{
	if(m_gazeaux_res == 0)
	{
		m_gazeaux_res = h3dAddResource(H3DResTypes::SceneGraph, filename, 0);
		if( !h3dIsResLoaded(m_gazeaux_res) )	
			h3dutLoadResourcesFromDisk( filedir );
	}

	H3DNode node = h3dAddNodes( eye->getHordeID(), m_gazeaux_res);
	return Joint::getInstance(node);
}

/**
 * loads a minimal geometry resource
 */
bool Gaze::loadGazeAuxRes(H3DRes res)
{
	unsigned int version = (int)Config::getParamF(IK_Param::H3DGVersion_F);
	unsigned int count = 0;

	//Generating the resource
	char* data = (char *)malloc(29);
	unsigned int dataSize = 0;
 
	memcpy( data + dataSize, "H3DG", 4 ); dataSize += 4;
	
	memcpy( data + dataSize, &version, sizeof( unsigned int ) ); dataSize += sizeof( unsigned int ); //version
	memcpy( data + dataSize, &count, sizeof( unsigned int ) ); dataSize += sizeof( unsigned int ); //joints
	memcpy( data + dataSize, &count, sizeof( unsigned int ) ); dataSize += sizeof( unsigned int ); //streams
	memcpy( data + dataSize, &count, sizeof( unsigned int ) ); dataSize += sizeof( unsigned int ); //vertices
	memcpy( data + dataSize, &count, sizeof( unsigned int ) ); dataSize += sizeof( unsigned int ); //triangles
	memcpy( data + dataSize, &count, sizeof( unsigned int ) ); dataSize += sizeof( unsigned int ); //morph targets

	char term = '\0';
	memcpy( data +dataSize, &term, sizeof( char ) ); dataSize += sizeof( char );

	if( !h3dLoadResource( res, data, dataSize ) )
		return false;
	
	return true;
}