package net.nawia.gsao.domain;

import java.io.Serializable;
import java.util.Date;

import javax.inject.Named;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.validation.constraints.NotNull;

@Named
@Entity(name = "Bans")
public class Ban implements Cloneable, Serializable {
	
	private static final long serialVersionUID = 182334564319362991L;
	
	@Id
	@NotNull
	Integer id;
	
	/**
	 * Banned target identifier
	 */
	@NotNull
	Integer value;
	
	/**
	 * Ban parameter
	 */
	@NotNull
	Long param;

	/**
	 * Ban type
	 */
	@NotNull
	BAN_T type;
	
	/**
	 * Whether ban is active
	 */
	Short active;
	
	/**
	 * Expiration date
	 */
	@NotNull
	Date expires;
	
	/**
	 * Addition date
	 */
	@NotNull
	Date added;
	
	/**
	 * ID of administrator, who created ban
	 */
	Integer admin_id;

	/**
	 * Reason, why ban has been added
	 */
	Integer reason;
	
	/**
	 * Additional comment
	 */
	@NotNull
	String comment;
	
	/**
	 * Kind of ban action
	 */
	Integer action;
	
	/**
	 * Statement
	 */
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
