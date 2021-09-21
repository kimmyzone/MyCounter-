#include "MyLed.h"


//description of class
MyLed::MyLed(int pin, bool pinActive)
{
  this->pin = pin;
  this->pinActive = pinActive;

  //defult blink
  setBlink(true);
  
  pinMode(this->pin, OUTPUT) 

  
}

MyLed::~MyLed()
{
  //do nothing
}

void MyLed::setBlink(bool blink)
{
    this-blink = blink;
}

void MyLed::loop()
{
  uint32_t cur = millis();
  if (blink) //blink?
  {
    // การกระพริบ
    if (cur >= next) { 
      digitalWrite(pin, !digitalRead(pin));
      _next = cur + 100;    
    } 
  
    else {

    //turn off led
    digitalWrite(pin, this->pinActive == LOW ? HIGH : LOW);
  }
    
  }
  
  
}
