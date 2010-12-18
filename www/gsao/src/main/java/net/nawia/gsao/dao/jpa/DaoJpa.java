package net.nawia.gsao.dao.jpa;

import java.lang.reflect.*;
import java.util.List;

import javax.persistence.EntityManager;
import javax.persistence.PersistenceContext;

import net.nawia.gsao.dao.Dao;

public abstract class DaoJpa<K, E> implements Dao<K, E> {

	protected Class<E> entityClass;

	@PersistenceContext
	protected EntityManager entityManager;

	public DaoJpa() {
		ParameterizedType genericSuperclass = (ParameterizedType) getClass()
				.getGenericSuperclass();	//TODO dziedziczenie po interfejsach
		Type type = genericSuperclass.getActualTypeArguments()[1];
		if (type instanceof ParameterizedType) {
			this.entityClass = (Class) ((ParameterizedType) type).getRawType();
		} else {
			this.entityClass = (Class) type;
		}
	}

	public void persist(E entity) {
		entityManager.persist(entity);
	}

	public void remove(E entity) {
		entityManager.remove(entity);
	}

	public E find(K id) {
		return entityManager.find(entityClass, id);
	}

	public List<E> findAll() {
		// TODO Auto-generated method stub
		return null;
	}

}
