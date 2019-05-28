#include "DAC121C085.h"
#include <Wire.h>

/*
 * DAC121C085 Library
 * Created by Baptiste PAULMIER
 * 2019
 */
 
 
 void ADS1112::init_address(byte A0, byte A1)
{
	if (A1 == F && A1 == F) I2C_ADDRESS = B0001100;
	else if (A1 == F && A0 == L) I2C_ADDRESS = B0001101;
	else if (A1 == F && A0 == H) I2C_ADDRESS = B0001110;
	else if (A1 == L && A0 == F) I2C_ADDRESS = B0001000;
	else if (A1 == L && A0 == L) I2C_ADDRESS = B0001001;
	else if (A1 == L && A0 == H) I2C_ADDRESS = B0001010;
	else if (A1 == H && A0 == F) I2C_ADDRESS = B1001100;
	else if (A1 == H && A0 == L) I2C_ADDRESS = B1001101;
	else if (A1 == H && A0 == H) I2C_ADDRESS = B1001110;
}


boolean ADS1112::write_voltage(float voltage)
{
	
	uint16_t D = voltage/Vref*4096;
	if (D<=4095){
		uint8_t LSByte = D;
		
		uint8_t MSByte = D>>8;
		
		Wire.beginTransmission(I2C_ADDRESS);
		Wire.write(MSByte);
		Wire.write(LSByte);
		Wire.endTransmission();	
		return true;
	}else{
		return false;
	}
}