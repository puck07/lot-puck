void setup() {
  Serial.begin(115200);
  pinMode(D3 OUTPUT);
  pinMode(D5 OUTPUT);
  pinMode(D6 OUTPUT);
  

}

if (d > a && d > b && d > c) {
    digitalWrite(D3, HIGH);
    digitalWrite(D5, HIGH);
    digitalWrite(D6, HIGH);
    delay(200);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D6, LOW);
    delay(200);
    digitalWrite(D3, HIGH);
    digitalWrite(D5, HIGH);
    digitalWrite(D6, HIGH);
    delay(200);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D6, LOW);
    delay(200);
    }else { 
      if (a > b || a < c) {
        digitalWrite(D3, HIGH);
      } else {
        digitalWrite(D3, LOW);
      }
      if (c > a && a < b) {
        digitalWrite(D5, HIGH);
      } else {
        digitalWrite(D5, LOW);
        }
 
      if (b > c && a < b && c < a) {
        digitalWrite(D6, HIGH);
      } else {
        digitalWrite(D6, LOW);
        }
      delay(10000);
    }
