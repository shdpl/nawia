package net.nawia.gsao.content.service.impl;

import javax.inject.Inject;

import net.nawia.gsao.content.dao.ContentPU;
import net.nawia.gsao.content.model.monster.Monster;
import net.nawia.gsao.content.service.local.ServiceMonsterLocal;
import net.nawia.gsao.facade.dao.DaoTx;
import net.nawia.gsao.util.Category;

public class ServiceMonsterImpl implements ServiceMonsterLocal {
	@Inject
	ContentPU pu;

	@Override
	public Category<Monster> getChilds(Category<Monster> parent) {
		return null;
	}

	@Override
	public Category<Monster> getParent(Category<Monster> category) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public boolean add(Monster type, Category<Monster> category) {
		DaoTx tx = pu.getCurrentTx();
		tx.begin();
		try {
			//
		} catch(Exception e) {
			if (tx.isActive()) {
				tx.rollback();
			}
			//throw new Exception(e);
		}
		tx.commit();
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public Monster getMonster(String name) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public boolean save(Monster type) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean delFlagDescriptor(int flagId) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean delLookTypeDescriptor(int lookTypeId) {
		// TODO Auto-generated method stub
		return false;
	}

}
