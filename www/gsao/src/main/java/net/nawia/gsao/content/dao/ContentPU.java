package net.nawia.gsao.content.dao;

import javax.enterprise.context.SessionScoped;
import javax.naming.NamingException;

import net.nawia.gsao.facade.dao.NawiaPU;
import java.io.Serializable;

@SessionScoped
public class ContentPU extends NawiaPU implements Serializable {
	private static final long serialVersionUID = -8690776122705746069L;

	public ContentPU() throws NamingException {
		super("cntPU");
	}
}
