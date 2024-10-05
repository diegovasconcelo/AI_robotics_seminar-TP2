# People Counter with Arduino

This project, completed as part of the AI and Robotics Seminar course, aims to implement a microcontroller with an `Arduino` board that functions as a people counter for a store entrance.

## Objective of the 1st Activity (Circuit)
The objective is to assemble a circuit with a sensor that counts the number of people entering a store. For this, an Arduino board is used to register the number of entries.

## Methodology
1. **Circuit Design**: The circuit design and simulation were done using `Tinkercad`.
2. **Components Used (main)**:
    | Name | Quantity | Component |
    | --- | --- | --- |
    | U1 | 1 | Arduino Uno R3 |
    | U2 | 1 | LCD 16 x 2 |
    | Rpot1 | 1 | 250 kΩ Potentiometer |
    | R1 | 1 | 220 Ω Resistor |
    | DIST1 | 1 | Ultrasonic Distance Sensor (4-pin) |

3. **Implementation**: The project was developed using an Arduino Uno R3 and an Ultrasonic Distance Sensor to detect people entering the area. When the sensor detects an object within a certain distance threshold (set to 45 cm), it increases the counter displayed on a 16x2 LCD screen.


## Resources
- [Circuit](https://www.tinkercad.com/things/bYUXavLRjua-tp2): You can see the circuit here.
- [Source code](./people_counter.cpp)
- [Tinkercad](https://www.tinkercad.com/): Tool used for the circuit design and simulation.

