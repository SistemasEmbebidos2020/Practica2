
void setup() {


pinMode(12, OUTPUT); // pin 3 como salida 
pinMode(13, OUTPUT); // pin 3 como salida 

} 

void loop() {


  digitalWrite(12,HIGH); // pulsador presionado, encender LED
  delay(1000);
  digitalWrite(12,LOW);  // pulsador no presionado, apagar LED
  delay(1000);

  digitalWrite(13,HIGH); // pulsador presionado, encender LED
  delay(1000);
  digitalWrite(13,LOW);  // pulsador no presionado, apagar LED
  delay(1000);

}
