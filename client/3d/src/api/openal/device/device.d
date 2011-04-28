module api.openal.device.device;

interface Device {
	bool supported(DeviceExtension ext);
	
	interface Extension {
		
	}
}