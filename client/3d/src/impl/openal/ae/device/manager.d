module api.openal.device.manager;

import api.openal.device.renderer,
	api.openal.device.recorder;

class DeviceManager {
	DeviceRenderer[] renderers;
	DeviceRenderer renderer;
	
	DeviceRecorder[] recorders;
	DeviceRecorder recorder;
}