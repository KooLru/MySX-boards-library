//Include MySX board include file
#include "D:\\Documents\\Arduino\\MysConnector\\boards\\stm32.h"
//Include common difinition
#include "D:\\Documents\\Arduino\\MysConnector\\boards\\common.h"

void setup() {
  // put your setup code here, to run once:
  //Setup LEDs
#ifdef MYSX_LED_ERR 
  pinMode(MYSX_LED_ERR, OUTPUT);
#endif
#ifdef MYSX_LED_RX
  pinMode(MYSX_LED_RX, OUTPUT);
#endif
#ifdef MYSX_LED_TX 
  pinMode(MYSX_LED_TX , OUTPUT);
#endif  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(MYSX_LED_ERR, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(MYSX_LED_RX, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(MYSX_LED_TX, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(MYSX_LED_ERR, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(MYSX_LED_RX, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(MYSX_LED_TX, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
}
