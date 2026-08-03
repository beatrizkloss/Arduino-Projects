# Doorbell Light Alarm

A simple Arduino project that simulates a doorbell using a push button, a buzzer, and two LEDs.

When the button is not pressed, the green LED remains on. When the button is pressed, the green LED turns off, the red LED turns on, and the buzzer is activated.

## Build

<p align="center">
  <img
    src="https://github.com/user-attachments/assets/7de7c1b4-a5ae-468f-bb8f-ec2eb8e9793e"
    width="650"
  />
</p>


The push button is connected to digital pin 4.

The buzzer is connected to digital pin 3.

The red and green LEDs are connected to digital pins 10 and 9.

Each LED should use its own current-limiting resistor. The button circuit also requires a resistor to keep the input pin in a defined state when the button is not pressed.

## Components

- 1 push button
- 1 buzzer
- 1 red LED
- 1 green LED
- 2 current-limiting resistors for the LEDs
- 1 resistor for the push button
- jumper wires

## How it works

The Arduino continuously reads the push button state using `digitalRead()`.

When the button is not pressed:

- the green LED remains on
- the red LED remains off
- the buzzer remains off

When the button is pressed:

- the green LED turns off
- the red LED turns on
- the buzzer turns on

This creates a simple visual and sound indication that the doorbell button has been pressed.

## Pin configuration

| Component | Arduino pin |
|---|---:|
| Push button | 4 |
| Buzzer | 3 |
| Red LED | 10 |
| Green LED | 9 |
