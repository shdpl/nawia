module ge.window.mode;

public import type.cords.screen;

interface IWindowMode {
	CordsScreen size() @property;
	
	void size(CordsScreen size) @property;
}