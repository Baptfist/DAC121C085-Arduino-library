#include "DAC121C085.h"
#include <Wire.h>

DAC121C085 dac121c085;

void setup() {
  Wire.begin();
  Serial.begin(115200);
   
  dac121c085.init_address(DAC121C085::H, DAC121C085::L);
  dac121c085.write_voltage(2.0);

}

void loop() {
  
}
