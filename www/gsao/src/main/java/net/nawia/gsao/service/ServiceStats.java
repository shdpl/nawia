package net.nawia.gsao.service;

public interface ServiceStats {
	
	boolean isOnline();
	
	float getLatency();
	
	int getPlayersOnline();
	
	int getUptime();
	
	float getLoad();
	
	int getSecretsUnsolved();

}
