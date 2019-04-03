#include <SoftwareSerial.h>

//int TxPin = 15;
//int RxPin= 14;


int red =9;
int green =10;
int blue = 11; 
//SoftwareSerial BTSerial(TxPin, RxPin);

void setup() {

Serial.begin(9600); // PC연결 
Serial1.begin(9600);
//BTSerial.begin(9600);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);


}

void loop() {
  if(Serial1.available()){
    
    char cmd=(char)Serial1.read();
    if(cmd =='1'){
      digitalWrite(red,HIGH);
       digitalWrite(green,LOW);
        digitalWrite(blue,LOW);
    } else if(cmd =='2'){
      
      digitalWrite(red,LOW);
       digitalWrite(green,HIGH);
        digitalWrite(blue,LOW);
    }
    else if(cmd =='3'){
      
      digitalWrite(red,LOW);
       digitalWrite(green,LOW);
        digitalWrite(blue,HIGH);
    }
    else if(cmd =='0'){
      
      digitalWrite(red,LOW);
       digitalWrite(green,LOW);
        digitalWrite(blue,LOW);
      
        
    }
  }

}
