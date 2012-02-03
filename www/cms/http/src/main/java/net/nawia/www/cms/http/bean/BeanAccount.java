package net.nawia.www.cms.http.bean;

//import java.util.List;
//
//import javax.ejb.EJB;
//import javax.enterprise.inject.Model;
//
//import net.nawia.gsao.domain.Account;
//import net.nawia.gsao.server.service.remote.ServiceAccountRemote;
//
//@Model
//public class BeanAccount {
//	@EJB
//	private ServiceAccountRemote _sa;
//	private List<Account> _al;
//	
//	public List<Account> getAll() {
//		if (null == _al)
//			_al = _sa.getAll();
//		return _al;
//	}
//
//	public int getNum() {
//		if (null == _al)
//			_al = _sa.getAll();
//		return _al.size();
//	}
//
//	public String modify(Account which) {
//		if (!_sa.changeEmail(which.getId(), which.getEmail()))
//			return "failure";
//		if (!_sa.changePassword(which.getId(), which.getPassword()))
//			return "failure";
//		if (!_sa.rename(which.getId(), which.getName()))
//			return "failure";
//		if (!_sa.setPremium(which.getId(), which.getPremend()))
//			return "failure";
//		if (which.isBlocked()) {
//			if (!_sa.lock(which.getId()))
//				return "failure";
//		} else {
//			if (!_sa.unlock(which.getId()))
//				return "failure";
//		}
//		if (!_sa.setWarnings(which.getId(), which.getWarnings()))
//			return "failure";
//		return "success";
//	}
//
//	public String delete(Account which) {
//		if (!_sa.del(which))
//			return "failure";
//		return "success";
//	}
//
//	public String resetPassword(Account which) {// TODO: after JavaMail will be
//												// set-up, make it work as it's
//												// intended to
//		if (!_sa.changePassword(which.getId(), which.getName()))
//			return "failure";
//		return "success";
//	}
//}
