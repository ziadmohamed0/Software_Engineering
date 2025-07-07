/**
 * @file Task_9_3.cpp
 * @author Ziad Mohammed Fathy
 * @brief Demonstrates the concept of variable capturing in lambda expressions.
 *        Shows how variables can be captured by reference, by value, and selectively.
 *        Includes three lambda functions:
 *        1. Captures all variables by reference and prints their values after modification.
 *        2. Captures all variables by value and prints their current values without modifying them.
 *        3. Captures specific variables (x and y) by reference, modifies them using a given factor, and prints the result.
 * @version 0.1
 * @date 2025-03-28
 */


#include <iostream>
#include <algorithm>
#include <vector>

int main () {
    int x{3}, y{9}, z{10};

    /**
     * @brief Lambda function that captures all variables by reference.
     *        Multiplies x, y, z by 2 and prints the original and updated values.
     */
    auto lambada_print_ref = [&]() {
        std::cout << "x = " << x << 
        ", y = " << y << ", z = " << z << std::endl;
        std::cout << "x after multiplies = " << (x*2) << 
        ", y after multiplies = " << (y*2) << ", z after multiplies = " << (z*2) << std::endl;
    };

    /**
     * @brief Lambda function that captures all variables by value.
     *        Prints the values of x, y, z without modifying them.
     */
    auto lambda_print_value = [=]() {
        std::cout << "x = " << x << 
        ", y = " << y << ", z = " << z << std::endl;
    };

    /**
     * @brief Lambda function that captures only x and y by reference.
     *        Increments x and y by a given factor and prints the updated values.
     * @param factor The value to add to x and y.
     */
    auto lambda_only_two_ref = [&x, &y] (int factor) {
        std::cout << "After modifying x and y by factor (" << factor << "):\n";
        std::cout << "x = " << x << ", y = " << y << std::endl;
    };

    lambada_print_ref();
    lambda_print_value();
    lambda_only_two_ref(10);

    return 0;
}