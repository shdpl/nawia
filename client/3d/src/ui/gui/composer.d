module ui.gui.composer;

import ui.gui.control.control,
	ui.gui.control.fragment;

class Composer {
	Control[string] controlsMap;
	Fragment compose(Object what);
}