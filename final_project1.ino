const int analog_ip = A0; // continuously reads the knob
const int LED = 3;
int inputVal = 0; 

void setup() { 
  pinMode (LED, OUTPUT); // sets the LED as the output
}

void loop() { // runs it over and over again
  inputVal = analogRead(analog_ip); // makes the input value based on where the knob is turmed
  analogWrite (LED, inputVal/4); // changes the LED
  delay(100); // creates a delay
}