package net.nawia.gsao.util;

import java.util.Vector;

public class Category<T> {
	private Vector<Category<T>> childs;
	private String name;
	
	
	public int getChildCount() {
		return childs.size();
	}
	
	public boolean isLeaf() {
		return childs.isEmpty();
	}
	
	public Category<T> getChild(int index) {
		return childs.get(index);
	}
	
	public void addChild(Category<T> child) {
		childs.add(child);
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}
	
}
