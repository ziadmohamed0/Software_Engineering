/**
 * @file Task_8_5.cpp
 * @author Ziad Mohammed Fathy
 * @brief  Understand the limitations of converting lambda expressions 
 *          to function pointers, particularly when lambdas capture variables.
 * @version 0.1
 * @date 2025-03-28
 */

#include <iostream>
#include <functional>

int main() {
    auto lambda_without_capture = [](int num) {
        std::cout << "Lambda without capture, value = " << num << "\n";
    };
    void (*ptr_func)(int) = nullptr;
    ptr_func = lambda_without_capture;
    ptr_func(100);

    std::cout << "----------------------------\n";
    int num = 50;

    auto lambda_within_capture = [&num](int x) {
        std::cout << "Lambda with capture, num = " << num << ", param = " << x << "\n";
    };

    // void (*func_ptr2)(int) = lambda_within_capture; // Error → can't convert capturing lambda to function pointer

    std::function<void(int)> func = lambda_within_capture;
    func(200);
    return 0;
}