
#include "DHT.h"
#define DHTTYPE DHT11
uint8_t DHTPin = D7;
DHT dht(DHTPin, DHTTYPE);

float Temperture, humidity, HestIndex;

void setup() {
  
}

void loop() {
  ReadDHT11();
  delay(6000);
}
