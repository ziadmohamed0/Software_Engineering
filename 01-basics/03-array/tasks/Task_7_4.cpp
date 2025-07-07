/**
 * @file Task_7_4.cpp
 * @author Ziad Mohammed Fathy
 * @brief C++ program to find the most frequent element in an array of integers.
 * @version 0.1
 * @date 2025-03-22
 */

#include <iostream>
#include <array>

constexpr int Size = 8;
void most_frequent_element(const std::array<int, Size> &arr);

int main (void) {
    std::array<int, Size> arr = {4, 5, 9, 12, 9, 22, 45, 7};
    std::cout << "Original array: ";

    for(int num : arr){
        std::cout << num << " ";
    }
    std::cout << std::endl;
    most_frequent_element(arr);

    return 0;
}

void most_frequent_element(const std::array<int, Size> &arr) {
    std::array<int, Size>frequency = {};

    for(int i = 0 ; i < arr.size(); i++) {
        for(int j = 0 ; j < arr.size(); j++) {
            if(arr[i] == arr[j]) {
                frequency[i]++;
            }
        }
    }
    int maxFreq = frequency[0];
    int mostFrequent = arr[0];
    for(int i = 1; i < arr.size(); i++) {
        if (frequency[i] > maxFreq) {
            maxFreq = frequency[i];
            mostFrequent = arr[i];
        }
    }
    std::cout << "Most occurred number: " << mostFrequent << std::endl;
}