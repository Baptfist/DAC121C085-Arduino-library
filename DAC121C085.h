#ifndef DAC121C085_H
#define DAC121C085_H

#include <Arduino.h>

/*
 * DAC121C085 Library
 * Created by Baptiste PAULMIER
 * 2019
 */
 
 
class DAC121C085 {
	public:
	
	static const byte L = 0;
	static const byte H = 1;
	static const byte F = 2;
	
	
	void init_address(byte A0, byte A1);
	
	boolean write_voltage(float voltage);
	
	private:
	
	static const byte PD1 = 5;
	static const byte PD0 = 4;
	const double VRef = 3.3;
	byte I2C_ADDRESS;
	
};
#endif