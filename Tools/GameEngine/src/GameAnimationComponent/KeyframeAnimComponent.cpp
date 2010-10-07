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
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************

#include "KeyframeAnimComponent.h"
#include "KeyframeAnimManager.h"
#include "GameEngine_Animations.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameLog.h>


#include <Horde3D/Horde3D.h>
#include <Horde3D/Horde3DUtils.h>

#include <algorithm>
#include <fstream>
#include <list>

#include <XMLParser/utXMLParser.h>

// Uncomment the next line, if you want to see debuging infos about the animations in the console
//#define PRINT_ANIMATION_INFO 1

namespace AnimationControl
{
	struct TimelineWeight
	{
		TimelineWeight(float timestamp, float weight) : Timestamp(timestamp), Weight(weight) {}

		float Timestamp, Weight;
	};

	struct Animation
	{
		Animation(GameEntity* entity, H3DRes animResourceID, int frames, float speed) : 
	Entity(entity), AnimResourceID(animResourceID), Speed(speed), Frames((float) frames)
	{
	}

	~Animation()
	{
		h3dRemoveResource(AnimResourceID);
	}

	void activate(bool enable, int stage, bool additive) const
	{
		if ( enable)
		{
			SetupAnim setupAnim(stage, AnimResourceID, "", additive);
			GameEvent event(GameEvent::E_SETUP_ANIM, &setupAnim, 0);
			Entity->executeEvent(&event);			
		}
		else 
		{
			SetupAnim setupAnim(stage, 0, "", additive);
			GameEvent event(GameEvent::E_SETUP_ANIM, &setupAnim, 0);
			Entity->executeEvent(&event);
		}
	}

	void update(float frame, int stage, float weight) const
	{
		SetAnimFrame setAnimFrame(stage, frame, weight);
		// Set current frame and weight
		GameEvent event(GameEvent::E_SET_ANIM_FRAME, &setAnimFrame, 0);
		Entity->executeEvent(&event);
	}

	GameEntity* const			Entity;
	const H3DRes				AnimResourceID;
	const float					Speed;
	const float					Frames;
	};


	/**
	 * This class is used to handle a play animation command.
	 * It can be updated to change the way the animation is played
	 */
	class AnimationJob
	{		

	public:
		/**
		 * Creates a new Animation job, based on the given animation and command settings.
		 * @param owner the owner stores a registry where all animation jobs are represented to allow updates
		 * @param anim the animation resource that will be played
		 * @param command the parameters how to play the animation
		 */
		AnimationJob(KeyframeAnimComponent* owner, Animation* anim, AnimationSetup* command) : m_animation(anim), m_stageID(command->Stage), m_speed(command->Speed),
			m_currentTimeWeight(-1), m_jobID(0), m_owner(owner) 
		{
			// If speed was set to zero by the user...
			if ( command->Speed == 0 )
			{
				// check if duration was also zero...
				if ( command->Duration == 0 )
				{
					// In this case use the default speed
					command->Speed = m_speed = m_animation->Speed;
					// and calculate the duration based on the default speed and available frames
					command->Duration = m_animation->Frames / m_speed;
					// results in playing the animation exactly one time with the default speed
				}
				// If duration was less than zero the user wants an endless animation with the default speed (command->Speed == 0)
				else if ( command->Duration < 0 )
					command->Speed = m_speed = m_animation->Speed;
				else // Speed is calculated from duration and available frames (play it one time for the specified duration)
					command->Speed = m_speed = m_animation->Frames / command->Duration;
			}		
			else if ( command->Duration == 0 ) // Play it one time with specified speed
				command->Duration = m_animation->Frames / m_speed;
			m_endless = command->Duration < 0;
			// Create Timeline point for the beginning
			m_timeline.push_back(TimelineWeight(GameEngine::timeStamp() + command->TimeOffset, command->Weight));
			// Create Timeline point for the end (for endless animations the end timestamp is one year in the future)
			if (m_endless)
				m_timeline.push_back(TimelineWeight(GameEngine::timeStamp() + command->TimeOffset + ENDLESS_DURATION, command->Weight));
			else
				m_timeline.push_back(TimelineWeight(GameEngine::timeStamp() + command->TimeOffset + command->Duration, command->Weight));		
			// Register Animation Job in owner's registry
			std::vector<AnimationJob*>::iterator iter = std::find(m_owner->m_animationRegistry.begin(), m_owner->m_animationRegistry.end(), (AnimationJob*) 0);
			if ( iter == owner->m_animationRegistry.end() )
			{
				m_owner->m_animationRegistry.push_back(this);
				m_jobID = (int) m_owner->m_animationRegistry.size();
			}
			else
			{
				*iter = this;
				m_jobID = (int) (iter - m_owner->m_animationRegistry.begin()) + 1;
			}
		}

		~AnimationJob()
		{
#ifdef PRINT_ANIMATION_INFO
			//printf("Removing animation job\n");
#endif
			// Disable animation
			if (m_currentTimeWeight > 0)
				m_animation->activate(false, m_stageID, false);
			// Deregister in owner's registry
			m_owner->m_animationRegistry[m_jobID - 1] = 0;
		}

		bool past(const float timestamp) const
		{
#ifdef PRINT_ANIMATION_INFO
			if (m_timeline.back().Timestamp < timestamp)
				printf("Animation has passed at time %.3f! last timestamp: %.3f \n", timestamp, m_timeline.back().Timestamp);
#endif
			return m_endless == false && m_timeline.back().Timestamp < timestamp;
		}

		void update(const float timestamp)
		{
			// How many timeline weight do we have?
			const int   timeweights = (int) m_timeline.size();
			// If there are no more timelightweights to handle return
			if (m_timeline.empty() || m_currentTimeWeight + 1 >= timeweights) return;
			// Get the time index relative to the start
			const float animTime = timestamp - m_timeline.front().Timestamp;

			// If we have not started the animation yet, the current time weight is less than zero and...
			if (m_currentTimeWeight < 0)
			{
				// if the animation is not yet active...
				if (m_timeline.front().Timestamp > timestamp) return; // ... return
				//  otherwise we have to activate it
				else m_animation->activate(true, m_stageID, m_timeline.front().Weight < 0);
				m_currentTimeWeight = 0;
#ifdef PRINT_ANIMATION_INFO
				//printf("Starting animation at animTime %.3f\n", animTime);
#endif
			}

			// Get next timeline weight			
			while( m_currentTimeWeight + 1 < timeweights )
			{
				// get current timeline weight
				TimelineWeight& tw1 = m_timeline[m_currentTimeWeight];
				// and the next one
				TimelineWeight& tw2 = m_timeline[m_currentTimeWeight + 1];

				// if the next timeline weight is in the future
				if (tw2.Timestamp >= timestamp)
				{
					// Calculate new interpolated weight
					float t1 = timestamp - tw1.Timestamp;
					float t2 = tw2.Timestamp - timestamp;
					float kappaT = t1 / (t2 + t1);
					float interpolatedWeight = tw1.Weight + (tw2.Weight - tw1.Weight) * kappaT;
					//printf("Animation %d update at %d: %.3f, %3f\n", m_jobID, m_currentTimeWeight, animTime, interpolatedWeight);
					//printf("Frame %.3f Speed %.3f AnimTime %.3f\n", m_speed * animTime, m_speed, animTime);
					m_animation->update(animTime * m_speed, m_stageID, interpolatedWeight);
					break;
				}
				++m_currentTimeWeight;
#ifdef PRINT_ANIMATION_INFO
				printf("Animation %d now at %d of %d: Timestamp %.3f Timeline %.3f\n", m_jobID, m_currentTimeWeight, timeweights, timestamp, tw2.Timestamp);
#endif
			}
		}

		void addTimelinePoint(const float timestamp, const float weight)
		{			
			// Search for the right place to insert the new timeline weight
			std::vector<TimelineWeight>::iterator iter = m_timeline.begin();
			while(iter != m_timeline.end())
			{
				// Replace an existing timeline weight if we update an existing timestamp 
				if (iter->Timestamp == timestamp)
				{
					iter->Weight = weight;				
					break;
				}
				// Insert a new one if there is a timestamp in the future
				else if (iter->Timestamp > timestamp)
				{
				
#ifdef PRINT_ANIMATION_INFO
					printf("Inserting timeline point %.3f with weight %.3f\n", timestamp, weight);
#endif
					iter = m_timeline.insert(iter, TimelineWeight(timestamp, weight));
					break;
				}
				++iter;				
			}
			// If there are still more timestamps in the future, we will overwrite their weights to the one added
			// since otherwise the weights of the future timestamps may change the animation in an unexpected way back to the original weight
			while( iter != m_timeline.end() )
			{
#ifdef PRINT_ANIMATION_INFO
				printf("Adjusting timeline at %.3f to weight %.3f\n", iter->Timestamp, weight);
#endif
				iter->Weight = weight;
				++iter;
			}
		}

		void changeSpeed(const float speed)
		{			
			const float currentTime = GameEngine::timeStamp();
			// adjust beginning that we don't get a gap after changing the speed
			m_timeline.front().Timestamp = (m_timeline.front().Timestamp * m_speed + currentTime * (speed - m_speed) ) / speed;
			m_speed = speed;				
		}

		void changeDuration(float duration)
		{			
			if (duration < 0)
			{
				duration = ENDLESS_DURATION;
				m_endless = true;
			}
			else if (m_endless)
				m_endless = false;

			const float end = GameEngine::timeStamp() + duration;			

			float weight = m_timeline.back().Weight;
			while(!m_timeline.empty() && m_timeline.back().Timestamp > end)
			{
				weight = m_timeline.back().Weight;
				m_timeline.pop_back();
			}
			m_timeline.push_back(TimelineWeight(end, weight));
		}

		std::vector<TimelineWeight>	m_timeline;
		Animation*					m_animation;
		const int					m_stageID;
		float						m_speed;
		int							m_currentTimeWeight;
		int							m_jobID;
		KeyframeAnimComponent*		m_owner;
		bool						m_endless;
		static const float			ENDLESS_DURATION;
	};
	const float AnimationJob::ENDLESS_DURATION = 31536000.0f;


	class StageController
	{
	public:
		StageController() : Owner(0), StageID(0)
		{
		}

		void update(const float timestamp)
		{
			if ( Animations.empty() )  return;

			Animations.front()->update(timestamp);
			while( Animations.front()->past(timestamp) )
			{
				int jobID = Animations.front()->m_jobID;
				delete Animations.front();								
				Animations.pop_front();
				if ( Animations.empty() )
				{
					if (Owner)
					{
						GameEvent event(GameEvent::E_ANIM_STOPPED, &GameEventData(jobID), Owner);
						Owner->owner()->executeEvent(&event);
					}
					return;
				}
				else Animations.front()->update(timestamp);
			}
		}

		void addAnimationJob( AnimationJob* const job)
		{
			if ( !job->past(GameEngine::timeStamp()) )
			{				
				while( !Animations.empty() && ( Animations.front()->past(job->m_timeline.front().Timestamp) || Animations.front()->m_endless ) )
				{
					delete Animations.front();				
					Animations.pop_front();
				}
				Animations.push_back(job);				
			}			
		}	

		void clear()
		{
			while (!Animations.empty())
			{
				delete Animations.front();				
				Animations.pop_front();
			}			
		}

		KeyframeAnimComponent*		Owner;
		std::list<AnimationJob*>	Animations;
		unsigned int			    StageID;
	};
}

GameComponent* KeyframeAnimComponent::createComponent( GameEntity* owner )
{
	return new KeyframeAnimComponent( owner );
}

KeyframeAnimComponent::KeyframeAnimComponent(GameEntity* owner) : GameComponent(owner, "KeyframeAnimComponent"), MAX_STAGES(16)
{
	owner->addListener(GameEvent::E_PLAY_ANIM, this);
	owner->addListener(GameEvent::E_UPDATE_ANIM, this);
	owner->addListener(GameEvent::E_GET_ANIM_LENGTH, this);

	m_stageControllers = new AnimationControl::StageController[MAX_STAGES];
	for (int i=0; i<MAX_STAGES; ++i)
	{
		m_stageControllers[i].StageID = i;
		m_stageControllers[i].Owner = this;
	}
	KeyframeAnimManager::instance()->addObject(this);
}

KeyframeAnimComponent::~KeyframeAnimComponent()
{
	KeyframeAnimManager::instance()->removeObject(this);
	release();
	delete[] m_stageControllers;
}

void KeyframeAnimComponent::release()
{
	for (int i=0; i<MAX_STAGES; ++i)
		m_stageControllers[i].clear();
	std::map<std::string, AnimationControl::Animation*>::iterator iter = m_animations.begin();
	while (iter != m_animations.end())
	{
		delete iter->second;
		++iter;
	}	
	m_animations.clear();
	h3dReleaseUnusedResources();
}

void KeyframeAnimComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
	case GameEvent::E_PLAY_ANIM:
		setupAnim(static_cast<AnimationSetup*>(event->data()));
		break;
	case GameEvent::E_UPDATE_ANIM:
		updateAnim(static_cast<AnimationUpdate*>(event->data()));
		break;
	case GameEvent::E_GET_ANIM_LENGTH:
		{
			AnimLengthData* data = static_cast<AnimLengthData*>(event->data());
			*(data->Length) = getAnimLength(data->Name, data->Speed);
		}
		break;
	}
}

void KeyframeAnimComponent::loadFromXml(const XMLNode* description)
{
	release();
	int animCount = description->nChildNode("StaticAnimation");
	for (int i=0; i<animCount; ++i)
	{
		XMLNode animation = description->getChildNode("StaticAnimation", i);
		const char* file = animation.getAttribute("file", "");
		const char* name = animation.getAttribute("name", "");
		if (m_animations.find(name) != m_animations.end())
		{
			GameLog::errorMessage("Another animation with the name '%s' has been already loaded!", name);
			return;
		}
		std::string path = h3dutGetResourcePath(H3DResTypes::Animation);		
		if ( path.size() > 0 && path[path.size()-1] != '\\' && path[path.size()-1] != '/' )
			path += '/';
		// Open resource file
		std::ifstream inf( (path + file).c_str(), std::ios::binary );
		if( inf ) // Resource file found
		{
			// Find size of resource file
			inf.seekg( 0, std::ios::end );
			const int size = inf.tellg();
			// Copy resource file to memory
			char *data = new char[size + 1];
			inf.seekg( 0 );
			inf.read( data, size );
			inf.close();
			// Null-terminate buffer - this is important for XML parsers 
			data[size] = '\0';
			// Add animation resources to horde resource manager			
			const int resourceID = h3dAddResource( H3DResTypes::Animation, file, 0 );	
			// Send resource data to engine
			h3dLoadResource( resourceID, data, size );
			delete[] data;
			int frames = h3dGetResParamI(resourceID, H3DAnimRes::EntityElem, 0, H3DAnimRes::EntFrameCountI);
			AnimationControl::Animation* anim = new AnimationControl::Animation( owner(), resourceID, frames, static_cast<float>(atof(animation.getAttribute("fps","30.0"))) ); 				
			m_animations.insert(std::make_pair<std::string, AnimationControl::Animation*>(name, anim));
		}
		else // Resource file not found
			GameLog::errorMessage("Animation file %s not found ", file);
	}
}

void KeyframeAnimComponent::applyChanges(const float timestamp)
{
	std::vector<AnimationUpdate>::iterator iter = m_pendingAnimUpdates.begin();
	while( iter != m_pendingAnimUpdates.end() )
	{
		if (iter->TimeOffset <=  timestamp)
		{
			iter->TimeOffset = 0;
			updateAnim(&(*iter));
			iter = m_pendingAnimUpdates.erase(iter);
		}
		else ++iter;
	}
}
void KeyframeAnimComponent::update(const float timestamp)
{
	for (int i=0; i<MAX_STAGES; ++i)
		m_stageControllers[i].update(timestamp);
}

bool KeyframeAnimComponent::isPlaying(const char *animation)
{
	//H3DRes res = Horde3D::findResource(H3DResTypes::Animation, animation);
	//if(res == 0) return false;

	std::map<std::string, AnimationControl::Animation*>::iterator iter = m_animations.find(animation);
	if(iter == m_animations.end()) return false;
	
	for (int i=0; i<MAX_STAGES; ++i)
	{
		if( !m_stageControllers[i].Animations.empty() &&
			m_stageControllers[i].Animations.front()->m_animation->AnimResourceID == iter->second->AnimResourceID)
		{
			return true;
		}
	}
	return false;
}

float KeyframeAnimComponent::getAnimLength(const char *animation, float speed /*= 0*/)
{
	std::map<std::string, AnimationControl::Animation*>::iterator iter = m_animations.find(animation);
	if(iter == m_animations.end()) return 0;

	if (speed > 0)
		return iter->second->Frames / speed;
	else if (iter->second->Speed > 0)
		return iter->second->Frames / iter->second->Speed;
	return 0;
}

float KeyframeAnimComponent::getAnimSpeed(const char *animation)
{
	std::map<std::string, AnimationControl::Animation*>::iterator iter = m_animations.find(animation);
	if(iter == m_animations.end()) return 0;

	return iter->second->Speed;
}

void KeyframeAnimComponent::setupAnim(AnimationSetup *command)
{
	std::map<std::string, AnimationControl::Animation*>::iterator iter = m_animations.find(command->Animation);
	if (command->Stage >= MAX_STAGES || command->Stage < 0)
	{
		GameLog::errorMessage("Invalid Stage ID '%d'! Value must between 0 and %d", command->Stage, MAX_STAGES);
		return;
	}
	if (iter == m_animations.end())
	{
		GameLog::errorMessage("setupAnim: Animation %s not found!", command->Animation);
		return;
	}	
	AnimationControl::AnimationJob* job = new AnimationControl::AnimationJob(this, iter->second, command);
	command->JobID = job->m_jobID;
	m_stageControllers[command->Stage].addAnimationJob(job);	
}

void KeyframeAnimComponent::updateAnim(AnimationUpdate *command)
{
	const float time = GameEngine::timeStamp();
	if (m_animationRegistry.size() >= command->JobID && command->JobID > 0)
	{
		AnimationControl::AnimationJob* job = m_animationRegistry[command->JobID - 1];
		if (job)
		{
			switch (command->ParamType)
			{
			case GameEngineAnimParams::Weight:
				job->addTimelinePoint(time + command->TimeOffset, command->Value);
				break;
			case GameEngineAnimParams::Speed:
				if (command->TimeOffset > 0)
					m_pendingAnimUpdates.push_back(AnimationUpdate(command->JobID, command->ParamType, command->Value, command->TimeOffset + time));
				else
					job->changeSpeed(command->Value);
				break;
			case GameEngineAnimParams::Duration:
				if (command->TimeOffset > 0)
					m_pendingAnimUpdates.push_back(AnimationUpdate(command->JobID, command->ParamType, command->Value, command->TimeOffset + time));
				else
					job->changeDuration(command->Value);
				break;
			}
		}
	}
}

int KeyframeAnimComponent::getJobID(std::string animName)
{
	std::map<std::string, AnimationControl::Animation*>::iterator iter = m_animations.find(animName);
	if(iter != m_animations.end())
	{
		for(unsigned int i = 0; i < m_animationRegistry.size(); ++i)
		{
			if(m_animationRegistry[i]->m_animation = iter->second) return i+1;
		}
	}
	return 0;
}