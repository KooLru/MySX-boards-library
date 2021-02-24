//Include MySX board include file
//#include <mysx_e73_r2.h>
//#include <MysX_YJ1648_r1.h>
#include <mysx_stm32.h>

//Include common difinition
#include <mysx.h>

void setup() {
  // put your setup code here, to run once:
  //Setup LEDs

  MYSX_SERIAL.begin(115200);
  while (!MYSX_SERIAL) {
    ; // wait for serial port to connect. Needed for native USB
  }  
  MYSX_SERIAL.println("Test MYSX capabilitys");


  analogReference(AR_DEFAULT);

}

int pins[] = {MYSX_D1, MYSX_D2, MYSX_D3, MYSX_D4, MYSX_D5, MYSX_D6, MYSX_D7, MYSX_D8, MYSX_D9, MYSX_D10, MYSX_D11,MYSX_D12,MYSX_D13,MYSX_D14,MYSX_D15,MYSX_D16};

void loop() {
  Serial.println("\n\nCheck begin ");
  Serial.println("D  01  |  02  |  03  |  04  |  05  |  06  |  07  |  08  |  09  |  10  |  11  |  12  |  13  |  14  |  15  |  16  |");
  Serial.println("A      |      |      |      |      |      |  01  |  02  |  03  |  04  |      |      |      |      |  05  |  06  |");
  Serial.println("|---------------------------------------------------------------------------------------------------------------|");

  Serial.print("|"); 
  char fmtBuffer[8];
  for(int i=0;i< 16;i++)  
 {
    snprintf(fmtBuffer, sizeof(fmtBuffer), PSTR("  %02u  |"), pins[i]);
    MYSX_SERIAL.print(fmtBuffer);  
 }
Serial.println(); 

  Serial.print("|"); 
  for(int i=0;i< 16;i++)  
    CheckLed(i);
    Serial.println(); 
  delay(1000);              // wait for a second
  //Serial.println("Check analog read ");

  Serial.print("|"); 
  for(int i=0;i< 16;i++)  {
    CheckAnalogRead(i);    
    CheckAnalogRead(i);
    CheckAnalogRead(i);
    CheckAnalogRead(i);
    CheckAnalogRead(i);
    CheckAnalogRead(i);
  }

  Serial.println(); 
  
  //// put your main code here, to run repeatedly:
  //digitalWrite(MYSX_LED_ERR, HIGH);   // turn the LED on (HIGH is the voltage level)
  //digitalWrite(MYSX_LED_RX, HIGH);   // turn the LED on (HIGH is the voltage level)
  //digitalWrite(MYSX_LED_TX, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(1000);                       // wait for a second
  //digitalWrite(MYSX_LED_ERR, LOW);   // turn the LED on (HIGH is the voltage level)
  //digitalWrite(MYSX_LED_RX, LOW);   // turn the LED on (HIGH is the voltage level)
  //digitalWrite(MYSX_LED_TX, LOW);   // turn the LED on (HIGH is the voltage level)
  //delay(1000);                       // wait for a second
  delay(100);

}

void CheckAnalogRead(int8_t pin)
{
    char fmtBuffer[64];

    pinMode(pin, INPUT);
    delay(500);
    int16_t value = analogRead(pins[pin]);

    snprintf(fmtBuffer, sizeof(fmtBuffer), PSTR(" %4u |"), value);
    MYSX_SERIAL.print(fmtBuffer);  
}

void CheckInt(int8_t pin)
{
    char fmtBuffer[64];

    snprintf(fmtBuffer, sizeof(fmtBuffer), PSTR("Check interrupts on %u pin"), pin);
    MYSX_SERIAL.println(fmtBuffer);  
    //pinMode(ledPin, OUTPUT);
    pinMode(pin, INPUT_PULLUP);
    //attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
    attachInterrupt(pin, interrupt_proc, CHANGE);
}

void interrupt_proc() {
    MYSX_SERIAL.println("Raise interupt");  
}

void CheckLed(int led)
{
  pinMode(pins[led], OUTPUT);

  Serial.print("  **  |");
  digitalWrite(pins[led], LOW);   // turn the LED on 
  delay(500);              // wait for a second
  digitalWrite(pins[led], HIGH);   // turn the LED on 
}
void CheckLed()
{
  
CheckLed(MYSX_D3);
CheckLed(MYSX_D4);
CheckLed(MYSX_D5);
CheckLed(MYSX_D6);
CheckLed(MYSX_D7);
CheckLed(MYSX_D8);
CheckLed(MYSX_D9);
CheckLed(MYSX_D10);
CheckLed(MYSX_D11);
CheckLed(MYSX_D12);
CheckLed(MYSX_D13);
CheckLed(MYSX_D14);
CheckLed(MYSX_D15);
CheckLed(MYSX_D16);
/*
  Serial.println("ON onboard led");
#ifdef MYSX_LED_ERR 
  pinMode(MYSX_LED_ERR, OUTPUT);
  digitalWrite(MYSX_LED_ERR, LOW);   // turn the LED on 
#endif
#ifdef MYSX_LED_RX
  pinMode(MYSX_LED_RX, OUTPUT);
  digitalWrite(MYSX_LED_RX, LOW);   // turn the LED on 
#endif
#ifdef MYSX_LED_TX 
  pinMode(MYSX_LED_TX , OUTPUT);
  digitalWrite(MYSX_LED_TX , LOW);   // turn the LED on 
#endif  
  */

}