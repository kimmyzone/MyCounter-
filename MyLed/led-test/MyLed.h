#ifndef _MYLED_H_
#define _MYLED_H_

#include <Arduino.h>

class MyLed{
//data
private:

//method
public:
  MyLed(int pin, bool pinAvtive = DEFAULT_ACTIVE);
  ~MyLed()

  void setBlink(bool blink);  //true: blink, fa l

  void loop();  

}

endif
