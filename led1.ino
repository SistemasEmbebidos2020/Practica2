
void setup() {


pinMode(12, OUTPUT); // pin 12 como salida 
pinMode(13, OUTPUT); // pin 13 como salida también se puede usar LED_BUILDIN

} 

void loop() {

//parapedea led pin 12
  digitalWrite(12,HIGH); 
  delay(1000);
  digitalWrite(12,LOW);  
  delay(1000);

//parapedea led pin 12
  
//parapedea led pin 13  
  digitalWrite(13,HIGH); 
  delay(1000);
  digitalWrite(13,LOW);  
  delay(1000);

//parapedea led pin 13
}
