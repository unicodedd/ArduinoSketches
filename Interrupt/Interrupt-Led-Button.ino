void setup() {
  pinMode(13, OUTPUT);
  pinMode(3, INPUT);
  attachInterrupt(digitalPinToInterrupt(3), cambia, FALLING);
}

volatile int stato = LOW; 
void loop() {
  digitalWrite(13, stato);  
}

void cambia() {
  stato = !stato;  
}
