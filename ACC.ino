
int trigPin = 9;
int echoPin = 10; 
int fwdleft = 7;          
int fwdright= 5;       

void setup() {
  Serial.begin(9600); 
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
  // put your setup code here, to run once:
}

void loop() {
  float duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);
   
  if((distance>20))
 {
analogWrite(fwdleft,255); 
analogWrite(fwdright,255); 
 }
 
  else if(distance<20)  
 {
digitalWrite(fwdleft,100); 
analogWrite(fwdright,100);                                           
 }
}

