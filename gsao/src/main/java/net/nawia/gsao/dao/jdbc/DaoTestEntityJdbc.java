package net.nawia.gsao.dao.jdbc;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.List;
import java.util.Vector;
import java.util.logging.Logger;

import org.jfree.util.Log;


import net.nawia.gsao.dao.exceptions.ExceptionDaoInit;
import net.nawia.gsao.dao.exceptions.RuntimeExceptionDao;
import net.nawia.gsao.domain.TestEntityJdbc;

public class DaoTestEntityJdbc extends DaoJdbc<Integer, TestEntityJdbc> implements net.nawia.gsao.dao.DaoTestEntityJdbc {

	static final private Logger _log = Logger.getLogger(DaoTestEntityJdbc.class
			.getName());
	private Statement _findAll = null;
	private PreparedStatement _find = null;
	private PreparedStatement _remove = null;
	private PreparedStatement _persistNew = null;
	private PreparedStatement _persistOld = null;

	public DaoTestEntityJdbc() throws ExceptionDaoInit {
		super();
	}

	// TODO: no continuity with database native sequencer
	private static final String _qPersistNew = "INSERT INTO \"test\" "
			+ "(\"examplevar\") VALUES (?)";
	private static final String _qPersistOld = "UPDATE \"test\""
			+ " SET \"examplevar\" = ? WHERE \"id\" = ?";

	public void persist(TestEntityJdbc entity) {
		final int eid = entity.getId();
		try {
			if (0 == eid) {
				if (null == _persistNew)
					_persistNew = _conn.prepareStatement(
							_qPersistNew, Statement.RETURN_GENERATED_KEYS);
				_persistNew.setInt(1, entity.getExampleVar());
				if (1 != _persistNew.executeUpdate())
					throw new RuntimeExceptionDao("Could not add " + entity);
				ResultSet rs = _persistNew.getGeneratedKeys();
				if (rs.next())
					entity.setId(rs.getInt(1));
			} else {
				if (null == _persistOld)
					_persistOld = _conn.prepareStatement(_qPersistOld);
				_persistOld.setInt(1, entity.getExampleVar());
				if (1 != _persistOld.executeUpdate())
					throw new IllegalArgumentException("Entity with id = "
							+ entity.getId() + " does not exists");
			}
		} catch (SQLException e) {
			throw new RuntimeExceptionDao("Error while persisting " +entity, e);
		}
	}

	private static final String _qRemove = "DELETE FROM \"test\" WHERE \"id\" = ?";

	public void remove(TestEntityJdbc entity) {
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

	private static final String _qFind = "SELECT * FROM \"test\" WHERE \"id\" = ?";

	public TestEntityJdbc find(Integer id) {
		try {
			if (null == _find)
				_find = _conn.prepareStatement(_qFind);
			_find.setInt(1, id);
			ResultSet rs = _find.executeQuery();
			if (rs.next()) {
				TestEntityJdbc ret = new TestEntityJdbc();
				ret.setId(id);
				ret.setExampleVar(rs.getInt("examplevar"));
				return ret;
			}
			return null;
		} catch (SQLException e) {
			throw new RuntimeExceptionDao("Invalid query ", e);
		}
	}

	private static final String _qFindAll = "SELECT * FROM \"accounts\"";

	public List<TestEntityJdbc> findAll() {
		List<TestEntityJdbc> ret = new Vector<TestEntityJdbc>();

		try {
			if (null == _findAll)
				_findAll = _conn.createStatement();
			ResultSet rs = _findAll.executeQuery(_qFindAll);
			while (rs.next()) {
				TestEntityJdbc e = new TestEntityJdbc();
				e.setId(rs.getInt("id"));
				e.setExampleVar(rs.getInt("examplevar"));
				ret.add(e);
			}
			return ret;
		} catch (SQLException e) {
			throw new RuntimeExceptionDao();
		}
	}

	@Override
	protected void finalize() throws Throwable { // TODO: lack of destructors
		super.finalize();

		try {
			_findAll.close();
		} catch (SQLException e) {
			_log.severe(this + " couldn't be finalized!");
		}
	}


}
