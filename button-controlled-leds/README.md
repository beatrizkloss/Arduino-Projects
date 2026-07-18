<div align="center">

# Button-Controlled LEDs

A simple Arduino project where five LEDs are controlled using a push button.

When the button is pressed, all LEDs turn on. When the button is released, all LEDs turn off.

</div>

---

## Tinkercad Prototype

<p align="center">
  <img
    src="https://github.com/user-attachments/assets/553920df-09c4-4b15-a152-8d3fb6efdfe7"
    alt="Button-controlled LEDs project preview"
    width="650"
  />
</p>

## Build

<p align="center">
  <img
    src="https://github.com/user-attachments/assets/241d04e2-a328-4122-b9c4-ca5371feaf39"
    alt="Button-controlled LEDs circuit created in Tinkercad"
    width="700"
  />
</p>

The push button is connected to digital pin `2` and uses a `10 kΩ` pull-down resistor.

The five LEDs are connected to digital pins `9`, `10`, `11`, `12`, and `13`.  Each LED uses its own `220 Ω` current-limiting resistor.

## Components

- 1 Arduino Uno
- 1 breadboard
- 1 push button
- 5 LEDs
- 5 × 220 Ω resistors
- 1 × 10 kΩ resistor

## How it works

The Arduino continuously reads the state of the push button using `digitalRead()`.

When the button is not pressed, the pull-down resistor keeps pin `2` connected to `GND`, producing a `LOW` signal.

When the button is pressed, pin `2` receives `5V`, producing a `HIGH` signal.

The program then uses a loop to control all five LEDs:

- `HIGH`: all LEDs turn on
- `LOW`: all LEDs turn off

## Pin configuration

| Component | Arduino pin |
|---|---:|
| Push button | 2 |
| LED 1 | 13 |
| LED 2 | 12 |
| LED 3 | 11 |
| LED 4 | 10 |
| LED 5 | 9 |

## Demonstration

<p align="center">
  <img
    src="https://github.com/user-attachments/assets/45715409-3039-4d43-b703-fd38df6c930a"
    alt="Button-controlled LEDs demonstration"
    width="750"
  />
</p>
