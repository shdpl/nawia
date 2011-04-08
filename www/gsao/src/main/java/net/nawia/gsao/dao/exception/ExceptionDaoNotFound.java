/*******************************************************************************
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/
package net.nawia.gsao.dao.exception;

import javax.ejb.ApplicationException;

@ApplicationException
public class ExceptionDaoNotFound extends ExceptionDao {

	/**
	 * 
	 */
	private static final long serialVersionUID = -3924298594497346366L;

	public ExceptionDaoNotFound() {
		super("Not found");
	}
	
	public ExceptionDaoNotFound(String s) {
		super("Not found: " +s);
	}
}
