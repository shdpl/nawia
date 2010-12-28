package net.nawia.gsao;

import java.io.ByteArrayOutputStream;
import java.io.OutputStream;
import java.util.HashSet;
import java.util.Set;
import java.util.SortedSet;
import java.util.TreeSet;
import java.util.logging.Formatter;
import java.util.logging.Level;
import java.util.logging.LogManager;
import java.util.logging.Logger;
import java.util.logging.MemoryHandler;
import java.util.logging.SimpleFormatter;
import java.util.logging.StreamHandler;

import org.testng.IInvokedMethod;
import org.testng.ISuite;
import org.testng.ISuiteListener;
import org.testng.TestListenerAdapter;

public class ListenerLogTest extends TestListenerAdapter {
	Set<String> methods = new HashSet<String>();		//TODO: HashMap
	OutputStream byte_array = new ByteArrayOutputStream();
	Formatter formatter = new SimpleFormatter();
	StreamHandler handler = new StreamHandler(byte_array, formatter);

	public void onStart(ISuite suite) {
		for (IInvokedMethod m : suite.getAllInvokedMethods())
			if (m.isTestMethod()) {
				String c = m.getTestMethod().getRealClass().getName();
				if (methods.add(c)) {
					Logger l = Logger.getLogger(c);
					l.addHandler(handler);
					l.setLevel(Level.FINEST);
					LogManager.getLogManager().addLogger(l);
				}
			}
	}

	public void onFinish(ISuite suite) {
		for(String method : methods)
			Logger.getLogger(method).removeHandler(handler);
		//TODO: dump if failed
	}
	
}
