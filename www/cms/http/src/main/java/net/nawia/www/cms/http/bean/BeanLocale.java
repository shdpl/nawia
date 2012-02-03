//package net.nawia.www.cms.http.bean;
//
//import java.io.Serializable;
//import java.util.Locale;
//
//import javax.enterprise.context.SessionScoped;
//import javax.faces.event.ValueChangeEvent;
//import javax.inject.Inject;
//import javax.inject.Named;
//
//import net.nawia.www.cms.http.service.ServiceLocale;
//
//@Named
//@SessionScoped
//public class BeanLocale implements Serializable {
//	
//	private static final long serialVersionUID = -5152190264173233064L;
//	
//	@Inject
//	ServiceLocale sl;
//	
//	public void change(ValueChangeEvent evt) {
//		Locale newLoc = (Locale) evt.getNewValue();
//		if (sl.isSupported(newLoc))
//			sl.setLocale(newLoc);
//		else
//			;//FacesContext.getCurrentInstance().addMessage("", arg1);
//	}
//	
//	public String getCurrent() {
//		return "pl";
//	}
//
//}
