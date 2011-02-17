package net.nawia.gsao.domain;

import java.io.Serializable;

import javax.inject.Named;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.Table;


@Named
@Entity
@Table(name = "groups")
public class Group implements Cloneable, Serializable {

	private static final long serialVersionUID = -5491264676494321077L;

	@Id
	@GeneratedValue
	private int id;
	
	/**
	 * Group name
	 */
	@Column(nullable = false)
	private String name;
	
	/**
	 * Access flags
	 */
	@Column(nullable = false)
	private Long flags;
	
	/**
	 * Access level
	 */
	@Column(nullable = false)
	private Integer access;
	
	/**
	 * Violation level
	 */
	@Column(nullable = false)
	private Integer violation;
	
	/**
	 * Maximum amount of items in depot
	 */
	@Column(nullable = false)
	private Integer maxdepotitems;
	
	/**
	 * Maximum number of VIP's
	 */
	@Column(nullable = false)
	private Integer maxviplist;
	

	public Group(int id, String name, Long flags, Integer access,
			Integer violation, Integer maxdepotitems, Integer maxviplist) {
		super();
		this.id = id;
		this.name = name;
		this.flags = flags;
		this.access = access;
		this.violation = violation;
		this.maxdepotitems = maxdepotitems;
		this.maxviplist = maxviplist;
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((access == null) ? 0 : access.hashCode());
		result = prime * result + ((flags == null) ? 0 : flags.hashCode());
		result = prime * result + id;
		result = prime * result
				+ ((maxdepotitems == null) ? 0 : maxdepotitems.hashCode());
		result = prime * result
				+ ((maxviplist == null) ? 0 : maxviplist.hashCode());
		result = prime * result + ((name == null) ? 0 : name.hashCode());
		result = prime * result
				+ ((violation == null) ? 0 : violation.hashCode());
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
		Group other = (Group) obj;
		if (access == null) {
			if (other.access != null)
				return false;
		} else if (!access.equals(other.access))
			return false;
		if (flags == null) {
			if (other.flags != null)
				return false;
		} else if (!flags.equals(other.flags))
			return false;
		if (id != other.id)
			return false;
		if (maxdepotitems == null) {
			if (other.maxdepotitems != null)
				return false;
		} else if (!maxdepotitems.equals(other.maxdepotitems))
			return false;
		if (maxviplist == null) {
			if (other.maxviplist != null)
				return false;
		} else if (!maxviplist.equals(other.maxviplist))
			return false;
		if (name == null) {
			if (other.name != null)
				return false;
		} else if (!name.equals(other.name))
			return false;
		if (violation == null) {
			if (other.violation != null)
				return false;
		} else if (!violation.equals(other.violation))
			return false;
		return true;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public Long getFlags() {
		return flags;
	}

	public void setFlags(Long flags) {
		this.flags = flags;
	}

	public Integer getAccess() {
		return access;
	}

	public void setAccess(Integer access) {
		this.access = access;
	}

	public Integer getViolation() {
		return violation;
	}

	public void setViolation(Integer violation) {
		this.violation = violation;
	}

	public Integer getMaxdepotitems() {
		return maxdepotitems;
	}

	public void setMaxdepotitems(Integer maxdepotitems) {
		this.maxdepotitems = maxdepotitems;
	}

	public Integer getMaxviplist() {
		return maxviplist;
	}

	public void setMaxviplist(Integer maxviplist) {
		this.maxviplist = maxviplist;
	}

}