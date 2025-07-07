/**
 * @file student.cpp
 * @author Ziad Mohammed Fathy
 * @brief src file definations function in class student
 * @version 0.1
 * @date 2025-04-08
 */

#include "student.hpp"

/**
 * @brief Prompts the user to enter the student's name and stores it.
 */
void Student::setName() {
    std::cout << "Enter student name: ";
    std::cin.ignore(); 
    std::getline(std::cin, Student::Name);
}

/**
 * @brief Prompts the user to enter the student's ID and stores it.
 */
void Student::setID() {
    std::cout << "Enter student ID: ";
    std::cin >> Student::ID;
}

/**
 * @brief Prompts the user to enter the student's Age and stores it.
 */
void Student::setAge() {
    std::cout << "Enter student Age: ";
    std::cin >> Student::Age;
}

/**
 * @brief Retrieves the stored name of the student.
 * 
 * @return std::string The student's name.
 */
std::string Student::getName() {
    return Student::Name;
}

/**
 * @brief Retrieves the stored ID of the student.
 * 
 * @return int The student's ID.
 */
int Student::getID() {
    return Student::ID;
}

/**
 * @brief Retrieves the stored age of the student.
 * 
 * @return int The student's age.
 */
int Student::getAge() {
    return Student::Age;
}

/**
 * @brief Displays the student's name, age, and ID to the console.
 */
void Student::displayData() {
    std::cout << "Student name: " << Student::Name
    <<"\nStudent Age: " << Student::Age << "\nStudent ID: " 
    << Student::ID << std::endl;
}