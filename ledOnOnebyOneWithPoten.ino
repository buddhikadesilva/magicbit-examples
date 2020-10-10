void setup(){
     pinMode(39,INPUT);
     pinMode(27,OUTPUT);
     pinMode(18,OUTPUT);
     pinMode(16,OUTPUT);
  pinMode(17,OUTPUT);
     Serial.begin(9600);
}
void loop(){
     int sensorValue = analogRead(39);
     Serial.println(sensorValue);

     if(sensorValue > 1000){
        digitalWrite(27,HIGH);
        
     }else{
        digitalWrite(27,LOW);
          
     }


     if(sensorValue > 2000){
        digitalWrite(18,HIGH);
        
     }else{
        digitalWrite(18,LOW);
          
     }
     if(sensorValue > 3000){
        digitalWrite(16,HIGH);
        
     }else{
        digitalWrite(16,LOW);
          
     }
     if(sensorValue > 4000){
        digitalWrite(17,HIGH);
        
     }else{
        digitalWrite(17,LOW);
          
     }
    
 }
 
