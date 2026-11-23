#include <ESP8266WiFi.h>
#include <KiwisIoT.h>
#include <DHT.h>

#define DHTPIN D4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

// WiFi credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";

// KiwisIoT Topic ID
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

// Demonstration threshold
const float TEMP_LIMIT = 35.0;

void setup() {
  Serial.begin(115200);

  dht.begin();

  kiwisiot.begin();

  Serial.println("Grain Storage Monitoring Started");
}

void loop() {
  kiwisiot.run();

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Sensor reading failed!");
    delay(2000);
    return;
  }

  String status;

  if (temperature > TEMP_LIMIT || humidity > 70.0) {
    status = "CHECK STORAGE";
  } else {
    status = "STORAGE NORMAL";
  }

  // Send data to KiwisIoT
  kiwisiot.send("0", String(temperature));
  kiwisiot.send("1", String(humidity));
  kiwisiot.send("2", status);

  Serial.println("------------------------");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Storage Status: ");
  Serial.println(status);
  Serial.println("------------------------");

  delay(2000);
}