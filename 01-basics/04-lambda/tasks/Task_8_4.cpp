/**
 * @file Task_8_4.cpp
 * @author Ziad Mohammed Fathy
 * @brief Modify a Variable Captured by Lambda Expression.
 * @version 0.1
 * @date 2025-03-28
 */

#include <iostream>

int main () {
    int num{5};
    auto lambda_by_value = [num]() {
        // num = 10;
        std::cout << "Inside lambda (by reference): num = " << num << "\n";
    };
    lambda_by_value();
    std::cout << "After lambda (by value): num = " << num << "\n";
    std::cout << "-----------------------------------\n";

    auto lambda_by_reference = [&num]() {
        num = 10;
        std::cout << "Inside lambda (by reference): num = " << num << "\n";
    };
    std::cout << "Before lambda (by reference): num = " << num << "\n";
    lambda_by_reference();
    std::cout << "After lambda (by reference): num = " << num << "\n";
    return 0;
}