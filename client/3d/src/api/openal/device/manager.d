module api.openal.device.manager;

interface DeviceManager {
	DeviceRenderer[] renderers;
	DeviceRenderer renderer;
	
	DeviceRecorder[] recorders;
	DeviceRecorder recorder;
}