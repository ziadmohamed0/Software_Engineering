/**
 * @file Professor.h
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-18
 */

#ifndef _INCLUDES_PROFESSOR_H_
#define _INCLUDES_PROFESSOR_H_

#include "../Person/Person.h"

class Professor : public Person{
    private:
        int publications{0}; // an integer representing the number of publications.
        static int curr_id; // a unique identifier for the professor. It is a static integer that increments each time a new professor is created.
        int id;
    public:
        /**
         * @brief Construct a new Professor object
         * 
         * @param copyPublications 
         * @param copyCurr_ID 
         * @param copyName 
         * @param copyAge 
         */
        Professor(std::string copyName, int copyAge) : 
                    Person(name, age) {
                        id = ++curr_id;
                    }
        void getdata(void) override;
        void putdata(void) override;
};
#endif