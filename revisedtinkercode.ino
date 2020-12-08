int red=11; // the red led is connected to pin 11
int blue=10; // the blue led is connectected to pin 10
int green=9; // the green led is connected to pin 9
int pot=A0; // the potentiometer is connected to A0
int val; // used as a placeholder for the number that comes from the potentiometer when the knob is turned

void setup(){ 
  pinMode (red,OUTPUT); // this sets the respective lights as output so they output their light
  pinMode (green, OUTPUT); // green as an output
  Serial.begin(9600); // this reads how far the potentiometer is turned
}
void loop (){
 val=analogRead(pot); // this puts the information from the potentiometer and puts it in the val variable
 val=map(val,0,1023,0,255); // the pot goes up to 1023 voltage, but the rgb led only goes to 255, so i needed to lower the max voltage
   Serial.println(val); // shows the values that come from the potentiometer
   analogWrite(red,val); // this changes the red based on the value  that was read from the potentiometer
   analogWrite(green,255-val); // this turns the green led on when the red value is at zero
}