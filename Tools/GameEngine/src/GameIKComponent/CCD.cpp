// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2010 Ionut Damian
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
#include "CCD.h"
#include <iostream>

CCD::CCD() : m_endEffector(0), m_chainEnd(0), m_itCnt(0)
{}

CCD::CCD(Joint* endEffector, Joint* chainEnd, Vec3f target) : m_endEffector(endEffector), m_chainEnd(chainEnd), m_target(target), m_itCnt(0)
{}

IK_CCDResult::List CCD::execute()
{
	m_ikmo_active = false;
	Joint* current;
	int rotPerIt = 0;

	current = m_endEffector->getParent();

	//initialize the IK Movement Optimizer process if necessary
	if( Config::getParamI(IK_Param::UseIkmo_I) > 0 )
	{
		current = initIKMO();
		m_ikmo_active = true;
	}

	while(m_itCnt < Config::getParamI(IK_Param::CCDMaxIterations_I) )
	{
		//If the DOFR hasn't been set by the user, we'll use a preset
		if(current->getDOFR()->isWeak())
			current->setDOFR(DOFRestrictions::STANDARD_JOINT); //set default dofr
				
		float angle;
		Vec3f axis;
		if(computeRotation(current, &axis, &angle))
		{
			//Damping - limits rotation to a predefined maximum value (damp value)
			angle = dampAngle( angle, degToRad(current->getDOFR()->getDampingValue()) );
			
			applyRotation(current, axis, angle, 0, (Config::getParamI(IK_Param::CCDTwistJointManipulation_I) == 0) ? false : true );
			rotPerIt++;
		}

		//We proceed to the next joint
		//If we use the ik movement optimizer we go down the chain
		//if not we go up, towards the stop joint
		if(m_ikmo_active) 
		{
			m_ikmo_it--;
			current = m_ik_chain[m_ikmo_it];
		}
		else
			current = current->getParent();
		
		//If the last joint has been reached, we proceed to the next iteration of the skeleton
		//We do IKMO only once
		if(m_ikmo_active 
			&& ( current->getHordeID() == m_endEffector->getParent()->getHordeID() 
			  || current->getHordeID() == m_endEffector->getHordeID() 
			  || m_ikmo_it < 1))
		{
			m_ikmo_active = false;
			current = m_endEffector->getParent();
			//reset rotations counter
			rotPerIt = 0;
			continue;
		}

		//test finish conditions
		if( current->getHordeID() == m_chainEnd->getParent()->getHordeID() 
		 || current->getHordeID() == m_chainEnd->getHordeID() )
		{
			m_endEffector->update();
			Vec3f endPos = m_endEffector->getAbsTranslation();
						
			// Get vectors in coordinate system of current joint
			current->update();
			Vec3f targetVec = current->getAbsTransf()->inverted() * m_target;
			Vec3f currentVec = current->getAbsTransf()->inverted() * endPos;
			
			targetVec = targetVec.normalized();
			currentVec = currentVec.normalized();

			//If we are close enough to the requested point, the iteration should stop
			float dist = vecDistance(currentVec, targetVec);
			
			#ifdef IK_DEBUG
				printf("[it%d] dist %.5f (%.1f) in %d rotations\n", m_itCnt,dist,Config::getParamF(Config::CCD_MAX_DIST_ERROR),rotPerIt );
			#endif
			if(dist <= Config::getParamF(IK_Param::CCDMaxDistError_F)) 
			{
				#ifdef IK_DEBUG
					printf("Iterations needed to reach target: %d\n", m_itCnt);
				#endif
				return IK_CCDResult::REACHED_DESTINATION;
			}

			//check rotations counter, 
			//if it is zero then we are so close to the target that all rotations are smaller then our jitter tolerance
			//and therefor unusable
			if(rotPerIt == 0 && !m_ikmo_active)
				break;

			//proceed to next iteration
			current = m_endEffector->getParent();
			m_itCnt++;
			//reset rotations counter
			rotPerIt = 0;
		}
	}
	#ifdef IK_DEBUG
		printf("Target out of reach\n");
	#endif
	return IK_CCDResult::REACHED_MAX_ITERATIONS;
}

bool CCD::computeRotation(Joint *j, Vec3f *out_axis, float *out_angleRad)
{
	//Saving the data for the new end effektor position
	m_endEffector->update();
	Vec3f endPos = m_endEffector->getAbsTranslation();
	
	j->update();
	// Get vectors in coordinate system of current joint
	Vec3f targetVec = j->getAbsTransf()->inverted() * m_target;
	Vec3f currentVec = j->getAbsTransf()->inverted() * endPos;
	
	targetVec = targetVec.normalized();
	currentVec = currentVec.normalized();
	
	//get angle between vectors
	float angleCos = targetVec.dot(currentVec);

	if(angleCos < 1.0f - Config::getParamF(IK_Param::CCDRotJitterTolerance_F)) 
	{
		*out_angleRad = -acosf(angleCos);
		
		//get vector perpendicular to the plain described by two vectors
		*out_axis = targetVec.cross( currentVec );
		*out_axis = out_axis->normalized();

		return true;
	}
	return false;
}

bool CCD::applyRotation(Joint *j, Vec3f axis, float angle_rad, AxisLock *axis_lock, bool check_twistj)
{
	bool result = true;
	Vec3f p,r,s;

	//convert rotation to Quaternion
	Quaternion req_rotQ = getQuat( axis, angle_rad );
	normalizeQuat(&req_rotQ);
	
	//apply rotation on a local matrix
	j->update();
	Matrix4f qmat( req_rotQ );
	Matrix4f newTransf = *(j->getRelTransf()) * qmat; 
	newTransf.decompose( p, r, s );


	//h3dSetNodeTransMat( j->getHordeID(), newTransf.x );
		
	//convert to degrees
	r.x = radToDeg( r.x );
	r.y = radToDeg( r.y );
	r.z = radToDeg( r.z );

	if(j->getHordeID() == 22)
		printf("eye - rad: %.2f - eul: %.2f, %.2f, %.2f\n",angle_rad, r.x, r.y, r.z);

	//DOFRestrictions
	if( Config::getParamI(IK_Param::UseDofr_I) > 0 )
	{					
		result = j->getDOFR()->apply(&r, axis_lock);
	}

	//Applying the rotation on the scene node
	s = j->getScale();
	p = j->getTranslation();
	h3dSetNodeTransform( j->getHordeID(), 
		p.x, p.y, p.z, 
		r.x, r.y, r.z,
		s.x, s.y, s.z);
	
	
	//If there is a "twist joint" we need to rotate that too
	//CAUSES MODEL COMPATIBILITY PROBLEMS
	if( check_twistj )
		if(j->getParent()->getChild(0) != 0 && j->getParent()->getChild(1) != 0)
		{
			//the twist joint is a joint who is parallel to our current joint and it's name contains "twist" or "Twist"
			Joint* twist = findParallelJoint( j, "Twist", "twist" );
			if(twist != 0)
			{
				h3dSetNodeTransform( twist->getHordeID(), 
					p.x, p.y, p.z, 
					r.x, r.y, r.z,
					s.x, s.y, s.z);
			}
		}
	
	return result;
}

bool CCD::simulateRotation(Joint *j, Vec3f axis, float angle_rad, AxisLock *axis_lock)
{
	bool result = true;
	Vec3f p,r,s;
	Quaternion req_rotQ = getQuat( axis, angle_rad );	

	j->update();
	Matrix4f jointRelMat = *(j->getRelTransf()) * Matrix4f( req_rotQ );
	jointRelMat.decompose( p, r, s );

	//convert to degrees
	r.x = radToDeg( r.x );
	r.y = radToDeg( r.y );
	r.z = radToDeg( r.z );

	//DOFRestrictions
	if( Config::getParamI(IK_Param::UseDofr_I) > 0 )
	{				
		result = j->getDOFR()->apply(&r, axis_lock);
	}
	return result;	
}

Joint* CCD::initIKMO()
{
	//IK MOVEMENT OPTIMIZER (ikmo)
	//We'll try to do the first iteration over the chain starting with the stop joint
	//and going down to the end effektor
	buildIKChain();

	if(m_ik_chain.size() < 1)
	{
		//If there is only 1 Joint that requires rotating, there is no need for the ikmo
		m_ikmo_active = false;
	}

	m_ikmo_it = m_ik_chain.size() -1; //place the iterator at the end of the chain
	return m_ik_chain.back();
}

void CCD::buildIKChain()
{
	Joint *j = m_endEffector;
	while(j->getHordeID() != m_chainEnd->getHordeID())
	{
		m_ik_chain.push_back(j);
		j = j->getParent();
	}
	m_ik_chain.push_back( j ); //m_chainEnd
}

std::vector<Joint*>* CCD::getIKChain()
{
	return &m_ik_chain;
}

float CCD::dampAngle(float angle_rad, float dampValue_rad)
{
	if(fabs(angle_rad) > fabs(dampValue_rad))
	{
		//snap rotation to damp value, take sign into consideration
		angle_rad = (angle_rad/fabs(angle_rad)) * dampValue_rad;
	}
	return angle_rad;
}

Quaternion CCD::getQuat(Vec3f axis, float angle_rad)
{
	//Creating a rotation quaternion
	axis = axis * sinf( angle_rad/2.0f );
	Quaternion q( axis.x, axis.y, axis.z, cosf( angle_rad/2.0f ) );

	return q;
}

float CCD::getQuatLength2(Quaternion *q)
{
	return (q->x * q->x)+(q->y * q->y)+(q->z * q->z)+(q->w * q->w);
}

bool CCD::normalizeQuat(Quaternion *q)
{
	float len = getQuatLength2(q);
	if(len < 0.99999f || len > 1.00001f)
	{
		len = sqrtf(len);
		q->x = q->x / len;
		q->y = q->y / len;
		q->z = q->z / len;
		q->w = q->w / len;

		return true;
	}
	return false;
}

Joint* CCD::findParallelJoint(Joint *j, const char *name1, const char *name2)
{
	Joint* p = 0;
	std::string p_name;
	std::string::size_type pos1, pos2;
	
	int i=0;
	while(true)
	{
		//get a parallel joint
		Joint* aChild = j->getParent()->getChild(i);
		if(aChild == 0)
			break;	
		if(aChild->getHordeID() == j->getHordeID())
		{
			i++;
			continue;
		}
		
		//check its name
		p_name = std::string( aChild->getName() );
		pos1 = p_name.find(name1);
		pos2 = p_name.find(name2);

		//if the name matches..
		if(((pos1 != std::string::npos) || (pos2 != std::string::npos)))
		{
			p = aChild;
			break;
		}

		i++;
	}

	return p;
}

float CCD::vecDistance(Vec3f &a, Vec3f &b) 
{
	float angle = acosf( a.normalized().dot(b.normalized()) );
	/*The maximum distance between two vectors is when they are perpendicular to each other
	* If the angle passes the 90 degree limit, then, theoreticaly, the vectors will get closer,
	* practically they don't. To eliminate this mathematical problem we use a virtual
	* maximum distance value, for example 99.9, which we return whenever the angle reaches and passes
	* 90 degree (1 RAD).*/
	if(fabsf(angle) > 0.9998f) return 99.9f;
	else return  (float)( sinf(angle) * a.length() );
}