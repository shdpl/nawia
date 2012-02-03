//package net.nawia.www.cms.http.converter;
//
//import javax.faces.component.UIComponent;
//import javax.faces.context.FacesContext;
//import javax.faces.convert.Converter;
//
//import net.nawia.gsao.server.dao.DaoAccount;
//import net.nawia.gsao.domain.Account;
//
//public class ConverterAccount implements Converter {
//
//	@Override
//	public Object getAsObject(FacesContext arg0, UIComponent arg1, String stringId) {
//		if (stringId == null)
//			return null;
//
//		DaoAccount daoAcc = (DaoAccount) FacesContext.getCurrentInstance().getApplication()
//				.getVariableResolver().resolveVariable(FacesContext.getCurrentInstance(), "daoAccount");
//
//		return daoAcc.find(Integer.valueOf(stringId));
//	}
//
//	@Override
//	public String getAsString(FacesContext arg0, UIComponent arg1, Object object) {
//				if (object == null)
//					return null;
//
//				if (object instanceof Account) {
//					Account a = (Account) object;
//					return "" + a.getId();
//				} else {
//					throw new IllegalArgumentException("object:" + object + " of type:"
//							+ object.getClass().getName() + "; expected type: Role");
//				}
//	}
//
//}
