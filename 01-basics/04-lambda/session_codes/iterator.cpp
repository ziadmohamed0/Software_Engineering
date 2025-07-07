/**
 * @file iterator.cpp
 * @author Ziad mohammed fathy
 * @brief 
 * @version 0.1
 * @date 2025-03-20
 */

#include <iostream>
#include <array>
#include <algorithm>

int main(void) {
    std::array<int, 5>  arr{10, 30, 5, 20, 100};
    std::array<int, 5>::iterator itr;
    for(int num : arr) {
        std::cout << "number :" << num << std::endl;
    }

    std::cout << "-----------------" << std::endl;

    for (itr =  arr.begin(); itr != arr.end(); itr++) {
        std::cout << "number :" << *itr << std::endl;
        // std::cout << "number :" << itr << std::endl;
    }

    std::cout << "-----------------" << std::endl;

    std::sort(arr.begin(), arr.end());
    for(int ele : arr) {
        std::cout << "number: " << ele << std::endl;
    }
    
    return 0;
}