# Arduino Fish Feeder 🐟

Welcome to the Arduino Fish Feeder project! This project allows you to automate the feeding of your aquatic pets using an Arduino board, a DS1302 real-time clock module, and a servo motor. With precise scheduling and portion control, you can ensure that your fish are fed regularly and maintain their health and well-being.

## Features

- **Automation**: Set specific feeding times to ensure your fish are fed at regular intervals, even when you're not around.
- **Precision**: Utilizes a DS1302 real-time clock module for accurate timekeeping, ensuring your fish are fed at the exact times you specify.
- **Customization**: Easily adjust feeding schedules and portion sizes to meet the dietary needs of different fish species.
- **Reliability**: Built with reliable Arduino hardware and components, providing consistent and dependable operation.

## Installation

### Prerequisites

Before you get started, make sure you have the following components:

- Arduino board (e.g., Arduino Uno)
- DS1302 real-time clock module
- Servo motor
- Jumper wires
- Breadboard (optional)

### Step-by-Step Installation Guide

1. **Install Arduino IDE**: Download and install the latest version of the [Arduino IDE](https://www.arduino.cc/en/software) on your computer.

2. **Install Required Libraries**:

   - **DS1302 Library**: This library provides functions to interact with the DS1302 real-time clock module.

     ```bash
     arduino-cli lib install DS1302RTC
     ```

   - **Servo Library**: This library provides functions to control servo motors.

     ```bash
     arduino-cli lib install Servo
     ```

3. **Download Fish Feeder Code**: Clone or download the Arduino Fish Feeder repository to your local machine.

    ```bash
    git clone https://github.com/Rishit-katiyar/Arduino-Fish-Feeder.git
    ```

4. **Open Arduino Sketch**: Open the Arduino sketch file (`fish_feeder.ino`) in the Arduino IDE.

5. **Connect Hardware**: Connect your Arduino board, DS1302 real-time clock module, and servo motor according to the provided schematics.

6. **Upload Code**: Upload the fish feeder sketch to your Arduino board using the Arduino IDE.

7. **Set Feeding Schedule**: Adjust the feeding schedule in the code to specify the times at which you want your fish to be fed.

    ```cpp
    // Set initial time
    rtc.setTime(9, 55, 0); // Set initial feeding time to 9:55:00
    ```

8. **Monitor Operation**: Monitor the operation of your fish feeder to ensure it is functioning correctly and adjust settings as needed.

```
        +---------------------+       +----------------------+
        |      Arduino Uno    |       |       DS1302 RTC     |
        |                     |       |                      |
        |  Digital Pin 9 (PWM)|-------| Servo Signal (Orange)|
        |  5V                 |-------| VCC (Red)            |
        |  GND                |-------| GND (Black)          |
        |                     |       | CLK (Yellow)         |
        |                     |       | DAT (Green)          |
        |                     |       | RST (Blue)           |
        +----------+----------+       +------------+---------+
                   |                               |
                   |          Servo Motor          |
                   |                               |
                   |    +---------------------+    |
                   +----|  Signal (Orange)    |----+
                        |  5V (Red)           |
                        |  GND (Brown)        |
                        +---------------------+

```

Here's a detailed explanation of the connections:

1. **Arduino Uno**:
   - Digital Pin 9 (PWM): Connects to the signal wire of the servo motor for controlling its movement.
   - 5V: Provides power to the servo motor and DS1302 RTC module.
   - GND: Common ground connection for all components.

2. **DS1302 RTC**:
   - VCC (Red): Connects to the 5V pin on the Arduino Uno for power.
   - GND (Black): Connects to the GND pin on the Arduino Uno for ground.
   - CLK (Yellow): Connects to a digital pin on the Arduino Uno (e.g., pin 2) for clock signal.
   - DAT (Green): Connects to a digital pin on the Arduino Uno (e.g., pin 3) for data communication.
   - RST (Blue): Connects to a digital pin on the Arduino Uno (e.g., pin 4) for reset signal.

3. **Servo Motor**:
   - Signal (Orange): Connects to Digital Pin 9 (PWM) on the Arduino Uno for control signal.
   - 5V (Red): Connects to the 5V pin on the Arduino Uno for power.
   - GND (Brown): Connects to the GND pin on the Arduino Uno for ground.

Ensure that you have adequate power for the servo motor, especially if it's a high-torque model. Double-check the connections and verify the pin assignments before powering on the system to avoid damaging any components. Once everything is connected properly, you can upload the code and test your Arduino Fish Feeder project.

## Usage

- **Monitor Operation**: Use the serial monitor in the Arduino IDE to view the current time and debug any issues with your fish feeder.

- **Customize Feeding Schedule**: Modify the feeding schedule in the code to match the feeding requirements of your fish.

- **Adjust Servo Position**: Fine-tune the servo motor position to dispense the desired amount of food for your fish.

## License

This project is licensed under the [MIT License](LICENSE).
