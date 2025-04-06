// The .cpp file contains the implementation of the methods defined in the header file.
// It should be located in the src directory.
// The header file (.h) should be located in the include directory.

#include "Led.h" // Include the header file for the Led class

Led::Led(byte pin) // Constructor to initialize the LED pin
{
    // Use 'this->' to make the difference between 
    // the 'pin' attribute of the class and the local variable 'pin' created from the parameter.
    this->pin = pin;
    init();
}

void Led::init()
{
    pinMode(pin, OUTPUT); // Set the pin mode to OUTPUT
    off();                // call the function off(), which is defined below
}

void Led::on()
{
    digitalWrite(pin, HIGH); // Turn the LED on
}

void Led::off()
{
    digitalWrite(pin, LOW); // Turn the LED off
}