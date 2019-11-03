void setup() {
 
pinMode(12,INPUT);
pinMode(7,OUTPUT);
}

void loop() {

    
if(digitalRead(12)==HIGH)
{
digitalWrite(7,HIGH);
}
else 
{
 digitalWrite(7,LOW);
}
  
}