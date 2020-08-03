/// CODE FOR OBSTACLE AVOIDING ROBOT ///

#define trigPin 9
#define echoPin 10
    
#define LeftMotorForward 4      
#define LeftMotorReverse 5       
#define RightMotorForward 6 
#define RightMotorReverse 7  


void setup() 
{ 
   pinMode(LeftMotorForward, OUTPUT);
   pinMode(LeftMotorReverse, OUTPUT);
   pinMode(RightMotorForward, OUTPUT);
   pinMode(RightMotorReverse, OUTPUT);
   
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
  
}

void loop() 
{
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  delay(10);
 
  
  if((distance>20))
 {
  digitalWrite(RightMotorForward,HIGH);       // Move the robot forward                        
   digitalWrite(RightMotorReverse,LOW);                               
   digitalWrite(LeftMotorReverse,LOW);                               
   digitalWrite(LeftMotorForward,HIGH);                             
 }
 
  else if(distance<20)  
 {
   digitalWrite(RightMotorForward,HIGH);      // Rotate the robot left 
   digitalWrite(RightMotorReverse,LOW);
   digitalWrite(LeftMotorReverse,HIGH);                                  
   digitalWrite(LeftMotorForward,LOW);
                                            
 }
 
}
