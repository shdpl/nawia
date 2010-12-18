module window.window;

public import screen.cords;
public import window.properties;
public import msg.listener.window.close;
public import msg.listener.window.refresh;
public import msg.listener.window.resize;

protected import msg.mediator.mediator;

interface Window
{
	public:
	
	string title();
	void title(in string title);
	
	CordsScreen size();
	void size(CordsScreen size);
	
	bool focused();
	
	bool stereo();
	
	bool resizable();
	
	bool iconified();
	void iconified(bool state);
	
	uint refreshRate();
	
	ubyte[3] bitsRGB();
	ubyte bitsAlpha();
	
	ubyte[3] bitsAccumRGB();
	ubyte bitsAccumAlpha();
	
	ubyte bitsStencil();
	ubyte bitsDepth();
	
	ubyte auxBufNo();
	
	ubyte FSAASamplesNo();
	
	CordsScreen size();
	void size(CordsScreen);
	
	void addListenerClose(MsgListenerWindowClose lstnr);
	void delListenerClose(MsgListenerWindowClose lstnr);
	
	void addListenerResize(MsgListenerWindowResize lstnr);
	void delListenerResize(MsgListenerWindowResize lstnr);
	
	void addListenerRefresh(MsgListenerWindowRefresh lstnr);
	void delListenerRefresh(MsgListenerWindowRefresh lstnr);
	
	void swapBuffers();

}

