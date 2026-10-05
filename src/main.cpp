#include <Arduino.h>

void CalculateMultiply()
{

Serial.print("Enter the first number: "); // Prompt for first number
N1 = GetIntNumber(); // Get first number
Serial.println(N1); // Display first number
Serial.print("Enter the second number: "); // Prompt for second number
N2 = GetIntNumber(); // Get second number
Serial.print("Multiply = ");
Serial.println(N1 * N2);

}
