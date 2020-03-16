//To be used with a PNP Transistor
// GND From RSL goes to Arduino GND
// Pin 13 goes to Transistor pin 1 (base)
// GND goes to Pin 3 on Transistor (Emitter)????
// RSL Ground goes to pin 2 (Collector)?????????
// Powered by 1 A12 Battery (12v)


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
