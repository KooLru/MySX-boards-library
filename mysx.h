#ifndef MySX_h
#define MySX_h

/* BOARD PINS */


//Analog pin mapping

#define MYSX_A1         MYSX_D7
#define MYSX_A2         MYSX_D8
#define MYSX_A3         MYSX_D9
#define MYSX_A4         MYSX_D10
#define MYSX_A5         MYSX_D15
#define MYSX_A6         MYSX_D16

//I2C mapping
#define MYSX_SCL        MYSX_D7
#define MYSX_SDA        MYSX_D8

//SPI mapping
#define MYSX_SPI_NUMBER     0			//SPI device
#define MYSX_SPI_MOSI       MYSX_D11
#define MYSX_SPI_MISO       MYSX_D12
#define MYSX_SPI_SCK        MYSX_D13
#define MYSX_SPI_CS         MYSX_D14

// Flash leds on rx/tx/err
// Uncomment to override default HW configurations
#if MYSX_LED_ERR != MYSX_NOT_A_PIN
#define MY_DEFAULT_ERR_LED_PIN MYSX_LED_ERR   // Error led pin
#endif
#if MYSX_LED_RX != MYSX_NOT_A_PIN
#define MY_DEFAULT_RX_LED_PIN  MYSX_LED_RX    // Receive led pin
#endif
#if MYSX_LED_TX != MYSX_NOT_A_PIN
#define MY_DEFAULT_TX_LED_PIN MYSX_LED_TX     // the PCB, on board LED
#endif



#endif