# 🌾 IoT-Based Grain Storage Monitoring Using KiwisIoT

An IoT-based grain storage monitoring project using ESP8266 NodeMCU and DHT11 to monitor temperature and humidity and visualize storage conditions remotely through KiwisIoT.

## 🌱 About the Project

Grain storage requires proper environmental monitoring to help maintain storage conditions and reduce the risk of moisture-related problems and spoilage. Changes in temperature and humidity inside storage facilities can affect the stored grains over time.

In this project, I developed an IoT-Based Grain Storage Monitoring System using an ESP8266 NodeMCU and a DHT11 temperature and humidity sensor. The system collects environmental data and sends the readings to the KiwisIoT cloud dashboard through Wi-Fi.

With this setup, temperature, humidity, and storage status can be monitored remotely, making it a simple IoT-based approach to agricultural storage monitoring.

## ⚙️ Hardware Components

ESP8266 NodeMCU

DHT11 Temperature and Humidity Sensor

Jumper Wires

USB Cable

## 🔌 Circuit Connections

DHT11 VCC → NodeMCU 3.3V

DHT11 GND → NodeMCU GND

DHT11 DATA → NodeMCU D4

## 📊 KiwisIoT Dashboard

The KiwisIoT dashboard is used to visualize the sensor readings remotely.

Channel 0 – Temperature (°C)

Channel 1 – Humidity (%)

Channel 2 – Storage Status

Temperature, humidity, and storage status can be displayed using numeric widgets, gauges, charts, and text widgets.

## 🔄 Working Principle

The DHT11 sensor measures the temperature and humidity inside the grain storage environment. The ESP8266 NodeMCU reads the sensor values and evaluates them according to the predefined threshold conditions.

The collected data is transmitted to KiwisIoT through Wi-Fi. The cloud dashboard displays the sensor readings and storage condition status, allowing users to monitor the environment remotely.

## 💻 Software Used

Arduino IDE

ESP8266 Arduino Core

KiwisIoT Platform

## 📖 Project Tutorial

Full project tutorial: [IoT-Based Grain Storage Monitoring Using KiwisIoT](https://www.hackster.io/kirusokumar/iot-based-grain-storage-monitoring-using-kiwisiot-e52b5f)

## 🌐 Explore KiwisIoT

I use KiwisIoT to connect my IoT projects with an online dashboard and monitor sensor readings remotely. It makes IoT project development easier by helping visualize connected sensor data and build monitoring applications.

Website: https://www.kiwisiot.in/

Arduino Library: https://github.com/Kiwistron/KiwisIoT

Example Projects: https://github.com/Kiwistron/KiwisIoT-Projects/

If you are exploring IoT-based monitoring projects, KiwisIoT is a platform worth trying.

## 👨‍💻 About the Project

This project demonstrates the integration of environmental sensors, ESP8266 Wi-Fi connectivity, and cloud-based data visualization for grain storage monitoring.

Thanks for checking out this project! 🌱
