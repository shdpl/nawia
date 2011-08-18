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


module msg.provider;
public import msg.mediator.mediator; //FIXME

interface IMsgProvider(MSG) {
	mixin template InjectMsgListener(MSG) {
		public bool register(IMsgProvider!MSG what) {
			return true;
		}
		public bool unregister(IMsgProvider!MSG what) {
			return true;
		}
		public void deliver(MSG msg) {
		}
	}
	bool register(IMsgProvider!MSG prvdr);
	bool unregister(IMsgProvider!MSG prvdr);
	public void deliver(MSG msg);
}
