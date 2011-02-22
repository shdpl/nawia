package net.nawia.www.cms.http.bean;

import java.util.LinkedList;
import java.util.List;

import javax.ejb.EJB;
import javax.enterprise.inject.Model;

import net.nawia.gsao.domain.Account;
import net.nawia.gsao.domain.Group;
import net.nawia.gsao.service.remote.ServiceGroupRemote;

@Model
public class BeanGroup {
	@EJB
	private ServiceGroupRemote _sg;
	private List<Group> _gl;

	public List<Group> getAll() {
		assert (null != _sg);
		_gl = _sg.getAll();
		return _gl;
	}

	public int getNum() {
		assert (null != _sg);
		// _al = _sa.getAll();
		return _gl.size();
	}

	public String modify(Group which) {
		return "failure";
		// return "success";
	}

	public String delete(Account which) {
		// if (!_sa.del(which))
		return "failure";
		// return "success";
	}
}
