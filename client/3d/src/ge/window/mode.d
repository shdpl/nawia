module window.mode;
public import type.screen.cords;

interface WindowMode {
	CordsScreen size() @property;
	
	void size(CordsScreen size) @property;
		
	
}