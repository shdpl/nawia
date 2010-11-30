// *************************************************************************************************
//
// Horde3D Sound Extension is made available under the MIT License.
// --------------------------------------
//
// Copyright (c) 2008-2010 Ulf Nilsson TŠnnstršm
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
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

	The Sound Extension extends Horde3D with the capability of 3D positional audio with the help of
	OpenAL. It was designed to integrate as nicely as possible with Horde3D, therefore it lacks support
	for streaming resources. This means the whole audio file will be read and decoded all at once, which
	can be quite time consuming for larger files.

	The extension currently decodes ogg vorbis and wave audio files but decoders for more formats
	can quite easily be implemented. See the decoder.h file for documentation on how to implement more
	audio decoders.

	To install the extension, copy the Extensions directory to the path where the Horde3D SDK resides.
	In Visual Studio, add the extension, sample, ogg, vorbis and vorbisfile projects to the Horde3D solution.
	Then add the extension project to the project dependencies of the Horde3D Engine and the Horde3D Engine to
	the dependencies of the Sound Sample. After that, include 'Sound/Source/extension.h' in 'egExtensions.cpp'
	of the engine and add the following line to 'egExtensions.cpp' to link against the sound extension (under Windows):

	- #pragma comment( lib, "Extension_Sound.lib" )

	Finally, add the following line to ExtensionManager::installExtensions to register the extension

	- installExtension( Horde3DSound::getExtensionName, Horde3DSound::initExtension, Horde3DSound::releaseExtension );

	The extension is then part of the Horde3D DLL and can be used with the Horde3DSound.h header file.

	To use the extension a sound device needs to be opened for playback, then a listener node needs
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
struct H3DSoundResParams
{
	/*	Enum: SoundResParams
			The available Sound resource parameters.

		SoundElem       - Base element
		SamplingRate	- Sampling rate in Hz [type: int, read-only]
		BitDepth		- Bit-depth of the sound [type: int, read-only]
		Channels		- Number of channels [type: int, read-only]
		BitRate			- Average bitrate [type: int, read-only]
		Runtime			- Total runtime of the sound in seconds [type: float, read-only]
	*/
	enum List
	{
		SoundElem = 20000,
		SamplingRate,
		BitDepth,
		Channels,
		BitRate,
		Runtime
	};
};

struct H3DListenerNodeParams
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

struct H3DSoundNodeParams
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


struct H3DDistanceModels
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


/* Group: Basic functions */
/* 	Function: h3dOpenDevice
		Opens a sound device for playback.

	This function opens and initializes a sound device for playback. This needs to be called before
	any sound resources or nodes can be created or used. It will fail if another device is already
	open.

	Parameters:
		device	- name of the device to open (use NULL for default device)

	Returns:
		true in case of success, otherwise false
*/
DLL bool h3dOpenDevice( const char *device );

/* 	Function: h3dCloseDevice
		Closes the currently open sound device.

	This function closes the currently open sound device.

	Parameters:
		none

	Returns:
		nothing
*/
DLL void h3dCloseDevice();

/* 	Function: h3dGetOpenDevice
		Gets the name of the currently open sound device.

	This function returns the name of the currently open sound device.

	Parameters:
		none

	Returns:
		name of the open device or NULL is none is open.
*/
DLL const char *h3dGetOpenDevice();

/* 	Function: h3dQueryDevice
		Returns the name of a sound device.

	This function returns the name of a sound device from an internal list. If the index specified
	is greater than the number of the available sound devices, NULL is returned.

	Parameters:
		index	- index of sound device within the internal list (starting with 0)

	Returns:
		name of a sound device or NULL
*/
DLL const char *h3dQueryDevice( int index );

/* 	Function: h3dGetDistanceModel
		Gets the active distance model.

	This function return the distance model used for calculating distance based attenuation.

	Parameters:
		none

	Returns:
		currently active distance model
*/
DLL H3DDistanceModels::List h3dGetDistanceModel();

/* 	Function: h3dSetDistanceModel
		Sets the active distance model.

	This function sets the distance model used for calculating distance based attenuation.

	Parameters:
		model	- distance model to use

*/
DLL void h3dSetDistanceModel( H3DDistanceModels::List model );

/* Group: Listener-specific scene graph functions */
/* 	Function: h3dAddListenerNode
		Adds a Listener node to the scene.

	This function creates a new Listener node and attaches it to the specified parent node.

	Parameters:
		parent	- handle to parent node to which the new node will be attached
		name	- name of the node

	Returns:
		 handle to the created node or 0 in case of failure
*/
DLL H3DNode h3dAddListenerNode( H3DNode parent, const char *name );

/* 	Function: h3dGetActiveListener
		Returns the handle of the active Listener node.

	This function returns the handle of the currently active Listener node.

	Parameters:
		none

	Returns:
		handle to active Listener node or 0 if there is no active Listener node
*/
DLL H3DNode h3dGetActiveListener();

/* 	Function: h3dSetActiveListener
		Sets the active Listener node.

	This function sets the currently active Listener node. This node will act as the
	ears and all 3D sound calculations will be based on this node's position and orientation.

	Parameters:
		listenerNode	- handle to the Listener node.
	
*/
DLL void h3dSetActiveListener( H3DNode listenerNode );

/* Group: Sound-specific scene graph functions */
/* 	Function: h3dAddSoundNode
		Adds a Sound node to the scene.

	This function creates a new Sound node and attaches it to the specified parent node.

	Parameters:
		parent		- handle to parent node to which the new node will be attached
		name		- name of the node
		soundRes	- handle to Sound resource which will be used for playback

	Returns:
		 handle to the created node or 0 in case of failure
*/
DLL H3DNode h3dAddSoundNode( H3DNode parent, const char *name, H3DRes soundRes );

/* 	Function: h3dIsSoundPlaying
		Checks if an Sound node is playing.

	This function returns whether the Sound node is currently playing or not.

	Parameters:
		soundNode	- handle to the Sound node

	Returns:
		 true if the Sound node is currently playing, otherwise false
*/
DLL bool h3dIsSoundPlaying( H3DNode soundNode );

/* 	Function: h3dPlaySound
		Starts the audio playback of a Sound node.

	This function will start the audio playback of a Sound node.

	Parameters:
		soundNode	- handle to the Sound node

	Returns:
		 nothing
*/
DLL void h3dPlaySound( H3DNode soundNode );

/* 	Function: h3dPauseSound
		Pauses the playback of a Sound node.

	This function will pause the playback of a Sound node.

	Parameters:
		soundNode	- handle to the Sound node

	Returns:
		 nothing
*/
DLL void h3dPauseSound( H3DNode soundNode );

/* 	Function: h3dRewindSound
		Rewinds the playback of a Sound node.

	This function will rewind the playback of a Sound node. If the Sound node is
	playing while being rewinded it will continue to play from it's rewinded position.

	Parameters:
		soundNode	- handle to the Sound node

	Returns:
		 nothing
*/
DLL void h3dRewindSound( H3DNode soundNode );

