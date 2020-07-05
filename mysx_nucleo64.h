/* BOARD PINS */

#include <SPI.h>

//Digital pin

#define MYSX_D1         PA9   //  TX	MYSX_D1_DFM - Digital IO (USART TX (data from MCU)) 
#define MYSX_D2         PA10  //  RX	MYSX_D2_DTM - Digital IO (USART RX (data to MCU))
#define MYSX_D3         PB1   //  INT	MYSX_D3_INT - Digital IO (interrupt)
#define MYSX_D4         PA8   //  INT MYSX_D4_INT - Digital IO (interrupt)	
#define MYSX_D5         PB6   //  PWM MYSX_D5_PWM - Digital IO (PWM)
#define MYSX_D6         PB0   //  MYSX_D6_PWM - Digital IO (PWM)
#define MYSX_D7         PB10  //  
#define MYSX_D8         PB11  //  
#define MYSX_D9         PA2   //  MYSX_D9_A3 - Digital IO (analog input)
#define MYSX_D10        PA3   //  MYSX_D10_A4 - Digital IO (analog input)
//SPI2
#define MYSX_D11        PB15  //  MYSX_D11_MOSI - Digital IO (SPI MOSI)
#define MYSX_D12        PB14  //  MYSX_D12_MISO - Digital IO (SPI MISO)
#define MYSX_D13        PB13  //  MYSX_D13_SCK - Digital IO (SPI SCK)
#define MYSX_D14        PB12  //  MYSX_D14_CS - Digital IO (also for SPI CS)

#define MYSX_D15        PA0   //  MYSX_A5 - Analog input
#define MYSX_D16        PA1   //  MYSX_A6 - Analog input

//LED pins
#define MYSX_LED_ERR    PB8   
#define MYSX_LED_RX     PB7   
#define MYSX_LED_TX     PB3   

//SPIClass SPI_2(MYSX_SPI_MOSI, MYSX_SPI_MISO, MYSX_SPI_SCK); 
//#ifdef ARDUINO_ARCH_STM32   
//SPIClass MYSX_SPI(MYSX_D11, MYSX_D12, MYSX_D13); 
//#endif
//i2c

//#ifdef SDA
//#undef SDA
//#endif
//#define SDA MYSX_D8

//#ifdef SCL
//#undef SCL
//#endif
//#define SCL MYSX_D7

//#include <Wire.h>

//  MYSX_I2C.setSDA(MYSX_SDA);
//  MYSX_I2C.setSCL(MYSX_SCL);
//  MYSX_I2C.begin();
//  TwoWire MYSX_I2C(MYSX_D8, MYSX_D7); 


//Stm32 
#define MY_RADIO_RF24
//NRF 24 ON SPI1
#define MY_RF24_CS_PIN     PB6
#define MY_RF24_SCK_PIN    PA5
#define MY_RF24_MISO_PIN   PA6
#define MY_RF24_MOSI_PIN   PA7
//MYSX-STMe32-ADAPTERr
#define MY_RF24_CE_PIN     PC7
//#define MY_RF24_IRQ_PIN    PB5
//default options
//#define MY_RF24_CE_PIN   PB0
//#define MY_RF24_IRQ_PIN  PB10

#define MY_SIGNING_SOFT_RANDOMSEED_PIN PA0 // used in MYSX_D15

//Button Pins                                                
//#end