# C++ Multiplication Program

A minimalist *C++ console application* that multiplies two numbers entered by the user and displays the result.

## Features
* Accepts two user-defined numbers (integer or floating-point).
* Computes the product instantly.
* Simple, clean, and well-commented source code.

## How to Use

1. Open this project in VS Code.
2. Connect your Arduino board to your computer.
3. Build and upload the code to your board.
4. Open the Serial Monitor in VS Code (set the baud rate to 9600).
5. Follow the prompts to enter your two numbers.

## code cpp

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