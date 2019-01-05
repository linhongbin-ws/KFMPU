#ifndef KFMPU_h
#define KFMPU_h

#include "Arduino.h"
#include "Wire.h"

class KFMPU {
public:
	KFMPU(TwoWire &bus, uint8_t address);
	begin();
protected:
	TwoWire *_i2c;
	uint8_t _address;
	bool _useSPI;
	const uint32_t _i2cRate = 400000;
	
};
#endif