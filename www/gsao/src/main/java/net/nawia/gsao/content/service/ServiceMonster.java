package net.nawia.gsao.content.service;

import net.nawia.gsao.content.model.monster.*;

public interface ServiceMonster {
	
	/**
	 * Returns set of monsters or monster subcategory.
	 * @param category, or null which is interpreted as root
	 * @return Category<Monster> or Monster
	 */
//	SortedSet<Object> getChilds(Category<Monster> category);

	/**
	 * Returns parent monster category
	 * @param category Monster or Category<Monster> object
	 * @return parent category or null if it's already a root category 
	 */
//	Category<Monster> getParent(Object category);
	
	/**
	 * Adds new monster type under selected category
	 * @param type
	 * @param category
	 * @return true if success, false if failure
	 */
//	boolean add(Monster type, Category<Monster> category);
	
	/**
	 * Saves monster state
	 * @param type
	 * @return true if success, false otherwise
	 */
	boolean save(Monster type);
	
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
