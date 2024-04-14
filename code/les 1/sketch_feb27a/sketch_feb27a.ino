void setup () {
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  } 

void loop() {
  digitalWrite(D3, HIGH);
  delay(1000);
  digitalWrite(D3, LOW);
  delay(2000);

    digitalWrite(D5, HIGH);
  delay(1000);
  digitalWrite(D5, LOW);
  delay(2000);

    digitalWrite(D6, HIGH);
  delay(1000);
  digitalWrite(D6, LOW);
  delay(2000);
}
