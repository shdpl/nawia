package net.nawia.gsao.domain;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.validation.constraints.NotNull;

public class GuildRank {
	
	Integer id;
	
	Integer guildId; //TODO
	
	String name;
	
	Integer level;
	
}
