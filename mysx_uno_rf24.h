/* BOARD PINS */
//#include "mysx.h"

//Digital pin
#define MYSX_NOT_A_PIN  -1  /* Not under control of a peripheral. */

#define MYSX_D1         0     	//  TX	MYSX_D1_DFM - Digital IO (USART TX (data from MCU)) 
#define MYSX_D2         1     	//  RX	MYSX_D2_DTM - Digital IO (USART RX (data to MCU))

#define MYSX_D3         2     	//  INT	MYSX_D3_INT - Digital IO (interrupt)
#define MYSX_D4         3   	//  INT MYSX_D4_INT - Digital IO (interrupt)	
#define MYSX_D5         4   	//  PWM MYSX_D5_PWM - Digital IO (PWM)
#define MYSX_D6         5   	//  MYSX_D6_PWM - Digital IO (PWM)
#define MYSX_D7         6  	//  D7      A1 ???
#define MYSX_D8         7  	//  D8      A2 ???
#define MYSX_D9         8   	//  MYSX_D9_A3 - Digital IO (analog input)
#define MYSX_D10        9   	//  MYSX_D10_A4 - Digital IO (analog input)
//SPI2
#define MYSX_D11        10  	//  MYSX_D11_MOSI - Digital IO (SPI MOSI)
#define MYSX_D12        11  	//  MYSX_D12_MISO - Digital IO (SPI MISO)
#define MYSX_D13        12  	//  MYSX_D13_SCK - Digital IO (SPI SCK)
#define MYSX_D14        13  	//  MYSX_D14_CS - Digital IO (also for SPI CS)

#define MYSX_D15        14   	//  MYSX_A5 - Analog input
#define MYSX_D16        15   	//  MYSX_A6 - Analog input

//LED pins
#define MYSX_LED_ERR    4
#define MYSX_LED_RX     6
#define MYSX_LED_TX     5


#define MY_RADIO_RF24

#define MY_SIGNING_SOFT_RANDOMSEED_PIN MYSX_A5 // used in MYSX_D15

//Button Pins                                                
//#end