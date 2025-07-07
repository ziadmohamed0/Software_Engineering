/**
 * @file main.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-18
 */

#include "includes/Student/Student.h"
#include "includes/Professor/Professor.h"
#include <iostream>
#include <vector>

int main (void) {
    int number{0};
    std::cout << "Enter Number of person do you need: ";
    std::cin >> number;

    std::vector<Person*> persons;
    
    for(int i = 0; i < number; ++i) {
        int type{0};
        std::cout << "-------------------------------------\n";
        std::cout << "if this person professor enter {1}\nif student enter {2}\n\n=>Enter number of type:";
        std::cin >> type;
        std::cout << "-------------------------------------\n";

        if(type == 1) {
            persons.push_back(new Professor("", 0));
        }
        else if(type == 2){
            persons.push_back(new Student("", 0));
        }
        persons[i]->getdata();
    }

    for(int i = 0; i < number; ++i) {
        persons[i]->putdata();
        delete persons[i];
    }
    
    return 0;
}