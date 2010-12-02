module window.window;

public import screen.cords;

protected import msg.mediator.mediator;

struct WindowHints {
	
}

interface Window
{
	public:
	
	@property bool isOpened();
	
	@property bool isFocused();
	
	@property bool isStereo();
	
	@property bool isResizable();
	
	@property bool isIconified();
	@property void setIconified(bool state);
	
	@property bool isVSync();
	@property void setVSync(bool state);
	
	@property uint getRefreshRate();
	
	@property ubyte[3] getBitsRGB();
	@property ubyte getBitsAlpha();
	
	@property ubyte[3] getBitsAccumRGB();
	@property ubyte getBitsAccumAlpha();
	
	@property ubyte getBitsStencil();
	@property ubyte getBitsDepth();
	
	@property ubyte getAuxBufNo();
	
	@property ubyte getFSAASamplesNo();
	
	@property CordsScreen getSize();
	@property void setSize(CordsScreen);
	
	void addListenerClose();
	void delListenerClose();
	
	void addListenerResize();
	void delListenerResize();
	
	void addListenerRefresh();
	void delListenerRefresh();
	
	void swapBuffers();

}

