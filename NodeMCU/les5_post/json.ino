// JSON API: https://arduinojson.org/v6/api/

// JSON libraries
#include <ArduinoJson.h>

// JSON document
JsonDocument doc;

void CreateJSON() {
  static int attempt = 0;
  doc["attempt"] = ++attempt;
  
  serializeJson(doc, jsonOut);
}

// for easy JSON debugging
void SendJSONToSerial() {
  serializeJson(doc, Serial);
  Serial.println();
}
