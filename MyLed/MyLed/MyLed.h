#ifndef _MYLED_H_
#define _MYLED_H_

#include <Arduino.h>

#define DEFAULT_ACTIVE LOW

class MyLed{
private: //private data
  int pin:
  bool pinActive;
  bool blink:
  
  uint32_t _next;

//method
public:
  MyLed(int pin, bool pinAvtive = DEFAULT_ACTIVE);
  ~MyLed()

  void setBlink(bool blink);  //true: blink, false: turn off

  void loop();  

};

#endif
