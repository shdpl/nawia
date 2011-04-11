package net.nawia.gsao.model.world.entity;

import java.util.SortedSet;

import net.nawia.gsao.model.world.trait.Light;
import net.nawia.gsao.model.world.trait.actor.Blood;
import net.nawia.gsao.model.world.trait.actor.Look;

public class Actor {
	
	private String name;
	private String description;
	
	private int healthMax;
	private int healthCurrent;

	private int moveSpeed;
	
	private Blood bloodType;
	
	private Look look;

	private SortedSet<Light> lights;
	private SortedSet<Condition> immunities; //TODO: +elements
	
	private boolean hpVisible = false;
	
}
