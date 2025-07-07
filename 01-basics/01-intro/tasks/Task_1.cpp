/**
 * @file Task_1.cpp
 * @author Ziad mohammed 
 * @brief program that prompts the user to enter their name and age,
 *        then displays a greeting message along with their age.
 * @version 0.1
 * @date 2025-02-26
 */

 #include <iostream>

int main (void) {

    /* initialization local variable section */
    std::string name = "";  // variable of name person to stored into. 
    unsigned int age = 0;   // variable of age person to stored into. 
    
    /* get data from user */
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    /* result data in screen */
    std::cout << "Hello " << name << ", you're " << age << " years old?\n";
    
    return 0;
}   