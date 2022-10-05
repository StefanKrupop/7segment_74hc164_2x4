/** 
 * Simple example for, print 0 to 8 on display
 */

#include <led2x4.h>
Led2x4 led;

void setup() {
  led.begin(); //Connect "DAT" pin to MOSI, "CP" pin to "SCLK"

  led.write(0,0);
  led.write(1,1);
  led.write(2,2);
  led.write(3,3);
  led.write(4,4);
  led.write(5,5);
  led.write(6,6);
  led.write(7,7);

}


void loop() {
  led.refresh();
  delayMicroseconds(1500);

}
