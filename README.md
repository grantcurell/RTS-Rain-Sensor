# RTS Rain Sensor

- [RTS Rain Sensor](#rts-rain-sensor)
  - [Helpful Links](#helpful-links)
  - [Parts](#parts)
  - [How it Works](#how-it-works)
    - [Potentiometer](#potentiometer)
      - [Introduction to Potentiometers](#introduction-to-potentiometers)
      - [Components of a Potentiometer](#components-of-a-potentiometer)
      - [Potentiometer as a Voltage Divider](#potentiometer-as-a-voltage-divider)
      - [Resistance Adjustment](#resistance-adjustment)
      - [Voltage Output Adjustment](#voltage-output-adjustment)
      - [Common Applications](#common-applications)
      - [Movable Wiper Terminal](#movable-wiper-terminal)
        - [Voltage Drop](#voltage-drop)
    - [Electromotive Force (EMF)](#electromotive-force-emf)
    - [Galvanometer](#galvanometer)
  - [Galvanometer: Measuring Small Electric Currents](#galvanometer-measuring-small-electric-currents)
    - [Kirchoff's Current Law (KCL)](#kirchoffs-current-law-kcl)
      - [Intuitive Explanation of Current Flow](#intuitive-explanation-of-current-flow)

## Helpful Links

- https://circuitdigest.com/microcontroller-projects/interfacing-rain-sensor-with-arduino
- [Potentiometer: Definition, Types, and Working Principal](https://www.electrical4u.com/potentiometer/)

## Parts

- https://www.amazon.com/HiLetgo-Moisture-Humidity-Sensitivity-Nickeled/dp/B01DK29K28/ref=sr_1_2?keywords=arduino+rain+sensor&sr=8-2

## How it Works

![](images/2023-09-09-10-26-56.png)

- In dry conditions, there is some resistance between the conductive plates, but it's relatively high compared to a closed circuit. As a result, the voltage at the measuring point (between the sensor and ground) is relatively high, close to VCC.
- Rainfall Contact: When raindrops fall on the sensor and connect the conductive plates, they create a direct, low-resistance path between the sensor's two ends. This effectively shorts out the sensor, making the resistance between the plates extremely low.
- Voltage Drop: According to Ohm's law (V = IR), when resistance is very low (approaching zero), and there is a voltage source (VCC), the voltage drop across that low resistance becomes nearly zero. In practical terms, this means that the voltage at the measuring point drops to almost zero volts.

### Potentiometer

#### Introduction to Potentiometers
A potentiometer, often called a "pot," is an electronic component used to vary resistance manually. It consists of a resistive element and three terminals.

#### Components of a Potentiometer
A potentiometer has the following components:
- **Resistive Element:** This is a strip of resistive material, usually made of carbon, cermet, or conductive plastic. It determines the total resistance of the potentiometer.
- **Three Terminals:** A potentiometer has three terminals:
  - Two fixed outer terminals (often labeled as "1" and "3") connected across a voltage source (e.g., a power supply).
  - A movable [wiper terminal](#movable-wiper-terminal) (labeled as "2") that slides along the resistive element.

#### Potentiometer as a Voltage Divider
A potentiometer operates as a voltage divider circuit. The voltage source is connected across the fixed outer terminals, and the output voltage is taken from the wiper terminal.

#### Resistance Adjustment
- Rotating or sliding the wiper along the resistive element changes the resistance between the wiper and one of the fixed terminals.
- When the wiper is at one extreme (close to terminal "1"), the resistance between the wiper and terminal "1" is high, while the resistance between the wiper and terminal "3" is low.
- When the wiper is at the other extreme (close to terminal "3"), the resistance between the wiper and terminal "3" is high, while the resistance between the wiper and terminal "1" is low.
- Moving the wiper to different positions between the extremes adjusts the resistance between the wiper and both fixed terminals.

#### Voltage Output Adjustment
- As you change the resistance between the wiper and one of the fixed terminals, the output voltage at the wiper terminal varies proportionally.
- This voltage change is determined by the position of the wiper along the resistive element.
- It allows you to manually adjust the voltage or resistance in the circuit connected to the potentiometer.

#### Common Applications
Potentiometers are used in various applications, such as:
- Audio Volume Control: Adjusting the volume on radios, amplifiers, and speakers.
- Brightness Control: Dimming lights or adjusting the brightness of displays.
- Tuning Circuits: Fine-tuning electronic circuits for optimal performance.
- User Interface Controls: Controlling parameters in devices like thermostats and joysticks.

#### Movable Wiper Terminal

The resistance of the wiper changes as it moves away or closer to the terminals in a potentiometer due to the fundamental principles of the resistive element and the way the wiper interacts with it. Let me explain in more detail:

1. Resistive Element: Inside a potentiometer, there is a resistive element, typically a strip of resistive material. This resistive element has a consistent resistance per unit length.
2. Voltage Divider: The potentiometer is wired as a voltage divider. The fixed outer terminals (usually labeled as "1" and "3") are connected across a voltage source, creating a voltage gradient along the resistive element.
3. Wiper Contact: The movable wiper terminal (labeled as "2") is connected to the wiper arm. When you adjust the potentiometer, the wiper arm moves along the resistive element. It makes contact with the resistive material.

- When the wiper is positioned closer to one of the fixed terminals (e.g., "1"), it has a shorter path along the resistive element to that terminal. As a result, the wiper has lower resistance because it's encountering less resistive material.
- Conversely, when the wiper is moved away from one fixed terminal and closer to the other (e.g., closer to "3"), it has a longer path along the resistive element to that terminal. This longer path means the wiper encounters more resistive material, resulting in higher resistance.

In essence, the resistance of the wiper terminal changes based on how much resistive material it contacts. The resistance decreases as it moves closer to one terminal and increases as it moves away from that terminal toward the other. This resistance change is precisely what allows the potentiometer to function as a variable resistor, enabling you to adjust the voltage or resistance in the circuit it's connected to by simply changing the wiper's position.

In a potentiometer used as a voltage divider, the terminals are typically labeled as follows:

- Terminal "1": This terminal is often connected to the positive supply voltage, commonly referred to as VCC.
- Terminal "3": This terminal is typically connected to the ground or common reference point, labeled as 0V or GND.

The voltage source is applied across terminals "1" and "3," creating a voltage gradient along the resistive element. The wiper terminal, usually labeled as "2," is connected to a point where you want to obtain a variable voltage output based on the wiper's position along the resistive element.

By adjusting the position of the wiper, you can control the voltage output between terminal "2" and ground (0V), effectively changing the voltage in the circuit as a result.

This setup allows the potentiometer to function as a variable resistor and voltage control element.

##### Voltage Drop

The potentiometer measures the voltage drop between its wiper terminal (usually labeled as "2") and one of the fixed outer terminals, which is often labeled as "1" or "3." The choice of which terminal to use depends on the specific configuration and how the potentiometer is connected in the circuit.

So, the voltage drop is measured between the wiper terminal and either terminal "1" or terminal "3." This voltage drop is proportional to the position of the wiper along the resistive element and can be adjusted by changing the wiper's position.

### Electromotive Force (EMF)

"EMF" stands for "Electromotive Force." Electromotive force is a term used to describe the electrical potential difference or voltage produced by a source of electrical energy, such as a battery or a generator. It represents the energy per unit charge supplied by the source to drive electrical current through a circuit.

In the passage you shared, the potentiometer is used to compare the EMF (voltage) of two cells, which means it is used to measure and compare the electrical potential provided by these cells. Additionally, the potentiometer is used for calibrating ammeters, voltmeters, and watt-meters, which are instruments that measure electrical current, voltage, and power, respectively.

### Galvanometer

## Galvanometer: Measuring Small Electric Currents

A galvanometer is an instrument used to detect and measure small electric currents. It operates based on electromagnetic induction and is designed to measure low-level currents. Here are its key components and characteristics:

- **Coil of Wire:** The central component of a galvanometer is a coil of wire, often wound around a lightweight, pivoted frame or needle.
- **Magnetic Field:** A permanent magnet or a magnetic coil surrounds the coil of wire. This external magnetic field interacts with the electric current passing through the coil.
- **Pivot and Needle:** The coil is mounted on a pivot, allowing it to rotate freely. Attached to the coil is a thin, lightweight pointer (needle).
- **Current Sensing:** When an electric current flows through the coil, it generates a magnetic field around the coil. This magnetic field interacts with the external magnetic field and exerts a torque on the coil.
- **Deflection:** The torque causes the coil to rotate, resulting in the movement of the attached pointer (needle). The degree of deflection is directly proportional to the current passing through the coil.
- **Scale:** Typically, a scale is placed near the pointer to provide a visual indication of the current value being measured.

Galvanometers are highly sensitive instruments and find use in various applications, including:
- **Ammeters:** Galvanometers serve as the basis for ammeters, which measure electric current in amperes.
- **Voltmeters:** By adding a series resistor, a galvanometer can be converted into a voltmeter to measure voltage.
- **Wheatstone Bridge:** They are used in Wheatstone bridge circuits to measure resistance accurately.
- **Scientific Research:** Galvanometers are employed in scientific experiments to measure and detect small electric currents.

Modern galvanometers may also be designed as digital instruments, offering higher precision and accuracy in measuring currents. They are widely used in both laboratory and industrial settings.

### Kirchoff's Current Law (KCL)

According to Kirchhoff's current law (KCL), the sum of currents entering a node (or junction) must equal the sum of currents leaving that node. In this case, the "node" is the point where the batteries and the galvanometer are connected together.

![](images/2023-09-09-11-12-14.png)

- V1 be the voltage of the first battery.
- V2 be the voltage of the second battery.

Since the batteries are connected in parallel, V1 = V2.

- I1 be the current through the first battery (from positive to negative terminal).
- I2 be the current through the second battery (from positive to negative terminal).
- Ig be the current through the galvanometer.
According to KCL at the node where the batteries and the galvanometer are connected:

I1 + I2 - Ig = 0

However, since V1 = V2, the potential difference across the galvanometer (Vg) is zero:

Vg = 0

Therefore, according to Ohm's law (V = IR), if Vg = 0, then Ig = 0:

Ig = 0

This is why the galvanometer shows null deflection when the electric potentials of both battery cells are exactly the same.

#### Intuitive Explanation of Current Flow

Imagine two water tanks placed side by side, representing batteries, and they are connected at the bottom by a pipe, symbolizing the connection between the batteries:

1. **Water Level Represents Voltage:** In this analogy, the water level in each tank represents the voltage of the batteries. If both tanks have the same water level, it means they have the same potential energy.
2. **Flow of Water Represents Current:** Water flows from a higher level to a lower level due to gravity, similar to electric current flowing from a higher voltage to a lower voltage.
3. **Parallel Connection:** When the two tanks are connected at the bottom by the pipe, it's like connecting batteries in parallel. The water levels in both tanks are at the same height, indicating the same potential energy.
4. **No Flow of Water:** Because the water levels are the same, there is no difference in potential energy between the two tanks. As a result, water doesn't flow from one tank to the other; it remains at the same level in both tanks.
5. **Analogous to Electrical Scenario:** This situation is analogous to connecting two batteries with the same voltage in parallel. Since they have the same voltage (potential energy), there is no voltage difference to drive electric current between them. Therefore, no electric current flows through the circuit.
