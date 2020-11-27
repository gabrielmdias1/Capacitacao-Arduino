#define ledPin 7
#define button 2
int estadoBotao;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  estadoBotao = digitalRead(button);
  if (estadoBotao == HIGH){
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }

}
