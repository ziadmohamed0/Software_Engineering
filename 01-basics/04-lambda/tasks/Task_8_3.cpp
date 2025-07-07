/**
 * @file Task_8_3.cpp
 * @author Ziad Mohammed Fathy
 * @brief program that defines an array of integers. 
 *        Sort the array in a descending orderusing the std::sort function, 
 *        and a user-provided lambda function as a predicate.
 * @version 0.1
 * @date 2025-03-28
 */

#include <iostream>
#include <array>
#include <algorithm>

int main () {
    int size_arrary{5}, arr[size_arrary];

    std::cout << "Enter the size of the array: ";
    std::cin >> size_arrary;
    std::cout << "Enter " << size_arrary << " elements: ";
    
    for(int &ele : arr) {
        std::cin >> ele;
    }
    std::cout << "\nOriginal array: ";
    for(int &ele : arr) {
        std::cout << ele << " ";
    }

    std::sort(arr, (arr + size_arrary), [](int a, int b) {
        return (a > b);
    });

    std::cout << "\nSorted array in descending order: ";
    for(int &ele : arr) {
        std::cout << ele << " ";
    }
    std::cout << "\n";

    return 0;
}