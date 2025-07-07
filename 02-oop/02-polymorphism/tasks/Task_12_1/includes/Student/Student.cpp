/**
 * @file Student.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-18
 */

#include "Student.h"
#include <iostream>

int Student::curr_id = 0;

/**
 * @brief 
 * 
 */
void Student::getdata(void) {
    std::cout << "Enter your name: ";
    std::cin.ignore();
    std::getline(std::cin, this->name);
    std::cout << "Enter your age: ";
    std::cin >> this->age;
    for(int i = 0; i < marks.size(); i++){
        std::cout << "Enter Mark {" <<  (i+1) << "}: ";
        std::cin >> marks[i];
    }
}

/**
 * @brief 
 * 
 */
void Student::putdata(void) {
    int sum_marks{0};
    std::cout << "\n-------------------------------" << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Age: " << this->age << std::endl;

    for(int i = 0; i < marks.size(); i++){
        sum_marks += marks[i];
    }
    std::cout << "marks: " <<  sum_marks << "\n";
    std::cout << "ID: " << this->id << std::endl;
    std::cout << "-------------------------------" << std::endl;

}