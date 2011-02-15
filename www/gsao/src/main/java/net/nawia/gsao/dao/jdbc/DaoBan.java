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
package net.nawia.gsao.dao.jdbc;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.*;
import java.util.logging.Logger;

import net.nawia.gsao.dao.exceptions.ExceptionDaoInit;
import net.nawia.gsao.dao.exceptions.RuntimeExceptionDao;
import net.nawia.gsao.domain.Ban;
import net.nawia.gsao.domain.Ban.BAN_T;


public class DaoBan extends DaoJdbc<Integer, Ban> implements
		net.nawia.gsao.dao.DaoBan {
	private static final Logger _log = Logger.getLogger(DaoBan.class.getName());
	private static final String _tableName = "bans"; // TODO: read from
														// annotation

	private Statement _findAll = null;
	private PreparedStatement _find = null;
	private PreparedStatement _remove = null;
	private PreparedStatement _persistNew = null;
	private PreparedStatement _persistOld = null;

	public DaoBan() throws ExceptionDaoInit {
		super();
		_log.entering(DaoBan.class.getName(), "DaoBan()");
	}

	// TODO: no continuity with database native sequencer
	private static final String _qPersistNew = "INSERT INTO \""
			+ _tableName
			+ "\" (\"type\", \"value\", \"param\", \"active\", \"expires\", \"added\", \"admin_id\", \"comment\","
			+ "\"reason\", \"action\", \"statement\") VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";
	private static final String _qPersistOld = "UPDATE \""
			+ _tableName
			+ "\" SET \"type\" = ?, \"value\" = ?, \"param\" = ?, \"active\" = ?, \"expires\" = ?, \"added\" = ?,"
			+ " \"admin_id\" = ?, \"comment\" = ?, \"reason\" = ?, \"action\" = ?, \"statement\" = ? WHERE \"id\" = ?";

	public void persist(Ban entity) {
		final int eid = entity.getId();
		try {
			if (0 == eid) {
				if (null == _persistNew)
					_persistNew = _conn.prepareStatement(_qPersistNew,
							Statement.RETURN_GENERATED_KEYS);
				_persistNew.setLong(1, entity.getType().ordinal());
				_persistNew.setInt(2, entity.getValue());
				_persistNew.setLong(3, entity.getParam());
				_persistNew.setShort(4, entity.getActive());
				_persistNew.setLong(5, entity.getExpires().getTime());
				_persistNew.setLong(6, entity.getAdded().getTime());
				_persistNew.setInt(7, entity.getAdmin_id());
				_persistNew.setString(8, entity.getComment());
				_persistNew.setInt(9, entity.getReason());
				_persistNew.setInt(10, entity.getAction());
				_persistNew.setString(11, entity.getStatement());
				if (1 != _persistNew.executeUpdate())
					throw new RuntimeExceptionDao("Could not add " + entity);
				ResultSet rs = _persistNew.getGeneratedKeys();
				if (rs.next())
					entity.setId(rs.getInt(1));
			} else {
				if (null == _persistOld)
					_persistOld = _conn.prepareStatement(_qPersistOld);
				_persistNew.setLong(1, entity.getType().ordinal());
				_persistNew.setInt(2, entity.getValue());
				_persistNew.setLong(3, entity.getParam());
				_persistNew.setShort(4, entity.getActive());
				_persistNew.setLong(5, entity.getExpires().getTime());
				_persistNew.setLong(6, entity.getAdded().getTime());
				_persistNew.setInt(7, entity.getAdmin_id());
				_persistNew.setString(8, entity.getComment());
				_persistNew.setInt(9, entity.getReason());
				_persistNew.setInt(10, entity.getAction());
				_persistNew.setString(11, entity.getStatement());
				_persistNew.setInt(12, entity.getId());
				if (1 != _persistOld.executeUpdate())
					throw new IllegalArgumentException("Entity with id = "
							+ entity.getId() + " does not exists");
			}
		} catch (SQLException e) {
			throw new RuntimeExceptionDao("Error while persisting " + entity, e);
		}
	}

	private static final String _qRemove = "DELETE FROM \"" + _tableName
			+ "\" WHERE \"id\" = ?";

	public void remove(Ban entity) {
		try {
			if (null == _remove)
				_remove = _conn.prepareStatement(_qRemove);
			_remove.setInt(1, entity.getId());
			if (1 != _remove.executeUpdate())
				throw new IllegalArgumentException(
						"Non-existing entity passed to remove(): " + entity);

		} catch (SQLException e) {
			throw new RuntimeExceptionDao();
		}
	}

	private static final String _qFindById = "SELECT * FROM \"" + _tableName
			+ "\" WHERE \"id\" = ?";

	public Ban find(Integer id) {
		assert (id != null);
		try {
			if (null == _find)
				_find = _conn.prepareStatement(_qFindById);
			_find.setInt(1, id);
			ResultSet rs = _find.executeQuery();
			if (rs.next())
				return new Ban(rs.getInt("id"), BAN_T.values()[(int) rs.getLong("type")],
						rs.getInt("value"), rs.getLong("param"),
						rs.getShort("active"), new Date(rs.getLong("expires")),
						new Date(rs.getLong("added")), rs.getInt("admin_id"),
						rs.getString("comment"), rs.getInt("reason"),
						rs.getInt("action"), rs.getString("statement"));
			return null;
		} catch (SQLException e) {
			throw new RuntimeExceptionDao("", e);
		}
	}

	private static final String _qFindAll = "SELECT * FROM \"" + _tableName +"\"";

	public List<Ban> findAll() {
		List<Ban> ret = new ArrayList<Ban>();

		try {
			if (null == _findAll)
				_findAll = _conn.createStatement();
			ResultSet rs = _findAll.executeQuery(_qFindAll);
			while (rs.next()) {
				ret.add(new Ban(rs.getInt("id"), BAN_T.values()[(int) rs.getLong("type")], rs
						.getInt("value"), rs.getLong("param"), rs
						.getShort("active"), new Date(rs.getLong("expires")),
						new Date(rs.getLong("added")), rs.getInt("admin_id"),
						rs.getString("comment"), rs.getInt("reason"), rs
								.getInt("action"), rs.getString("statement")));
			}
			return ret;
		} catch (SQLException e) {
			throw new RuntimeExceptionDao();
		}
	}

	@Override
	public void close() {
		try {
			_findAll.close();
			super.close();
		} catch (SQLException e) {
			_log.warning("Could not release Dao resources: "+ e);
		}
	}
}
