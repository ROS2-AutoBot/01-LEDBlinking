#include <Arduino.h>
#include "Led.h"

#define LED_PIN 2 // Pin number for the LED (on-board LED on ESP32)

// Procedural programming: works well for small projects, but can become hard to manage as the project grows
// Object-oriented programming (OOP): better for larger projects, but can be overkill for small projects
// With OOP, you will write custom library for Arduino, which is better for reuseability. 

// ===========================================================================
// This is a simple LED blink example using procedural programming
// ===========================================================================

// void setup()
// {
//   pinMode(LED_PIN, OUTPUT);
// }

// void loop()
// {
//   delay(1000);
//   digitalWrite(LED_PIN, HIGH);
//   delay(1000);
//   digitalWrite(LED_PIN, LOW);
// }

// ===========================================================================
// This is a simple LED blink example using object-oriented programming
// ===========================================================================

Led led(LED_PIN); // Create an instance of the Led class

void setup()
{
  led.begin(); // Initialize the LED pin
}
void loop()
{
  delay(100);
  led.on(); // Turn the LED on
  delay(100);
  led.off(); // Turn the LED off
}

