package net.nawia.gsao.content.service;

import net.nawia.gsao.content.model.monster.*;
import net.nawia.gsao.util.Category;

public interface ServiceMonster {
	
	/**
	 * Returns child monster category
	 * @param category, or null which is interpreted as root
	 * @return Category<Monster>
	 */
	Category<Monster> getChilds(Category<Monster> parent);

	/**
	 * Returns parent monster category
	 * @param category category of monsters
	 * @return parent category or null if it's already a root category 
	 */
	Category<Monster> getParent(Category<Monster> category);
	
	/**
	 * Adds new monster type under selected category
	 * @param type
	 * @param category
	 * @return true if success, false if failure
	 */
	boolean add(Monster type, Category<Monster> category);
	
	/**
	 * Saves monster state
	 * @param type
	 * @return true if success, false otherwise
	 */
	boolean save(Monster type);
	
	/**
	 * Returns monster of given name
	 * @param name unique monster name
	 * @return Monster if exists, or null otherwise
	 */
	Monster getMonster(String name);
	
	/**
	 * Returns descriptor of all flags possible to use.
	 * @return Monster Flag Descriptors, or null if error
	 */
//	Set<FlagDescriptor> getFlagsDescriptors();	//TODO: flexible Flags
	
	/**
	 * Defines new flag for use in Monster definitions
	 * @param flag
	 * @return true if success, false otherwise
	 */
//	boolean addFlagDescriptor(FlagDescriptor flag);
	
	/**
	 * Undefines existant flag for use in Monster definitions
	 * @param flag
	 * @return true if success, false otherwise
	 */
	boolean delFlagDescriptor(int flagId);
	
	/**
	 * Returns every possible lookType possible
	 * @return look types, or null if error
	 */
//	Set<LookTypeDescriptor> getLookTypeDescriptors();
	
	/**
	 * Describes new lookType
	 * @param lookType
	 * @return true if defined, false in case of error
	 */
//	boolean addLookTypeDescriptor(LookTypeDescriptor lookType);
	
	/**
	 * Undefines look type
	 * @param lookTypeId identificator of lookType
	 * @return true if success, false otherwise
	 */
	boolean delLookTypeDescriptor(int lookTypeId);
	
	
}
