const int trigPin = 9;
const int echoPin1 = 10;
const int echoPin2 = 11;
long duration1;
int distance1;
long duration2;
int distance2;

void setup() {
  pinMode(trigPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  duration1 = pulseIn(echoPin1,HIGH);
  distance1 = duration1*0.034/2;
  duration2 = pulseIn(echoPin2,HIGH);
  distance2 = duration2*0.034/2;

  Serial.print("Distância1: ");
  Serial.println(distance1);
  Serial.print("Distância2: ");
  Serial.println(distance2);
  delay(250);
}
