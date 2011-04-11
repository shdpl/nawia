package net.nawia.gsao.model.world.magic;

import net.nawia.gsao.model.Script;

public class SpellScripted implements Spell {

	private String name;
	private Script script;
	
	private int interval;
	private float chance;
	
	private int range;
	private int dmgMin;
	private int dmgMax;
	
	private boolean directional;
	private boolean targetable;
	

	@Override
	public String getName() {
		return name;
	}
	@Override
	public void setName(String name) {
		this.name = name;
	}
	@Override
	public Script getScript() {
		return script;
	}
	@Override
	public void setScript(Script script) {
		this.script = script;
	}
	@Override
	public int getInterval() {
		return interval;
	}
	@Override
	public void setInterval(int interval) {
		this.interval = interval;
	}
	@Override
	public float getChance() {
		return chance;
	}
	@Override
	public void setChance(float chance) {
		this.chance = chance;
	}
	@Override
	public int getRange() {
		return range;
	}
	@Override
	public void setRange(int range) {
		this.range = range;
	}
	@Override
	public int getDmgMin() {
		return dmgMin;
	}
	@Override
	public void setDmgMin(int dmgMin) {
		this.dmgMin = dmgMin;
	}
	@Override
	public int getDmgMax() {
		return dmgMax;
	}
	@Override
	public void setDmgMax(int dmgMax) {
		this.dmgMax = dmgMax;
	}
	@Override
	public boolean isDirectional() {
		return directional;
	}
	@Override
	public void setDirectional(boolean directional) {
		this.directional = directional;
	}
	@Override
	public boolean isTargetable() {
		return targetable;
	}
	@Override
	public void setTargetable(boolean targetable) {
		this.targetable = targetable;
	}
	
	
}
