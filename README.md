# Smart Temperature Monitoring & Alert System using Arduino

A smart embedded system project developed using **Arduino UNO** and **TMP36 temperature sensor** to monitor environmental temperature in real time and generate automatic alerts based on predefined temperature levels.

This project was developed in the **Tinkercad simulation environment** as part of the **Embedded Systems Internship at RD INFRO TECHNOLOGY**.

---

## Project Overview

The system continuously reads analog temperature data from the TMP36 sensor and processes it using Arduino UNO.

Based on the detected temperature:
- LEDs indicate different temperature conditions
- LCD displays live temperature and system status
- Buzzer activates during critical temperature conditions

The project demonstrates core embedded systems concepts including:
- Analog sensor interfacing
- Real-time monitoring
- Threshold-based automation
- LCD interfacing
- Alert systems

---

## Features

- Real-time temperature monitoring
- LCD display output
- Multi-level LED indication system
- High-temperature buzzer alert
- Serial Monitor data output
- Fully simulated in Tinkercad

---

## Components Used

| Component | Quantity |
|---|---|
| Arduino UNO | 1 |
| TMP36 Temperature Sensor | 1 |
| 16x2 LCD Display | 1 |
| Potentiometer (10kΩ) | 1 |
| LEDs (Green, Yellow, Red) | 3 |
| Piezo Buzzer | 1 |
| 220Ω Resistors | 3 |
| Breadboard | 1 |
| Jumper Wires | Multiple |

---

## Software Used

- Tinkercad Circuits
- Arduino IDE

---

## Working Principle

The TMP36 temperature sensor generates an analog voltage proportional to temperature.

Arduino UNO:
1. Reads analog sensor data
2. Converts voltage into temperature (°C)
3. Displays temperature on LCD
4. Activates LEDs and buzzer according to temperature range

---

## Temperature Indication Logic

| Temperature Range | System Response |
|---|---|
| Below 25°C | Green LED ON |
| 25°C – 30°C | Yellow LED ON |
| Above 30°C | Red LED ON |
| Above 35°C | Buzzer Alert Activated |

---

## Circuit Connections

### TMP36 Sensor

| TMP36 Pin | Arduino Connection |
|---|---|
| Left Pin | 5V |
| Middle Pin | A0 |
| Right Pin | GND |

---

### LED Connections

| LED | Arduino Pin |
|---|---|
| Green LED | Pin 2 |
| Yellow LED | Pin 3 |
| Red LED | Pin 4 |

---

### Buzzer Connection

| Buzzer Pin | Arduino Connection |
|---|---|
| Positive (+) | Pin 5 |
| Negative (-) | GND |

---

### LCD Connections

| LCD Pin | Arduino Pin |
|---|---|
| RS | 12 |
| E | 11 |
| D4 | 10 |
| D5 | 9 |
| D6 | 8 |
| D7 | 7 |

---

## Applications

- Smart temperature monitoring systems
- Industrial safety systems
- Fire warning systems
- Embedded automation projects
- Environmental monitoring systems

---

## Project Output

- Live temperature displayed on LCD
- Real-time Serial Monitor output
- Automatic LED indication
- Automatic buzzer warning for high temperature

---

## Demo Video

Add your LinkedIn or Google Drive demo link here.

Example:

```md
[Project Demo Video](PASTE_YOUR_LINK_HERE)
