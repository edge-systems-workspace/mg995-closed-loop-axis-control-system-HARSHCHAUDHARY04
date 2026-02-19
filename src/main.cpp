#include <Arduino.h>
#include <Servo.h>

/**
 * @file main.cpp
 * @brief MG995 Closed Loop Axis Control System
 * @author Harsh Chaudhary
 * @date 2026-02-19
 *
 * @details
 * Controls an MG995 servo motor by moving it to specific
 * angles to demonstrate precise axis positioning.
 */

// TODO 1:
// Define Servo signal pin (Use pin 9)
const int SERVO_PIN = 9;

// TODO 2:
// Create Servo object to control the motor
Servo axisServo;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Attach the servo object to the defined pin
    axisServo.attach(SERVO_PIN);

    // TODO 5:
    // Print system initialization message
    Serial.println("MG995 Axis System Initialized");
}

void loop() {

    // TODO 6:
    // Move servo to 0 degrees (Home position)
    Serial.println("Position: 0 degrees");
    axisServo.write(0);
    delay(1000);

    // TODO 7:
    // Move servo to 180 degrees (End position)
    Serial.println("Position: 180 degrees");
    axisServo.write(180);
    delay(1000);
}