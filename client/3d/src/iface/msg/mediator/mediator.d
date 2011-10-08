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

module msg.mediator.mediator;

public import msg.listener;
public import msg.provider;
public import msg.filter.filter;
public import util.singleton;

interface IMsgMediator {
	
	// TODO: maybe variadic args with msgs for dependencies
	// pure function pointer or delegate for conditions
	bool register(TypeInfo msg, IMsgFilter filter);
	bool unregister(TypeInfo msg, IMsgFilter filter);
	
	bool register(TypeInfo msg, IMsgProvider prvdr);
	bool unregister(TypeInfo msg, IMsgProvider prvdr);
	
	bool register(TypeInfo msg, IMsgListener lstnr);
	bool unregister(TypeInfo msg, IMsgListener lstnr);
	
	void deliver(Variant msg);
	void poll();
}
