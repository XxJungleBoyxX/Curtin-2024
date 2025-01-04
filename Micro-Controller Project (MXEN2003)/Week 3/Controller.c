#include "Controller.h"
# define DEBOUNCE_PERIOD 100
//static function prototypes, functions only called in this file

int main(void)
{

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
  while(1)
  {

  }
  return(1);
//end main 
}

ISR(INT0_vect)
{
  uint32_t currentTime = milliseconds_now();
  static uint32_t previousTime = 0;
  if ((currentTime - previousTime) > DEBOUNCE_PERIOD)
  {
    PORTF ^= (1<<PF0);
    //do the action you want in here.
    previousTime = currentTime;
  }
}
