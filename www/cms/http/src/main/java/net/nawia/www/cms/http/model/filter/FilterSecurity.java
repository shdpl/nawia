package net.nawia.www.cms.http.model.filter;

import java.io.IOException;

import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.FilterConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.owasp.esapi.ESAPI;
import org.owasp.esapi.User;
import org.owasp.esapi.errors.AuthenticationException;
/*
public class FilterSecurity implements Filter {

	@Override
	public void destroy() {
		// TODO Auto-generated method stub

	}

	@Override
	public void doFilter(ServletRequest request, ServletResponse response,
			FilterChain chain) throws IOException, ServletException {
		
		try {
			User user = ESAPI.authenticator().login(
					(HttpServletRequest) request,	//FIXME:
					(HttpServletResponse) response);
			ESAPI.authenticator().setCurrentUser(user);
		} catch (AuthenticationException e) {
			// handle failed authentication (it's already been logged)
		}
		chain.doFilter(request, response);
	}

	@Override
	public void init(FilterConfig arg0) throws ServletException {
		// TODO Auto-generated method stub

	}

}*/
