#include<Arduino.h>
#define Red_led_pin 2
#define Green_led_pin 4
#define Blue_led_pin 13
#define SWITCH1 34
#define SWITCH2 35
#define SWITCH3 36

void setup() 
{
  pinMode(Red_led_pin,OUTPUT);
  pinMode(Green_led_pin,OUTPUT);
  pinMode(Blue_led_pin,OUTPUT);
  pinMode(SWITCH1,INPUT);
   pinMode(SWITCH2,INPUT);
    pinMode(SWITCH3,INPUT);

}

void loop()
 { 
    if(digitalRead(SWITCH1))//RED LED high low
    {
      digitalWrite(Red_led_pin,LOW);
    }
    else
    {
         digitalWrite(Red_led_pin,HIGH);
    }
   if(digitalRead(SWITCH2))//Green LED high low
   {
       digitalWrite(Green_led_pin,LOW);
   }
   else
   {
       digitalWrite(Green_led_pin,HIGH);
   }
   if(digitalRead(SWITCH3))   //Blue LED high low
   {
       digitalWrite(Blue_led_pin,LOW);
   }
   else
   {
     digitalWrite(Blue_led_pin,HIGH);
   }
}