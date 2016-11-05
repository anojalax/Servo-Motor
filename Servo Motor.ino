#include <Servo.h>

Servo myservo;  // create servo object
int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  //pin 9 connected for output
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 90; pos -= 1) 
  { 
    myservo.write(pos);             
    delay(15);                     
  }
  for (pos = 90; pos <= 180; pos += 1)
  { 
    myservo.write(pos);             
    delay(15);                    
  }
  for (pos = 180; pos <= 0; pos -= 1)
  { 
    myservo.write(pos);           
    delay(15);                      
  }
}