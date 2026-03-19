# 🔊 Sound Level Detection using ESP8266

## 📌 Overview

This project uses an **ESP8266 (NodeMCU)** and a **sound sensor** to detect ambient noise levels. When the sound exceeds a predefined threshold, an LED turns ON to indicate detection.

---

## ⚙️ Components Used

* 📡 ESP8266 (NodeMCU)
* 🎤 Sound Sensor Module
* 💡 LED
* 🔌 220Ω Resistor
* 🔗 Jumper Wires

---

## 🔌 Circuit Connections

* 🎤 Sound Sensor OUT → A0 (Analog Pin)
* 💡 LED Positive (+) → D0
* ⚫ LED Negative (-) → GND (via resistor)

---

## 🧠 Working Principle

* The sound sensor reads analog values based on sound intensity.
* These values are converted into an approximate **decibel (dB)** value.
* If the sound level exceeds the threshold:

  * 💡 LED turns ON
  * 🖥️ Message is printed on Serial Monitor
* Otherwise:

  * LED remains OFF

---

## 🧾 Code Explanation

* `analogRead(A0)` → Reads sound sensor value
* `analogToDB()` → Converts analog value to dB (needs calibration)
* `thresholdDB` → Defines the sound level limit
* LED is controlled based on comparison with threshold

---

## ⚠️ Calibration Note

The current conversion:

```
float dB = map(analogValue, 0, 1023, 0, 100);
```

This is only a placeholder. For accurate results:

* 📏 Use a real decibel meter for comparison
* ⚙️ Adjust mapping values based on real-world testing

---

## 🚀 How to Run

1. Install Arduino IDE 💻
2. Add ESP8266 board support 📦
3. Connect hardware as per circuit diagram 🔌
4. Upload the code to NodeMCU ⬆️
5. Open Serial Monitor (115200 baud) 🖥️
6. Observe output and LED behavior 👀

---

## 📊 Output

* 🖥️ Serial Monitor displays sound level values
* 💡 LED turns ON when sound exceeds threshold

---

## 🔧 Future Improvements

* 🎯 Accurate sound calibration
* 🌐 IoT integration (ThingSpeak, Blynk)
* 📱 Mobile notifications
* 📊 Data logging

---

## 👤 Author

Sode Aishwarya(BMSIT)

Computer Science and engineering student
