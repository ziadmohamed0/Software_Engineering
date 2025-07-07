/**
 * @file stars.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-03-18
 */

#include <iostream>

int main() {
    int num;
    
    std::cout << "please enter number of rows: ";
    std::cin >> num;

    int space = num;
    int stars = 1;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < space; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < stars; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
        space--;
        stars += 2;
    }
}
