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

module ge.component.component;

public import
	ge.component.camera,
	ex.ge.res.add;

private import
	type.cords.world,
	type.cords.polar,
	type.cuda.types,
	ee.component : IEEComponent = IComponent;
	
private import impl.h3d.h3d; //FIXME: drop dependency on h3d

interface IComponent : IEEComponent {
	alias H3DNodeTypes.List Type;
	
	@property Type type();
	
	@property {
		string name();
		void name(string value);
	}
	
	@property {
		string attachment();
		void attachment(string value);
	}
	
	@property {
		bool dirty();
		void dirty(bool value);
	}
	
	// FIXME: translation units
	// TODO: entity.translation.pos += [1,0,-1];
	//	@property {
	//		CordsWorld translation();
	//		void translation(CordsWorld value);
	//	}
	
	// FIXME: rotation units
	//@property {
	//	CordsPolar rotation();
	//	void rotation(CordsPolar value);
	//}
	
	@property {
		float3 scale();
		void scale(float3 value);
	}
	
	//TODO: transformation merge:
	// - transformationAbsolute();
	// - transformationRelative();
	//@property {
	//	Trnsfrm transformation();
	//	void transformation(Trnsfrm);
	//}
	

	@property {
		bool renderDisabled();
		void renderDisabled(bool value);
	}
	
	@property {
		bool shadowsDisabled();
		void shadowsDisabled(bool value);
	}
	
	@property {
		bool rayDisabled();
		void rayDisabled(bool value);
	}
	
	@property {
		bool disabled();
		void disabled(bool value);
	}

// FIXME: separate spatial module
//	E add(E, T...)(T args);
//	Variant add(T)(string path); //for scene graph
//	void clear(); ///this, and childs
//	T[] find(T)(string name) if(is(T : IComponent));
//	@property {	
//		Component parent();
//		void parent(Component value);
//	}
//	Component child(uint i) @property;

	bool visible(ICamera value);
	
	int getLOD(ICamera value);
}
