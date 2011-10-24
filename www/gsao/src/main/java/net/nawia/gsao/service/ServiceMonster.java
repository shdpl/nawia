package net.nawia.gsao.service;

import java.util.SortedSet;

import net.nawia.gsao.domain.Category;
import net.nawia.gsao.model.world.entity.Monster;

public interface ServiceMonster {
	
	/**
	 * Returns set of monsters or monster subcategory.
	 * @param category, or null which is interpreted as root
	 * @return Category<Monster> or Monster
	 */
	SortedSet<Object> getChilds(Category<Monster> category);

	/**
	 * Returns parent monster category
	 * @param category Monster or Category<Monster> object
	 * @return parent category or null if it's already a root category 
	 */
	Category<Monster> getParent(Object category);
	
}
