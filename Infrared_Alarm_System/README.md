# Infrared Alarm System

An Arduino alarm system that uses an infrared sensor to detect an object.

When an object is detected, five LEDs begin blinking. The user has five seconds to press a button and cancel the alarm. If the button is not pressed in time, the LEDs remain on and the buzzer is activated.

## Build

<p align="center">
  <img
    src="https://github.com/user-attachments/assets/14c2b71e-0e08-447d-8304-9fd2dbdabba0"
    width="650"
  />
</p>



The infrared sensor is connected to digital pin 3.

The push button is connected to digital pin 4, and the buzzer is connected to digital pin 2.

The five LEDs are connected to digital pins 12, 11, 10, 9, and 8.

Each LED should use its own current-limiting resistor. The push button circuit also requires a resistor to keep the input pin in a defined state.

## Components

- 1 infrared sensor
- 1 push button
- 1 buzzer
- 5 LEDs
- 5 current-limiting resistors for the LEDs
- 1 resistor for the push button
- jumper wires

## How it works

The Arduino continuously monitors the infrared sensor.

The sensor used in this project is active-low. This means that the sensor pin reads `LOW` when an object is detected.

The system operates using four states:

### Monitoring

The system waits for the infrared sensor to detect an object.

When an object is detected, the five LEDs turn on and the five-second countdown begins.

### Waiting

During the five-second waiting period, all five LEDs blink every 500 milliseconds.

The user can press the button during this period to cancel the alarm.

### Alarm

If the button is not pressed within five seconds:

- all five LEDs remain on
- the buzzer begins producing a short sound every second

The button can still be pressed to stop the alarm.

### Waiting for the sensor to clear

After the alarm is cancelled, the system waits until:

- the detected object is removed
- the button is released

The system then returns to the monitoring state and can detect another object.

## Pin configuration

| Component | Arduino pin |
|---|---:|
| Infrared sensor | 3 |
| Push button | 4 |
| Buzzer | 2 |
| LED 1 | 12 |
| LED 2 | 11 |
| LED 3 | 10 |
| LED 4 | 9 |
| LED 5 | 8 |
