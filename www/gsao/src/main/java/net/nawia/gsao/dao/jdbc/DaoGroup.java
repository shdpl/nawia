package net.nawia.gsao.dao.jdbc;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.List;
import java.util.Vector;
import java.util.logging.Logger;

import net.nawia.gsao.dao.exception.ExceptionDaoInit;
import net.nawia.gsao.dao.exception.RuntimeExceptionDao;
import net.nawia.gsao.domain.Group;

public class DaoGroup extends DaoJdbc<Integer, Group> implements
		net.nawia.gsao.dao.DaoGroup {
	private static final Logger _log = Logger.getLogger(DaoGroup.class
			.getName());
	private static final String _tableName = "groups"; // TODO: read from
														// annotation

	private Statement _findAll = null;
	private PreparedStatement _findAllName = null;
	private PreparedStatement _find = null;
	private PreparedStatement _remove = null;
	private PreparedStatement _persistNew = null;
	private PreparedStatement _persistOld = null;

	public DaoGroup() throws ExceptionDaoInit {
		super();
		_log.entering(DaoGroup.class.getName(), "DaoGroup()");
	}

	// TODO: no continuity with database native sequencer
	private static final String _qPersistNew = "INSERT INTO \""
			+ _tableName
			+ "\" (\"name\", \"flags\", \"access\", \"violation\", \"maxdepotitems\", \"maxviplist\") "
			+ "VALUES (?, ?, ?, ?, ?, ?)";
	private static final String _qPersistOld = "UPDATE \"" + _tableName
			+ "\" SET \"name\" = ?, \"flags\" = ?, \"access\" = ?,"
			+ " \"violation\" = ?, \"maxdepotitems\" = ?, \"maxviplist\" = ?"
			+ " WHERE \"id\" = ?";

	public void persist(Group entity) {
		final int eid = entity.getId();
		try {
			if (0 == eid) {
				if (null == _persistNew)
					_persistNew = _conn.prepareStatement(_qPersistNew,
							Statement.RETURN_GENERATED_KEYS);
				_persistNew.setString(1, entity.getName());
				_persistNew.setLong(2, entity.getFlags());
				_persistNew.setInt(3, entity.getAccess());
				_persistNew.setInt(4, entity.getViolation());
				_persistNew.setInt(5, entity.getMaxdepotitems());
				_persistNew.setInt(6, entity.getMaxviplist());
				if (1 != _persistNew.executeUpdate())
					throw new RuntimeExceptionDao("Could not add " + entity);
				ResultSet rs = _persistNew.getGeneratedKeys();
				if (rs.next())
					entity.setId(rs.getInt(1));
			} else {
				if (null == _persistOld)
					_persistOld = _conn.prepareStatement(_qPersistOld);
				_persistNew.setString(1, entity.getName());
				_persistNew.setLong(2, entity.getFlags());
				_persistNew.setInt(3, entity.getAccess());
				_persistNew.setInt(4, entity.getViolation());
				_persistNew.setInt(5, entity.getMaxdepotitems());
				_persistNew.setInt(6, entity.getMaxviplist());
				_persistOld.setInt(7, entity.getId());
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

	public void remove(Group entity) {
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

	public Group find(Integer id) {
		assert (id != null);
		try {
			if (null == _find)
				_find = _conn.prepareStatement(_qFindById);
			_find.setInt(1, id);
			ResultSet rs = _find.executeQuery();
			if (rs.next())
				return new Group(id, rs.getString("name"), rs.getLong("flags"),
						rs.getInt("access"), rs.getInt("violation"),
						rs.getInt("maxdepotitems"), rs.getInt("maxviplist"));
			return null;
		} catch (SQLException e) {
			throw new RuntimeExceptionDao("", e);
		}
	}


	private static final String _qFindAll = "SELECT * FROM \"" + _tableName
			+ "\"";

	public List<Group> findAll() {
		List<Group> ret = new Vector<Group>();

		try {
			if (null == _findAll)
				_findAll = _conn.createStatement();
			ResultSet rs = _findAll.executeQuery(_qFindAll);
			while (rs.next()) {
				ret.add(new Group(rs.getInt("id"), rs.getString("name"), rs
						.getLong("flags"), rs.getInt("access"), rs
						.getInt("violation"), rs.getInt("maxdepotitems"), rs
						.getInt("maxviplist")));
			}
			return ret;
		} catch (SQLException e) {
			throw new RuntimeException(e); // FIXME: chained
											// RuntimeExceptionDao, or remove it
		}
	}

	private static final String _qFindAllByName = "SELECT * FROM \""
			+ _tableName + "\" WHERE \"name\" = ?";

	/**
	 * Currently you can choose just one of the following attributes: - name
	 */
	public List<Group> findAll(Group prototype) {
		List<Group> ret = new Vector<Group>();
		if (0 != prototype.getId()) {
			ret.add(find(prototype.getId()));
		} else if (null != prototype.getName()
				|| !prototype.getName().isEmpty()) {
			try {
				if (null == _findAllName)
					_findAllName = _conn.prepareStatement(_qFindAllByName);
				_findAllName.setString(1, prototype.getName());
				ResultSet rs = _findAllName.executeQuery();
				while (rs.next())
					ret.add(new Group(rs.getInt("id"), rs.getString("name"), rs
							.getLong("flags"), rs.getInt("access"), rs
							.getInt("violation"), rs.getInt("maxdepotitems"), rs
							.getInt("maxviplist")));
			} catch (SQLException e) {
				throw new RuntimeExceptionDao("", e);
			}
			throw new UnsupportedOperationException();
		} else {
			throw new UnsupportedOperationException();
		}
		return ret;
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
