// *************************************************************************************************
//
// Advanced Agent Animations v0.25.7
// readme v0.1.2
//
// -------------------------
// based on Horde3D and GameEngine of the University of Augsburg
//
// Author: Ionut Damian "Johnny"
// *************************************************************************************************


Animation Demo with agent animation and movement control and integrated TTS and Viseme functionallity.

Demo Controls
- to control the demo you need a TCP/IP Socket Client (you can use the demo client from the solution)
- the control is based on sending strings to the Socket Server:

/**
* COMMANDS
*
* -> anim  MODEL  ANIM_FILE_NAME  MASK_START  SYNC [ idle | posture ]
*         = starts the animation stored in ANIM_FILE_NAME on the character with the model id MODEL
*			on the joints starting with the joint MASK_START (null for whole body)
*			with the aditional options idle and/or posture.
*			The animation will start after the word SYNC gets spoken by the agent 
*			(If SYNC is null then the animation starts immediately)
*
* -> speak MODEL 'SPEAK_TEXT'
*         = starts a speaking process on the charcter with the model MODEL
*			consisting of the text stored in TXT_FILE_NAME
*
* -> set MODEL BAYES_CULTURE ANIM_CULTURE
*		  = sets cultural flags for a spcific model
*			(2 = germany, 6 = japan)
*
* -> setvolume MODEL VALUE
*		  = sets the sound volume of an agent, values range from 0.0 to 1.0
*
* -> setspeed MODEL VALUE
*		  = sets the speed of the animations played on the character with the model id MODEL
*		    to the value VALUE (can be either a string: Low, Medium, High 
*		    or numerical: 0.0(still), 0.5(half), 1.0(normal), 2.0(double), ...)
*
* -> setextent MODEL VALUE
*		  = sets the Spacial Extent of future animations played on the character with the model id MODEL
*		    to the value VALUE (can be either a string: Low, Medium, Normal 
*		    or numerical: 0(normal), ..., 10(still) )
*set
* -> setvisibility MODEL VALUE
*		  = renders an agent visible (value = 1) or invisible (value = 0)
*
* -> setextentnow MODEL VALUE
*		  = sets the Spacial Extent of present and future animations played on the character
*		    with the model id MODEL
*		    to the value VALUE (can be either a string: Low, Medium, Normal 
*		    or numerical: 0(normal), ..., 10(still) )
*
* -> do MODEL ['SPEAK_TEXT'] 	[anim FILENAME [MASK_START] [CULTURE] [-sync SYNC_WORD]]	|
*				[animid ID [MASK_START] [CULTURE] [-sync SYNC_WORD]] 		|
*				[animname NAME [MASK_START] [CULTURE] [-sync SYNC_WORD]] 
*
*		  = executes commands on a specific MODEL: speaks the SPEAK_TEXT
*			and starts the animation NAME (or the animation with ID_LEX or NAME_LEX as found
*			in the GastureLexicon) with the culture CULTURE
*			on the model's joints starting with the joint MASK_START (null for whole body)
*			The animation will start after the word SYNC gets spoken by the agent 
*			(If SYNC is null then the animation starts immediately)
*
* -> lookat MODEL TARGET_MODEL [speed VALUE] [hp VALUE]
*		  = rotates the head of MODEL so that its eyes look at the head of TARGET_MODEL
*
* -> gaze MODEL TARGET_X TARGET_Y TARGET_Z [speed VALUE] [hp VALUE]
*		  = rotates the head of MODEL so that its eyes look at the vertex defined by TARGET_X, TARGET_Y and TARGET_Z
*
* -> gotopos MODEL DEST_X DEST_Y DEST_Z [speed SPEED] 
*		  = walks to the absolute position in the game world designated by DEST_X, DEST_Y, DEST_Z
*			with the speed SPEED (1 by default)
*
* -> goto MODEL DEST_MODEL [speed SPEED] 
*		  = walks to the entity DEST_MODEL
*			with the speed SPEED (1 by default)
*
* -> clr
*		  = Clears the stages deleting all animations
*
*
*[Guide: Using the MASKS to mix animations]
*	First start the base animation you wish to use for your mixing (Example: a walk animaiton)
*	Now you need to start the animaiton you want to mix with the base, a so called additve animation (Example: a gesture)
*	To start an additive animation you need to define a MASK. This MASK represents a node (joint) of a Biped Body
*	which will be the starting node of the animation's influence on the body. This means the animation will animate 
*	only children of this node.
*	
*	-> Example:
*	do 0 anim walk_idle				//this will start the animation "walk_idle"
*	do 0 anim gesture5 Bip01_Neck	//this will start the animation "gesture5" animating only children of "Bip01_Neck" (in this case: head, clavicles, shoulders, ...)
*
*[Note: The Engine looks in Content\models\animations for the .anim files]
*[Note: The Engine looks in the "project directory" for the textfiles]
*/

==============================================================================================
==============================================================================================

/**
* FEEDBACK
*	general layout:		 XX 		YY 		ZZZ
*						 agent_id 	obj_id	command_code
*	Example: 0100121
*			 Agent 1 performes command 121 with object 0
*
* Command Codes
*	1xx = Animation status
*		10x = Animation finished
*			100 = animation cannot be found, might have finished
*			101 = animation was found, it's flagged finished
*		11x = Animation asleep, might have finished
*			110 = animation was found, it's flagged asleep therefor no longe active, might have finished
*			111 = animation was found, it's flagged asleep and froze at last frame, might be a static posture who reached final position
*		12x = Animation active
*			120 = animation active and running
*		15x = Animation started
*			150 = animation with id "obj_id" has started on agent "agent_id"
*		19x = ERROR
*			190 = animation has failed to start
*			199 = unknown error
*
*	2xx = Speach status
*		20x = Speaking finished
*			200 = agent has stopped speaking
*		25x = Speaking started
*			250 = agent has started speaking
*		29x = ERROR
*			299 = unknown error
*
*	3xx = Agent status
*		30x = Action has finished
*			300 = movement has finished, agent might be idle
*			301 = movement has finished, agent is interacting with other agents
*		31x = Preperations for changing status
*			310 = walking will stop soon, movement is fading out
*			311 = agent is changing orientation
*		35x = Action started
*			350 = Movement has started
*			351 = Movement towards other entity started
*			352 = Movement towards a world location started
*		39x = ERROR
*			399 = unknown error
*
*	4xx = AAA (object) status
*		45x = Agents
*			450 = Agent is user controlled (pc)
*			451 = Agent is no longer user controlled (npc)
*
* Examples
*	0212150 = Animation 12 has started on Agent 2
*	0212100 = Animation 12 might have finsihed (cannot be found) on Agent 2
*	0500250 = Agent 5 has started speaking
*	0100302 = Agent 1 has stopped walking and is now interacting with other agents
*	0500190 = Animation has failed to start on Agent 5
*
*/

==============================================================================================
==============================================================================================

/**
* XML Configurations
*
* AAA-tag
* - should be in the main scene.xml file
*
*	<AAA>
*	no attributes
*	child tags:
*		<Agents>
*		no attributes
*		child tags:
*			<Agent>
*			attributes:
*				symbol_dist = [int] symbol distance to agent root node in relative length units
*				pc = [bool] flag for "personal character"
*				visible = [bool] flag for agent visibility and activity state
*				symbol = [string] node name of the symbol (must be loaded sparately with a reference tag)
*				name = [string] name of the agent (must be loaded sparately with a reference tag, names must coincide)
*
* Attachements to the Agent entities
*
* 	<IK> = more information at http://mm-werkstatt.informatik.uni-augsburg.de/projects/GameEngine/doku.php/docs:tutorials:ik
*	attributes:
*		reye = [string] name of the right eye node (as defiend in the entity scenegraph)
*		leye = [string] name of the left eye node (as defiend in the entity scenegraph)
*		file = [string] name and path of the entity scene file (should contain DOFR tags)
*		neck = [string] name of the neck node (as defiend in the entity scenegraph)
*
*	<AgentAnimation>
*	attributes:
*		gender = [string] "male" or "female". Influences which gestures will be loaded on the agent
*		culture = [string] Influences which gestures will be loaded on the agent (ex: "german")
*		stillAnim = [string] name and path of the still animation file
*		GestureLexicon = [string] name and path of the gesture lexicon file
*
*	<Sapi>
*	attributes:
*		voice = [string] name of the tts voice (must be installed on the system)
*
*	<AgentAction>
*	attributes:
*		walkAnimFile = [string] name and path of the walk animation file
*		idleAnimFile = [string] name and path of the idle animation file
*	child tags:
*		<BufferZone> = defines one social interaction zone
*		attributes:
*			radius = [float] radius of the zone
*		<Orientation> = adds one type of orientation to the agent's knowledge
*		attributes:
*			name = [string] name of the orientation (must be defined in a class in AgentActionComponent, known names: L,C,H,V,I,N)
*
*/

/**
* GestureLexicon
* defines the animations to be used with AAA
* 
* <GestureLexicon>
* root tag
* child tags:
*	<Gesture>
*	child tags:
*		<ID> = [int]
*		<Name> = [string]
*		<Filename> = defines one filename of the gesture. A gesture may have multiple filenames
*		attributes:
*			gender = [string] "male" or "female". Influences on which agent this gesture will be loaded
*			culture = [string] Influences on which agent this gesture will be loaded (ex: "german")
*		<Function>
*		child tags:
*			<IPA>
*			<McNeil>
*			<DAMSL>
*		<Form>
*		child tags:
*			<StrokeStart> [int] first frame number of the stroke
*			<StrokeEnd> [int] last frame number of the stroke
*			<StrokeReps> [int] how many times the storke should be played
*
*/


Contact
Ionut Damian "Johnny"
e-mail: johnny@rembogd.ro