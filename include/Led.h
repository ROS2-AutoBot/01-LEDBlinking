// The header file (.h) contains the method declaration. It should be located in the include directory.
// The source file (.cpp) contains the method definition. It should be located in the src directory.

#ifndef MY_LED_H // Include guard to prevent multiple inclusions of this header file
#define MY_LED_H // A header file always contains this guard

#include <Arduino.h> // Include the Arduino library for Arduino functions

class Led // Class definition
{
public:            // Public attributes and methods, accessible from outside the class
    Led(byte pin); // Constructor to initialize the LED pin
    void begin();  // Method to set the pin mode
    void on();     // Method to turn the LED on
    void off();    // Method to turn the LED off

private:       // Private attributes and methods, used only within this class
    byte _pin; // Pin for the LED
};

#endif // A header file always ens with #endif