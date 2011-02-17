package net.nawia.gsao.domain;

import java.io.Serializable;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;

@Entity(name="test")
public class TestEntityJpa implements Cloneable, Serializable {
	
	private static final long serialVersionUID = -5546774627940140484L;

	@Id
	@GeneratedValue
	private int id;
	
	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	@Column(name="examplevar")
	private int exampleVar;

	public int getExampleVar() {
		return exampleVar;
	}

	public void setExampleVar(int exampleVar) {
		this.exampleVar = exampleVar;
	}
}
