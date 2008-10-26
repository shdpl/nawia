// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
// *************************************************************************************************



// ****************************************************************************************
//
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Felix Kistler
// 
// ****************************************************************************************
#ifndef MOVEANIMCOMPONENT_H_
#define MOVEANIMCOMPONENT_H_

#include <GameEngine/GameComponent.h>
#include <GameEngine/GameEvent.h>

/**
 * \brief Automatic animation control for moving entities
 * 
 * A common problem when moving graphical representations like virtual characters 
 * is a correct animation of the virtual representation. One way to adjust the speed
 * of a moving animation (e.g. a walk animation) automatically is to use the transformation
 * change between two frames. Dependent on the length of the difference vector of the position's
 * between the current and the last frame, the animation can be adjusted to be played faster or
 * slower. The MoveAnimComponent implements an automatic animation control using this approach.
 * 
 * To add such a component you also need a KeyframeAnimComponent for the playback of animations.
 * The following example would create the necessary components:
 * <br>
 * \code
  <GameEntity name="VirtualCharacter">
    <KeyframeAnimation>
      <StaticAnimation fps="30" name="idle" file="female_idle.anim" />
      <StaticAnimation fps="30" name="walk" file="female_walk.anim" />
    </KeyframeAnimation>
    <MoveAnimation activeAnimation="walk" idleAnimation="idle" speed="7.0" />
  </GameEntity>
  \endcode
 * <br>
 * In this example you have two static animations for the KeyframeAnimComponent. 
 * These two animations will be used in the MoveAnimComponent referenced by the
 * attributes activeAnimation and idleAnimation. If the translation change of an 
 * entity between two frames falls below a specific threshold the idleAnimation will be activated.
 * Otherwise the activeAnimation will be used. To adjust the animation speed by a constant
 * factor (maybe because the default framerate of the animation does not fit to the characters translation
 * changes) you can set a constant scaling factor using the speed attribute.
 * 
 * @author Felix Kistler & Volker Wiendl
 * @date Jun 2008
 */ 
class MoveAnimComponent : public GameComponent
{

public:
	/**
	 * \brief Factory method for MoveAnimComponent
	 * 
	 * To register the component in the GameEngineCore a static factory method has to be provided,
	 * that will create a new instance of this component.
	 * 
	 * @param owner the GameEntity that will contain the newly created compoment ( must not be Null )
	 * @return a new MoveAnimComponent instance (casted to the parent class)
	 */ 
	static GameComponent* createComponent( GameEntity* owner );

	/**
	 * \brief Constructor
	 * 
	 * Creates a new MoveAnimComponent that will be a part of the given entity
	 * @param owner the GameEntity that will contain the newly created component (must not be Null)
	 */ 
	MoveAnimComponent(GameEntity *owner);

	/**
	 * \brief Destructor
	 */ 
	~MoveAnimComponent();


	/**
	 * \brief Check if event can be executed 
	 * 
	 * Returns false if the provided event should be not executed.
	 * This can be usefull if a translation event is blocked e.g. by a collision detection
	 * @param event pointer to the event to test
	 * @return true if all components accept the event, false if one of the component has catched it and 
	 * don't want it to be executed
	 */
	bool checkEvent(GameEvent* event);
	
	/**
	 * \brief Executes the provided event
	 * @param event pointer to the event to execute
	 */
	void executeEvent(GameEvent* event);

	/**
	 * \brief Load component from XML description
	 * 
 	 * Initializes the component from the given XML data. The XML node has to be of the following structure
	 * \code <MoveAnimation activeAnimation="walk" idleAnimation="idle" speed="7.0" /> \endcode <br>
	 * @param description a XML Node representing the data for the component ( must not be null)
	 */ 
	void loadFromXml(const XMLNode* description);

	/**
	 * \brief Plays the next frame of the animation 
	 * 
	 * Dependent on the current fps and settings the activeAnimation or idleAnimation 
	 * will be adjusted
	 * @param fps the current frames per second
	 */ 
	void update(float fps);

	/**
	 * \brief Toggles between active and idle animation
	 * 
	 * @param active if set to true, the character will switch to the active animation, otherwise
	 * the idle animation will be played back.
	 */ 
	void activate(bool active);
	
private:
	/// Configuration setup for the animation played when translating the entity
	AnimationSetup* m_activeAnim;
	/// Configuration setup for the animation played when entity is not moving
	AnimationSetup* m_idleAnim;

	/// Position in previous and current frame
	Vec3f m_oldPos, m_newPos;

	/// Constant scale factor for moving animation
	float m_speed;
	/// Current activation state (moving = true, idle = false)
	bool m_active;

};


#endif