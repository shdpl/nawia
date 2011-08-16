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

module ge.res.particle;

public import std.datetime;

public import type.color.rgba;

private import ge.res.resource;


interface IParticle {
	ColorRGBA!float color() @property;
	void color(ColorRGBA!float) @property;
	
	float size() @property;
	void size(float) @property;
	
	float velocity() @property;
	void velocity(float) @property;
	
	
	float velocityRot() @property;
	void velocityRot(float) @property;
	
	StopWatch lifeMin() @property;
	void lifeMin(StopWatch) @property;
	
	StopWatch lifeMax() @property;
	void lifeMax(StopWatch) @property;
	
	float powerStartMin() @property;
	void powerStartMin(float) @property;
	
	float powerStartMax() @property;
	void powerStartMax(float) @property;
	
	float powerEnd() @property;
	void powerEnd(float) @property;
	
}
