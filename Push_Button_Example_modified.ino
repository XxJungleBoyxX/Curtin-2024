#define LEDA LED1
#define LEDB LED2

volatile int flag = LOW;
int count = 0;

void setup()
{
   pinMode(LEDA, OUTPUT);
   pinMode(LEDB, OUTPUT);     
   pinMode(PUSH2, INPUT_PULLUP);
  attachInterrupt(PUSH2, blink, FALLING); // Interrupt is fired whenever button is pressed
}

void loop()
{
  if(flag) {
    if(count==0) {
      digitalWrite(LEDB, LOW);
      digitalWrite(LEDA, HIGH);   // turn the LED on (HIGH is the voltage level)              // wait for a second
      delay(500);              // wait for a second
      flag = LOW;
      count = 1;
    }
    else {
      digitalWrite(LEDA, LOW);   
      digitalWrite(LEDB, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(500);    
      flag = LOW;
      count = 0;
    }
  }
}
void blink()
{
  flag = HIGH;
}

