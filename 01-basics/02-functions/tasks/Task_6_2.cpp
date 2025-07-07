/**
 * @file Task_6_1.cpp
 * @author Ziad Mohammed Fathy
 * @brief  C++ program that implements a function to calculate the factorial 
 *         of a given number using recursion.
 * @version 0.1
 * @date 2025-03-12
 */

#include <iostream>

/**
 * @brief Recursively calculates the factorial of a given number.
 * 
 * @param num The number whose factorial is to be calculated.
 * @return int The factorial of the given number. Returns -1 if the input is negative.
 */
int calculate_factorial(int num);

int main(void) {
    // Local variable
    int number = 0;
    int return_factorial = 0;

    // Get number from user
    std::cout << "Enter number: ";
    std::cin >> number;

    // Store data returned from function into a local variable
    return_factorial = calculate_factorial(number);

    // Print the factorial number on screen
    if (return_factorial == -1)
        std::cout << "Error: Factorial of a negative number is undefined!" << std::endl;
    else
        std::cout << "Result: " << return_factorial << std::endl;

    return 0;
}

int calculate_factorial(int num) {
    if (num < 0) 
        return -1;  // Error case for negative numbers
    if (num == 0) 
        return 1;   // Base case: 0 not equal 1
    return num * calculate_factorial(num - 1);  // Recursive 
}
