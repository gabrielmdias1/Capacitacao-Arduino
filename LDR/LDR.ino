const int LDR = 0;
const int ledPin = 13;
int valorLido = 0;
int valor = 0;
int ledLevel = 0;

void setup() {
  pinMode(LDR,INPUT);
  Serial.begin(9600);
}

void loop() {
  valorLido = analogRead(LDR);
  valor = constrain(valorLido, 600, 1010);
  
  ledLevel = map(valor, 600, 1050, 0, 255);
  Serial.print("Sensor LDR: ");
  Serial.println(valor);
  Serial.print("Led: ");
  Serial.println(ledLevel);
  
  if (ledLevel > 50)
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);
  delay(500);
}
