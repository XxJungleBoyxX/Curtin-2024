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

  DDRA = 0x00; //sets to input mode
  PORTA = 0xFF;
  //XVAL = adc_read(0);
  //YVAL = adc_read(1);
  adc_init();
  //uint8_t b = PORTB; // port B into input mode
  while(1)//main loop
  {
    if (!(PINA & (1<<PA1)))
    {
      if (adc_read(1) < 125) {   
        PORTC = (1<<0);     
      }
      if (adc_read(1) > 125 && adc_read(1) < 250)
      {
        PORTC = (1<<1);
      }
      if (adc_read(1) > 250 && adc_read(1) < 375)
      {
        PORTC = (1<<2);
      }
      if (adc_read(1) > 375 && adc_read(1) < 500)
      {
        PORTC = (1<<3);
      }
      if (adc_read(1) > 500 && adc_read(1) < 625)
      {
        PORTC = (1<<4);
      }
      if (adc_read(1) > 625 && adc_read(1) < 750)
      {
        PORTC = (1<<5);
      }
      if (adc_read(1) > 750 && adc_read(1) < 875)
      {
        PORTC = (1<<6);
      }
      if (adc_read(1) > 875 && adc_read(1) < 1000)
      {
        PORTC = (1<<7);
      }
    }
    else
    {
      if (adc_read(0) < 125) {   
        PORTC = (1<<0);     
      }
      if (adc_read(0) > 125 && adc_read(0) < 250)
      {
        PORTC = (1<<1);
      }
      if (adc_read(0) > 250 && adc_read(0) < 375)
      {
        PORTC = (1<<2);
      }
      if (adc_read(0) > 375 && adc_read(0) < 500)
      {
        PORTC = (1<<3);
      }
      if (adc_read(0) > 500 && adc_read(0) < 625)
      {
        PORTC = (1<<4);
      }
      if (adc_read(0) > 625 && adc_read(0) < 750)
      {
        PORTC = (1<<5);
      }
      if (adc_read(0) > 750 && adc_read(0) < 875)
      {
        PORTC = (1<<6);
      }
      if (adc_read(0) > 875 && adc_read(0) < 1000)
      {
        PORTC = (1<<7);
      }
    }

  }
  return(1);
}//end main 