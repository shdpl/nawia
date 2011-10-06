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

module ge.component.light;

public import
	type.color.rgb,
	ge.res.material;

private import
	ge.component.component;
	

interface ILight : IComponent {
	@property {
		IMaterial material();
		void material(IMaterial mat);
	}
	
	@property {
		float radius();
		void radius(float value);
	}
	
	@property {
		ColorRGB!float color();
		void color(ColorRGB!float value);
	}
	
	@property {
		float intensity();
		void intensity(float value);
	}
	
	@property {
		float fov();
		void fov(float value);
	}
	
	@property {
		int shadowMapsCount();
		void shadowMapsCount(int value);
	}
	
	@property {
		float shadowSegmentation();
		void shadowSegmentation(float value);
	}
	
	@property {
		float shadowBias();
		void shadowBias(float value);
	}

	@property {
		string contextLighting();
		void contextLighting(string value);
	}
	
	@property {
		string contextShadowing();
		void contextShadowing(string value);
	}
}
