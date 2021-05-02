
void setup() {

pinMode(2, INPUT);  // pin 2 como entrada 
pinMode(9, OUTPUT); // pin 3 como salida 

} 

void loop() {

if (digitalRead(2) == HIGH) // evaluo si la entrada esta en nivel alto
{ 
  digitalWrite(9,HIGH); // pulsador presionado, encender LED
} 
else 
{ 
  digitalWrite(9,LOW);  // pulsador no presionado, apagar LED
}
 
}
