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
#include "IKAnim.h"
#include "Config.h"


#include "GameEngine\GameEngine.h"
#include <stdlib.h>
#include <time.h>
#include <sstream>

IKAnim::IKAnim(Joint *endEffector, Joint *chainEnd, Horde3D::Vec3f target) 
: m_ccd(endEffector,chainEnd,target), m_chain(0)
{	
	//intializations
	m_numFrames = Config::getParamI( IK_Param::NumAnimFrames_I );
	srand( (unsigned int)((unsigned int)time(0) * endEffector->getHordeID()) );
	m_active = false;
	m_resource = 0;

	m_ccd.buildIKChain();
	m_chain = m_ccd.getIKChain();

	Horde3D::Matrix4f **frame_transf;
	frame_transf = new Horde3D::Matrix4f * [m_numFrames];
	for(unsigned int i=0; i< m_numFrames; i++)
		frame_transf[i] = new Horde3D::Matrix4f[m_chain->size()];

	//SAVING the information for the start frame
	for(unsigned int k=0; k<m_chain->size(); k++)
	{
		m_chain->at(k)->update();
		frame_transf[0][k] = *(m_chain->at(k)->getRelTransf());
	}

	//Computing the IK
	m_ccdResult = m_ccd.execute();
	//////////////////
	
	//SAVING the information for the last frame
	for(unsigned int k=0; k<m_chain->size(); k++)
	{
		m_chain->at(k)->update();
		frame_transf[m_numFrames-1][k] = *(m_chain->at(k)->getRelTransf());
	}	

	//The useIK computes the IK directly on the SceneGraph, so we need
	//to restore the chain to its original postion before we launch the animation.
	for(unsigned int k=0; k<m_chain->size(); k++)
	{
		h3dSetNodeTransMat( m_chain->at(k)->getHordeID(), frame_transf[0][k].x );
	}

	//now we need to morph between the start and end position (postition interpolation)
	float t;
	for(unsigned int i=1; i<m_numFrames -1; i++)
	{
		for(unsigned int j=0; j<m_chain->size(); j++)
		{
			t = (float)i/(m_numFrames -1.0f);
			frame_transf[i][j] = Horde3D::Matrix4f( (frame_transf[0][j] * (1.0f - t)) + (frame_transf[m_numFrames-1][j] * t) ); //morphing: xt = A*(1-t) + B*t
		}
	}

	createAnimation(&frame_transf);

	//free memory
	for(unsigned int i=0; i< m_numFrames; i++)
		delete[] frame_transf[i];
	delete[] frame_transf;
}

int IKAnim::play(unsigned int model_h3d, int stage, float weight, float speed)
{
	m_model = model_h3d;
	m_stage = stage;
	m_weight = weight;
	m_frame = 0;
	m_active = true;
	m_animSpeed = (speed < 0) ? 30 : speed;

	h3dSetupModelAnimStage( m_model, m_stage, m_resource, 0, "", false );
	update();

	return 1;
}

void IKAnim::update()
{
	if(!m_active || m_resource == 0) return;
	h3dSetModelAnimParams(m_model, m_stage, m_frame, m_weight);
	
	if( m_frame < m_numFrames - 1 )
	{
		m_frame += (m_animSpeed/30.0f) * (m_numFrames / GameEngine::FPS());
		if(m_frame > m_numFrames-1)
			m_frame = (float)m_numFrames-1;
	}
	else
	{
		//remove resource
		h3dRemoveResource( m_resource );
		//clear stage
		h3dSetupModelAnimStage( m_model, m_stage, 0, 0, "", false );

		m_resource = 0;
		m_active = false;
	}
}

bool IKAnim::createAnimation(Horde3D::Matrix4f ***frame_transf)
{
	Horde3D::Vec3f p,r,s;
	int version = (int)Config::getParamF(IK_Param::H3DAVersion_F);
	int numNodes = m_chain->size();
	int numFrames = m_numFrames;

	//Generating the animation
	//								header				joint names						data body
	char* animData = (char *)malloc(4 + 3*sizeof(int) + numNodes*256 + numNodes*numFrames*10*sizeof(float));
	unsigned int animDataSize = 0;
 	
	//Data header
	memcpy( animData + animDataSize, "H3DA", 4 ); animDataSize += 4;
	
	memcpy( animData + animDataSize, &version, sizeof( int ) ); animDataSize += sizeof( int );
	memcpy( animData + animDataSize, &numNodes, sizeof( int ) ); animDataSize += sizeof( int );
	memcpy( animData + animDataSize, &numFrames, sizeof( int ) ); animDataSize += sizeof( int );

	//Data body
	for( int i=0; i < numNodes; i++ )
	{
		memcpy( animData + animDataSize, m_chain->at(i)->getName(), 256 ); animDataSize += 256;
		
		//Looping through the frames
		for(int j=0; j< numFrames; j++)
		{
			(*frame_transf)[j][i].decompose( p, r, s );
			Horde3D::Quaternion rotQ( r.x, r.y, r.z );

			memcpy( animData + animDataSize, &rotQ.x, sizeof( float ) ); animDataSize += sizeof( float );
			memcpy( animData + animDataSize, &rotQ.y, sizeof( float ) ); animDataSize += sizeof( float );
			memcpy( animData + animDataSize, &rotQ.z, sizeof( float ) ); animDataSize += sizeof( float );
			memcpy( animData + animDataSize, &rotQ.w, sizeof( float ) ); animDataSize += sizeof( float );

			memcpy( animData + animDataSize, &p.x, sizeof( float ) ); animDataSize += sizeof( float );
			memcpy( animData + animDataSize, &p.y, sizeof( float ) ); animDataSize += sizeof( float );
			memcpy( animData + animDataSize, &p.z, sizeof( float ) ); animDataSize += sizeof( float );

			memcpy( animData + animDataSize, &s.x, sizeof( float ) ); animDataSize += sizeof( float );
			memcpy( animData + animDataSize, &s.y, sizeof( float ) ); animDataSize += sizeof( float );
			memcpy( animData + animDataSize, &s.z, sizeof( float ) ); animDataSize += sizeof( float );
		}
	}
	char term = '\0';
	memcpy( animData + animDataSize, &term, sizeof( char ) ); animDataSize += sizeof( char );

	//Creating an animation resource
	//generating a random name
	std::ostringstream convert; 
	convert << "_IKAnimRes_" << rand() % 10000 << '\0';
	memcpy(m_name, convert.str().c_str(), 16);

	m_resource = h3dAddResource( H3DResTypes::Animation, m_name, 0 );
	if( !h3dLoadResource( m_resource, animData, animDataSize ) )
		return false;

	return true;
}

const char* IKAnim::getName()
{
	return (const char*)m_name;
}

int IKAnim::getResource()
{
	return m_resource;
}