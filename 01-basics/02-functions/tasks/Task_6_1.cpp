/**
 * @file Task_6_1.cpp
 * @author Ziad Mohammed Fathy
 * @brief This program defines functions to find the maximum of two and three numbers.
 *        The program takes three floating-point numbers as input and determines the largest.
 * @version 0.1
 * @date 2025-03-12
 */

#include <iostream>

namespace maximum_numbers {
    /**
     * @brief Finds the maximum of two floating-point numbers.
     * 
     * @param num_1 The first number.
     * @param num_2 The second number.
     * @return float The maximum of the two numbers.
     */
    float max_two_numbers(float num_1, float num_2) {
        unsigned int result = (num_1 >= num_2);  // Stores the boolean condition result.
        float return_value = 0;                  // Variable to store the greater number.
        
        switch (result) {
        case true:
            return_value = num_1;
            break;
        case false:
            return_value = num_2;
            break;
        default:
            std::cout << "Error: Invalid condition!\n";
            break;
        }
        return return_value;
    }
    
    /**
     * @brief Finds the maximum of three floating-point numbers.
     * 
     * @param num_1 The first number.
     * @param num_2 The second number.
     * @param num_3 The third number.
     * @return float The maximum of the three numbers.
     */
    float max_three_numbers(float num_1, float num_2, float num_3) {
        float return_value = 0; // Stores the maximum value.

        if (num_1 >= num_2 && num_1 >= num_3)
            return_value = num_1;
        else if (num_2 >= num_1 && num_2 >= num_3)
            return_value = num_2;
        else
            return_value = num_3;

        return return_value;
    } 
}

int main (void) {
    // Local variables
    float num_1, num_2, num_3;
    float return_max_two_numbers, return_max_three_numbers;

    // Get numbers from user
    std::cout << "Enter the first number: ";
    std::cin >> num_1;

    std::cout << "Enter the second number: ";
    std::cin >> num_2;

    std::cout << "Enter the third number: ";
    std::cin >> num_3;

    // Store function return values in local variables
    return_max_two_numbers = maximum_numbers::max_two_numbers(num_1, num_2);
    return_max_three_numbers = maximum_numbers::max_three_numbers(num_1, num_2, num_3);

    // Print the result
    std::cout << "The maximum of the 3 numbers is = " << return_max_three_numbers << std::endl;

    return 0;
}
