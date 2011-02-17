package net.nawia.gsao.domain;

import java.util.Date;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.validation.constraints.NotNull;

@Entity(name="guilds")
public class Guild {
	@Id
	@GeneratedValue
	private int id;
	
	@NotNull
	String name;
	
	@NotNull
	Integer ownerId;
	
	@NotNull
	Date creationDate;
}
