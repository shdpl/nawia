package net.nawia.www.cms.http;


import java.sql.Date;

import javax.ejb.EJB;
import javax.faces.bean.ManagedBean;



import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.ServiceAccount;

@ManagedBean
public class RichBean {
	Account _acc;
	@EJB
    private ServiceAccount _sa;

    public RichBean() throws Exception {
        _acc = new Account(0, "John", "pass", "a@a.a", Date.valueOf("1988-09-29"), false, (short) 0);
        
    }

    public String getName() {
        return _acc.getName();
    }

    public void setName(String name) {
    	if (_sa.hasName(name))
    		_sa.del(_acc);
    	_sa.add(_acc);
    }
}
