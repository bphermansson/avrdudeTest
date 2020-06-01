#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	while(1)
	{
		DDRB= 0xff; //sets all the pins as outputs
		PORTB= 0xff; //set all of PORT B pins as HIGH
		_delay_ms(500);//keeps the LED on for a half a second
		PORTB= 0x00;//turns the LED off
		_delay_ms(500);//keeps the LED off for a half a second
	}
}
