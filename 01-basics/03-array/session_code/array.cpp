/**
 * @file array.cpp
 * @author Ziad Mohammed
 * @brief 
 * @version 0.1
 * @date 2025-03-17
 */

#include <iostream>
#include <array>

int main (void) {
    const int size = 6; // size of elements of array
    std::array <std::string, size> array_strngs = {
                                                    "Egypt", 
                                                    "India", 
                                                    "USA", 
                                                    "South Africa", 
                                                    "Oman", 
                                                    "Iraq"}; // array of strings

    for (int i = 0; i < size; i++) { // loop of elements of arrays
        std::cout << "String[" << i << "]:";

        for (int j = 0; j < array_strngs[i].size(); j++) { // loop of characters
            std::cout << array_strngs[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}