
//motor1//
int relay1=2;
int relay2=3;
//motor2//
int relay3=4;  
int relay4=5;
//motor3//
int relay5=2;
int relay6=3;
//motor4//
int relay7=4;
int relay8=5;
//motor7//
int relay9=6;
int relay10=7;
//motor5//
int relay11=8;
int relay12=9;
//motor6//
int relay13=10;
int relay14=11;





void setup()
{
  pinMode(relay1, OUTPUT); //Set ACW as an output//
  pinMode(relay2, OUTPUT); //Set ACCW as an output//
  pinMode(relay3, OUTPUT); //Set ACW as an output//
  pinMode(relay4, OUTPUT); //Set ACCW as an output//
  pinMode(relay5, OUTPUT); //Set ACW as an output//
  pinMode(relay6, OUTPUT); //Set ACCW as an output//
  pinMode(relay7, OUTPUT); //Set ACW as an output//
  pinMode(relay8, OUTPUT); //Set ACCW as an output//
  pinMode(relay9, OUTPUT); //Set ACW as an output//
  pinMode(relay10, OUTPUT); //Set ACCW as an output//
  pinMode(relay11, OUTPUT); //Set ACW as an output//
  pinMode(relay12, OUTPUT); //Set ACCW as an output//
  pinMode(relay13, OUTPUT); //Set ACW as an output//
  pinMode(relay14, OUTPUT); //Set ACCW as an output//



  digitalWrite(relay1, HIGH); //OFF//
  digitalWrite(relay2, HIGH); //OFF//
  digitalWrite(relay3, HIGH); //OFF//
  digitalWrite(relay4, HIGH); //OFF//
  digitalWrite(relay5, HIGH); //OFF//
  digitalWrite(relay6, HIGH); //OFF//
  digitalWrite(relay7, HIGH); //OFF//
  digitalWrite(relay8, HIGH); //OFF//
  digitalWrite(relay9, HIGH); 
  digitalWrite(relay10, HIGH);
  digitalWrite(relay11, HIGH); 
  digitalWrite(relay12, HIGH);
  digitalWrite(relay13, HIGH); 
  digitalWrite(relay14, HIGH);


  Serial.begin(9600);
  Serial.println("14 relay");
  delay (2000);
  }
void loop()
{
//Motor1 & 3runs clockwise //
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,LOW);
  digitalWrite(relay5,HIGH);
  digitalWrite(relay6,LOW);
//motor2 & 4runs counterclockwise//
  digitalWrite(relay3,LOW);
  digitalWrite(relay4,HIGH);
digitalWrite(relay7,LOW);
  digitalWrite(relay8,HIGH);
  delay(6000);
  
  //MOTOR STOPS//
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);
  digitalWrite(relay3,HIGH);
  digitalWrite(relay4,HIGH);
digitalWrite(relay5,HIGH);
  digitalWrite(relay6,HIGH);
  digitalWrite(relay7,HIGH);
  digitalWrite(relay8,HIGH);

  Serial.println("Stop1");
  delay (2000);

  //Motor runs clockwise//
  
  // motor 5//
  digitalWrite(relay11,HIGH);
  digitalWrite(relay12,LOW);
  Serial.println("ccw");
  //motor 6//
  digitalWrite(relay13,LOW);
  digitalWrite(relay14,HIGH);
  Serial.println("ccw");
  delay (5000);
//Motor stops//
   //motor5//
  digitalWrite(relay11, HIGH); 
  digitalWrite(relay12, HIGH);
  Serial.println("cw");
   //motor6//
  digitalWrite(relay13, HIGH); 
  digitalWrite(relay14, HIGH);
  Serial.println("cw");
  delay (2000);
  //motor counterclockwise//
  // motor 7//
  digitalWrite(relay9,LOW);
  digitalWrite(relay10,HIGH);
  Serial.println("ccw");
  delay(7000);
  //Motor7 stops//
  digitalWrite(relay9, HIGH); 
  digitalWrite(relay10, HIGH);
  Serial.println("cw");
  delay (3000);
  //Motor runs clockwise//
  //motor7//
  digitalWrite(relay9,HIGH);
  digitalWrite(relay10,LOW);
  Serial.println("cw");
  delay (7000);
   // motor 7//
  digitalWrite(relay9,HIGH);
  digitalWrite(relay10,HIGH);
  Serial.println("stop");
  delay (2000);
  
  //motor5//
  digitalWrite(relay11,HIGH);
  digitalWrite(relay12,LOW);
  Serial.println("cw"); 
  //motor6//
  digitalWrite(relay13,LOW);
  digitalWrite(relay14,HIGH);
  Serial.println("cw");
  delay (5000);


//motor1 runs counterclockwise//
  digitalWrite(relay1,LOW);
  digitalWrite(relay2,HIGH);
  digitalWrite(relay5,LOW);
  digitalWrite(relay6,HIGH);

//Motor1 runs clockwise //
  digitalWrite(relay3,HIGH);
  digitalWrite(relay4,LOW);
digitalWrite(relay7,HIGH);
  digitalWrite(relay8,LOW);

  delay(6000);


//motor stops//
   digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);
  //motor2//
  digitalWrite(relay3,HIGH);
  digitalWrite(relay4,HIGH);
digitalWrite(relay5,HIGH);
  digitalWrite(relay6,HIGH);
  digitalWrite(relay7,HIGH);
  digitalWrite(relay8,HIGH);

  
  
}
