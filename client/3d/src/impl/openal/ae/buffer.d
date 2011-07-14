/*
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

module api.openal.buffer;

import api.openal.source.source;

interface Buffer {
	@property
	string name();
	@property
	void name(string);
	
	@property
	Source targetSource();
	@property
	void targetSource(Source);
	
	@property
	uint frequency();
	@property
	void frequency(uint);
	
	@property
	uint bitDepth();
	@property
	void bitDepth(uint);
	
	@property
	uint channels();
	@property
	void channels(uint); /// =1 for 3D sound
	
	@property
	uint size();
	@property
	void size(uint);
	
	@property
	ubyte[] data();
	@property
	void data(ubyte[]);
	
	enum Format {
		AL_FORMAT_MONO8,
		AL_FORMAT_MONO16,
		AL_FORMAT_STEREO8,
		AL_FORMAT_STEREO16
	}
}
