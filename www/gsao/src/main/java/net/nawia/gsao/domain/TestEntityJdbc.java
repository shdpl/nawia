package net.nawia.gsao.domain;

public class TestEntityJdbc {
	private int id;
	private int exampleVar;

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public int getExampleVar() {
		return exampleVar;
	}

	public void setExampleVar(int exampleVar) {
		this.exampleVar = exampleVar;
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + exampleVar;
		result = prime * result + id;
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		TestEntityJdbc other = (TestEntityJdbc) obj;
		if (exampleVar != other.exampleVar)
			return false;
		if (id != other.id)
			return false;
		return true;
	}


}
