/**
 * @file Task_7_5.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-03-22
 */

#include <iostream>
#include <array>

constexpr int Size = 5;

void array_size(const std::array<int, Size> &arr);

int main (void) {
    
    std::cout << "--------------------------" << std::endl;
    std::array<int, Size> arr = {10, 20, 30, 40, 50}; 

    std::cout << "Inside main:" << std::endl;
    std::cout << "Size of entire array: " << sizeof(arr) << " bytes" << std::endl;
    std::cout << "Size of one element: " << sizeof(arr[0]) << " bytes" << std::endl;
    std::cout << "Number of elements: " << arr.size() << std::endl;
    std::cout << "--------------------------" << std::endl;
    array_size(arr);  
    
    return 0;
}

void array_size(const std::array<int, Size> &arr) {
    std::cout << "Inside function:" << std::endl;
    std::cout << "Size of array inside function: " << sizeof(arr) << " bytes" << std::endl;
    std::cout << "Size of one element: " << sizeof(arr[0]) << " bytes" << std::endl;
    std::cout << "Number of elements: " << arr.size() << std::endl;
    std::cout << "--------------------------" << std::endl;
}