package net.nawia.gsao.domain;

import java.io.Serializable;
import java.util.Date;

import javax.inject.Named;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.validation.constraints.NotNull;

import net.nawia.gsao.domain.Ban.BAN_T;

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
	Boolean active;
	
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
	}

	public Integer getId() {
		return id;
	}

	public void setId(Integer id) {
		this.id = id;
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

	public BAN_T getType() {
		return type;
	}

	public void setType(BAN_T type) {
		this.type = type;
	}

	public Boolean getActive() {
		return active;
	}

	public void setActive(Boolean active) {
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

	public Integer getReason() {
		return reason;
	}

	public void setReason(Integer reason) {
		this.reason = reason;
	}

	public String getComment() {
		return comment;
	}

	public void setComment(String comment) {
		this.comment = comment;
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

	public Ban(Integer id, Integer value, Long param, BAN_T type,
			Boolean active, Date expires, Date added, Integer admin_id,
			Integer reason, String comment, Integer action, String statement) {
		super();
		this.id = id;
		this.value = value;
		this.param = param;
		this.type = type;
		this.active = active;
		this.expires = expires;
		this.added = added;
		this.admin_id = admin_id;
		this.reason = reason;
		this.comment = comment;
		this.action = action;
		this.statement = statement;
	};
	
	public Ban(Integer value, Long param, BAN_T type,
			Boolean active, Date expires, Date added, Integer admin_id,
			Integer reason, String comment, Integer action, String statement) {
		super();
		this.value = value;
		this.param = param;
		this.type = type;
		this.active = active;
		this.expires = expires;
		this.added = added;
		this.admin_id = admin_id;
		this.reason = reason;
		this.comment = comment;
		this.action = action;
		this.statement = statement;
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((action == null) ? 0 : action.hashCode());
		result = prime * result + ((active == null) ? 0 : active.hashCode());
		result = prime * result + ((added == null) ? 0 : added.hashCode());
		result = prime * result
				+ ((admin_id == null) ? 0 : admin_id.hashCode());
		result = prime * result + ((comment == null) ? 0 : comment.hashCode());
		result = prime * result + ((expires == null) ? 0 : expires.hashCode());
		result = prime * result + ((id == null) ? 0 : id.hashCode());
		result = prime * result + ((param == null) ? 0 : param.hashCode());
		result = prime * result + ((reason == null) ? 0 : reason.hashCode());
		result = prime * result
				+ ((statement == null) ? 0 : statement.hashCode());
		result = prime * result + ((type == null) ? 0 : type.hashCode());
		result = prime * result + ((value == null) ? 0 : value.hashCode());
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
		Ban other = (Ban) obj;
		if (action == null) {
			if (other.action != null)
				return false;
		} else if (!action.equals(other.action))
			return false;
		if (active == null) {
			if (other.active != null)
				return false;
		} else if (!active.equals(other.active))
			return false;
		if (added == null) {
			if (other.added != null)
				return false;
		} else if (!added.equals(other.added))
			return false;
		if (admin_id == null) {
			if (other.admin_id != null)
				return false;
		} else if (!admin_id.equals(other.admin_id))
			return false;
		if (comment == null) {
			if (other.comment != null)
				return false;
		} else if (!comment.equals(other.comment))
			return false;
		if (expires == null) {
			if (other.expires != null)
				return false;
		} else if (!expires.equals(other.expires))
			return false;
		if (id == null) {
			if (other.id != null)
				return false;
		} else if (!id.equals(other.id))
			return false;
		if (param == null) {
			if (other.param != null)
				return false;
		} else if (!param.equals(other.param))
			return false;
		if (reason == null) {
			if (other.reason != null)
				return false;
		} else if (!reason.equals(other.reason))
			return false;
		if (statement == null) {
			if (other.statement != null)
				return false;
		} else if (!statement.equals(other.statement))
			return false;
		if (type != other.type)
			return false;
		if (value == null) {
			if (other.value != null)
				return false;
		} else if (!value.equals(other.value))
			return false;
		return true;
	}

	protected Ban clone() {
		try {
			return (Ban) super.clone();
		} catch (CloneNotSupportedException e) {
			throw new RuntimeException(e);
		}
	}
	
	
}
