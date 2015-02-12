// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
 
Servo right;  // create servo object to control a servo 
Servo left;  // create servo object to control a servo 

void setup() 
{ 
  right.attach(5);  // attaches the servo on pin 9 to the servo object 
  left.attach(6);  // attaches the servo on pin 9 to the servo object 
  right.write(90);                  // sets the servo position according to the scaled value 
  left.write(90);  
  Serial.begin(115200);
} 
 
void loop() 
{ 
    // look for the next valid integer in the incoming serial stream:
    val = Serial.parseInt();

if (val == 2)
{
  right.write(xval);
}
else if (val == 1)
{
  left.write(yval);
}

  delay(15);
} 
