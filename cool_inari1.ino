// C++ codesec

#include <Servo.h>
Servo myservo0;
Servo myservo1;
Servo myservo2;
Servo myservo3;


void setup(){
  myservo0.attach(9);
  myservo1.attach(10);
  myservo2.attach(11);
  myservo3.attach(12);
}

void loop(){
  
  unsigned long startTime=millis();
  
  while(millis() - startTime< 2000){
  for(int angle=0; angle<=180; angle +=10){
myservo0.write(angle);
myservo1.write(angle);
myservo2.write(angle);
myservo3.write(angle);
    delay(15);
    
    if (millis() - startTime>=2000)
      break;
  }
  
  for(int angle=180; angle>=0; angle -=10){
myservo0.write(angle);
myservo1.write(angle);
myservo2.write(angle);
myservo3.write(angle);
    delay(15);

    if (millis() - startTime>=2000) 
      break;
  }
  }
  myservo0.write(90);
  myservo1.write(90);
  myservo2.write(90);
  myservo3.write(90);
  
  while(true);
 
}