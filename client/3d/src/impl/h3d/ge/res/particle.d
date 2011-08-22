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

module impl.h3d.ge.res.particle;

import std.datetime;

private import std.conv;

import impl.h3d.h3d,
	type.color.rgba;

private import impl.h3d.ge.res.resource,
	ge.res.particle;

class H3DParticle : H3DResource, IParticle {
	private:
	alias H3DPartEffRes.List Elements;	//FIXME: compiler bug (move bottom)
	public:
	Movement movement;
	Rotation rotation;
	Drag drag;
	Size size;
	Color color;
	
	
	public:
	this() {
		super();
		init();
	}
	this(string name) {
		super(name);
		init();
	}
	this(int id) {
		super(id);
		init();
	}
	
	@property {
		override Duration lifeMin() {
			return dur!"nsecs"(to!int(
				10E-9 * getChannel(Elements.ParticleElem, Elements.PartLifeMinF
			)));
		}
		override void lifeMin(Duration time) {
			setChannel(Elements.ParticleElem, Elements.PartLifeMinF, time.total!("nsecs")/10E-9);
		}
	}	
	
	@property {
		override Duration lifeMax() {
			return dur!"nsecs"(to!int(
				10E-9 * getChannel(Elements.ParticleElem, Elements.PartLifeMaxF)
			));
		}
		override void lifeMax(Duration time) {
			setChannel(Elements.ParticleElem, Elements.PartLifeMaxF, time.total!("nsecs")/10E-9);
		}
	}
	
	override ResourceType type() @property {
		return ResourceType.ParticleEffect;
	}
	
	private:
	float getChannel(int channel, int property) {
		return getElemParam!float(channel, 0, property);
	}
	void setChannel(int channel, int property, float value) {
		setElemParam(value, channel, 0, property);
	}
	void init() {
		movement = new Movement;
		rotation = new Rotation;
		drag = new Drag;
		size = new Size;
		color = new Color;	//http://d.puremagic.com/issues/show_bug.cgi?id=6532
	}
	
	private:
	enum ChannelParam {
		startMin = Elements.ChanStartMinF,
		startMax = Elements.ChanStartMaxF,
		end = Elements.ChanEndRateF
	}
	
	class Size {
		@property {
			float startMin() {
				return getChannel(Elements.ChanSizeElem, Elements.ChanStartMinF);
			}
			void startMin(float value) {
				setChannel(Elements.ChanSizeElem, Elements.ChanStartMinF, value);
			}
		}
		@property {
			float startMax() {
				return getChannel(Elements.ChanSizeElem, Elements.ChanStartMaxF);
			}
			void startMax(float value) {
				setChannel(Elements.ChanSizeElem, Elements.ChanStartMaxF, value);
			}
		}
		@property {
			float end() {
				return getChannel(Elements.ChanSizeElem, Elements.ChanEndRateF);
			}
			void size(float value) {
				setChannel(Elements.ChanSizeElem, Elements.ChanEndRateF, value);
			}
		}
	}

	class Drag {
		@property {
			float startMin() {
				return getChannel(Elements.ChanDragElem, Elements.ChanStartMinF);
			}
			void startMin(float vel) {
				setChannel(Elements.ChanDragElem, Elements.ChanStartMinF, vel);
			}
		}
		@property {
			float startMax() {
				return getChannel(Elements.ChanDragElem, Elements.ChanStartMaxF);
			}
			void startMax(float vel) {
				setChannel(Elements.ChanDragElem, Elements.ChanStartMaxF, vel);
			}
		}
		@property {
			float end() {
				return getChannel(Elements.ChanDragElem, Elements.ChanEndRateF);
			}
			void end(float vel) {
				setChannel(Elements.ChanDragElem, Elements.ChanEndRateF, vel);
			}
		}
	}
	
	class Movement {
		@property {
			float startMin() {
				return getChannel(Elements.ChanMoveVelElem, Elements.ChanStartMinF);
			}
			void startMin(float vel) {
				setChannel(Elements.ChanMoveVelElem, Elements.ChanStartMinF, vel);
			}
		}
		@property {
			float startMax() {
				return getChannel(Elements.ChanMoveVelElem, Elements.ChanStartMaxF);
			}
			void startMax(float vel) {
				setChannel(Elements.ChanMoveVelElem, Elements.ChanStartMaxF, vel);
			}
		}
		@property {
			float end() {
				return getChannel(Elements.ChanMoveVelElem, Elements.ChanEndRateF);
			}
			void end(float vel) {
				setChannel(Elements.ChanMoveVelElem, Elements.ChanEndRateF, vel);
			}
		}
	}
	
	class Rotation {
		@property {
			float startMin() {
				return getChannel(Elements.ChanRotVelElem, Elements.ChanStartMinF);
			}
			void startMin(float vel) {
				setChannel(Elements.ChanRotVelElem, Elements.ChanStartMinF, vel);
			}
		}
		@property {
			float startMax() {
				return getChannel(Elements.ChanRotVelElem, Elements.ChanStartMaxF);
			}
			void startMax(float vel) {
				setChannel(Elements.ChanRotVelElem, Elements.ChanStartMaxF, vel);
			}
		}
		@property {
			float end() {
				return getChannel(Elements.ChanRotVelElem, Elements.ChanEndRateF);
			}
			void end(float vel) {
				setChannel(Elements.ChanRotVelElem, Elements.ChanEndRateF, vel);
			}
		}
	}
	
	class Color {
		public:
		@property {
			void startMin(ColorRGBA!float value) {
				setColors(ChannelParam.startMin, value);
			}
			ColorRGBA!float startMin() {
				return getColors(ChannelParam.startMin);
			}
		}
		@property {
			void startMax(ColorRGBA!float value) {
				setColors(ChannelParam.startMax, value);
			}
			ColorRGBA!float startMax() {
				return getColors(ChannelParam.startMax);
			}
		}
		@property {
			void end(ColorRGBA!float value) {
				setColors(ChannelParam.end, value);
			}
			ColorRGBA!float end() {
				return getColors(ChannelParam.end);
			}
		}

		private:
		void setColors(ChannelParam param, ColorRGBA!float colors) {
			for (int i = Colors.min; i < Colors.max; i++) {
				setChannel(param, i, colors.floats[i]);
			}
		}
		ColorRGBA!float getColors(ChannelParam param) {
			ColorRGBA!float ret;
			for (int i = Colors.min; i < Colors.max; i++) {
				ret[i] = getChannel(param, i);
			}
			return ret;
		}
		
		enum Colors {
			RED = Elements.ChanColRElem,
			GREEN = Elements.ChanColGElem,
			BLUE = Elements.ChanColBElem,
			ALPHA = Elements.ChanColAElem
		};
	}
}
