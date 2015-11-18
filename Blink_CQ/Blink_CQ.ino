/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly. (REVISED TO CQ)
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 has the LED on Teensy 2.0
// Pin 6  has the LED on Teensy++ 2.0
// Pin 13 has the LED on Teensy 3.0
// give it a name:
//int led1 = 11;
//int led2 = 13;

// the setup routine runs once when you press reset:
/*void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);  
}
*/

// the loop routine runs over and over again forever:
/*void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);
  delay(125);               // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, HIGH);
  delay(125);               // wait for a second
}
*/
int pin = 13;

void setup()
{
  pinMode(pin, OUTPUT);
}

void loop()
{
  dash(); dot();dash(); dot();
  delay(250);
  dash(); dash(); dot(); dash();
  delay(1000);
}

void dot()
{
  digitalWrite(pin, HIGH);
  delay(125);
  digitalWrite(pin, LOW);
  delay(100);
}

void dash()
{
  digitalWrite(pin, HIGH);
  delay(300);
  digitalWrite(pin, LOW);
  delay(100);
}
