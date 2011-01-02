package net.nawia.gsao.domain;

import javax.persistence.Entity;

@Entity
public class TestEntityJpa {
	private int exampleVar;

	public int getExampleVar() {
		return exampleVar;
	}

	public void setExampleVar(int exampleVar) {
		this.exampleVar = exampleVar;
	}
}
