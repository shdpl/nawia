package net.nawia.www.cms.http.bean;

import java.util.LinkedList;
import java.util.List;

import javax.enterprise.context.ApplicationScoped;

@ApplicationScoped
public class BeanSearch {
	
	public List<String> autocomplete() {
		return new LinkedList<String>();
	}

}
