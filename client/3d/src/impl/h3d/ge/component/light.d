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

module impl.h3d.ge.component.light;
	
public import 
	ge.component.light;

private import
	impl.h3d.h3d,
	impl.h3d.ge.component.component,
	impl.h3d.ge.res.material;
	
	
class Light : GEComponent, ILight {
	public:
	static immutable type = Type.Light;
	
	public:
	this(H3DNode id) {
		super(id);
	}
	
	@property {
		override Material material() {
			return new Material(getParam!int(Params.MatResI));
		}
		override void material(IMaterial value) in {
			assert(cast(Material) value);
		} body {
			Material mat = cast(Material) value;
			setParam!int(mat.id, Params.MatResI);
		}
	}
	
	@property {
		float radius() {
			return getParam!float(Params.RadiusF);
		}
		void radius(float value) {
			setParam!float(value, Params.RadiusF);
		}
	}
	
	@property {
		ColorRGB!float color() {
			return ColorRGB!float(getParam!float(Params.ColorF3, 0),
				getParam!float(Params.ColorF3, 1),
				getParam!float(Params.ColorF3, 2));
		}
		void color(ColorRGB!float value) {
			setParam!float(value.r, Params.ColorF3, 0);
			setParam!float(value.g, Params.ColorF3, 1);
			setParam!float(value.b, Params.ColorF3, 2);
		}
	}
	
	@property {
		float intensity() {
			return getParam!float(Params.ColorMultiplierF);
		}
		void intensity(float value) {
			setParam!float(value, Params.ColorMultiplierF);
		}
	}
	
	@property {
		float fov() {
			return getParam!float(Params.FovF);
		}
		void fov(float value) {
			setParam!float(value, Params.FovF);
		}
	}
	
	@property {
		int shadowMapsCount() {
			return getParam!int(Params.ShadowMapCountI);
		}
		void shadowMapsCount(int value) {
			setParam!int(value, Params.ShadowMapCountI);
		}
	}
	
	@property {
		float shadowSegmentation() {
			return getParam!float(Params.ShadowSplitLambdaF);
		}
		void shadowSegmentation(float value) {
			setParam!float(value, Params.ShadowSplitLambdaF);
		}
	}
	
	@property {
		float shadowBias() {
			return getParam!float(Params.ShadowMapBiasF);
		}
		void shadowBias(float value) {
			setParam!float(value, Params.ShadowMapBiasF);
		}
	}

	@property {
		string contextLighting() {
			return getParam!string(Params.LightingContextStr);
		}
		void contextLighting(string value) {
			setParam!string(value, Params.LightingContextStr);
		}
	}
	
	@property {
		string contextShadowing() {
			return getParam!string(Params.ShadowContextStr);
		}
		void contextShadowing(string value) {
			setParam!string(value, Params.ShadowContextStr);
		}
	}
	
	private H3DLight Params;
}
