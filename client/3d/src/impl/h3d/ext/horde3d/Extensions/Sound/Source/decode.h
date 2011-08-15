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

#ifndef _Horde3DSound_decode_H_
#define _Horde3DSound_decode_H_

// =================================================================================================
// Class WaveDecoder
// =================================================================================================

/*
HOWTO: implement an audio decoder

First step is to create a new class inheriting from the SoundDecoder class and implement the init and decodeData functions.
You will also need to implement two more functions, which follows the decoderFactoryFunc and determineCodecFunc typedef.

Here is an example on how a decoder class could look like:

class MyDecoder : public SoundDecoder
{
private:
	//some variables to store the audio file and keep track on how much we've read from it
	char *_data;
	size_t _size;
	size_t _sizeRead;
public:
	//our factory function
	static SoundDecoder *factoryFunc()
	{
		return new MyDecoder();
	}

	static bool determineCodec( const char *data, size_t size )
	{
		//here we check for any unique identifiers or any other way to detect if
		//the specified audio file can be decoded using this decoder



		if( strncmp( data[0], "mycodec_identifier", 18 ) == 0 )
			return true;

		return false;
	}

	const char *init( const char *data, size_t size, SoundInfo &info )
	{
		//fill info with the sound's properties
		//below is just an example on what values these could have, you will
		//need to parse the sound file to get the right values
		info.samplingRate = 44100;
		info.bitDepth = 16;
		info.channels = 1;
		info.bitRate = 1840000;
		info.runtime = 192.5;

		//store the audio file so we can decode the data later on
		_data = new char[size];
		memcpy( _data, &data[offset], size );
		_size = size;
		_sizeRead = 0;

		//we didn't fail, so we return NULL
		return 0x0;
	}

	void release()
	{
		//make sure to release any allocated resources
		delete[] _data;
		_data = 0x0;
	}

	size_t decodeData( char *buffer, size_t size ) = 0;
	{
		//first we make sure we aren't trying to read more data than we have left
		size_t sizeToRead = size;
		size_t sizeLeft = _size - _sizeRead;

		if( sizeToRead > sizeLeft )
			sizeToRead = sizeLeft;

		//here you would need to actually decode the audio file first and then copy
		//it to the buffer, but for the example i will just copy the encoded audio
		//data straight off

		memcpy( buffer, _data + _sizeRead, sizeToRead );
		_sizeRead += sizeToRead;

		//return the size read
		return sizeToRead;
	}
};


The final step is to register the decoder using SoundManager::instance()->registerDecoder in the initExtension function found in extension.cpp
Note that registering the decoder needs to be done after SoundManager::instance()->init has been called.
*/

struct SoundInfo
{
	int samplingRate; //in Hz
	int bitDepth;
	int channels;
	int bitRate; //average bitrate
	float runtime;
};

// =================================================================================================

class SoundDecoder
{
public:

	//data contains the audio file to decode later on and size contains it's size
	//the data should be stored so the audio file can be decoded from any point between the init and release functions are called
	//you will have to fill the info param with the audio file's properties
	//should return NULL on success or the error encountered on failure
	virtual const char *init( const char *data, size_t size, SoundInfo &info ) = 0;

	//called before the object is destroyed, should be used to free any resources allocated
	virtual void release()
	{
	}

	//buffer is the where the decoded audio data should go and size contains the wanted size to decode
	//should return the how much audio data could be decoded, can return less than the wanted size if an error occurred or end of file was reached
	virtual size_t decodeData( char *buffer, size_t size ) = 0;
};

//should return a pointer to an instance of your decoder class
typedef SoundDecoder *(*decoderFactoryFunc)();

//the function is used for determining if the decoder can decode the specified audio file
//first param contains the audio file and second param contains it's size
//should return true if the decoder can decode the specified audio file, otherwise false
typedef bool (*determineCodecFunc)( const char *, size_t );


#endif // _Horde3DSound_decode_H_
