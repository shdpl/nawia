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

module impl.openal.ae.source.source;

import impl.openal.ae.buffer,
	impl.openal.ae.playback,
	gl3n.linalg;

class Source {
	bool active;
	float pitch;
	bool loops;
	Playback playPosition;
	
	
	
	vec3 position;
	bool posIsLocalToListener;
	vec3 velocity;
	vec3 direction;
	
	float gain;
	float gainMin;
	float gainMax;
	
	float gainInCone;
	float gainOutCone;
	float coneAngle;
	
	float radius;
	float radiusHalfDecay;
	float roloff;
	
	Buffer[] buffers;
	
	enum Type {
		AL_UNDETERMINED,
		AL_STATIC, 
		AL_STREAMING
	}
	
	enum State {
		AL_STOPPED,
		AL_PLAYING
	}
	
	enum DistanceModel {
		BLAH
	}
	
	
}
