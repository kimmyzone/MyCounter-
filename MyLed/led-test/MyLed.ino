#include "MyLed.h"

#define PIN_LED 16

MyLed * led();

void setup() {

  led = new MyLed(PIN_LED);
}

void loop() {
  lrd->loop();

}
