package net.nawia.gsao.model.world.magic;

import java.util.SortedSet;

import net.nawia.gsao.domain.Category;
import net.nawia.gsao.domain.Script;
import net.nawia.gsao.model.world.trait.Animation;

public class SpellBuiltin implements Spell {
	
	enum Type {
		MELEE
	}

	private String name;
	private Type spell;
	
	private static SortedSet<String> animationType;
	private static SortedSet<String> animationEffect;
	private Category<Animation> animations[];
	
	int length;
	int spread; //if length
	
	int radius;
	boolean targetable; //if (radius)
	
	@Override
	public String getName() {
		// TODO Auto-generated method stub
		return null;
	}
	@Override
	public void setName(String name) {
		// TODO Auto-generated method stub
		
	}
	@Override
	public Script getScript() {
		// TODO Auto-generated method stub
		return null;
	}
	@Override
	public void setScript(Script script) {
		// TODO Auto-generated method stub
		
	}
	@Override
	public int getInterval() {
		// TODO Auto-generated method stub
		return 0;
	}
	@Override
	public void setInterval(int interval) {
		// TODO Auto-generated method stub
		
	}
	@Override
	public float getChance() {
		// TODO Auto-generated method stub
		return 0;
	}
	@Override
	public void setChance(float chance) {
		// TODO Auto-generated method stub
		
	}
	@Override
	public int getRange() {
		// TODO Auto-generated method stub
		return 0;
	}
	@Override
	public void setRange(int range) {
		// TODO Auto-generated method stub
		
	}
	@Override
	public int getDmgMin() {
		// TODO Auto-generated method stub
		return 0;
	}
	@Override
	public void setDmgMin(int DmgMin) {
		// TODO Auto-generated method stub
		
	}
	@Override
	public int getDmgMax() {
		// TODO Auto-generated method stub
		return 0;
	}
	@Override
	public void setDmgMax(int DmgMax) {
		// TODO Auto-generated method stub
		
	}
	@Override
	public boolean isDirectional() {
		// TODO Auto-generated method stub
		return false;
	}
	@Override
	public void setDirectional(boolean directional) {
		// TODO Auto-generated method stub
		
	}
	@Override
	public boolean isTargetable() {
		// TODO Auto-generated method stub
		return false;
	}
	@Override
	public void setTargetable(boolean targetable) {
		// TODO Auto-generated method stub
		
	}
	
//	melee {
//		attack {
//			skill
//		}
//		Condition cond;
//		cond {
//			tick
//		}
//	}
//	
//	magicDmg {
//		
//	}
//	
//	speed {
//		int duration;
//		int amount;
//	}
//	
//	polymorphy {
//		boolean monster;
//		int duration;
//		Monster morphToMonster;
//		Item morphToItem;
//	}
//	
//	visibility {
//		int duration;
//	}
//	
//	drunk {
//		int duration;
//	}
//	
//	elementField {
//		
//	}
//	
//	elementCondition {
//		int duration;
//		int length;
//	}
	
}
