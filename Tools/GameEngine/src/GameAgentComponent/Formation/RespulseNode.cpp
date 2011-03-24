#include "RepulseNode.h"
#include "../utils.h"

RepulseNode::RepulseNode( int agent_eID, Vec3f from, float magnitude ) : m_eID(agent_eID)
{
	//compute the repulsion vector
	Vec3f ownPos = utils::getEntityPosition(agent_eID);
	
	//calculate vector between own position and the position from which we need to move away ("epicenter")
	m_vector = (from - ownPos);
	if(m_vector.length() == 0)
		m_vector.x += 0.001f; //if we have a null vector, just add something so it won't cause problems

	m_vector.normalize();
	//apply repulsion magnitude
	m_vector = m_vector * magnitude;
	//invert sign so we'll move away not towards the from position
	m_vector = m_vector * (-1);
}

RepulseNode::~RepulseNode()
{}

Vec3f RepulseNode::getVector()
{
	return m_vector;
}

int RepulseNode::getEntityID()
{
	return m_eID;
}