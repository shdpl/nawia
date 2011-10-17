package net.nawia.gsao.service;

import java.util.SortedSet;

import net.nawia.gsao.domain.Category;
import net.nawia.gsao.model.world.entity.Monster;

public interface ServiceMonster {
	
	SortedSet<Category<Monster>> getChilds(Category<Monster> category);

	Category<Monster> getParent(Category<Monster> category);
	
}
