

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
    Serial.begin(9600); 
   
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
     String b;
     b = Serial.read();
     if(b == "48")
     {
       digitalWrite(13,LOW);
       
     }
     else if(b == "49")
     {
      digitalWrite(13,HIGH);
      delay(2000);
     }
     else
     {
      digitalWrite(13,LOW);
     }
     

  }

}
