#ifndef _PHOTOSENSOR_H_
#define _PHOTOSENSOR_H_

#include <SinricProDevice.h>
#include <Capabilities/PowerStateController.h>
#include <Capabilities/ModeController.h>

class Photosensor 
: public SinricProDevice
, public PowerStateController<Photosensor>
, public ModeController<Photosensor> {
  friend class PowerStateController<Photosensor>;
  friend class ModeController<Photosensor>;
public:
  Photosensor(const String &deviceId) : SinricProDevice(deviceId, "Photosensor") {};
};

#endif
