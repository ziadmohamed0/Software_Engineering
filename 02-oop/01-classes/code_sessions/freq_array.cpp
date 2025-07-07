/**
 * @file freq_array.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-03
 */

#include <iostream>
#include <vector>
#include <array>

int main () {
    std::array<int, 10> arr {
        1, 1, 1, 7, 5, 10, 3, 3, 4, 11
    };
    std::array<int, 12> freq;

    for (int i = 0; i < 12 ; i++){
        freq[i] = 0;
    }

    for(int i = 0 ; i < arr.size() ; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < freq.size(); i++) {
        std::cout << "Value = " << i << " , has frequancy = " << freq[i] << std::endl;
    }

    int max_freq{0}, ans_val{0};
    for(int i = 0; i < arr.size(); i++) {
        if(freq[arr[i]] > max_freq) {
            max_freq = freq[arr[i]];
            ans_val = arr[i];
        }
    }
    std::cout << ans_val << " Most maxmum" << std::endl;
    return 0;
}