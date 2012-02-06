package net.nawia.gsao.facade.dao.jibx;

import java.util.Collection;

import javax.jdo.PersistenceManagerFactory;

import org.jibx.runtime.QName;

import net.nawia.gsao.facade.dao.DaoManager;
import net.nawia.gsao.facade.dao.DaoTx;

public class JIBXDaoManager implements DaoManager {

	public static boolean matches(Object resource) {
		return resource instanceof QName;
	}
	
	@Override
	public DaoTx getCurrentTx() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public <T> T findById(Class<T> cls, Object key) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public <T> Collection<T> findAllById(Class<T> cls, Collection<Object> keys) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public <T> T persist(T pc) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public <T> Collection<T> persistAll(Collection<T> pcs) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public <T> T[] persistAll(T[] pcs) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public <T> void delete(T pc) {
		// TODO Auto-generated method stub

	}

	@Override
	public <T> void deleteAll(T[] pcs) {
		// TODO Auto-generated method stub

	}

	@Override
	public <T> void deleteAll(Collection<T> pcs) {
		// TODO Auto-generated method stub

	}

	@Override
	public Object getNativeManager() {
		// TODO Auto-generated method stub
		return null;
	}

}
