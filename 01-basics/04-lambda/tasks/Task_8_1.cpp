/**
 * @file Task_8_1.cpp
 * @author Ziad Mohammed Fathy
 * @brief C++ program that defines two functions to perform addition andsubtraction of two numbers. 
 *          Then, use function pointers to allow the user tochoose which operation to perform.
 * @version 0.1
 * @date 2025-03-22
 */

#include <iostream>

/**
 * @brief Calls the function pointer and prints the result.
 * 
 * @param function_ptr Pointer to a function that takes two floats and returns a float.
 * @param num1 First number.
 * @param num2 Second number.
 */
void printing_function(float (* function_ptr)(float, float), float num1, float num2);

/**
 * @brief Performs addition of two numbers.
 * 
 * @param num1 First number.
 * @param num2 Second number.
 * @return float Sum of num1 and num2.
 */
float summing(float num1, float num2);

/**
 * @brief Performs subtraction of two numbers.
 * 
 * @param num1 First number.
 * @param num2 Second number.
 * @return float Result of num1 - num2.
 */
float subtraction(float num1, float num2);


int main (void) {
    float (* function_ptr)(float, float), num1{0.0}, num2{0.0};
    char op{0};

    std::cout << "Choose operation (+, -): ";
    std::cin >> op;
    std::cout << "Enter The first number: ";
    std::cin >> num1;
    std::cout << "Enter The second number: ";
    std::cin >> num2;

    switch(op) {
    case '+':
        function_ptr = summing;
        printing_function(function_ptr, num1, num2);
        break;
    case '-':
        function_ptr = subtraction;
        printing_function(function_ptr, num1, num2);
        break;
    default:
        std::cout << "Invalid operation!\n";
        break;
    }

    return 0;
}


void printing_function(float (* function_ptr)(float, float), float num1, float num2){
    std::cout << "The result = " << function_ptr(num1, num2) << std::endl;
}

float summing(float num1, float num2){
    return (num1+num2);
}

float subtraction(float num1, float num2){
    return (num1-num2);
}