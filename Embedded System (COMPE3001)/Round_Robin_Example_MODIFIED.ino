#define LEDA LED1
#define LEDB LED2
#define LEDC LED3
#define LEDD LED4
#define LEDE LED5
#define LEDF LED6
#define LEDG LED7
#define LEDH LED8

//see pins_energia.h for more LED definitions
//#define LED GREEN_LED
  
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LEDA, OUTPUT);
  pinMode(LEDB, OUTPUT);     
  pinMode(LEDC, OUTPUT);     
  pinMode(LEDD, OUTPUT);     
  pinMode(LEDE, OUTPUT);
  pinMode(LEDF, OUTPUT);     
  pinMode(LEDG, OUTPUT);     
  pinMode(LEDH, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LEDA, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);               // wait for a second
  digitalWrite(LEDA, LOW);    // turn the LED off by making the voltage LOW
  delay(250);               // wait for a second
  digitalWrite(LEDB, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);               // wait for a second
  digitalWrite(LEDB, LOW);    // turn the LED off by making the voltage LOW
  delay(250);     
  digitalWrite(LEDC, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);               // wait for a second
  digitalWrite(LEDC, LOW);    // turn the LED off by making the voltage LOW
  delay(250);     
  digitalWrite(LEDD, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);               // wait for a second
  digitalWrite(LEDD, LOW);    // turn the LED off by making the voltage LOW
  delay(250);  
  digitalWrite(LEDE, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);               // wait for a second
  digitalWrite(LEDE, LOW);    // turn the LED off by making the voltage LOW
  delay(250);               // wait for a second
  digitalWrite(LEDF, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);               // wait for a second
  digitalWrite(LEDF, LOW);    // turn the LED off by making the voltage LOW
  delay(250);     
  digitalWrite(LEDG, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);               // wait for a second
  digitalWrite(LEDG, LOW);    // turn the LED off by making the voltage LOW
  delay(250);     
  digitalWrite(LEDH, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);               // wait for a second
  digitalWrite(LEDH, LOW);    // turn the LED off by making the voltage LOW
  delay(250);   
}

