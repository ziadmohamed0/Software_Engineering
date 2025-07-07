/**
 * @file Professor.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-18
 */

#include "Professor.h"
#include <iostream>

int Professor::curr_id = 0;

/**
 * @brief 
 * 
 */
void Professor::getdata(void) {
    std::cout << "Enter your name: ";
    std::cin.ignore();
    std::getline(std::cin, this->name);
    std::cout << "Enter your age: ";
    std::cin >> this->age;
    std::cout << "Enter your number of publication: ";
    std::cin >> this->publications;
}

/**
 * @brief 
 * 
 */
void Professor::putdata(void) {
    std::cout << "\n-------------------------------" << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Age: " << this->age << std::endl;
    std::cout << "number of publication: " << this->publications << std::endl;
    std::cout << "ID: " << this->id << std::endl;
    std::cout << "-------------------------------" << std::endl;

}