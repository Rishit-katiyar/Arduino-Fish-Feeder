#include <DS1302.h>
#include <Servo.h>

// Define constants for pin numbers
const int servoPin = 9;
const int clockPin = 2;
const int dataPin = 3;
const int enablePin = 4;
const int motorPins[] = {5, 6};

// Define variables for time tracking
Time currentTime;
int currentHour;
int currentMinute;
int currentSecond;

// Define servo motor object
Servo feederServo;

// Define DS1302 clock object
DS1302 rtc(clockPin, dataPin, enablePin);

// Setup function
void setup() {
    // Set servo pin as an output
    pinMode(servoPin, OUTPUT);

    // Set motor control pins as outputs
    pinMode(motorPins[0], OUTPUT);
    pinMode(motorPins[1], OUTPUT);

    // Attach servo to servo pin
    feederServo.attach(servoPin);

    // Set initial servo position
    feederServo.write(45);

    // Initialize DS1302 clock
    rtc.halt(false);
    rtc.writeProtect(false);
    Serial.begin(9600);

    // Set initial time
    rtc.setTime(9, 55, 0); // Set initial feeding time to 9:55:00
}

// Main loop function
void loop() {
    // Read current time from DS1302 clock
    currentTime = rtc.getTime();
    currentHour = currentTime.hour;
    currentMinute = currentTime.min;
    currentSecond = currentTime.sec;

    // Print current time to serial monitor
    Serial.print("Current Time: ");
    Serial.print(currentHour);
    Serial.print(":");
    Serial.print(currentMinute);
    Serial.print(":");
    Serial.println(currentSecond);

    // Check if it's time to feed the fish
    if ((currentHour == 9 && currentMinute == 55 && currentSecond == 0) ||
        (currentHour == 9 && currentMinute == 56 && currentSecond == 0) ||
        (currentHour == 9 && currentMinute == 57 && currentSecond == 0) ||
        (currentHour == 9 && currentMinute == 58 && currentSecond == 0)) {
        // Call function to feed the fish
        feedFish();
    }
}

// Function to feed the fish
void feedFish() {
    // Rotate servo to dispense food
    feederServo.write(0);
    delay(800);
    feederServo.write(180);
    delay(400);
    feederServo.write(150);
    delay(400);
    feederServo.write(180);
    delay(400);
    feederServo.write(150);
    delay(400);
    feederServo.write(180);
    delay(400);
    feederServo.write(0);
    delay(800);
    feederServo.write(0);
    delay(800);
    feederServo.write(180);
    delay(400);
    feederServo.write(150);
    delay(400);
    feederServo.write(180);
    delay(400);
    feederServo.write(150);
    delay(400);
    feederServo.write(180);
    delay(400);
    feederServo.write(0);
    delay(800);
    feederServo.write(0);
    delay(800);
    feederServo.write(180);
    delay(400);
    feederServo.write(150);
    delay(400);
    feederServo.write(180);
    delay(400);
    feederServo.write(150);
    delay(400);
    feederServo.write(180);
    delay(400);
    feederServo.write(0);
    delay(800);
    feederServo.write(0);
    delay(800);
    feederServo.write(180);
    delay(400);
    feederServo.write(150);
    delay(400);
    feederServo.write(180);
    delay(400);
    feederServo.write(150);
    delay(400);
    feederServo.write(180);
    delay(400);
    feederServo.write(0);
    delay(800);
    feederServo.write(0);
    delay(800);
}
