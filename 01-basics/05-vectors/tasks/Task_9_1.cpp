/**
 * @file Task_9_1.cpp
 * @author Ziad Mohammed Fathy
 * @brief program that checks if a series of integers entered 
 *          by the user areconsecutive numbers.
 * @version 0.1
 * @date 2025-03-28
 */

#include <iostream>
#include <vector>
#include <algorithm>

/**
 * @brief Sorts the vector in ascending order,
 *        Loops through the sorted vector to check if every number isconsecutive.
 * 
 * 
 * @param nums 
 * @return Returns true if all numbers are consecutive, otherwise returns false.
 */
bool test(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    int prev = nums[0];
    for (const auto &current : nums) {
        if (current != prev) {
            if (current != prev + 1) {
                return false;
            }
        }
        prev = current;
    }
    return true;
}

int main () {
    int ele{0}; // how many numbers of elements
    
    std::cout << "Enter number of Elements: ";
    std::cin >> ele; 
    std::vector<int> vec(ele);
    
    std::cout << "Enter Elements of vector: ";
    for(int &elements : vec) {
        std::cin >> elements;
    }

    if (test(vec)) {
        std::cout << "The numbers are consecutive." << std::endl;
    } 
    else {
        std::cout << "The numbers are NOT consecutive." << std::endl;
    }

    return 0;
}