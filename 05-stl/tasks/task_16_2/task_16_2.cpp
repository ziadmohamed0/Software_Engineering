/**
 * @file task_16_2.cpp
 * @author Ziad Mohammed Fathy
 * @brief  every element appears twice except forone. Find that single one.
 * @version 0.1
 * @date 2025-05-18
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <vector>
#include <unordered_map>

/**
 * @brief Find that single one.
 * 
 * @param nums 
 * @return int 
 */
int check_array(std::vector<int>& nums) {
    std::unordered_map<int, int> count;
    for(int num : nums) {
        count[num]++;
    }

    for(auto& [num, freq] : count) {
        if(freq == 1) return num;
    }
    return -1;
}

int main(void) {
    std::vector<int> arr{20, 20, 10, 10, 50};
    std::cout << "nums: ";
    for(int &count : arr) {
        std::cout << count << " ";
    }
    std::cout << "\n";
    std::cout << "Output: " << check_array(arr) << std::endl;
    return 0;
}