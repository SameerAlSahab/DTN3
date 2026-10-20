# 🛰️ DTN3

> **WIP** • *A Delay-Tolerant Networking Experiment*

---



> **Note:** This project is part of the **No-AI Challenge**, meaning all logic, mathematics, code n calculations are real. Credits goes to YouTube videos and Repositories that helped me learn this.

---

## Apparatus

The physical network topology is built using the following components:

| Component | Quantity | Role / Function |
| --- | --- | --- |
| **ESP32 DevKit V1** | 1x | Head Gateway / Central Router Node |
| **ESP8266 NodeMCU** | 3x | Edge / Nodes |
| **SSD1306 OLED Display** | 1x | Local Status & Packet Log Visualizer (I2C) |
| **Analog Tools** | — | Calculator, Paper, & Pencil  |

---

## 📐 Network Topology *(WIP)*

```text
       [ ESP8266 Node 1 ] 
               │
               ▼ (Wi-Fi / ESP-NOW)
[ ESP32 Gateway ] ───> [ SSD1306 OLED Display ]
               ▲
               │ 
       [ ESP8266 Node 2 ] <──> [ ESP8266 Node 3 ]
       

```


