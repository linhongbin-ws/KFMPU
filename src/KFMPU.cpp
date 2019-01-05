#include "Arduino.h"
#include "KFMPU.h"
#include "Wire.h" //I2C Library

KFMPU::KFMPU(TwoWire &bus, uint8_t address) {
	_i2c = &bus;
	_address = address;
	_useSPI = false;
}

KFMPU::begin() {
	_i2c->begin();
	// setting the I2C clock
	_i2c->setClock(_i2cRate);
}