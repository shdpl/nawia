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
public import msg.mediator.mtd;

interface IMsgProvider(MSG) {
	mixin template InjectMsgListener(MSG) {
		public bool register(IMsgProvider!MSG what) {
			return MsgMediator().register(cast(IMsgProvider!Msg)what);
		}
		public bool unregister(IMsgProvider!MSG what) {
			return MsgMediator().unregister(cast(IMsgProvider!Msg)what);
		}
		public void deliver(IMSG msg) {
			return MsgMediator().deliver(msg);
		}
	}
	bool register(IMsgProvider!MSG prvdr);
	bool unregister(IMsgProvider!MSG prvdr);
	public void deliver(MSG msg);
}
