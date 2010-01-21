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
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef GAMEEVENT_H_
#define GAMEEVENT_H_

class GameComponent;
class GameEntity;

#include <string.h>
//#include <assert.h>

#include <GameEngine/utMath.h>
#include <stdlib.h>
#include <map>

/** \addtogroup GameEngineCore
 * @{
 */

/**
 * \brief Generic data class for a GameEvent
 * 
 * @author Volker Wiendl 
 * @date Mai 2008
 */ 
class GameEventData
{
public:
	enum TypeID 
	{
		INVALID = -1,
		BOOLEAN,
		INT,
		FLOAT,
		DOUBLE,
		STRING,
		ARRAY,
		CUSTOM
	};

	explicit GameEventData() : m_typeID(INVALID), m_size(0), m_owner(false) { m_data.ptr = 0; }

	explicit GameEventData(int value) : m_typeID(INT), m_size(0), m_owner(false)
	{
		m_data.i = value;
	}

	explicit GameEventData(float value) : m_typeID(FLOAT), m_size(0), m_owner(false)
	{
		m_data.f = value;
	}

	explicit GameEventData(double value) : m_typeID(DOUBLE), m_size(0), m_owner(false)
	{		
		m_data.d = value;
	}

	explicit GameEventData(const char* data) : m_typeID(STRING), m_size(0), m_owner(false)
	{
		m_data.s = data;
	}

	explicit GameEventData(bool value) : m_typeID(BOOLEAN), m_size(0), m_owner(false)
	{
		m_data.b = value;
	}
	
	explicit GameEventData(float* data, size_t elements) : m_typeID(ARRAY), m_size(sizeof(float) * elements), m_owner(false)
	{
		m_data.ptr = data;
	}

	explicit GameEventData(char* data, size_t elements) : m_typeID(ARRAY), m_size(sizeof(char) * elements), m_owner(false)
	{
		m_data.ptr = data;
	}

	GameEventData(void* data) : m_typeID(CUSTOM), m_owner(false)
	{
		m_data.ptr = data;
	}

	//GameEventData(const GameEventData& other) : m_typeID(other.m_typeID), m_size(other.m_size), m_data(other.m_data), m_owner(true)
	//{
	//	switch(m_typeID)
	//	{
	//	case CUSTOM:
	//		other.clone( this ); 
	//		break;
	//	case STRING:
	//		m_data.s = new char[strlen( other.m_data.s ) + 1];
	//		strcpy( m_data.s, other.m_data.s );
	//		break;
	//	default:
	//		m_owner = false;
	//		break;
	//	}
	//}

	//const GameEventData& operator= (const GameEventData& other) 
	//{
	//	if(m_owner)	free(m_data.ptr);			
	//	m_size = other.m_size;
	//	m_typeID = other.m_typeID;
	//	switch(m_typeID)
	//	{
	//	case CUSTOM:
	//		other.clone( this );
	//		m_owner = true;
	//		break;
	//	case STRING:
	//		m_data.s = new char[strlen( other.m_data.s ) + 1];
	//		strcpy( m_data.s, other.m_data.s );
	//		m_owner = true;
	//		break;
	//	default:			
	//		m_data = other.m_data;
	//		m_owner = false;
	//	}
	//	return *this;
	//} 


	virtual ~GameEventData()
	{
		if (m_owner)
		{
			switch(m_typeID)
			{
			case ARRAY:
				free(m_data.ptr);
				break;
			case STRING:
				delete[] m_data.s;
				break;
			default:
				break;
			}
		}
	}

	void* data()
	{
		switch(m_typeID)
		{
		case INVALID:
			return 0;
		case BOOLEAN:
			return &m_data.b;
		case INT:
			return &m_data.i;
		case FLOAT:
			return &m_data.f;
		case DOUBLE:
			return &m_data.d;
		default:
			return m_data.ptr;
		}		
	}

	virtual GameEventData* clone(  ) const
	{
		GameEventData* clonedData = new GameEventData(*this);

		switch(m_typeID)
		{
		case ARRAY:
			clonedData->m_data.ptr = malloc(m_size);
			clonedData->m_owner = true;
			memcpy(clonedData->m_data.ptr, m_data.ptr, m_size);
			break;
		case STRING:
			clonedData->m_data.s = new char[strlen( m_data.s ) + 1];
			clonedData->m_owner = true;
			memcpy( (char*) clonedData->m_data.s, m_data.s, strlen( m_data.s ) + 1 );
			break;
		default:
			return clonedData;
		}
		return clonedData;
	}

protected:
	GameEventData(TypeID id) : m_typeID(id), m_size(0), m_owner(false) { m_data.ptr = 0; }

	union Data
	{
		bool			b;
		const char*		s;
		float			f;
		double			d;
		int				i;
		void*			ptr;
	};	
	
	TypeID	m_typeID;
	Data	m_data;
	size_t	m_size;
	bool	m_owner;

private:
	GameEventData(const GameEventData& other) : m_typeID(other.m_typeID), m_data(other.m_data), m_owner(false) {}
	const GameEventData& operator= (const GameEventData& other) {return *this;} 

};

/**
 * \brief Class to pass events between components
 * 
 * @author Volker Wiendl
 * @date Mai 2008
 */ 
class GameEvent
{

public:
	enum EventID {
		E_INVALID,	// Invalid eventID

		///////////////////////////////////////////////////////////////////////////////////////////
		/**
		 * 1. SET EVENTS:
		 * 
		 * @send:
		 * If these events are send by a component, it directly wants to modify an attribute of other components,
		 * or cause a specific action of another component.
		 * 
		 * @listen:
		 * If a component listens to such an event, it has an attribut that will be modified by the event,
		 * or an action that will be executed by the event,
		 * or it just wants to be notified when such an attribute changes or action occures in another component.
		 * 
		 * @eventData: the event data includes the new value for the attribute to set (or to modify it by),
		 * or optional information for the action to be executed
		 * 
		 * @allowed by:
		 * Every component can send and/or listen to these events.
		 * 
		 * @check?:
		 * You should call checkEvent() before executeEvent().
		 */ 
		///////////////////////////////////////////////////////////////////////////////////////////
		E_SET_TRANSFORMATION,	/// A transformation change event, containing the new transformation 
		E_SET_ROTATION,			/// Set the rotation of the object in world space
		E_SET_TRANSLATION,		/// A translation change event, containing new global translation (Vec3fData)
		E_SET_SCALE,			/// Set the scale of the object
		E_TRANSLATE_LOCAL,		/// Translate Object along it's local axis (using a Vec3fData)
		E_TRANSLATE_GLOBAL,		/// Translate object along the world axis (using a Vec3fData)
		E_ROTATE_LOCAL,			/// Rotate object about it's local axis (using a Vec3fData)
		E_MORPH_TARGET,			/// Sets the model morpher of a Horde3D representation to the provided morph target position 
		E_MORPH_TARGET_ANIM,    /// Animates a morph target
		E_PLAY_ANIM,			/// Play an animation 
		E_UPDATE_ANIM,			/// Updates a running animation
		E_SETUP_ANIM,			/// Loads an animation on a model stage
		E_SET_ANIM_FRAME,		/// Sets the frame of a loaded animation 
		E_ATTACH,				/// Attaches a SceneNode to another SceneNode
		E_SET_NODE_PARENT,		/// Sets a new Parent for a SceneNode
		E_SPEAK,				/// Speak a sentence
		E_SET_VOICE,			/// Change the TTS Voice of a TTSComponent
		E_ACTIVATE_CAM,			/// Make the current entity the active camera if it is one
		E_PERFORM_ACTION,		/// Perform an action
		E_GO_TO_ENTITY,			/// Move close to another entity
		E_GO_TO_POSITION,		/// Move to a position
		E_GO_TO_STOPPED,		/// Entity has arrived at the desired location
		E_SET_PROPERTY,			/// Sets a property	
		E_ADJUST_PROPERTY,		/// Adjusts a property
		E_INTERACT,				/// Causes an Entity to interact with another Entity.
		E_INTERACT_PARTNER,		/// Informs an Entity that another Entity is interacting with it and causes reactions for the interaction
		E_SET_SOUND_GAIN,		/// Sets the sound gain
		E_SET_SOUND_LOOP,		/// Sets the sound to loop
		E_SET_SOUND_FILE,		/// Sets a sound file
		E_SET_PHONEMES_FILE,	/// Sets a phonemes file
		E_SET_ENABLED,			/// Enables components (wether the component should be rendered/updated or not)	
		E_PICKUP,				/// Attaches an entity under the child scene node of another entity
		E_PUTDOWN,				/// Detaches an entity
		E_SET_MOVE_ANIM,		/// Change one of the move animations. @data = pair<string, string>: tag, name of animation
		E_SET_CROWD_TAG,		/// Sets the current crowd sim tag of a particle, so it starts wandering around if the tag > 0
		E_SET_CROWD_IGNORE_FORCES, /// The crowd particle will ignore forces if the particle is not moving
		IK_COMPUTE,				/// Computes the IK with the given data and applies it to the chain
		IK_GAZE,				/// Computes and applies a gaze action
		IK_INIT_ANIM,			/// Initializes an IK animation
		IK_SET_RESTRICT,		/// Sets the value of the DOFR flag
		IK_SET_OPTIMIZE,		/// Sets the value of the IKMO flag
		IK_SET_ZLOCK,			/// Sets the value of the z_lock flag
		GB_ON_OFF,				/// activates/deactivates character's gaze behaviour
		GB_CONTROL_ON_OFF,		/// activates/deactivates direct control of character via arrow keys
		GB_SEARCH_ON_OFF,		/// activates/deactivates character's searching behaviour
		GB_WAVE_BACK,			/// makes the npc react to a waving event
		GB_RESET,				/// reset all collected data
		SP_START_SCRIPT,		/// starts sn action script
		IB_EYE_FIXATED,			/// informs about an eye fixation
		FACS_SET_EXPRESSION,	/// sets a facial expression
		E_SEND_SOCKET_DATA,		/// sends data via the socket component

		///////////////////////////////////////////////////////////////////////////////////////////
		/**
		 * 1. GET EVENTS:
		 * 
		 * @send:
		 * If these events are send by a component, it wants to get the current value of another component's attribute.
		 * 
		 * @listen:
		 * If a component listens to such an event, it has an attribut that it will return to the sender.
		 * 
		 * @eventData: Contains a pointer where the value should be copied to.
		 * 
		 * @allowed by:
		 * Every component can send such an event, only one should listen to it for setting the value.
		 * 
		 * @check?:
		 * You don't need to call checkEvent() before executeEvent().
		 */ 
		///////////////////////////////////////////////////////////////////////////////////////////
		E_TRANSFORMATION,		/// Copies the current object transformation to the memory buffer provided by the Event (currently float[16])
		E_MESH_DATA,			/// Copies the mesh parameters of a mesh representation in Horde3D to the provided MeshData struct within the event
		E_GET_ACTIVE_CAM,		/// Global event: get the currently active camera entity world id
		E_GET_PROPERTY,			/// Gets a property
		E_GET_SOUND_DISTANCE,	/// Get the distance of the current sound node to the active listener. @data pointer to float
		E_GET_VISIBILITY,		/// Returns whether the current entity is visible by the active cam
		E_GET_SCENEGRAPH_ID,	/// Returns the entity's scenegraph id (hordeID)
		E_GET_ANIM_LENGTH,		/// Get the length of an animation in seconds (using all frames and default speed).
		
		///////////////////////////////////////////////////////////////////////////////////////////
		/**
		 * 1. CHANGE EVENTS:
		 * 
		 * @send/listen:
		 * These events inform that an attribute has changed, or an action has been executed
		 * 
		 * @eventData: Contains the new value for the attribute or optional information about the action.
		 * 
		 * @allowed by:
		 * Every component can listen to these events.
		 * Only one component should send them (with few exceptions).
		 * 
		 * @check?:
		 * You don't need to call checkEvent() before executeEvent().
		 */ 
		///////////////////////////////////////////////////////////////////////////////////////////
		E_KEY_PRESS,			/// A key has been pressed
		E_ANIM_STOPPED,			/// Indicates that an animation has stopped
		E_SPEAKING_STOPPED,		/// Speak a sentence is finished
		E_COLLISION,			/// A collision occured
		E_ACTIVE_CAM_CHANGE,	/// Global event: the current active camera has changed, @data: the cams worldID
		E_WITNESS_ACTION,		/// Witness an action
		GB_KEY_PRESSED,			/// Inidicates a key press event
		E_AILOD_CHANGE,			/// Occurs when the ai lod of an entity has changed, @data: the entity's new lod value
		GL_DRAW,				/// A GL function call. @data: Uses the DataType GLFunction. @allowed by: GLDrawingComponent listens, any componant may send
		GP_STATE_CHANGE,		/// The state of a gamepad has changed
		
		EVENT_COUNT				/// Must be the last entry in the enumeration !!!!
	};
	static GameEvent::EventID convertStringEvent(std::string in)
	{
		if(in.find("E_INVALID") != std::string::npos) return GameEvent::E_INVALID;
		if(in.find("E_SET_TRANSFORMATION") != std::string::npos) return GameEvent::E_SET_TRANSFORMATION;
		if(in.find("E_SET_ROTATION") != std::string::npos) return GameEvent::E_SET_ROTATION;
		if(in.find("E_SET_TRANSLATION") != std::string::npos) return GameEvent::E_SET_TRANSLATION;
		if(in.find("E_SET_SCALE") != std::string::npos) return GameEvent::E_SET_SCALE;
		if(in.find("E_TRANSLATE_LOCAL") != std::string::npos) return GameEvent::E_TRANSLATE_LOCAL;
		if(in.find("E_TRANSLATE_GLOBAL") != std::string::npos) return GameEvent::E_TRANSLATE_GLOBAL;
		if(in.find("E_ROTATE_LOCAL") != std::string::npos) return GameEvent::E_ROTATE_LOCAL;
		if(in.find("E_TRANSFORMATION") != std::string::npos) return GameEvent::E_TRANSFORMATION;
		if(in.find("E_MESH_DATA") != std::string::npos) return GameEvent::E_MESH_DATA;
		if(in.find("E_MORPH_TARGET") != std::string::npos) return GameEvent::E_MORPH_TARGET;
		if(in.find("E_MORPH_TARGET_ANIM") != std::string::npos) return GameEvent::E_MORPH_TARGET_ANIM;
		if(in.find("E_KEY_PRESS") != std::string::npos) return GameEvent::E_KEY_PRESS;
		if(in.find("E_PLAY_ANIM") != std::string::npos) return GameEvent::E_PLAY_ANIM;
		if(in.find("E_UPDATE_ANIM") != std::string::npos) return GameEvent::E_UPDATE_ANIM;
		if(in.find("E_ANIM_STOPPED") != std::string::npos) return GameEvent::E_ANIM_STOPPED;
		if(in.find("E_SETUP_ANIM") != std::string::npos) return GameEvent::E_SETUP_ANIM;
		if(in.find("E_SET_ANIM_FRAME") != std::string::npos) return GameEvent::E_SET_ANIM_FRAME;
		if(in.find("E_ATTACH") != std::string::npos) return GameEvent::E_ATTACH;
		if(in.find("E_SET_NODE_PARENT") != std::string::npos) return GameEvent::E_SET_NODE_PARENT;
		if(in.find("E_SPEAKING_STOPPED") != std::string::npos) return GameEvent::E_SPEAKING_STOPPED;
		if(in.find("E_SPEAK") != std::string::npos) return GameEvent::E_SPEAK;
		if(in.find("E_SET_VOICE") != std::string::npos) return GameEvent::E_SET_VOICE;
		if(in.find("E_COLLISION") != std::string::npos) return GameEvent::E_COLLISION;
		if(in.find("E_ACTIVATE_CAM") != std::string::npos) return GameEvent::E_ACTIVATE_CAM;
		if(in.find("E_PERFORM_ACTION") != std::string::npos) return GameEvent::E_PERFORM_ACTION;
		if(in.find("E_WITNESS_ACTION") != std::string::npos) return GameEvent::E_WITNESS_ACTION;
		if(in.find("E_GO_TO_ENTITY") != std::string::npos) return GameEvent::E_GO_TO_ENTITY;
		if(in.find("E_GO_TO_POSITION") != std::string::npos) return GameEvent::E_GO_TO_POSITION;
		if(in.find("E_GO_TO_STOPPED") != std::string::npos) return GameEvent::E_GO_TO_STOPPED;
		if(in.find("E_SET_PROPERTY") != std::string::npos) return GameEvent::E_SET_PROPERTY;
		if(in.find("E_GET_PROPERTY") != std::string::npos) return GameEvent::E_GET_PROPERTY;
		if(in.find("E_ADJUST_PROPERTY") != std::string::npos) return GameEvent::E_ADJUST_PROPERTY;
		if(in.find("E_INTERACT") != std::string::npos) return GameEvent::E_INTERACT;
		if(in.find("E_INTERACT_PARTNER") != std::string::npos) return GameEvent::E_INTERACT_PARTNER;
		if(in.find("E_SET_SOUND_GAIN") != std::string::npos) return GameEvent::E_SET_SOUND_GAIN;
		if(in.find("E_SET_SOUND_LOOP") != std::string::npos) return GameEvent::E_SET_SOUND_LOOP;
		if(in.find("E_SET_SOUND_FILE") != std::string::npos) return GameEvent::E_SET_SOUND_FILE;
		if(in.find("E_SET_PHONEMES_FILE") != std::string::npos) return GameEvent::E_SET_PHONEMES_FILE;
		if(in.find("E_SET_ENABLED") != std::string::npos) return GameEvent::E_SET_ENABLED;
		if(in.find("E_PICKUP") != std::string::npos) return GameEvent::E_PICKUP;
		if(in.find("E_AILOD_CHANGE") != std::string::npos) return GameEvent::E_AILOD_CHANGE;
		if(in.find("E_ACTIVE_CAM_CHANGE") != std::string::npos) return GameEvent::E_ACTIVE_CAM_CHANGE;
		if(in.find("GL_DRAW") != std::string::npos) return GameEvent::GL_DRAW;
		if(in.find("GP_STATE_CHANGE") != std::string::npos) return GameEvent::GP_STATE_CHANGE;
		return GameEvent::EVENT_COUNT;

	}
	GameEvent(EventID id, GameEventData* data, GameComponent* sender) : m_id(id), m_pData(data), m_sender(sender), m_owner(false)
	{		
	}

	GameEvent(EventID id, const GameEventData& data, GameComponent* sender) : m_id(id), m_pData(data.clone()), m_sender(sender), m_owner(true)
	{
	}

	~GameEvent()
	{
		if (m_owner) delete m_pData;
	}

	const GameEvent& operator= (const GameEvent& other)
	{
		if(m_owner) delete m_pData;
		m_pData = other.m_pData ? other.m_pData->clone() : 0;
		m_owner = true;
		m_id = other.m_id;
		m_sender = other.m_sender;
		return *this;
	} 
	
	GameEvent(const GameEvent& other) : m_id(other.m_id), m_pData(other.m_pData ? other.m_pData->clone() : 0x0), m_sender(other.m_sender), m_owner(true)
	{
		
	}
	
	const EventID id() const {return m_id;}
	void* data() const {return m_pData ? m_pData->data() : 0x0;}
	const GameComponent* sender() const {return m_sender;}

private:

	

	EventID					m_id;
	bool					m_owner;
	GameEventData*			m_pData;
	const GameComponent*	m_sender;
};


/**
 * Container for Mesh Information provided by E_MESH_DATA
 */
class MeshData : public GameEventData
{
public:

	MeshData() : GameEventData(CUSTOM), NumVertices(0), NumTriangleIndices(0), VertexBase(0), VertRStart(0), TriangleBase16(0), TriangleBase32(0), TriangleMode(4) 
	{		
		m_data.ptr = this;
	}
	
	~MeshData()
	{
		if (m_owner)
		{
			delete[] VertexBase;
			if (TriangleBase16)
				delete[] TriangleBase16;
			if (TriangleBase32)
				delete[] TriangleBase16;
		}
	}

	unsigned int NumVertices, NumTriangleIndices;

	float* VertexBase;

	unsigned int VertRStart;

	unsigned int* TriangleBase32;
	unsigned short* TriangleBase16;

	unsigned int TriangleMode;

	virtual GameEventData* clone(  ) const
	{
		MeshData* clonedData = new MeshData();
		clonedData->m_owner = true;
		clonedData->VertexBase = new float[NumVertices];
		memcpy( (void*) clonedData->VertexBase, VertexBase, sizeof(float) * NumVertices);
		
		if (TriangleBase32) {
			clonedData->TriangleBase32 = new unsigned int[NumTriangleIndices];
			memcpy( (void*) clonedData->TriangleBase32, TriangleBase32, sizeof(unsigned int) * NumVertices);
		} else {
			clonedData->TriangleBase16 = new unsigned short[NumTriangleIndices];
			memcpy( (void*) clonedData->TriangleBase16, TriangleBase16, sizeof(unsigned short) * NumVertices);
		}
		
		clonedData->NumTriangleIndices = NumTriangleIndices;
		clonedData->NumVertices = NumVertices;
		clonedData->VertRStart = VertRStart;
		clonedData->TriangleMode = TriangleMode;
		return clonedData;
	}

};

/**
 * \brief Container for MorphTarget data used by a GameEvent
 * 
 * @author Volker Wiendl
 * @date  Jun 2008
 * 
 */ 
class MorphTarget : public GameEventData
{
public:
	MorphTarget(const char* name, float value) : GameEventData(CUSTOM), Name(name), Value(value) 
	{
		m_data.ptr = this;
	}

	MorphTarget(const MorphTarget& copy) : GameEventData(CUSTOM), Value(copy.Value)
	{
		m_data.ptr = this;
		m_owner = true;
		const size_t len = copy.Name ? strlen(copy.Name) : 0;
		Name = new char[len + 1];
		memcpy( (char*) Name, copy.Name, len );
		const_cast<char*>(Name)[len] = '\0';
	}

	~MorphTarget()
	{
		if (m_owner) delete[] Name;
	}

	GameEventData* clone() const {return new MorphTarget(*this);}

	const char* Name; // Maybe this is not a good data type, since this requires the given name pointer to be valid until execute event has been finished
	float Value;
};


/**
 * \brief Container for MorphTargetAnimation data used by a GameEvent
 * 
 * @author Nikolaus Bee
 * @date  Aug 2008
 * 
 */ 
class MorphTargetAnimation : public GameEventData
{
public:
	MorphTargetAnimation(const char* name, float toWeight, float duration)
		: GameEventData(CUSTOM), Name(name), ToWeight(toWeight), Duration(duration)
	{
		m_data.ptr = this;
	}

	MorphTargetAnimation(const MorphTargetAnimation& copy)
		: GameEventData(CUSTOM), ToWeight(copy.ToWeight), Duration(copy.Duration)
	{
		m_data.ptr = this;
		m_owner = true;
		const size_t len = copy.Name ? strlen(copy.Name) : 0;
		Name = new char[len + 1];
		memcpy( (char*) Name, copy.Name, len );
		const_cast<char*>(Name)[len] = '\0';
	}

	~MorphTargetAnimation()
	{
		if (m_owner) delete[] Name;
	}

	GameEventData* clone() const {return new MorphTargetAnimation(*this);}

	const char* Name; // Maybe this is not a good data type, since this requires the given name pointer to be valid until execute event has been finished
	float ToWeight;
	float Duration;
};

/**
 */
//struct CollisionData
//{
//	CollisionData(GameEntity* obj1, GameEntity* obj2) : Obj1(obj1), Obj2(obj2) {}
//	GameEntity* Obj1;
//	GameEntity* Obj2;
//};

/**
 * Container for an Animation configuration used by a GameEvent
 */
class AnimationSetup : public GameEventData
{
public:
	AnimationSetup(const char* animation, int stage, float speed, float duration, float weight, float timeoffset) : GameEventData(CUSTOM),
		Animation(animation), Stage(stage), Speed(speed), Duration(duration), Weight(weight), TimeOffset(timeoffset), JobID(0) 
	{
		m_data.ptr = this;
	}

	AnimationSetup(const AnimationSetup& copy) : GameEventData(CUSTOM), Stage(copy.Stage), Speed(copy.Speed), Duration(copy.Duration), Weight(copy.Weight),
		TimeOffset(copy.TimeOffset), JobID(copy.JobID)
	{
		m_data.ptr = this;
		m_owner = true;
		const size_t len = copy.Animation ? strlen(copy.Animation) : 0;
		Animation = new char[len + 1];
		memcpy( (char*) Animation, copy.Animation, len );
		const_cast<char*>(Animation)[len] = '\0';
	}

	~AnimationSetup()
	{
		if (m_owner)
			delete[] Animation;
	}


	GameEventData* clone() const
	{
		return new AnimationSetup(*this);
	}

	const char* Animation; 
	const int	Stage;
	float		Speed;
	float		Duration;
	const float	Weight;
	const float	TimeOffset;
	int JobID;


};

/**
 * \brief Container for parameters to update an Animation using a GameEvent
 * 
 * @author Volker Wiendl
 * @date  Jun 2008
 * 
 */ 
class AnimationUpdate : public GameEventData
{	
public:
	AnimationUpdate(const int jobID, const int paramType, const float value, const float timeOffset) : GameEventData(CUSTOM), JobID(jobID), 
		ParamType(paramType), Value(value), TimeOffset(timeOffset) 	
	{
		m_data.ptr = this;
	}

	AnimationUpdate(const AnimationUpdate& copy) : GameEventData(CUSTOM), JobID(copy.JobID), ParamType(copy.ParamType), Value(copy.Value), TimeOffset(copy.TimeOffset)
	{
		m_data.ptr = this;
	}

	GameEventData* clone() const
	{
		return new AnimationUpdate(*this);
	}

	const AnimationUpdate& operator= (const AnimationUpdate& other) 
	{
		JobID = other.JobID; 
		ParamType = other.ParamType; 
		Value = other.Value; 
		TimeOffset = other.TimeOffset;
		return *this;
	} 


	unsigned int JobID;
	int ParamType;
	float Value;
	float TimeOffset;

};

class SetupAnim : public GameEventData
{
public:
	SetupAnim(int stage, int resourceID, const char* mask, bool additive) : GameEventData(CUSTOM), Stage(stage), ResourceID(resourceID), 
		Mask(mask), Additive(additive) 
	{
		m_data.ptr = this;
	}

	SetupAnim(const SetupAnim& copy) : GameEventData(CUSTOM), Stage(copy.Stage), ResourceID(copy.ResourceID), Additive(copy.Additive)
	{
		m_data.ptr = this;
		m_owner = true;
		const size_t len = copy.Mask ? strlen(copy.Mask) : 0;
		Mask = new char[len + 1];
		memcpy( (char*) Mask, copy.Mask, len);
		const_cast<char*>(Mask)[len] = '\0';		
	}

	~SetupAnim()
	{
		if (m_owner)
			delete[] Mask;
	}
	const int Stage;
	const int ResourceID; 
	const char* Mask;
	const bool  Additive;

	GameEventData* clone() const
	{
		return new SetupAnim(*this);
	}
};

class SetAnimFrame : public GameEventData
{
public:
	SetAnimFrame(int stage, float time, float weight) : GameEventData(CUSTOM), Stage(stage), Time(time), Weight(weight) 
	{
		m_data.ptr = this;
	}

	const int Stage;
	const float Time;
	const float Weight;

	GameEventData* clone() const
	{
		return new SetAnimFrame(Stage, Time, Weight);
	}
};

class Property : public GameEventData
{

public:
	Property(const char* name, double value ) : GameEventData(CUSTOM), Name(name), Value(value) 
	{
		m_data.ptr = this;
	}

	Property(const Property& copy) : GameEventData(CUSTOM), Value(copy.Value)
	{
		m_data.ptr = this;
		m_owner = true;
		const size_t lenName = copy.Name ? strlen(copy.Name) : 0;
		Name = new char[lenName + 1];
		memcpy( (char*) Name, copy.Name, lenName );
		const_cast<char*>(Name)[lenName] = '\0';

	}

	~Property()
	{
		if( m_owner )
		{
			delete[] Name;
		}
	}

	const char* Name;
	double Value;

	GameEventData* clone() const
	{
		return new Property(*this);

	}
};

class GoToPosition : public GameEventData
{

public:
	GoToPosition(float x, float y, float z, float speed ) 
		: GameEventData(CUSTOM), X(x), Y(y), Z(z), Speed(speed) 
	{
		m_data.ptr = this;
	}

	GoToPosition(float x, float y, float z) : GameEventData(CUSTOM), X(x), Y(y), Z(z), Speed(0.0f) 
	{
		m_data.ptr = this;
	}

	GoToPosition(const GoToPosition& copy) : GameEventData(CUSTOM), X(copy.X), Y(copy.Y), Z(copy.Z), Speed(copy.Speed)
	{
		m_data.ptr = this;
		m_owner = true;
	}
	
	~GoToPosition()
	{}

	float X;
	float Y;
	float Z;
	float Speed;
	


	GameEventData* clone() const
	{
		return new GoToPosition(*this);
	}

};

class GoTo : public GameEventData
{

public:
	GoTo(const char* targetID, const char* animName, float speed ) : GameEventData(CUSTOM), TargetID(targetID), AnimName(animName), Speed(speed) 
	{
		m_data.ptr = this;
	}

	GoTo(const char* targetID) : GameEventData(CUSTOM), TargetID(targetID), AnimName(0), Speed(0.0f) 
	{
		m_data.ptr = this;
	}

	GoTo(const GoTo& copy) : GameEventData(CUSTOM), Speed(copy.Speed)
	{
		m_data.ptr = this;
		m_owner = true;
		
		const size_t lenAnimName = copy.AnimName ? strlen(copy.AnimName) : 0;
		AnimName = new char[lenAnimName + 1];
		memcpy( (char*) AnimName, copy.AnimName, lenAnimName );
		const_cast<char*>(AnimName)[lenAnimName] = '\0';
		
		const size_t lenTarget = copy.TargetID ? strlen(copy.TargetID) : 0;
		TargetID = new char[lenTarget + 1];
		memcpy( (char*) TargetID, copy.TargetID, lenTarget );
		const_cast<char*>(TargetID)[lenTarget] = '\0';
	}

	void setAnimName(const char* name)
	{
		const size_t lenAnimName = strlen(name);
		AnimName = new char[lenAnimName + 1];
		memcpy( (char*) AnimName, name, lenAnimName );
		const_cast<char*>(AnimName)[lenAnimName] = '\0';
	}
	
	~GoTo()
	{
		if( m_owner )
		{
			delete[] TargetID;
			delete[] AnimName;
		}
	}

	const char* TargetID;
	const char* AnimName;
	float Speed;
	


	GameEventData* clone() const
	{
		return new GoTo(*this);

	}

};

class Attach : public GameEventData
{

public:
	Attach( const char* childName, unsigned int entityID, float tx, float ty, float tz, float rx, float ry, float rz, float sx, float sy, float sz ) 
		: GameEventData(CUSTOM), Child(childName), EntityID(entityID), Tx(tx), Ty(ty), Tz(tz), Rx(rx), Ry(ry), Rz(rz), Sx(sx), Sy(sy), Sz(sz) 
	{
		m_data.ptr = this;
	}

	Attach( const char* childName, unsigned int id) 
		: GameEventData(CUSTOM), Child(childName), EntityID(id), Tx(0), Ty(0), Tz(0), Rx(0), Ry(0), Rz(0), Sx(1), Sy(1), Sz(1) 
	{
		m_data.ptr = this;
	}

	Attach(const Attach& copy) : GameEventData(CUSTOM), Tx(copy.Tx), Ty(copy.Ty), Tz(copy.Tz), 
		Rx(copy.Rx), Ry(copy.Ry), Rz(copy.Rz), Sx(copy.Sx), Sy(copy.Sy), Sz(copy.Sz), EntityID(copy.EntityID)
	{
		m_data.ptr = this;
		m_owner = true;
		
		const size_t lenChildname = copy.Child ? strlen(copy.Child) : 0;
		Child = new char[lenChildname + 1];
		memcpy( (char*) Child, copy.Child, lenChildname );
		const_cast<char*>(Child)[lenChildname] = '\0';
	}

	~Attach()
	{
		if( m_owner )
		{
			delete[] Child;
		}
	}

	const char* Child;
	unsigned int EntityID;
	float Tx;
	float Ty;
	float Tz;
	float Rx;
	float Ry;
	float Rz;
	float Sx;
	float Sy;
	float Sz;

	GameEventData* clone() const
	{
		return new Attach(*this);

	}
};

class IKData : public GameEventData
{
public:
	//Contructor for gaze data
	IKData(float TargetX, float TargetY, float TargetZ, bool MoveLEye, bool MoveREye, bool MoveNeck, int Head_pitch, bool IsTest = false )
		: GameEventData(CUSTOM), endEffektorName(0), stopName(0), 
		  targetX(TargetX), targetY(TargetY), targetZ(TargetZ), moveLEye(MoveLEye), moveREye(MoveREye), moveNeck(MoveNeck), 
		  head_pitch(Head_pitch), result(1), isTest(IsTest)
	{
		m_data.ptr = this;
	}
	//Contrcutor for ik data
	IKData(const char* EndEffektorName,	const char* StopName, float TargetX, float TargetY, float TargetZ, bool IsTest = false )
		: GameEventData(CUSTOM), endEffektorName(EndEffektorName), stopName(StopName), 
		  targetX(TargetX), targetY(TargetY), targetZ(TargetZ), moveLEye(false), moveREye(false), moveNeck(false), 
		  head_pitch(0), result(1), isTest(IsTest)
	{
		m_data.ptr = this;
	}

	IKData(const IKData& copy) : GameEventData(CUSTOM), targetX(copy.targetX), targetY(copy.targetY), targetZ(copy.targetZ), 
								result(copy.result), isTest(copy.isTest)
	{
		m_data.ptr = this;
		m_owner = true;
		
		const size_t lenEEName = copy.endEffektorName ? strlen(copy.endEffektorName) : 0;
		endEffektorName = new char[lenEEName + 1];
		memcpy( (char*) endEffektorName, copy.endEffektorName, lenEEName );
		const_cast<char*>(endEffektorName)[lenEEName] = '\0';

		const size_t lenStopName = copy.stopName ? strlen(copy.stopName) : 0;
		stopName = new char[lenStopName + 1];
		memcpy( (char*) stopName, copy.stopName, lenStopName );
		const_cast<char*>(stopName)[lenStopName] = '\0';
	}

	~IKData()
	{
		if (m_owner)
		{
			delete[] endEffektorName;
			delete[] stopName;
		}
	}


	GameEventData* clone() const
	{
		return new IKData(*this);
	}

	const char* endEffektorName;
	const char* stopName;
	float targetX, targetY, targetZ;
	bool moveLEye, moveREye, moveNeck;
	int head_pitch;
	int result;
	bool isTest;
};

class Vec3fData : public GameEventData
{
public:
	Vec3fData(const float& x, const float& y, const float& z ) : GameEventData(CUSTOM), m_vector(Vec3f(x, y, z))
	{
		m_data.ptr = &m_vector;
	}

	Vec3fData(const Vec3f& vec) : GameEventData(CUSTOM), m_vector(vec)
	{
		m_data.ptr = &m_vector;
	}

	Vec3fData(Vec3f* vec) : GameEventData(CUSTOM)
	{
		m_data.ptr = vec;
	}

	virtual GameEventData* clone() const
	{
		return new Vec3fData( * ( (Vec3f*) m_data.ptr ) );
	}

private:
	Vec3f	m_vector;
};

class Interaction : public GameEventData
{

public:
	Interaction(unsigned int targetID, const std::string& interactionName, const std::string& satisfies, unsigned int interactionID, int slotID = -1) : GameEventData(CUSTOM),
		TargetID(targetID), InteractionName(interactionName), SlotID(slotID),
		InteractionID(interactionID), Satisfies(satisfies)
	{
		m_data.ptr = this;
	}

	Interaction(const std::string& target, const std::string& interactionName, const std::string& satisfies, unsigned int interactionID, int slotID = -1) : GameEventData(CUSTOM),
		Target(target), TargetID(0), InteractionName(interactionName), SlotID(slotID),
		InteractionID(interactionID), Satisfies(satisfies)
	{
		m_data.ptr = this;
	}

	Interaction(const Interaction& copy) : GameEventData(CUSTOM),
		TargetID(copy.TargetID), Target(copy.Target), InteractionName(copy.InteractionName), SlotID(copy.SlotID),
		InteractionID(copy.InteractionID), Satisfies(copy.Satisfies)
	{
		m_data.ptr = this;
	}
	
	~Interaction()
	{}

	unsigned int TargetID;
	std::string Target;
	std::string InteractionName;
	std::string Satisfies;
	int SlotID;
	unsigned int InteractionID;

	GameEventData* clone() const
	{
		return new Interaction(*this);
	}
};

class GLFunction : public GameEventData
{

public:
	enum functions {
		drawCross = 0,
		drawCircle,
		drawLine,
		drawNumber,
		setColor,
		drawCircleFilled
	};

	/* function drawCross uses param0 as x, param1 as y and param2 as z
	function setColor uses param0 as r, param2 as g and param3 as b */
	GLFunction( unsigned int functionID, float param0, float param1, float param2 ) 
		: GameEventData(CUSTOM), FunctionID(functionID), Param0(param0), Param1(param1), Param2(param2), Param3(0), Param4(0),
		Param5(0), Param6(0), Param7(0), Param8(0), Param9(0)
	{
		m_data.ptr = this;
	}

	/* function drawCircle uses param0 as x, param1 as y, param2 as z and param3 as radius
	function drawNumber uses param0 as number, param1 as x, param2 as y, param3 as z*/
	GLFunction( unsigned int functionID, float param0, float param1, float param2, float param3 ) 
		: GameEventData(CUSTOM), FunctionID(functionID), Param0(param0), Param1(param1), Param2(param2), Param3(param3), Param4(0),
		Param5(0), Param6(0), Param7(0), Param8(0), Param9(0)
	{
		m_data.ptr = this;
	}

	/* function drawLine uses param0 as x0, param1 as y0, param2 as z0, param3 as x1, param4 as y1, param5 as z1*/
	GLFunction( unsigned int functionID, float param0, float param1, float param2, float param3, float param4, float param5 ) 
		: GameEventData(CUSTOM), FunctionID(functionID), Param0(param0), Param1(param1), Param2(param2), Param3(param3), Param4(param4),
		Param5(param5), Param6(0), Param7(0), Param8(0), Param9(0)
	{
		m_data.ptr = this;
	}

	GLFunction(const GLFunction& copy) : GameEventData(CUSTOM), FunctionID(copy.FunctionID), Param0(copy.Param0), Param1(copy.Param1), 
		Param2(copy.Param2), Param3(copy.Param3), Param4(copy.Param4), Param5(copy.Param5), Param6(copy.Param6), Param7(copy.Param7),
		Param8(copy.Param8), Param9(copy.Param9)
	{
		m_data.ptr = this;
		m_owner = true;
	}

	~GLFunction()
	{
		if( m_owner ) { }
	}

	unsigned int FunctionID;
	const float Param0;
	const float Param1;
	const float Param2;
	const float Param3;
	const float Param4;
	const float Param5;
	const float Param6;
	const float Param7;
	const float Param8;
	const float Param9;

	GameEventData* clone() const
	{
		return new GLFunction(*this);

	}
};

class GamepadData : public GameEventData
{
	//the values for Sticks and Triggers is in a range between 0 and 1
	//the values for buttons may be 0 for not pressed, 1 for newly pressed
	//index is used as indicator, if controller is connected. if index is -1, then its not. Else index is the index of the controller (0-3)

public:
	GamepadData() 
		: GameEventData(CUSTOM), Index(-1), StickLeftX(0), StickLeftY(0), StickRightX(0), StickRightY(0),
		DigitalPadX(0), DigitalPadY(0), ButtonA(0), ButtonB(0), ButtonX(0), ButtonY(0), ButtonStart(0), ButtonBack(0),
		TriggerLeft(0), TriggerRight(0), ShoulderRight(0), ShoulderLeft(0), StickLeftClick(0), StickRightClick(0),
		VibratorLeft(0), VibratorRight(0)
	{
		m_data.ptr = this;
	}

	GamepadData( unsigned int gamepadIndex, float thumbStickLX, float thumbStickLY, float thumbStickRX, float thumbStickRY, float dPadX, float dPadY, 
		unsigned int butA, unsigned int butB, unsigned int butX, unsigned int butY, unsigned int butStart, unsigned int butBack,
		float triggerL, float triggerR, unsigned int shoulderR, unsigned int shoulderL, unsigned int thumbStickLClick, unsigned int thumbStickRClick )
		: GameEventData(CUSTOM), Index(gamepadIndex), StickLeftX(thumbStickLX), StickLeftY(thumbStickLY), StickRightX(thumbStickRX), StickRightY(thumbStickRY),
		DigitalPadX(dPadX), DigitalPadY(dPadY), ButtonA(butA), ButtonB(butB), ButtonX(butX), ButtonY(butY), ButtonStart(butStart), ButtonBack(butBack),
		TriggerLeft(triggerL), TriggerRight(triggerR), ShoulderRight(shoulderL), ShoulderLeft(shoulderR), StickLeftClick( thumbStickLClick ), StickRightClick( thumbStickRClick),
		VibratorLeft(0), VibratorRight(0)
	{
		m_data.ptr = this;
	}

	GamepadData(const GamepadData& copy) : GameEventData(CUSTOM), Index(copy.Index), StickLeftX(copy.StickLeftX), StickLeftY(copy.StickLeftY), StickRightX(copy.StickRightX), StickRightY(copy.StickRightY),
		DigitalPadX(copy.DigitalPadX), DigitalPadY(copy.DigitalPadY), ButtonA(copy.ButtonA), ButtonB(copy.ButtonB), ButtonX(copy.ButtonX), ButtonY(copy.ButtonY), ButtonStart(copy.ButtonStart), ButtonBack(copy.ButtonBack),
		TriggerLeft(copy.TriggerLeft), TriggerRight(copy.TriggerRight), ShoulderRight(copy.ShoulderRight), ShoulderLeft(copy.ShoulderLeft), StickLeftClick( copy.StickLeftClick ), StickRightClick( copy.StickRightClick ),
		VibratorLeft(copy.VibratorLeft), VibratorRight(copy.VibratorRight)
	{
		m_data.ptr = this;
		m_owner = true;
	}

	int Index;
	float StickLeftX;
	float StickLeftY;
	float StickRightX;
	float StickRightY;
	float DigitalPadX;
	float DigitalPadY;
	unsigned int ButtonA;
	unsigned int ButtonB;
	unsigned int ButtonX;
	unsigned int ButtonY;
	unsigned int ButtonStart;
	unsigned int ButtonBack;
	float TriggerLeft;
	float TriggerRight;
	unsigned int ShoulderRight;
	unsigned int ShoulderLeft;
	float VibratorRight;
	float VibratorLeft;
	unsigned int StickLeftClick;
	unsigned int StickRightClick;

	GameEventData* clone() const
	{
		return new GamepadData(*this);
	}
};


/**
 * \brief Data container for the E_GET_ANIM_LENGTH event
 */ 
class AnimLengthData : public GameEventData
{

public:
	AnimLengthData(const char* name, float* length, float speed = 0 ) : GameEventData(CUSTOM), Name(name), Length(length), Speed(speed)
	{
		m_data.ptr = this;
	}

	AnimLengthData(const AnimLengthData& copy) : GameEventData(CUSTOM), Length(copy.Length), Speed(copy.Speed)
	{
		m_data.ptr = this;
		m_owner = true;
		const size_t lenName = copy.Name ? strlen(copy.Name) : 0;
		Name = new char[lenName + 1];
		memcpy( (char*) Name, copy.Name, lenName );
		const_cast<char*>(Name)[lenName] = '\0';
	}

	~AnimLengthData()
	{
		if( m_owner )
		{
			delete[] Name;
		}
	}

	const char* Name;
	float Speed;
	float* Length;

	AnimLengthData* clone() const
	{
		return new AnimLengthData(*this);

	}
};

/*! @}*/
#endif
