//package net.nawia.www.cms.http.service;
//
//import java.util.List;
//import java.util.Locale;
//import java.util.ResourceBundle;
//
//import javax.enterprise.context.ApplicationScoped;
//import javax.faces.context.FacesContext;
//import javax.naming.OperationNotSupportedException;
//
//import org.richfaces.validator.FacesBeanValidator;
//
//@ApplicationScoped
//public class ServiceLocale {
//	List<Locale> nativelySupported;
//	List<Locale> machineSupported;
//	
//	public ServiceLocale() {
//		//TODO
//	}
//	
//	public void setLocale(Locale loc) {
//		if (nativelySupported.contains(loc))
//			FacesContext.getCurrentInstance().getViewRoot().setLocale(loc);
//		else
//			;//TODO
//	}
//	
//	public boolean isSupported(Locale locale) {
//		if (nativelySupported.contains(locale) || machineSupported.contains(machineSupported))
//			return true;
//		return false;
//	}
//
//}
