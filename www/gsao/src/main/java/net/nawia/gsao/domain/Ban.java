package net.nawia.gsao.domain;

import java.util.Date;

import javax.persistence.Entity;
import javax.persistence.Id;
import javax.validation.constraints.NotNull;

//"id" SERIAL,
//"type" BIGINT NOT NULL,
//"value" INT NOT NULL,
//"param" BIGINT NOT NULL,
//"active" SMALLINT DEFAULT 0,
//"expires" BIGINT NOT NULL,
//"added" BIGINT NOT NULL,
//"admin_id" INT,
//"comment" VARCHAR(1024) NOT NULL DEFAULT '',
//"reason" INT DEFAULT 0,
//"action" INT DEFAULT 0,
//"statement" VARCHAR(255) NOT NULL DEFAULT '',
//PRIMARY KEY ("id")
@Entity(name = "Bans")
public class Ban {
	@Id
	@NotNull
	Integer id;
	@NotNull
	BAN_T type;
	/** ID, that depends on type **/
	@NotNull
	Integer value;
	@NotNull
	Long param;
	Short active;
	@NotNull
	Date expires;
	@NotNull
	Date added;
	Integer admin_id;
	@NotNull
	String comment;
	Integer reason;
	Integer action;
	@NotNull
	String statement;
	
	public enum BAN_T {
	      BAN_IPADDRESS,
	      BAN_PLAYER,
	      BAN_ACCOUNT,
	      BAN_NOTATION,
	      BAN_STATEMENT,
	      BAN_NAMELOCK
	};
	
	public Ban(Integer id, BAN_T type, Integer value, Long param, Short active,
			Date expires, Date added, Integer admin_id, String comment,
			Integer reason, Integer action, String statement) {
		super();
		this.id = id;
		this.type = type;
		this.value = value;
		this.param = param;
		this.active = active;
		this.expires = expires;
		this.added = added;
		this.admin_id = admin_id;
		this.comment = comment;
		this.reason = reason;
		this.action = action;
		this.statement = statement;
	}
	
	public Integer getId() {
		return id;
	}
	public void setId(Integer id) {
		this.id = id;
	}
	public BAN_T getType() {
		return type;
	}
	public void setType(BAN_T type) {
		this.type = type;
	}
	public Integer getValue() {
		return value;
	}
	public void setValue(Integer value) {
		this.value = value;
	}
	public Long getParam() {
		return param;
	}
	public void setParam(Long param) {
		this.param = param;
	}
	public Short getActive() {
		return active;
	}
	public void setActive(Short active) {
		this.active = active;
	}
	public Date getExpires() {
		return expires;
	}
	public void setExpires(Date expires) {
		this.expires = expires;
	}
	public Date getAdded() {
		return added;
	}
	public void setAdded(Date added) {
		this.added = added;
	}
	public Integer getAdmin_id() {
		return admin_id;
	}
	public void setAdmin_id(Integer admin_id) {
		this.admin_id = admin_id;
	}
	public String getComment() {
		return comment;
	}
	public void setComment(String comment) {
		this.comment = comment;
	}
	public Integer getReason() {
		return reason;
	}
	public void setReason(Integer reason) {
		this.reason = reason;
	}
	public Integer getAction() {
		return action;
	}
	public void setAction(Integer action) {
		this.action = action;
	}
	public String getStatement() {
		return statement;
	}
	public void setStatement(String statement) {
		this.statement = statement;
	}
}
