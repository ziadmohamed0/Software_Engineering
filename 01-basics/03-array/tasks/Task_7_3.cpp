/**
 * @file Task_7_3.cpp
 * @author Ziad Mohammed Fathy
 * @brief C++ program to find the largest three numbers in an array.
 * @version 0.1
 * @date 2025-03-22
 */

#include <iostream> 
#include <array>

constexpr int Size = 8; // elements size of array.

void greater_numbers(const std::array<int, Size> &arr);

int main (void) {

    std::array<int, Size> arr {7, 12, 9, 15, 19, 32, 56, 70};
    std::cout << "Original array: ";

    for(int ele : arr) {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
    greater_numbers(arr);

    return 0;
}

void greater_numbers(const std::array<int, Size> &arr) {
    int first = arr[0], secound = arr[0], third = arr[0];
    for(int ele : arr) {
        if(ele > first) {
            third = secound;
            secound = first;
            first = ele;
        }
        else if(ele > secound || first == secound) {
            third = secound;
            secound = ele;
        }
        else if(ele > third || secound == third) {
            third = ele;
        }
    }
    std::cout << "Three largest elements are: " << first << ", " << secound << ", " << third << std::endl;
}