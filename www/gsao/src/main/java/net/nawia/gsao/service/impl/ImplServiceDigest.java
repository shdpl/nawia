package net.nawia.gsao.service.impl;


import javax.annotation.PostConstruct;
import javax.ejb.EJB;
import javax.ejb.Stateless;

import net.nawia.gsao.model.DigestAlgorithm;
import net.nawia.gsao.service.ServiceDigest;

@Stateless(name="ServiceDigest")
public class ImplServiceDigest implements ServiceDigest {
	
	@EJB
	private DigestAlgorithm _algo;
	
	@PostConstruct
	public void init() {
		
	}

}
