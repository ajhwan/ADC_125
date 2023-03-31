const int analogPin = A0;
const int ledPin = 10;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int sensorInput = analogRead(analogPin);
  int val = analogRead(0);
  val = map(val, 0, 1023, 0, 255);
  if (val == 125){
    analogWrite(ledPin, val);
  }
  else{
    analogWrite(ledPin, LOW);
  }
  Serial.println(val);
}
