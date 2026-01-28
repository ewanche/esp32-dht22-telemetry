#define BLYNK_TEMPLATE_ID "YourTemplateID"
#define BLYNK_TEMPLATE_NAME "ESP32 DHT22"
#define BLYNK_AUTH_TOKEN "YourAuthToken"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include "DHT.h"

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "YourWiFiName";
char pass[] = "YourWiFiPassword";

#define DHTPIN 4          // Pin which connected to DHT22
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

BlynkTimer timer;

void sendSensor() {
  float h = dht.readHumidity();
  float t = dht.readTemperature(); // 
  
  if (isnan(h) || isnan(t)) {
    Serial.println("Error DHT22!");
    return;
  }

  Blynk.virtualWrite(V0, t);
  Blynk.virtualWrite(V1, h);

  Serial.print("Temp: ");
  Serial.print(t);
  Serial.print("°C  Hum: ");
  Serial.print(h);
  Serial.println("%");
}

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  dht.begin();

  timer.setInterval(2000L, sendSensor); // every 2 sec
}

void loop() {
  Blynk.run();
  timer.run();
}
