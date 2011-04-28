module api.openal.device.recorder;

interface DeviceRecorder : Device {
	bool enable;
	byte[] buffer;
}