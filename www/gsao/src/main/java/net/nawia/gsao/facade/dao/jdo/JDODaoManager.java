package net.nawia.gsao.facade.dao.jdo;

import java.util.Collection;

import javax.jdo.PersistenceManager;
import javax.jdo.PersistenceManagerFactory;

import net.nawia.gsao.facade.dao.DaoManager;
import net.nawia.gsao.facade.dao.DaoTx;

public class JDODaoManager implements DaoManager {
	private PersistenceManager pm;
	private JDODaoTx tx;
	
	public static boolean matches(Object resource) {
		return resource instanceof PersistenceManagerFactory;
	}

	public JDODaoManager(Object pu) {
		PersistenceManagerFactory pmf = (PersistenceManagerFactory) pu;
		pm = pmf.getPersistenceManager();
		tx = new JDODaoTx(pm.currentTransaction());
	}

	@Override
	public DaoTx getCurrentTx() {
		return tx;
	}

	@Override
	public <T> T findById(Class<T> cls, Object key) {
		return pm.getObjectById(cls, key);
	}

	@SuppressWarnings("unchecked")
	@Override
	public <T> Collection<T> findAllById(Class<T> cls, Collection<Object> keys) {
		return pm.getObjectsById(keys);
	}

	@Override
	public <T> T persist(T pc) {
		return pm.makePersistent(pc);
	}

	@Override
	public <T> Collection<T> persistAll(Collection<T> pcs) {
		return pm.makePersistentAll(pcs);
	}

	@Override
	public <T> T[] persistAll(T[] pcs) {
		return pm.makePersistentAll(pcs);
	}

	@Override
	public <T> void delete(T pc) {
		pm.deletePersistent(pc);
	}

	@Override
	public <T> void deleteAll(T[] pc) {
		pm.deletePersistentAll(pc);
	}

	@Override
	public <T> void deleteAll(Collection<T> pcs) {
		pm.deletePersistentAll(pcs);
	}

	@Override
	public Object getNativeManager() {
		return pm;
	}
	
}
