package net.nawia.gsao.domain;


public interface Address extends Comparable {
	public enum Scheme {
		//TODO: http://en.wikipedia.org/wiki/Address_(geography)#Current_addressing_schemes
	}
	
	public Scheme getScheme();
	public abstract String toString();

}
