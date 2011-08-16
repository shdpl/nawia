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

module impl.nawia.msg.mediator.std;

import std.signals;
import std.metastrings;

import msg.mediator.mediator;


//FIXME: name clash
class MediatorStD : Singleton!MediatorStD, IMsgMediator {
	
	public:
	override bool register(IMsgListener!Msg lstnr){return true;}
	override bool unregister(IMsgListener!Msg lstnr){return true;}
	
	override bool register(IMsgProvider!Msg lstnr){return true;}
	override bool unregister(IMsgProvider!Msg lstnr){return true;}
	
	bool register(IMsgFilter!Msg filter){return true;}
	bool unregister(IMsgFilter!Msg filter){return true;}
	
	override void deliver(Msg msg){}
	override void handle(Msg msg){}
	void poll(){}
	
}
