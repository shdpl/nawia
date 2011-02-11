package net.nawia.gsao.domain;

import java.io.Serializable;

import javax.persistence.Entity;

@Entity
public class TestEntityJpa implements Cloneable, Serializable {
	
	private static final long serialVersionUID = -5546774627940140484L;
	
	private int exampleVar;

	public int getExampleVar() {
		return exampleVar;
	}

	public void setExampleVar(int exampleVar) {
		this.exampleVar = exampleVar;
	}
}
