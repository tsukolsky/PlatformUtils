#ifndef ATMEGA_168A_H_
#define ATMEGA_168A_H_

// Symbol definitions for the I2C signals
#define prtSDA		PORTC
#define prtSCL		PORTC
#define ddrSDA		DDRC
#define ddrSCL		DDRC
#define pinSDA		PINC
#define pinSCL		PINC
#define bnSDA		4
#define bnSCL		5

// Symbol definitions for access to the UART
#define prtRXD		PORTD
#define prtTXD		PORTD
#define ddrRXD		DDRD
#define ddrTXD		DDRD
#define pinRXD		PIND
#define pinTXD		PIND
#define bnRXD		0
#define bnTXD		1

// Symbol definition for the master pin change interrupt into the microcontroller
#define prtINT0		PORTD
#define ddrINT0		DDRD
#define pinINT0		PIND
#define bnINT0		2

// Symbol definitions for access to the SPI connector
#define	prtSpi	 PORTB
#define	pinSpi	 PINB
#define	ddrSpi	 DDRB

#define	bnSpiSS		 2
#define	bnSpiMosi	 3
#define	bnSpiMiso	 4
#define	bnSpiSck	 5

//Symbol definitions for waiting counter
#define BIT0 0
#define BIT1 1
#define BIT2 2
#define BIT3 3
#define BIT4 4
#define BIT5 5
#define BIT6 6
#define BIT7 7

//Symbol definitions for ADC
#define REFS1 7
#define REFS0 6
#define ADLAR 5
#define MUX3  3
#define MUX2  2
#define MUX1  1
#define MUX0  0

#define ADEN  7
#define ADSC  6
#define ADATE 5
#define ADIF  4
#define ADIE  3
#define ADPS2 2
#define ADPS1 1
#define ADPS0 0

/*#define ACME  6
#define ADTS2 2
#define ADTS1 1
#define ADTS0 0
*/
#endif /* ATMEGA_168A_H_ */
