//Define P0.21 as Reset pin
//#define CONFIG_GPIO_AS_PINRESET
#define CONFIG_ENABLE_PINRESET
/* BOARD PINS */
//Digital pin
#define MYSX_NOT_A_PIN  -1  /* Not under control of a peripheral. */

#define MYSX_D1         19     	//  TX	MYSX_D1_DFM - Digital IO (USART TX (data from MCU)) 
#define MYSX_D2         20     	//  RX	MYSX_D2_DTM - Digital IO (USART RX (data to MCU))

#define MYSX_D3         28     	//  INT	MYSX_D3_INT - Digital IO (interrupt)
#define MYSX_D4         29   	//  INT MYSX_D4_INT - Digital IO (interrupt)	
#define MYSX_D5         17   	//  PWM MYSX_D5_PWM - Digital IO (PWM)
#define MYSX_D6         16   	//  MYSX_D6_PWM - Digital IO (PWM)
#define MYSX_D7         31  	//  D7      A1 ??? SCL
#define MYSX_D8         30  	//  D8      A2 ??? SDA
#define MYSX_D9         3   	//  MYSX_D9_A3 - Digital IO (analog input)
#define MYSX_D10        2   	//  MYSX_D10_A4 - Digital IO (analog input)
//SPI
#define MYSX_D11        15  	//  MYSX_D11_MOSI - Digital IO (SPI MOSI)
#define MYSX_D12        13  	//  MYSX_D12_MISO - Digital IO (SPI MISO)
#define MYSX_D13        14  	//  MYSX_D13_SCK - Digital IO (SPI SCK)
#define MYSX_D14        12  		//  MYSX_D14_CS - Digital IO (also for SPI CS)

#define MYSX_D15        MYSX_NOT_A_PIN  //  MYSX_A5 - Analog input
#define MYSX_D16        MYSX_NOT_A_PIN	//  MYSX_A6 - Analog input

//LED pins
#define MYSX_LED_ERR    8
#define MYSX_LED_RX     7
#define MYSX_LED_TX     6


//Built in NRF5 radio 
#define MY_RADIO_NRF5_ESB

#define MY_SIGNING_SOFT_RANDOMSEED_PIN 4 //MYSX_D16 // used in MYSX_D15

#include <Wire.h>


#define PIN_SERIAL_RX       (MYSX_D1)
#define PIN_SERIAL_TX       (MYSX_D2)


//Button Pins                                                
//#end