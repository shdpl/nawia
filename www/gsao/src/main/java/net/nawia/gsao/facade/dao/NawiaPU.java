package net.nawia.gsao.facade.dao;

import java.util.Collection;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.naming.NamingException;

import net.nawia.gsao.facade.dao.jdo.JDODaoManager;
import net.nawia.gsao.facade.dao.jpa.JPADaoManager;

/**
 * Nawia persistence unit delegates DAO queries to specific implementation.
 * @author shd
 */
public abstract class NawiaPU implements DaoManager {
	protected DaoManager mngr;
	
	public NawiaPU(String path) throws NamingException {

		Context myCurrentContext = new InitialContext();
		Object pu = myCurrentContext.lookup(path);
		
		if (JDODaoManager.matches(pu)) {
			mngr = new JDODaoManager(pu);
		}
		else if (JPADaoManager.matches(pu)) {
			mngr = new JPADaoManager(pu);
		}
	}

	//TODO: smarter method
	@Override
	public DaoTx getCurrentTx() {
		return mngr.getCurrentTx();
	}

	@Override
	public <T> T findById(Class<T> cls, Object key) {
		return mngr.findById(cls, key);
	}

	@Override
	public <T> Collection<T> findAllById(Class<T> cls, Collection<Object> keys) {
		return mngr.findAllById(cls, keys);
	}

	@Override
	public <T> T persist(T pc) {
		return mngr.persist(pc);
	}

	@Override
	public <T> Collection<T> persistAll(Collection<T> pcs) {
		return mngr.persistAll(pcs);
	}

	@Override
	public <T> T[] persistAll(T[] pcs) {
		return mngr.persistAll(pcs);
	}

	@Override
	public <T> void delete(T pc) {
		mngr.delete(pc);
	}

	@Override
	public <T> void deleteAll(T[] pcs) {
		mngr.deleteAll(pcs);
	}

	@Override
	public <T> void deleteAll(Collection<T> pcs) {
		mngr.deleteAll(pcs);
	}

	@Override
	public Object getNativeManager() {
		return mngr.getNativeManager();
	}
	
	
}
