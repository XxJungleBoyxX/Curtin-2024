//Example ATmega2560 Project
//File: ATmega2560Project.c
//An example file for second year mechatronics project

//include this .c file's header file
#include "Controller.h"

//static function prototypes, functions only called in this file

int main(void)
{
  DDRC = 0xFF;//put PORTA into output mode
  PORTC = 0; 
  while(1)//main loop
  {
    for (int i = 0; i < 8; i++)
    {
      /*
      _delay_ms(500);     //500 millisecond delay
      PORTA |= (1<<i);  

      _delay_ms(500); 
      PORTA &= ~(1<<i);
      */ 
      _delay_ms(500);     //500 millisecond delay
      PORTC = (1<<i);  
    }
  }
  return(1);
}//end main 