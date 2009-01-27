Horde3D Sound Extension
-----------------------

Copyright (C) 2008-2009 Ulf Nilsson Tännström

The Sound Extension is licensed under the terms of the GNU Lesser General Public License (LGPL).

It has the following dependencies:
	- Ogg, Vorbis and Vorbisfile
		http://www.xiph.org/
	- OpenAL
		http://www.openal.org/


The Sound Extension extends Horde3D with the capability of 3D positional audio with the help
of OpenAL. It was designed to integrate as nicely as possible with Horde3D, therefore it comes
with some limitations, such as the lack of streaming sound support. This means the whole audio
file will be read and decoded all at once, which can be quite time consuming for larger files.

The extension currently decodes ogg vorbis and wave audio files but decoders for more formats
can quite easily be implemented. See the decoder.h file for documentation on how to implement more
audio decoders.

To install the extension, copy the Extensions directory to the path where the Horde3D SDK resides,
so that the two directories are on the same level in the hierarchy:

Horde3D
	-> Extensions
		-> Sound
	-> Horde3D
		-> Binaries
		-> ...

If your version of Horde3D SDK is <= 1.0.0 Beta 2 you will need to apply the patch found in this forum thread:
http://www.horde3d.org/forums/viewtopic.php?f=3&t=577

In Visual Studio, add the extension, sample, ogg, vorbis and vorbisfile projects to the Horde3D solution.
Then add the extension project to the project dependencies of the Horde3D Engine and the Horde3D Engine to
the dependencies of the Sound Sample. After that, include 'Sound/Source/extension.h' in 'egExtensions.cpp'
of the engine and add the following line to 'egExtensions.cpp' to link against the sound extension (under Windows):

#pragma comment( lib, "Extension_Sound.lib" )

Finally, add the following line to ExtensionManager::installExtensions to register the extension:

installExtension( Horde3DSound::getExtensionName, Horde3DSound::initExtension, Horde3DSound::releaseExtension );

The extension is then part of the Horde3D DLL and can be used with the Horde3DSound.h header file.

When using the extension a sound device needs to be opened for playback, then a listener node needs
to be created and activated. The activated listener node will act as the ears and all 3D sound
calculations will be based on that node's position and orientation. Then you can start creating
sound resources, attaching them to sound nodes and start playing the nodes.

OpenAL will need to be installed to be able to run any applications using the Sound Extension.


ChangeLog
---------

1.0	- Initial release

------------------------------------------------------------------------------------------
Notes on sample application
------------------------------------------------------------------------------------------

To run the sample, you have to build it first. You will also have to build ogg, vorbis and
vorbisfile and make sure the Horde3D engine was built with the Sound extension. The demo should
then be located inside the 'Binaries/Win32' folder. You will also need to make sure you copied
the 'Binaries/Content' folder from the Sound extension package to your Horde3D SDK directory.
You can then run the demo executable from the 'Binaries/Win32' directory.

OpenAL will need to be installed prior to running the sample.


Input:

	Use WASD to move and the mouse to look around.
	Hold down LSHIFT to move faster.
	1 pauses/plays the music.
	2 rewinds the music.
	3 and 4 changes the volume.
	5 and 6 changes the pitch.
	7 toggles whether to loop the music or not.
	8 rotates between different distance models.
	F1 sets fullscreen mode.
	F3 switches between forward and deferred shading.
	F7 toggles debug view.
	F8 toggles wireframe mode.
	F9 toggles information display.
	ESC quits the application.

Notes on content:

	The speaker and tiled floor models and textures were created by
	James McLellan (http://dev.ironfoot.co.uk/) and are distributed
	under the terms of the Creative Commons Attribution-Noncommercial
	3.0 License (http://creativecommons.org/licenses/by-nc/3.0/).

	The music "Stringed Disco" was created by Kevin MacLeod (incompetech.com)
	and is distributed under the terms of the Creative Commons
	Attribution 3.0 License (http://creativecommons.org/licenses/by/3.0/).