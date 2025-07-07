/**
 * @file main.cpp
 * @author Ziad Mohammed Fathy
 * @brief main program
 * @version 0.1
 * @date 2025-04-08
 */

#include "student.hpp"

constexpr int number_student = 2; // number of students

int main () {
    Student students[number_student];

    for(int i = 0; i < number_student; i++) {
        std::cout << "------------ Student " << i+1 << " -----------\n";
        students[i].setName();
        students[i].setAge();
        students[i].setID();
        std::cout << "-----------------------\n";
        std::cout << "Student Name: " << students[i].getName() << std::endl;
        std::cout << "Student Age: " << students[i].getAge() << std::endl;
        std::cout << "Student ID: " << students[i].getID() << std::endl;
        std::cout << "-----------------------\n";
        students[i].displayData();
        std::cout << "\n";
    }
}