/* BOARD PINS */
//#include "mysx.h"

//Digital pin
#define MYSX_NOT_A_PIN  -1  /* Not under control of a peripheral. */

#define MYSX_D1         11     	//  TX	MYSX_D1_DFM - Digital IO (USART TX (data from MCU)) 
#define MYSX_D2         12     	//  RX	MYSX_D2_DTM - Digital IO (USART RX (data to MCU))

#define MYSX_D3         2     	//  INT	MYSX_D3_INT - Digital IO (interrupt)
#define MYSX_D4         3   	//  INT MYSX_D4_INT - Digital IO (interrupt)	
#define MYSX_D5         4   	//  PWM MYSX_D5_PWM - Digital IO (PWM)
#define MYSX_D6         5   	//  MYSX_D6_PWM - Digital IO (PWM)
#define MYSX_D7         6  	//  D7      A1 ???
#define MYSX_D8         7  	//  D8      A2 ???
#define MYSX_D9         8   	//  MYSX_D9_A3 - Digital IO (analog input)
#define MYSX_D10        9   	//  MYSX_D10_A4 - Digital IO (analog input)
//SPI
#define MYSX_D11        26  	//  MYSX_D11_MOSI - Digital IO (SPI MOSI)
#define MYSX_D12        27  	//  MYSX_D12_MISO - Digital IO (SPI MISO)
#define MYSX_D13        25  	//  MYSX_D13_SCK - Digital IO (SPI SCK)
#define MYSX_D14        22  	//  MYSX_D14_CS - Digital IO (also for SPI CS)

#define MYSX_D15        23   	//  MYSX_A5 - Analog input
#define MYSX_D16        24   	//  MYSX_A6 - Analog input

//LED pins
#define MYSX_LED_ERR    MYSX_NOT_A_PIN
#define MYSX_LED_RX     MYSX_NOT_A_PIN
#define MYSX_LED_TX     MYSX_NOT_A_PIN


//Stm32 
#define MY_RADIO_NRF5_ESB
//NRF5 not need RF24 radio
//#define MY_RF24_CS_PIN     PA4
//#define MY_RF24_SCK_PIN    PA5
//#define MY_RF24_MISO_PIN   PA6
//#define MY_RF24_MOSI_PIN   PA7
//MYSX-STMe32-ADAPTERr
//#define MY_RF24_CE_PIN     PB4
//#define MY_RF24_IRQ_PIN    PB5
//default options
//#define MY_RF24_CE_PIN   PB0
//#define MY_RF24_IRQ_PIN  PB10

#define MY_SIGNING_SOFT_RANDOMSEED_PIN MYSX_D16 // used in MYSX_D15

//Button Pins                                                
//#end