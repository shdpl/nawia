package net.nawia.gsao.model.world.magic;

import net.nawia.gsao.domain.Script;

public interface Spell {

	public String getName();

	public void setName(String name);

	public Script getScript();

	public void setScript(Script script);

	public int getInterval();

	public void setInterval(int interval);

	public float getChance();

	public void setChance(float chance);

	public int getRange();

	public void setRange(int range);

	public int getDmgMin();

	public void setDmgMin(int DmgMin);

	public int getDmgMax();

	public void setDmgMax(int DmgMax);

	public boolean isDirectional();

	public void setDirectional(boolean directional);

	public boolean isTargetable();

	public void setTargetable(boolean targetable);

}
