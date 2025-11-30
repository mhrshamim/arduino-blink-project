int led1=7;
void setup() 
{
  // PinMode(pin,mode);
  pinMode(7,OUTPUT);

}
void loop() 
{
  digitalWrite(led1,HIGH);
  delay(2000);
  digitalWrite(led1,LOW);
  delay(2000);
}
