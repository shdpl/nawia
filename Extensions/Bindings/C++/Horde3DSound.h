// *************************************************************************************************
//
// Horde3D Sound Extension
// --------------------------------------
// Copyright (C) 2008-2009 Ulf Nilsson T�nnstr�m
//
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
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

/*	Title: Horde3D Sound Extension */

#pragma once

#include "Horde3D.h"

#ifndef DLL
#	if defined( WIN32 ) || defined( _WINDOWS )
#		define DLL extern "C" __declspec( dllimport )
#	else
#		define DLL extern "C"
#	endif
#endif


/*	Topic: Introduction
		Some words about the Sound Extension.

	The Sound Extension extends Horde3D with the capability of 3D positional audio with the help
	of OpenAL. It was designed to integrate as nicely as possible with Horde3D, therefore it comes
	with some limitations, such as the lack of streaming sound support. This means the whole audio
	file will be read and decoded all at once, which can be quite time consuming for larger files.

	The extension currently decodes ogg vorbis and wave audio files but decoders for more formats
	can quite easily be implemented. See the decoder.h file for documentation on how to implement more
	audio decoders.

	To install the extension, copy the Extensions directory to the path where the Horde3D SDK resides.
	If your version of Horde3D SDK is <= 1.0.0 Beta 2 you will need to apply the patch found in this
	forum thread: http://www.horde3d.org/forums/viewtopic.php?f=3&t=577.
	In Visual Studio, add the extension, sample, ogg, vorbis and vorbisfile projects to the Horde3D solution.
	Then add the extension project to the project dependencies of the Horde3D Engine and the Horde3D Engine to
	the dependencies of the Sound Sample. After that, include 'Sound/Source/extension.h' in 'egExtensions.cpp'
	of the engine and add the following line to 'egExtensions.cpp' to link against the sound extension (under Windows):

	- #pragma comment( lib, "Extension_Sound.lib" )

	Finally, add the following line to ExtensionManager::installExtensions to register the extension

	- installExtension( Horde3DSound::getExtensionName, Horde3DSound::initExtension, Horde3DSound::releaseExtension );

	The extension is then part of the Horde3D DLL and can be used with the Horde3DSound.h header file.

	When using the extension a sound device needs to be opened for playback, then a listener node needs
	to be created and activated. The activated listener node will act as the ears and all 3D sound
	calculations will be based on that node's position and orientation. Then you can start creating
	sound resources, attaching them to sound nodes and start playing the nodes.

	OpenAL will need to be installed to be able to run any applications using the Sound Extension.
*/


/* Group: Constants */

/*
	Constants: Predefined constants
	RST_SoundResource	- Type identifier of Sound resource type
	SNT_ListenerNode	- Type identifier of Listener scene node
	SNT_SoundNode		- Type identifier of Sound scene node
*/
const int RST_SoundResource = 200;
const int SNT_ListenerNode = 201;
const int SNT_SoundNode = 202;


/* Group: Enumerations */
struct SoundResParams
{
	/*	Enum: SoundResParams
			The available Sound resource parameters.

		SamplingRate	- Sampling rate in Hz [type: int, read-only]
		BitDepth		- Bit-depth of the sound [type: int, read-only]
		Channels		- Number of channels [type: int, read-only]
		BitRate			- Average bitrate [type: int, read-only]
		Runtime			- Total runtime of the sound in seconds [type: float, read-only]
	*/
	enum List
	{
		SamplingRate = 20000,
		BitDepth,
		Channels,
		BitRate,
		Runtime
	};
};

struct ListenerNodeParams
{
	/*	Enum: ListenerNodeParams
			The available Listener node parameters.

		MasterGain		- Amplitude multiplier (volume), this affects all sounds (default: 1.0) [type: float]
		DopplerFactor	- *currently has no effect* Exaggeration factor for doppler effect (default: 1.0) [type: float]
		SpeedOfSound	- *currently has no effect* Speed of sound in same units as velocities (default: 343.3) [type: float]
	*/
	enum List
	{
		MasterGain = 20000,
		DopplerFactor,
		SpeedOfSound,
	};
};

struct SoundNodeParams
{
	/*	Enum: SoundNodeParams
			The available Sound node parameters.

		SoundRes			- The resource used for audio playback [type: ResHandle]
		Gain				- Amplitude multiplier (volume) (default: 1.0) [type: float]
		Pitch				- Pitch shift (value range: 0.5-2.0; default: 1.0) [type: float]
		Offset				- Position of the sound's playback in seconds [type: float]
		Loop				- Determines if the sound should loop after it reaches the end (Values: 0, 1) [type: int]
		MaxDistance			- This is used for distance based attenuation calculations, for explanation on how this
							  exactly is used in each distance model see the DistanceModels section. This will also clamp
							  distances greater than this value if the InverseDistanceClamped, LinearDistanceClamped or
							  ExponentDistanceClamped distance model is used. (default: MAX_FLOAT) [type: float]
		RolloffFactor		- This is used for distance based attenuation calculations, for explanation on how this
							  exactly is used in each distance model see the DistanceModels section. (default: 1.0) [type: float]
		ReferenceDistance	- This is used for distance based attenuation calculations, for explanation on how this
							  exactly is used in each distance model see the DistanceModels section. This will also clamp
							  distances below this value if the InverseDistanceClamped, LinearDistanceClamped or
							  ExponentDistanceClamped distance model is used. (default: 1.0) [type: float]
		MinGain				- This indicates the minimal gain guaranteed for the sound. At the end of processing of various attenuation
							  factors such as distance based attenuation and the sound's Gain value, the effective gain calculated is
							  compared to this value. If the effective gain is lower than this value, this value is applied. This happens
							  before the listener's MasterGain is applied. (value range: 0.0-1.0; default: 0.0) [type: float]
		MaxGain				- This indicates the maximal gain permitted for the sound. At the end of processing of various attenuation
							  factors such as distance based attenuation and the sound's Gain value, the effective gain calculated is
							  compared to this value. If the effective gain is higher than this value, this value is applied. This happens
							  before the listener's MasterGain is applied. (value range: 0.0-1.0; default: 1.0) [type: float]
	*/
	enum List
	{
		SoundRes = 21000,
		Gain,
		Pitch,
		Offset,
		Loop,
		MaxDistance,
		RolloffFactor,
		ReferenceDistance,
		MinGain,
		MaxGain
	};
};


struct DistanceModels
{
	/*	Enum: DistanceModels
			The available distance models.

		The variables used in the calculations explained::
		- Distance = the distance between the listener and sound node
		- Gain = the sound's volume after distance based attenuation
		- ReferenceDistance, RolloffFactor and MaxDistance = sound node parameters

		None					- No distance based attenuation will be applied.
		InverseDistance			- Distance based attenuation will be calculated using the following formula:
								  Gain = ReferenceDistance / (ReferenceDistance + RolloffFactor * (Distance-ReferenceDistance));
								  ReferenceDistance indicates the distance which the listener will experience the sound's Gain value.
								  RolloffFactor can used to increase or decrease the range of a sound by increasing or decreasing the
								  attenuation, respectivly.
		InverseDistanceClamped	- This is the same as InverseDistance but it clamps the Distance before calculating the effective Gain:
								  Distance = max(Distance, ReferenceDistance);
								  Distance = min(Distance, MaxDistance);
								  (default distance model)
		LinearDistance			- This models a linear drop-off in gain as distance increases between the sound and listener.
								  Distance based attenuation will be calculated using the following formula:
								  Gain = (1-RolloffFactor * (Distance-ReferenceDistance) / (MaxDistance-ReferenceDistance));
		LinearDistanceClamped	- This is the same as LinearDistance but it clamps the Distance before calculating the effective Gain:
								  Distance = max(Distance, ReferenceDistance);
								  Distance = min(Distance, MaxDistance);
		ExponentDistance		- This models an exponential drop-off in gain as distance increases between the sound and listener.
								  Distance based attenuation will be calculated using the following formula:
								  Gain = (Distance / ReferenceDistance) ^ (-RolloffFactor);
								  where the ^ operation raises it's first operand to the power of it's second operand.
		ExponentDistanceClamped	- This is the same as ExponentDistance but it clamps the Distance before calculating the effective Gain:
								  Distance = max(Distance, ReferenceDistance);
								  Distance = min(Distance, MaxDistance);
	*/
	enum List
	{
		None = 0,
		InverseDistance,
		InverseDistanceClamped,
		LinearDistance,
		LinearDistanceClamped,
		ExponentDistance,
		ExponentDistanceClamped
	};
};


namespace Horde3DSound
{
	/* Group: Basic functions */
	/* 	Function: openDevice
			Opens a sound device for playback.

		This function opens and initializes a sound device for playback. This needs to be called before
		any sound resources or nodes can be created or used. It will fail if another device is already
		open.

		Parameters:
			device	- name of the device to open (use NULL for default device)

		Returns:
			true in case of success, otherwise false
	*/
	DLL bool openDevice( const char *device );

	/* 	Function: closeDevice
			Closes the currently open sound device.

		This function closes the currently open sound device.

		Parameters:
			none

		Returns:
			nothing
	*/
	DLL void closeDevice();

	/* 	Function: getOpenDevice
			Gets the name of the currently open sound device.

		This function returns the name of the currently open sound device.

		Parameters:
			none

		Returns:
			name of the open device or NULL is none is open.
	*/
	DLL const char *getOpenDevice();

	/* 	Function: queryDevice
			Returns the name of a sound device.

		This function returns the name of a sound device from an internal list. If the index specified
		is greater than the number of the available sound devices, NULL is returned.

		Parameters:
			index	- index of sound device within the internal list (starting with 0)

		Returns:
			name of a sound device or NULL
	*/
	DLL const char *queryDevice( int index );

	/* 	Function: getDistanceModel
			Gets the active distance model.

		This function return the distance model used for calculating distance based attenuation.

		Parameters:
			none

		Returns:
			currently active distance model
	*/
	DLL DistanceModels::List getDistanceModel();

	/* 	Function: setDistanceModel
			Sets the active distance model.

		This function sets the distance model used for calculating distance based attenuation.

		Parameters:
			model	- distance model to use

		Returns:
			true if the distance model could be set, otherwise false
	*/
	DLL bool setDistanceModel( DistanceModels::List model );

	/* Group: Listener-specific scene graph functions */
	/* 	Function: addListenerNode
			Adds a Listener node to the scene.

		This function creates a new Listener node and attaches it to the specified parent node.

		Parameters:
			parent	- handle to parent node to which the new node will be attached
			name	- name of the node

		Returns:
			 handle to the created node or 0 in case of failure
	*/
	DLL NodeHandle addListenerNode( NodeHandle parent, const char *name );

	/* 	Function: getActiveListener
			Returns the handle of the active Listener node.

		This function returns the handle of the currently active Listener node.

		Parameters:
			none

		Returns:
			handle to active Listener node or 0 if there is no active Listener node
	*/
	DLL NodeHandle getActiveListener();

	/* 	Function: setActiveListener
			Sets the active Listener node.

		This function sets the currently active Listener node. This node will act as the
		ears and all 3D sound calculations will be based on this node's position and orientation.

		Parameters:
			listenerNode	- handle to the Listener node.

		Returns:
			true in case of success, otherwise false
	*/
	DLL bool setActiveListener( NodeHandle listenerNode );

	/* Group: Sound-specific scene graph functions */
	/* 	Function: addSoundNode
			Adds a Sound node to the scene.

		This function creates a new Sound node and attaches it to the specified parent node.

		Parameters:
			parent		- handle to parent node to which the new node will be attached
			name		- name of the node
			soundRes	- handle to Sound resource which will be used for playback

		Returns:
			 handle to the created node or 0 in case of failure
	*/
	DLL NodeHandle addSoundNode( NodeHandle parent, const char *name, ResHandle soundRes );

	/* 	Function: isSoundPlaying
			Checks if an Sound node is playing.

		This function returns whether the Sound node is currently playing or not.

		Parameters:
			soundNode	- handle to the Sound node

		Returns:
			 true if the Sound node is currently playing, otherwise false
	*/
	DLL bool isSoundPlaying( NodeHandle soundNode );

	/* 	Function: playSound
			Starts the audio playback of a Sound node.

		This function will start the audio playback of a Sound node.

		Parameters:
			soundNode	- handle to the Sound node

		Returns:
			 nothing
	*/
	DLL void playSound( NodeHandle soundNode );

	/* 	Function: pauseSound
			Pauses the playback of a Sound node.

		This function will pause the playback of a Sound node.

		Parameters:
			soundNode	- handle to the Sound node

		Returns:
			 nothing
	*/
	DLL void pauseSound( NodeHandle soundNode );

	/* 	Function: rewindSound
			Rewinds the playback of a Sound node.

		This function will rewind the playback of a Sound node. If the Sound node is
		playing while being rewinded it will continue to play from it's rewinded position.

		Parameters:
			soundNode	- handle to the Sound node

		Returns:
			 nothing
	*/
	DLL void rewindSound( NodeHandle soundNode );
};