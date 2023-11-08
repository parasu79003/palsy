#include <SoftwareSerial.h>
SoftwareSerial mySerial(0,1);
 
int func=0;
 
#define ACW 3//CW is defined as pin #2//
#define ACCW 4//CCW is defined as pin #3//
 
#define BCW 5
#define BCCW 6
 
#define CCW 7
#define CCCW 8
 
#define DCW 9
#define DCCW 10
 
#define ECW 11
#define ECCW 12
void setup() { //Setup runs once//
  Serial.begin(9600); //open the serial port
  mySerial.begin(9600); // open the bluetooth serial port
  
  pinMode(ACW, OUTPUT); //Set ACW as an output//
  pinMode(ACCW, OUTPUT); //Set ACCW as an output//
   
  pinMode(BCW, OUTPUT); // motor 2//
  pinMode(BCCW, OUTPUT);
 
  pinMode(CCW, OUTPUT); // motor 3//
  pinMode(CCCW, OUTPUT);
 
  pinMode(DCW, OUTPUT); // motor 4//
  pinMode(DCCW, OUTPUT);
 
  pinMode(ECW, OUTPUT); // motor 5//
  pinMode(ECCW, OUTPUT);
}
 
void loop() { //Loop runs forever//
    if(mySerial.available()){
    Serial.println(mySerial.readString()); // send from serial to bluetooth
  }
  if(Serial.available()){
    mySerial.println(Serial.readString());// send from bluetooth to serial
  }
    // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    func = Serial.read();
  }
  if(func == 1){//hand and leg flexion & extension//    
  // motor 1//
  digitalWrite(ACW,HIGH); //Motor runs clockwise// 
  delay(5000);            //for 5 second// 
  digitalWrite(ACW, LOW); //Motor stops//
  digitalWrite(ACCW, HIGH);//Motor runs counter-clockwise// 
  delay(5000);            //For 5 second//
  digitalWrite(ACCW, LOW); //Motor stops// 
 
    // motor 2//
  digitalWrite(BCW,HIGH); //Motor runs clockwise// 
  delay(5000);            //for 5 second// 
  digitalWrite(BCW, LOW); //Motor stops//
  digitalWrite(BCCW, HIGH);//Motor runs counter-clockwise// 
  delay(5000);            //For 5 second//
  digitalWrite(BCCW, LOW); //Motor stops// 
 
    // motor 3 //
  digitalWrite(CCW,HIGH); //Motor runs clockwise// 
  delay(5000);            //for 5 second// 
  digitalWrite(CCW, LOW); //Motor stops//
  digitalWrite(CCCW, HIGH);//Motor runs counter-clockwise// 
  delay(5000);            //For 5 second//
  digitalWrite(CCCW, LOW); //Motor stops// 
 
  // motor 4//
  digitalWrite(ACW,HIGH); //Motor runs clockwise// 
  delay(5000);            //for 5 second// 
  digitalWrite(ACW, LOW); //Motor stops//
  digitalWrite(ACCW, HIGH);//Motor runs counter-clockwise// 
  delay(5000);            //For 5 second//
  digitalWrite(ACCW, LOW); //Motor stops// 
  }
  if(func==2){//palm and foot up and down//
    //motor3//
  digitalWrite(CCW,HIGH); //Motor runs clockwise// 
  delay(5000);            //for 5 second// 
  digitalWrite(CCW, LOW); //Motor stops//
  digitalWrite(CCCW, HIGH);//Motor runs counter-clockwise// 
  delay(5000);            //For 5 second//
  digitalWrite(CCCW, LOW); //Motor stops//
      // motor 4//
  digitalWrite(DCW,HIGH); //Motor runs clockwise// 
  delay(5000);            //for 5 second// 
  digitalWrite(DCW, LOW); //Motor stops//
  digitalWrite(DCCW, HIGH);//Motor runs counter-clockwise// 
  delay(5000);            //For 5 second//
  digitalWrite(DCCW, LOW); //Motor stops// 
  }
  if(func ==3){//palm,foot left,right//
           // motor 3//
  digitalWrite(CCW,HIGH); //Motor runs clockwise// 
  delay(5000);            //for 5 second// 
  digitalWrite(CCW, LOW); //Motor stops//
      // motor 4//
  digitalWrite(DCW,HIGH); //Motor runs clockwise// 
  delay(5000);            //for 5 second// 
  digitalWrite(DCW, LOW); //Motor stops//      
      // motor 5//
  digitalWrite(ACW,HIGH); //Motor runs clockwise// 
  delay(2000);            //for 5 second// 
  digitalWrite(ACW, LOW); //Motor stops//
  digitalWrite(ACCW, HIGH);//Motor runs counter-clockwise// 
  delay(2000);            //For 5 second//
  digitalWrite(ACCW, LOW); //Motor stops//
  }
  if(func==4){//adduction &abduction//
   // motor 5//
  digitalWrite(ACW,HIGH); //Motor runs clockwise// 
  delay(2000);            //for 5 second// 
  digitalWrite(ACW, LOW); //Motor stops//
  digitalWrite(ACCW, HIGH);//Motor runs counter-clockwise// 
  delay(2000);            //For 5 second//
  digitalWrite(ACCW, LOW); //Motor stops//  
  }
  if(func ==0){// over all stop//
    //motor 1//
  digitalWrite(ACW, LOW);
  digitalWrite(ACCW, LOW);   
  digitalWrite(ACCW, HIGH);//Motor runs counter-clockwise// 
  delay(5000);            //For 5 second//
  digitalWrite(ACCW, LOW);
 
  
    //motor 2//
  digitalWrite(BCW, LOW);
  digitalWrite(BCCW, LOW);   
  digitalWrite(BCCW, HIGH);//Motor runs counter-clockwise// 
  delay(5000);            //For 5 second//
  digitalWrite(BCCW, LOW);
 
  
    //motor 3//
  digitalWrite(CCW, LOW);
  digitalWrite(CCCW, LOW);   
  digitalWrite(CCCW, HIGH);//Motor runs counter-clockwise// 
  delay(5000);            //For 5 second//
  digitalWrite(CCCW, LOW);
 
  
    //motor 4//
  digitalWrite(DCW, LOW);
  digitalWrite(DCCW, LOW);   
  digitalWrite(DCCW, HIGH);//Motor runs counter-clockwise// 
  delay(5000);            //For 5 second//
  digitalWrite(DCCW, LOW);
 
  
    //motor 5//
  digitalWrite(ECW, LOW);
  digitalWrite(ECCW, LOW);   
  digitalWrite(ECCW, HIGH);//Motor runs counter-clockwise// 
  delay(2000);            //For 5 second//
  digitalWrite(ECCW, LOW);
  }
}
