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
// Copyright (C) 2007 Felix Kistler
// 
// ****************************************************************************************
#ifndef	MOVEANIM_H_
#define MOVEANIM_H_


#include <GameEngine/GameComponentManager.h>

#include <vector>

class MoveAnimComponent;

/**
 * \brief The MoveAnimManager manages (and updates) all MoveAnimComponent instances. 
 *
 * The MoveAnimComponent updates an entity's animations dependent on the transformation
 * change between two update calls of the MoveAnimManager class. The Manager is implemented
 * as a singleton, since only one instance should be care about the move animation compoments.
 *
 * \author Felix Kistler and Volker Wiendl
 * \date May, 2008
 */
class MoveAnimManager : public GameComponentManager
{
public:
	/**
	 * Creates and returns a singleton instance of the move anim component manager  
	 */
	static MoveAnimManager* instance();

	/**
	 * Deletes the move anim component manager
	 */
	static void release();

	void run() {}
	/**
	 * Updates all current MoveAnim Components
	 */
	void update();

	/**
	 * Adds a created MoveAnimComponent
	 * @param object reference to the component (must not be NULL)	 
	 */
	void addObject(MoveAnimComponent* object);

	/**
	 * Removes the MoveAnimComponent
	 * @param object pointer to the instance that should be removed
	 */
	void removeObject(MoveAnimComponent* object);

private:
	/// Private Constructor ( singleton, called via instance() )
	MoveAnimManager() {} 
	/// Private Destructor ( singleton, called via release() )
	~MoveAnimManager() {}

	/// Static instance
	static MoveAnimManager*		m_instance;

	/// Vector for MoveAnim components
	std::vector<MoveAnimComponent*>	m_components;

};

#endif