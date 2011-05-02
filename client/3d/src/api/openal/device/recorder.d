module api.openal.device.recorder;

import api.openal.device.device;

class DeviceRecorder : Device {
	bool enable;
	byte[] buffer;
}