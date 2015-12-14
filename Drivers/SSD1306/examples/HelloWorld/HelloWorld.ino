#include <SSD1306.h>
#include <DSPI.h>
#include <Squircle.h>

/* NOTE:
 * 
 * For the Digilent Basic IO Shield OLED you will need to make a small hardware
 * modification for reliable operation. For some reason they tied the CS pin of
 * the OLED to ground through a resistor. This is incorrect, since we need to have
 * control of the CS pin since it is part of the SPI protocol specification. So
 * you need to solder a wire from the OLED connector side of R34 (it's by the
 * soldered OLED ribon connector - you want the side closest to the ribon connector)
 * to any available IO pin.  Pin 41 is the most convenient - it isn't used by anything
 * else on the IO shield, and is close to R34.
 */

// These are the pins for the Digilent Basic IO Shield OLED.
const int reset = 10;
const int dc = 39;
const int cs = 41; // Choose an unused pin and wire the CS signal to it. 41 is a good choice.
const int vdd = 38; // The correct power on sequence is important, so
const int vbat = 40; // we have control of the power to the OLED.

DSPI0 spi;
SSD1306 oled(spi, cs, dc, vdd, vbat, reset);

void setup() {
    oled.initializeDevice();
    oled.fillScreen(Color::Black);
    oled.setCursor(0, 0);
    oled.setFont(Fonts::Squircle);
    oled.print("Hello");
    oled.setFont(Fonts::Default);
}

void loop() {    
    oled.setCursor(0, 24);
    oled.print(millis());
    delay(50);
}
