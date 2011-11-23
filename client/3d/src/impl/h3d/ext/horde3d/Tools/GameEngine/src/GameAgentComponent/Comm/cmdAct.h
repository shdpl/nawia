
// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
//
// This file is part of the GameEngine of the University of Augsburg
//
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************

// ****************************************************************************************
//
// GameEngine Agent Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2011 Ionut Damian
// 
// ****************************************************************************************
    
#ifndef CMD_ACT_H_
#define CMD_ACT_H_

#include "Command.h"
#include "../Config.h"

#include "GameEngine/utMath.h"

using namespace Horde3D;

class cmdAct : public Command
{
public:
	cmdAct();
	cmdAct(CommComponent* comp);
	~cmdAct();

	///restes the attributes to their default values, thus clearing any information from previous processes
	void reset();

	///execute the actions requested in the already processed message
	virtual void execute();

private:	
	int m_tts_ID;
	int m_animation_ID;
	int m_gaze_ID;

	//possible actions with this cmd
	bool m_doTTS;
	bool m_doGazeByID;	
	bool m_doGazeByLocation;
	bool m_doShake;
	bool m_doAnimationClear;
	bool m_doAnimationByFile[c_MaxNrAnimsPerMsg];	
	bool m_doAnimationByName[c_MaxNrAnimsPerMsg];
	bool m_doAnimationByID[c_MaxNrAnimsPerMsg];

	//attribute values
	int		m_agent_aID;
	char	m_tts[c_MaxTTSLength];

	int		m_gazeTarget_aID;
	Vec3f	m_gazeTarget_pos;
	float	m_gazeSpeed;
	float	m_gazeDuration;

	int		m_shakeAxis;
	int		m_shakeReps;
	float	m_shakeExtent;
	float	m_shakeSpeed;
	float	m_shakeDuration;

	int		m_animationLID[c_MaxNrAnimsPerMsg]; //lexicon id
	char	m_animationLName[c_MaxNrAnimsPerMsg][c_MaxAnimNameSize]; //lexicon name
	float	m_animationSpeed[c_MaxNrAnimsPerMsg];
	float	m_animationSE[c_MaxNrAnimsPerMsg];
	int		m_animationReps[c_MaxNrAnimsPerMsg];
	char	m_animationStartNode[c_MaxNrAnimsPerMsg][c_MaxNodeNameSize];
	char	m_animationSyncWord[c_MaxNrAnimsPerMsg][c_MaxSyncWordSize];	
	char	m_animationFile[c_MaxNrAnimsPerMsg][c_MaxAnimFileSize];
};

#endif