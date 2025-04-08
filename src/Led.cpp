// The header file (.h) contains the method declaration. It should be located in the include directory.
// The source file (.cpp) contains the method definition. It should be located in the src directory.

#include "Led.h" // Include the header file for the Led class

Led::Led(byte pin) // Constructor to initialize the LED pin
{
    _pin = pin; // Assign "pin" from the constructor parameter to the local variable "_pin"
}

void Led::begin()
{
    pinMode(_pin, OUTPUT); // Set the pin mode to OUTPUT
    off();                 // call the function off(), which is defined below
}

void Led::on()
{
    digitalWrite(_pin, HIGH); // Turn the LED on
}

void Led::off()
{
    digitalWrite(_pin, LOW); // Turn the LED off
}