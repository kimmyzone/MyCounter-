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

void MyLed::setBlink(bool blink)  //:: is body
{
    // set blink 
    this-blink = blink;
    if (this->blink)
      _next = millis() +500;  // next calculate
}

void MyLed::loop()
{
  uint32_t cur = millis();
  if (blink) //blink?
  {
    // การกระพริบ
    if (cur >= _next) { 
      digitalWrite(pin, !digitalRead(pin));  // ! คือการกลับค่าก็จะกระพริบแล้ว
      _next = cur + 500;    
    } 
  
    else {
    //turn off led
    digitalWrite(pin, this->pinActive == LOW ? HIGH : LOW);
  }
    
  }
  
  
}
