module ui.gui.composer;

interface Composer {
	Control[string] controlsMap;
	Fragment compose(Object what);
}