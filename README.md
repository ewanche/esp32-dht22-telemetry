# ESP32 + DHT22 → Blynk IoT

## Telemetry of temperature and humidity in real time via cloud Blynk.

**About Project** 

This project demonstrates the full IoT-stream:
Sensor → ESP32 → cloud Blynk → Blynk‘s App.

Goal — stable collection the data from DHT22, correctly prepare mistakes and publish telemetry in Blynk App.
The project can be use for smart homes, air conditioning control and hydroponic.

⸻

**Used technology:**
 - ESP32 DevKit v1
 - Sensor of temp/humidity DHT22
 - Blynk IoT (Cloud + Mobile App)
 - Arduino Framework / PlatformIO
 - BlynkTimer
 - Code (Timer, Module and atc).

**Wiring diagram** 

![wiring_diagram](https://github.com/user-attachments/assets/299e08ae-9db4-4065-b81b-a16f74ff0997)


Pins:

|DHT22|ESP32
|------|------
|VCC  |3.3V
|DATA |GPIO 4
|GND  |GND
 
Pull-up resistance 10 kΩ between VCC and DATA.

⸻

**Interface Blynk**

(blynk-dashboard.png)


Virtual pins:
 - V0 — temperature
 - V1 — humidity

⸻

**structure of project**

|   file      |explain
|-------------|------------------
|src/main.cpp | main code
|-------------|-------------------
|  docs/      |wiring, screenshots.
|-------------|-------------------                
   README.md



⸻

**Logic of work** 

(project-flowchart.png)

**install and start** 

1. Libraries 

Arduino IDE:
               Sketch–>Inklude Library–>Manage Librarys
 - Blynk by Volodymyr Shimanskyy
 - DHT sensor library by Adafruit
 - Adafruit Unified Sensor 


2. secrets.h:

##pragma once

##define WIFI_SSID "YourWiFi"
##define WIFI_PASS "YourPassword"

##define BLYNK_TEMPLATE_ID "XXXXX"
##define BLYNK_TEMPLATE_NAME "ESP32 DHT22"
##define BLYNK_AUTH_TOKEN "XXXXX"

3. Upload Firmware in ESP32

**Arduino IDE or PlatformIO.**

4. Open Blynk App

Digits will reload every 2 seconds.

⸻

**Opportunities for expansion**
 - History of telemetry (Blynk SuperChart)
 - Sending the warnings to Telegram
 - More secure protocol (MQTT instead virtual pins)
 - Control system of Hydroponic
 - OTA-Upload firmware 

⸻

Video-Demo
(GIF/MP4)
![esp32dht22](https://github.com/user-attachments/assets/54f6b654-01a8-46cb-921c-41b1c29b3f06)

⸻

License

MIT

⸻

✉️ Autor

I.Nyshev / Contact
