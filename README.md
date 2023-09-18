# RTS Rain Sensor

- [RTS Rain Sensor](#rts-rain-sensor)
  - [Helpful Links](#helpful-links)
  - [Parts](#parts)
  - [Design](#design)
  - [How it Works](#how-it-works)
    - [Potentiometer](#potentiometer)
      - [Components of a Potentiometer](#components-of-a-potentiometer)
      - [My Explanation](#my-explanation)
      - [Mathematical Modeling](#mathematical-modeling)
    - [Pulse Wave Modulation (PWM)](#pulse-wave-modulation-pwm)
      - [Duty Cycle](#duty-cycle)
    - [Pull Up Resistor](#pull-up-resistor)
    - [Logic Level](#logic-level)
  - [Jason Suggestion](#jason-suggestion)

## Helpful Links

- https://circuitdigest.com/microcontroller-projects/interfacing-rain-sensor-with-arduino
- [Potentiometer: Definition, Types, and Working Principal](https://www.electrical4u.com/potentiometer/)
- [Pull Up/Down Resistors Explained](https://www.electronics-tutorials.ws/logic/pull-up-resistor.html)

## Parts

- https://www.amazon.com/HiLetgo-Moisture-Humidity-Sensitivity-Nickeled/dp/B01DK29K28/ref=sr_1_2?keywords=arduino+rain+sensor&sr=8-2

## Design

- Red-$V_{CC}$
- Brown-Ground
- Blue-$DO$
- Green-Analog out
## How it Works

![](images/2023-09-09-10-26-56.png)

- In dry conditions, there is some resistance between the conductive plates, but it's relatively high compared to a closed circuit. As a result, the voltage at the measuring point (between the sensor and ground) is relatively high, close to VCC.
- Rainfall Contact: When raindrops fall on the sensor and connect the conductive plates, they create a direct, low-resistance path between the sensor's two ends. This effectively shorts out the sensor, making the resistance between the plates extremely low.
- Voltage Drop: According to Ohm's law (V = IR), when resistance is very low (approaching zero), and there is a voltage source (VCC), the voltage drop across that low resistance becomes nearly zero. In practical terms, this means that the voltage at the measuring point drops to almost zero volts.

### Potentiometer

#### Components of a Potentiometer
A potentiometer has the following components:
- **Resistive Element:** This is a strip of resistive material, usually made of carbon, cermet, or conductive plastic. It determines the total resistance of the potentiometer.
- **Three Terminals:** A potentiometer has three terminals:
  - Two fixed outer terminals (often labeled as "1" and "3") connected across a voltage source (e.g., a power supply).
  - A movable [wiper terminal](#movable-wiper-terminal) (labeled as "2") that slides along the resistive element.

#### My Explanation

![](images/2023-09-09-21-01-18.png)

The way this works in a rain water sensor is you have $V_0$ connected to one set of conductive plates and the wiper of the potentiometer connected to the other set of conductive plates. $V_{CC}$ is connected to one terminal of the potentiometer and $V_0$ is connected to the other.

$V_{out}$ is effectively measuring the resistance between ground and the wiper. When it's dry, the resistance between the wiper and ground is really high. This correspondingly means that voltage difference between $V_{CC}$ and the wiper are less than $V_{CC}$ itself because the resistance between the two is just whatever the resistance of the potentiometer's resistant material is. That means the output voltage ($V_{out}$) should be close to $V_{CC}$ assuming you have the wiper close to $V_{CC}$. However, if rain starts to fall on the rain water sensor, current passes between the two sets of conductive plates which then makes the wiper basically the same as ground - IE infinite resistance. This causes $V_{out}$ to drop towards zero so we know it is raining.

#### Mathematical Modeling

![](images/2023-09-10-12-27-36.png)


### Pulse Wave Modulation (PWM)

PWM is a technique where a digital signal is rapidly switched on and off at a fixed frequency. The ratio of time the signal is in the "on" state (HIGH) compared to the total period of one cycle determines the duty cycle, and it can vary between 0% (always off) and 100% (always on).

#### Duty Cycle

1. **PWM Signal Basics**: PWM is a technique used to control the average voltage or power delivered to a device or component. It involves rapidly switching a digital signal (usually a square wave) between two voltage levels: a high voltage (usually the supply voltage, e.g., 5V) and a low voltage (usually ground, 0V).
2. **Duty Cycle Calculation**: The duty cycle is calculated as follows:
   
   Duty Cycle (%) = (High Time / Total Time) * 100

   - High Time: The amount of time during a single cycle when the PWM signal is in the "on" state (high voltage).
   - Total Time: The duration of one complete cycle of the PWM signal, including both the "on" and "off" states.
3. **Duty Cycle Range**: The duty cycle can vary between 0% (signal always off) and 100% (signal always on). For example:
   - A 0% duty cycle means the signal is always off (LOW).
   - A 100% duty cycle means the signal is always on (HIGH).
   - A 50% duty cycle means the signal is on for half of the cycle and off for the other half.
4. **Control of Voltage or Power**: The duty cycle controls the average voltage or power delivered to a load. When the duty cycle is varied, the effective voltage or power is also changed. For example:
   - In motor control, varying the duty cycle of a PWM signal can control the speed of a motor.
   - In LED brightness control, changing the duty cycle can control the brightness of an LED.
5. **Frequency and Period**: In addition to the duty cycle, PWM signals also have a frequency (or period), which defines how often the PWM signal repeats its cycle. The period is the reciprocal of the frequency (Period = 1 / Frequency). A higher frequency allows for finer control and smoother transitions in PWM applications.

### Pull Up Resistor

### Logic Level


A logic level, in the context of digital electronics, refers to the specific voltage or electrical state that represents a binary value (0 or 1) in a digital system. Digital electronics use discrete voltage levels to represent binary data and perform logical operations. These voltage levels are typically defined with respect to a reference point, which is often ground (0V).

Here are the common voltage levels and their corresponding logic states in digital systems:

- **Logic LOW (0)**:
  - Voltage Level: Typically near 0 volts (close to ground).
  - Representation: This level is associated with the binary value 0. It indicates the absence of a signal or a logical "false" state.
- **Logic HIGH (1)**:
  - Voltage Level: Typically at or close to the supply voltage (e.g., 5V in a 5V system).
  - Representation: This level represents the binary value 1. It indicates the presence of a signal or a logical "true" state.
- **Threshold Region (Transitional State)**:
  - Voltage Level: In between the logic LOW and logic HIGH levels.
  - Representation: This region is a transitional state and can be interpreted differently depending on the specific components and circuitry. It may not reliably represent a clear logic 0 or 1.

It's important to note that the actual voltage levels for logic LOW and logic HIGH can vary depending on the specific technology and voltage standards used in a digital system. For example, in a 3.3V digital system, logic LOW might be closer to 0V, and logic HIGH might be closer to 3.3V.

## Jason Suggestion

- Home Bridge