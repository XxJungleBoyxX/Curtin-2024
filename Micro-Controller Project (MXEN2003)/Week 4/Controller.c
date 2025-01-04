#include "Controller.h"
# define DEBOUNCE_PERIOD 100
//static function prototypes, functions only called in this file


int main(void)
{
	/*
	milliseconds_init();
	DDRF = 0xFF;
	PORTF = 0;
	cli(); //disables interupts
	PORTD |= (1<<PD0); //writes high to assiciated bit
	DDRD &= ~(1<<DD0); //INT0 input mode

	EICRA |= (1<<ISC01);
	EICRA &= ~(1<<ISC00); // set falling edge trigger
	EIMSK |= (1<<INT0); //interrupt 0 enabled

	sei();
	*/
	//variable declarations
	char lcd_string[33] = {0}; //declare and initialise string for LCD

	//initialisation section, runs once
	adc_init(); //initialse ADC
	lcd_init(); //initialise 

	_delay_ms(20);
	uint16_t variableToPrint;
	
	//pin set up
	// DDRF = 0xFF;
    // PORTF = 0;
	//main loop
	while(1)
	{	
	//find the distance
	
		_delay_ms(500);
    	lcd_goto(0);      //Put cursor at position 0
   		 lcd_home();       // same as lcd_goto(0);
		lcd_puts( "distance (cm)" ); //Print string to LCD first line
		lcd_goto( 0x40 );     //Put cursor to first character on second line
		//variableToPrint = adc_read(0);
		variableToPrint = (int)(2823.6*(1.0/adc_read(0))-0.6757);
		//variableToPrint = (int)((1/adc_read(0))-(1/46410))/(109/278460);
		sprintf( lcd_string , "%4u" , variableToPrint ); 
		
    
    	lcd_puts( lcd_string ); //Print string to LCD second line, same as first line
	}
	return(1);
} //end main
/*
ISR(INT0_vect)
{
  uint32_t currentTime = milliseconds_now();
  static uint32_t previousTime = 0;
  if ((currentTime - previousTime) > DEBOUNCE_PERIOD)
  {
    PORTF ^= (1<<PF1);
    //do the action you want in here.
    previousTime = currentTime;
  }
}
*/