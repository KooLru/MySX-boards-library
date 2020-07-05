//Include MySX board include file
#include <mysx_e73_r2.h>
//Include common difinition
#include <mysx.h>

void setup() {
  // put your setup code here, to run once:
  //Setup LEDs

  MYSX_SERIAL.begin(115200);
  MYSX_SERIAL.println("Test MYSX capabilitys 2");


  //CheckLed();
  CheckInt(MYSX_D3);
  
  //MYSX_SERIAL.println("Check analogread ");  
  //MYSX_SERIAL.print("MYSX_A1 ");  
  //CheckAnalogRead(MYSX_A1);
  //MYSX_SERIAL.print("MYSX_A2 ");  
  //CheckAnalogRead(MYSX_A2);
  //MYSX_SERIAL.print("MYSX_A3 ");  
  //CheckAnalogRead(MYSX_A3);
  //MYSX_SERIAL.print("MYSX_A4 ");  
  //CheckAnalogRead(MYSX_A4);
  //MYSX_SERIAL.print("MYSX_A5 ");  
  //CheckAnalogRead(MYSX_A5);
  //MYSX_SERIAL.print("MYSX_A6 ");  
  //CheckAnalogRead(MYSX_A6);
 // CheckAnalogRead(PIN_A3);

//  analogReference(AR_VDD4);

}

void loop() {
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

    MYSX_SERIAL.print(" (");  
    MYSX_SERIAL.print(pin);  

    //snprintf(fmtBuffer, sizeof(fmtBuffer), PSTR("Analogread on %u pin"), pin);
    //MYSX_SERIAL.println(fmtBuffer);  

    int16_t value = analogRead(pin);
    MYSX_SERIAL.print(") value: ");  
    MYSX_SERIAL.println(value);  

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

void CheckLed()
{

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
  

}