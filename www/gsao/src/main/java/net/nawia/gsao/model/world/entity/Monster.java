package net.nawia.gsao.model.world.entity;

import java.io.Serializable;
import java.util.Map;
import java.util.SortedSet;

import net.nawia.gsao.domain.Category;
import net.nawia.gsao.model.world.entity.actor.Summon;
import net.nawia.gsao.model.world.entity.actor.Voices;
import net.nawia.gsao.model.world.trait.Light;
import net.nawia.gsao.model.world.trait.actor.Attack;
import net.nawia.gsao.model.world.trait.actor.Blood;
import net.nawia.gsao.model.world.trait.actor.Defense;
import net.nawia.gsao.model.world.trait.actor.Look;

public class Monster extends Actor implements Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 909448259172647502L;

	private int expReward;
	private int summonCostMana;

	private int staticAtkDmg;
	private Category<SortedSet<Attack>> attacks;
	private Category<SortedSet<Defense>> defenses;
	private Category<SortedSet<Summon>> summons;

	private Voices voices;
	
	private Map<String, Boolean> flags;
	
	//TODO: script event names?

}
