/*
 * main.c
 *
 *  Created on: Nov 12, 2016
 *      Author: otm
 */
#include <avr/io.h>
#include <util/delay.h>

#define LCD_ON PB0
#define LCD_LED PB1
#define DATA47LCD PORTD
#define LCD_RS PD2
#define LCD_RW PB2
#define LCD_EN PD3
#define DATA 1
#define INSTRUCTION 0

void initLCD();
void writeLCD(uint8_t data);

int main()
{
	DDRC = 0x00;
	PORTC = 0xFF;

	DDRD = 0xFF;
	DDRB = (1 << LCD_ON)|(1 << LCD_LED)|(1 << LCD_RW);
	PORTB = 0xFF;

while(1) {
	if(PINC&(1 << PC1))
		DATA47LCD = 0x55;
	else
		DATA47LCD = 0xAA;


}
}

void initLCD()
{
	writeLCD(data);
}

void writeLCD(uint8_t data, uint8_t rs)
{
	PORTB = (1 << LCD_RW);
}
