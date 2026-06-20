int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void blinkOnce(int onTime, int offTime) {
  digitalWrite(ledPin, HIGH);
  delay(onTime);
  digitalWrite(ledPin, LOW);
  delay(offTime);
}

void blinkTwice(int waitTime) {
  digitalWrite(ledPin, HIGH);
  delay(waitTime);
  digitalWrite(ledPin, LOW);
  delay(waitTime);
  digitalWrite(ledPin, HIGH);
  delay(waitTime);
  digitalWrite(ledPin, LOW);
  delay(waitTime);
}

void loop() {
  Serial.println("Fast blink");
  blinkOnce(100, 400);
  
  Serial.println("Medium blink");
  blinkOnce(300, 300);
  
  Serial.println("Slow blink");
  blinkOnce(800, 800);
  
  Serial.println("Blink twice");
  blinkTwice(200);
  
  delay(2000);
}