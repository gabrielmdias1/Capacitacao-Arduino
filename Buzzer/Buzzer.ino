const int Buzzer = 10; 

void setup() {
   pinMode(Buzzer, OUTPUT);   
}

void loop() { 
   tone(Buzzer, 500);
   delay(500);
   noTone(Buzzer);
   delay(500);
   tone(Buzzer, 1000);
   delay(500);
   noTone(Buzzer);
   delay(500);
   tone(Buzzer, 2000);
   delay(500);
   noTone(Buzzer);
   delay(500); 
}
