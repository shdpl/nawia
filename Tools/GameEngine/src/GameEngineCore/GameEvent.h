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
#include <assert.h>

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
		E_INVALID, 
		E_SET_TRANSFORMATION,	/// A transformation change event, containing the new transformation 
		E_SET_ROTATION,			/// Set the rotation of the object in world space
		E_SET_TRANSLATION,		/// TODO
		E_SET_SCALE,			/// Set the scale of the object
		E_TRANSLATE_LOCAL,		/// Translate Object along it's local axis (using a Vec3fData)
		E_TRANSLATE_GLOBAL,		/// Translate object along the world axis (using a Vec3fData)
		E_ROTATE_LOCAL,			/// Rotate object about it's local axis (using a Vec3fData)
		E_TRANSFORMATION,		/// Copies the current object transformation to the memory buffer provided by the Event (currently float[16])
		E_MESH_DATA,			/// Copies the mesh parameters of a mesh representation in Horde3D to the provided MeshData struct within the event
		E_MORPH_TARGET,			/// Sets the model morpher of a Horde3D representation to the provided morph target position 
		E_MORPH_TARGET_ANIM,    /// Animates a morph target
		E_KEY_PRESS,			/// A key has been pressed
		E_PLAY_ANIM,			/// Play an animation 
		E_UPDATE_ANIM,			/// Updates a running animation
		E_ANIM_STOPPED,			/// Indicates that an animation has stopped
		E_SETUP_ANIM,			/// Loads an animation on a model stage
		E_SET_ANIM_FRAME,		/// Sets the frame of a loaded animation 
		E_ATTACH,				/// Attaches a SceneNode to another SceneNode
		E_SET_NODE_PARENT,		/// Sets a new Parten for a SceneNode
		E_SPEAK,				/// Speak a sentence
		E_SPEAKING_STOPPED,		/// Speak a sentence is finished
		E_SET_VOICE,			/// Change the TTS Voice of a TTSComponent
		E_COLLISION,			/// A collision occured
		E_ACTIVATE_CAM,			///  Make the camera the active one		
		E_PERFORM_ACTION,		/// Perform an action
		E_WITNESS_ACTION,		/// Witness an action
		E_GO_TO_ENTITY,			/// Move close to another entity
		E_GO_TO_POSITION,		/// Move to a position
		E_GO_TO_RELATIVE,		/// Move to a position relative to the entity's own position
		E_GO_TO_STOPPED,		/// Entity has arrived at the desired location
		E_SET_PROPERTY,			/// Sets a property		
		E_GET_PROPERTY,			/// Gets a property
		E_INTERACT,				/// Interact with another Entity
		E_INTERACTED_WITH,		/// Informs an Entity that it's interacted with by another Entity
		E_SET_SOUND_GAIN,		/// Sets the sound gain
		E_SET_SOUND_LOOP,		/// Sets the sound to loop
		E_SET_SOUND_FILE,		/// Sets a sound file
		E_SET_PHONEMES_FILE,	/// Sets a phonemes file
		E_SET_ENABLED,			/// Enables components (wether the component should be rendered/updated or not)	
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
		GB_KEY_PRESSED,			/// inidicates a key press event
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
		if(in.find("E_GO_TO_RELATIVE") != std::string::npos) return GameEvent::E_GO_TO_RELATIVE;
		if(in.find("E_GO_TO_STOPPED") != std::string::npos) return GameEvent::E_GO_TO_STOPPED;
		if(in.find("E_SET_PROPERTY") != std::string::npos) return GameEvent::E_SET_PROPERTY;
		if(in.find("E_GET_PROPERTY") != std::string::npos) return GameEvent::E_GET_PROPERTY;
		if(in.find("E_INTERACT") != std::string::npos) return GameEvent::E_INTERACT;
		if(in.find("E_INTERACTED_WITH") != std::string::npos) return GameEvent::E_INTERACTED_WITH;
		if(in.find("E_SET_SOUND_GAIN") != std::string::npos) return GameEvent::E_SET_SOUND_GAIN;
		if(in.find("E_SET_SOUND_LOOP") != std::string::npos) return GameEvent::E_SET_SOUND_LOOP;
		if(in.find("E_SET_SOUND_FILE") != std::string::npos) return GameEvent::E_SET_SOUND_FILE;
		if(in.find("E_SET_PHONEMES_FILE") != std::string::npos) return GameEvent::E_SET_PHONEMES_FILE;
		if(in.find("E_SET_ENABLED") != std::string::npos) return GameEvent::E_SET_ENABLED;
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
		m_owner = true;
		m_id = other.m_id;
		m_sender = other.m_sender;
		return *this;
	} 
	
	GameEvent(const GameEvent& other) : m_id(other.m_id), m_pData(other.m_pData->clone()), m_sender(other.m_sender), m_owner(true)
	{
		
	}
	
	const EventID id() const {return m_id;}
	void* data() const {return m_pData->data();}
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
	Property(const char* name, bool value ) : GameEventData(CUSTOM), Name(name), Value(value) 
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
	bool Value;

	GameEventData* clone() const
	{
		return new Property(*this);

	}
};

class GoToPosition : public GameEventData
{

public:
	GoToPosition(float x, float y, float z, const char* animName, float speed ) 
		: GameEventData(CUSTOM), X(x), Y(y), Z(z), AnimName(animName), Speed(speed) 
	{
		m_data.ptr = this;
	}

	GoToPosition(float x, float y, float z) : GameEventData(CUSTOM), X(x), Y(y), Z(z), AnimName(0), Speed(0.0f) 
	{
		m_data.ptr = this;
	}

	GoToPosition(const GoToPosition& copy) : GameEventData(CUSTOM), X(copy.X), Y(copy.Y), Z(copy.Z), Speed(copy.Speed)
	{
		m_data.ptr = this;
		m_owner = true;
		
		const size_t lenAnimName = copy.AnimName ? strlen(copy.AnimName) : 0;
		AnimName = new char[lenAnimName + 1];
		memcpy( (char*) AnimName, copy.AnimName, lenAnimName );
		const_cast<char*>(AnimName)[lenAnimName] = '\0';
	}

	void setAnimName(const char* name)
	{
		const size_t lenAnimName = strlen(name);
		AnimName = new char[lenAnimName + 1];
		memcpy( (char*) AnimName, name, lenAnimName );
		const_cast<char*>(AnimName)[lenAnimName] = '\0';
	}
	
	~GoToPosition()
	{
		if( m_owner )
		{
			delete[] AnimName;
		}
	}

	const float X;
	const float Y;
	const float Z;
	const char* AnimName;
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
	Attach( const char* childName, const char* id, float tx, float ty, float tz, float rx, float ry, float rz, float sx, float sy, float sz ) 
		: GameEventData(CUSTOM), Child(childName), EntityID(id), Tx(tx), Ty(ty), Tz(tz), Rx(rx), Ry(ry), Rz(rz), Sx(sx), Sy(sy), Sz(sz) 
	{
		m_data.ptr = this;
	}

	Attach( const char* childName, const char* id) 
		: GameEventData(CUSTOM), Child(childName), EntityID(id), Tx(0), Ty(0), Tz(0), Rx(0), Ry(0), Rz(0), Sx(1), Sy(1), Sz(1) 
	{
		m_data.ptr = this;
	}

	Attach(const Attach& copy) : GameEventData(CUSTOM), Tx(copy.Tx), Ty(copy.Ty), Tz(copy.Tz), 
		Rx(copy.Rx), Ry(copy.Ry), Rz(copy.Rz), Sx(copy.Sx), Sy(copy.Sy), Sz(copy.Sz)
	{
		m_data.ptr = this;
		m_owner = true;
		
		const size_t lenChildname = copy.Child ? strlen(copy.Child) : 0;
		Child = new char[lenChildname + 1];
		memcpy( (char*) Child, copy.Child, lenChildname );
		const_cast<char*>(Child)[lenChildname] = '\0';
		
		const size_t lenID = copy.EntityID ? strlen(copy.EntityID) : 0;
		EntityID = new char[lenID + 1];
		memcpy( (char*) EntityID, copy.EntityID, lenID );
		const_cast<char*>(EntityID)[lenID] = '\0';
	}

	~Attach()
	{
		if( m_owner )
		{
			delete[] Child;
			delete[] EntityID;
		}
	}

	const char* Child;
	const char* EntityID;
	const float Tx;
	const float Ty;
	const float Tz;
	const float Rx;
	const float Ry;
	const float Rz;
	const float Sx;
	const float Sy;
	const float Sz;

	GameEventData* clone() const
	{
		return new Attach(*this);

	}
};

class IKData : public GameEventData
{
public:
	//Contructor for gaze data
	IKData(float TargetX, float TargetY, float TargetZ, bool MoveLEye, bool MoveREye, bool MoveNeck, int Head_pitch )
		: GameEventData(CUSTOM), endEffektorName(0), stopName(0), 
		  targetX(TargetX), targetY(TargetY), targetZ(TargetZ), moveLEye(MoveLEye), moveREye(MoveREye), moveNeck(MoveNeck), head_pitch(Head_pitch)
	{
		m_data.ptr = this;
	}
	//Contrcutor for ik data
	IKData(const char* EndEffektorName,	const char* StopName, float TargetX, float TargetY, float TargetZ)
		: GameEventData(CUSTOM), endEffektorName(EndEffektorName), stopName(StopName), 
		  targetX(TargetX), targetY(TargetY), targetZ(TargetZ), moveLEye(false), moveREye(false), moveNeck(false), head_pitch(0)
	{
		m_data.ptr = this;
	}

	IKData(const IKData& copy) : GameEventData(CUSTOM), targetX(copy.targetX), targetY(copy.targetY), targetZ(copy.targetZ)
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
	//bool restrict, optimize, zlock;
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
	Interaction(const char* targetID, const char* interactionName) : GameEventData(CUSTOM), TargetID(targetID), InteractionName(interactionName)
	{
		m_data.ptr = this;
	}

	Interaction(const char* targetID) : GameEventData(CUSTOM), TargetID(targetID), InteractionName(0)
	{
		m_data.ptr = this;
	}

	Interaction(const Interaction& copy) : GameEventData(CUSTOM)
	{
		m_data.ptr = this;
		m_owner = true;
		
		const size_t lenInteractionName = copy.InteractionName ? strlen(copy.InteractionName) : 0;
		InteractionName = new char[lenInteractionName + 1];
		memcpy( (char*) InteractionName, copy.InteractionName, lenInteractionName );
		const_cast<char*>(InteractionName)[lenInteractionName] = '\0';
		
		const size_t lenTarget = copy.TargetID ? strlen(copy.TargetID) : 0;
		TargetID = new char[lenTarget + 1];
		memcpy( (char*) TargetID, copy.TargetID, lenTarget );
		const_cast<char*>(TargetID)[lenTarget] = '\0';
	}

	void setInteractionName(const char* name)
	{
		const size_t lenInteractionName = strlen(name);
		InteractionName = new char[lenInteractionName + 1];
		memcpy( (char*) InteractionName, name, lenInteractionName );
		const_cast<char*>(InteractionName)[lenInteractionName] = '\0';
	}
	
	~Interaction()
	{
		if( m_owner )
		{
			delete[] TargetID;
			delete[] InteractionName;
		}
	}

	const char* TargetID;
	const char* InteractionName;

	GameEventData* clone() const
	{
		return new Interaction(*this);
	}
};

/*! @}*/
#endif
