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
// *************************************************************************************************
//


// ****************************************************************************************
//
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Nikolaus Bee
// 
// ****************************************************************************************
#ifndef	MORPHTARGETANIM_H_
#define MORPHTARGETANIM_H_


#include <GameEngine/GameComponentManager.h>

#include <vector>

class MorphtargetAnimComponent;

/**
 * \brief The MorphtargetAnimManager manages and updates all MorphtargetAnimComponent instances. 
 *
 * The MorphtargetAnimComponent updates an entity's morph target animations. The Manager is implemented
 * as a singleton, since only one instance should care about the move animation compoments.
 *
 * \author Nikolaus Bee
 * \date Aug 2008
 */
class MorphtargetAnimManager : public GameComponentManager
{
public:
	/**
	 * Creates and returns a singleton instance of the morph target anim component manager  
	 */
	static MorphtargetAnimManager* instance();

	/**
	 * Deletes the morph target component manager
	 */
	static void release();

	void run() {}
	/**
	 * Updates all current Morphtarget Components
	 */
	void update();

	/**
	 * Adds a created MorphtargetAnimComponent
	 * @param object reference to the component (must not be NULL)	 
	 */
	void addObject(MorphtargetAnimComponent* object);

	/**
	 * Removes the MorphtargetAnimComponent
	 * @param object pointer to the instance that should be removed
	 */
	void removeObject(MorphtargetAnimComponent* object);

private:
	/// Private Constructor ( singleton, called via instance() )
	MorphtargetAnimManager() {} 
	/// Private Destructor ( singleton, called via release() )
	~MorphtargetAnimManager() {}

	/// Static instance
	static MorphtargetAnimManager*		m_instance;

	/// Vector for MorphtargetAnim components
	std::vector<MorphtargetAnimComponent*>	m_components;

};

#endif