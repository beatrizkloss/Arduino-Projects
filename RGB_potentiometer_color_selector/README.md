# RGB Potentiometer Color Selector

A simple Arduino project where an RGB LED changes color according to the position of a potentiometer.

The potentiometer reading is divided into three ranges. Each range activates a different RGB LED color: blue, green, or red.

## Build

<p align="center">
  <img
    src="https://github.com/user-attachments/assets/a1713935-1fa5-42f7-ba15-cb87c857e7b1"
    width="650"
  />
</p>



The potentiometer is connected to analog pin A0.

The red, green, and blue terminals of the RGB LED are connected to PWM pins 11, 9, and 10.

Each RGB LED color terminal should use its own current-limiting resistor.

## Components

- 1 RGB LED
- 1 potentiometer
- 3 current-limiting resistors
- jumper wires

## How it works

The Arduino continuously reads the potentiometer position using `analogRead()`.

The analog reading ranges from 0 to 1023.

The reading is divided into three ranges:

- Reading from 0 to 340: the RGB LED turns blue
- Reading from 341 to 640: the RGB LED turns green
- Reading above 640: the RGB LED turns red

The `setColor()` function receives the intensity of the red, green, and blue channels.

The color intensity is controlled using `analogWrite()`, which accepts values from 0 to 255.

## Pin configuration

| Component | Arduino pin |
|---|---:|
| Potentiometer signal | A0 |
| RGB LED red pin | 11 |
| RGB LED green pin | 9 |
| RGB LED blue pin | 10 |

## Demonstration

The RGB LED changing color according to the potentiometer position.

<!-- Replace the file name below with the actual GIF name -->

![RGB potentiometer demonstration](rgb_potentiometer.gif)
