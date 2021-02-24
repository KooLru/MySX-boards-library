/* BOARD PINS */

#define MYSX_NOT_A_PIN  -1
//Digital pin

#define MYSX_D1         PA9   //  TX	MYSX_D1_DFM - Digital IO (USART TX (data from MCU)) 
#define MYSX_D2         PA10  //  RX	MYSX_D2_DTM - Digital IO (USART RX (data to MCU))

#define MYSX_D3         PB8   //  INT	MYSX_D3_INT - Digital IO (interrupt)
#define MYSX_D4         PB9   //  INT MYSX_D4_INT - Digital IO (interrupt)	

#define MYSX_D5         PA1   //  PWM MYSX_D5_PWM - Digital IO (PWM)
#define MYSX_D6         PA0   //  MYSX_D6_PWM - Digital IO (PWM)

//I2C
#define MYSX_D7         PB6  //  a1 SCL
#define MYSX_D8         PB7  //  a2 SDA

#define MYSX_D9         PB1   //  MYSX_D9_A3 - Digital IO (analog input)
#define MYSX_D10        PB0   //  MYSX_D10_A4 - Digital IO (analog input)
//SPI1
#define MYSX_D11        PA7   //  MYSX_D11_MOSI - Digital IO (SPI MOSI)
#define MYSX_D12        PA6   //  MYSX_D12_MISO - Digital IO (SPI MISO)
#define MYSX_D13        PA5   //  MYSX_D13_SCK - Digital IO (SPI SCK)
#define MYSX_D14        PA4   //  MYSX_D14_CS - Digital IO (also for SPI CS)

#define MYSX_D15        PA1   //  MYSX_A5 - Analog input
#define MYSX_D16        PA0   //  MYSX_A6 - Analog input

//LED pins
#define MYSX_LED_ERR    PA8   
#define MYSX_LED_RX     PA15   
#define MYSX_LED_TX     PB3   

//	I2C on default pins
//#ifdef SDA
//#undef SDA
//#endif
//#define SDA MYSX_D8
//
//#ifdef SCL
//#undef SCL
//#endif
//#define SCL MYSX_D7
#include <Wire.h>

///  MYSX_I2C.setSDA(MYSX_SDA);
//  MYSX_I2C.setSCL(MYSX_SCL);
//  MYSX_I2C.begin();
//  TwoWire MYSX_I2C(MYSX_D8, MYSX_D7); 


#include <SPI.h>

//NRF 24 ON SPI2
#define MY_RADIO_RF24
#define MY_RF24_CS_PIN     PB12
#define MY_RF24_SCK_PIN    PB13
#define MY_RF24_MISO_PIN   PB14
#define MY_RF24_MOSI_PIN   PB15
#define MY_RF24_CE_PIN     PB4
#define MY_RF24_IRQ_PIN    PB5
//default options
//#define MY_RF24_CE_PIN   PB0
//#define MY_RF24_IRQ_PIN  PB10


//SPIClass RF24_SPI(2); //Create an SPI2 object.

//SPIClass(uint8_t mosi, uint8_t miso, uint8_t sclk, uint8_t ssel = (uint8_t)NC);
SPIClass RF24_SPI(MY_RF24_MOSI_PIN, MY_RF24_MISO_PIN, MY_RF24_SCK_PIN, MY_RF24_CS_PIN); 

#define MY_SIGNING_SOFT_RANDOMSEED_PIN PA0 // used in MYSX_D15



//Button Pins                                                
//#end