/**
 * @file Person.h
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-18
 */

#ifndef _INCLUDES_PERSON_H_
#define _INCLUDES_PERSON_H_

#include <string>

class Person {
    protected:
        std::string name;
        int age{0};
    public:
        /**
         * @brief Construct a new Person object
         * 
         * @param copyName 
         * @param copyAge 
         */
        Person(std::string copyName, int copyAge) :
                name(copyName),
                age(copyAge) {}
        virtual void getdata(void) = 0;  // pure virtual functions inputting data.
        virtual void putdata(void) = 0;  // pure virtual functions displaying data.
};

#endif