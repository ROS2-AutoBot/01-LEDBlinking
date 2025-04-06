// The header file for the Led class
// The header file serves as an interface.
// It contains the class definition, including its attributes and methods.
// The implementation of the methods is done in the Led.cpp file.

#ifndef MY_LED_H // Include guard to prevent multiple inclusions of this header file
#define MY_LED_H

#include <Arduino.h>

class Led // Class definition
{
private:      // Private attributes and methods
    byte pin; // Pin number for the LED

public:            // Public attributes and methods
    Led(byte pin); // Constructor to initialize the LED pin
    void init();   // Method to set the pin mode
    void on();     // Method to turn the LED on
    void off();    // Method to turn the LED off
};

#endif