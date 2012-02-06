package net.nawia.gsao.facade.dao.jpa;

import java.util.Collection;
import java.util.Vector;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;

import net.nawia.gsao.facade.dao.DaoManager;
import net.nawia.gsao.facade.dao.DaoTx;

public class JPADaoManager implements DaoManager {
	EntityManager em;
	JPADaoTx tx;
	
	public static boolean matches(Object resource) {
		return resource instanceof EntityManagerFactory;
	}

	public JPADaoManager(Object pu) {
		EntityManagerFactory emf = (EntityManagerFactory) pu;
		em = emf.createEntityManager();
		tx = new JPADaoTx(em.getTransaction());
	}

	@Override
	public DaoTx getCurrentTx() {
		return tx;
	}

	@Override
	public <T> T findById(Class<T> cls, Object key) {
		return em.find(cls, key);
	}

	@Override
	public <T> Collection<T> findAllById(Class<T> cls, Collection<Object> keys) {
		Vector<T> ret = new Vector<T>();
		for(Object key : keys) {
			ret.add(findById(cls, key));
		}
		return ret;
	}

	@Override
	public <T> T persist(T pc) {
		em.persist(pc);
		return pc;
	}

	@Override
	public <T> Collection<T> persistAll(Collection<T> pcs) {
		for(T pc : pcs) {
			persist(pc);
		}
		return pcs;
	}

	@Override
	public <T> T[] persistAll(T[] pcs) {
		for(T pc : pcs) {
			persist(pc);
		}
		return pcs;
	}

	@Override
	public void delete(Object pc) {
		em.remove(pc);
	}

	@Override
	public <T> void deleteAll(T[] pcs) {
		for(T pc : pcs) {
			em.remove(pc);
		}
	}

	@Override
	public <T> void deleteAll(Collection<T> pcs) {
		for(T pc : pcs) {
			em.remove(pc);
		}
	}

	@Override
	public Object getNativeManager() {
		return em;
	}

}
