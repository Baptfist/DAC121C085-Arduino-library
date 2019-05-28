#include "DAC121C085.h"
#include <Wire.h>

DAC121C085 dac121c085;

void setup() {
  Wire.begin();
  Serial.begin(115200);
   
  ads121c085.init_address(ADS1112::H, ADS1112::L);
  ads1112.write_voltage(2.0);

}

void loop() {
  
}
