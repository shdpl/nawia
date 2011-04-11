package net.nawia.gsao.model;

import java.io.Serializable;
import java.util.SortedSet;

public class Category<T> implements Serializable {
	
	private String name;
	private T value;
	private Category<T> parent;
	private SortedSet<Category<T>> childs;
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public T getValue() {
		return value;
	}
	public void setValue(T value) {
		this.value = value;
	}
	public Category<T> getParent() {
		return parent;
	}
	public void setParent(Category<T> parent) {
		this.parent = parent;
	}
	
}
