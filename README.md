Solar Energy Monitoring System

1. Introduction

The Solar Energy Monitoring System is designed to monitor the electrical output of a solar panel using an Arduino Uno and an INA219 voltage and current sensor.

2. Objective

- Measure solar panel voltage.
- Measure solar panel current.
- Calculate electrical power.
- Display readings on an OLED screen or Serial Monitor.
- Provide status alerts using LEDs and a buzzer.

3. Components Required

- Arduino Uno
- Solar panel
- INA219 voltage and current sensor
- OLED display (optional)
- Green LED
- Red LED
- 220-ohm resistors
- Buzzer
- Breadboard and jumper wires
- USB cable

4. Working Principle

The solar panel generates electrical power. The INA219 sensor measures voltage and current, and the Arduino calculates power using the measured values. The readings can be displayed on an OLED screen or Serial Monitor. LEDs and a buzzer provide status alerts according to the program.

5. Circuit Diagram
The circuit diagram is available in the `diagrams` folder. The wiring will be verified against the actual hardware connections before final testing.

6. Block Diagram

Solar Panel → INA219 Sensor → Arduino Uno → Display

Arduino Uno → LEDs and Buzzer

7. Source Code

The Arduino source code is available in the `src/solar_monitor.ino` file. It reads voltage, current, and power measurements from the INA219 sensor and displays them on the Serial Monitor.

8. Testing and Results

Actual measurements and test results will be added after testing the prototype.

9. Project Status

Design and development in progress.

10. Future Improvements

- Monitor solar performance over time.
- Add wireless monitoring.
- Display historical readings.

11. Team Members

shreya c
sindhu k
teju
jeevan
