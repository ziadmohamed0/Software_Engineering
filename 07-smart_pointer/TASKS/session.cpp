/**
 * @file session.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-05-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <vector>
#include <array>

constexpr int size = 6;

int fun(std::array<int, size> arr, int stopPoint) {
    int firstSum{0}, secoundSum{0}, summing{0};
    for(int i = 0; i < arr.size(); i++) {
        if(i == stopPoint) {
            for(int j = stopPoint; j >= 0; --j) {
                firstSum += arr[j];
            }

            for(int k = 0; k <= stopPoint; k++) {
                secoundSum += arr[k];
            }
        }
    }
    
    std::cout << firstSum << std::endl << secoundSum << std::endl;

    if(firstSum > secoundSum) {
        summing = firstSum-secoundSum;
    }
    else if(secoundSum > firstSum) {
        summing = firstSum-secoundSum;
    }
    return summing;
}

int main () {
    std::array<int, size> arr;
    int stop_point{0};
    std::cout << "Enter arr: ";
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    std::cout <<"array: ";
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl << "Enter stop point: ";
    std::cin >> stop_point;
    std::cout << fun(arr, stop_point) << std::endl;
    return 0 ;
}