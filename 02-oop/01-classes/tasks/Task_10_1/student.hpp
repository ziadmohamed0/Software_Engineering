/**
 * @file student.hpp
 * @author Ziad Mohammed Fathy
 * @brief header file initialized class of student.
 * @version 0.1
 * @date 2025-04-08
 */

#include <iostream>

class Student {
    private: 
        int ID;
        int Age;
        std::string Name;
    public:
        void setName();
        void setID();
        void setAge();

        std::string getName();
        int getID();
        int getAge();

        void displayData();
};