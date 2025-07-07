/**
 * @file Student.h
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-18
 */

#ifndef _INCLUDES_STUDENT_H_
#define _INCLUDES_STUDENT_H_

#include "../Person/Person.h"
#include <array>

constexpr int MAX_SIZE_ARR = 6;

class Student : public Person {
    private:
        std::array<int, MAX_SIZE_ARR> marks;
        static int curr_id;
        int id{1};
    public:
        Student(std::string copyName, int copyAge) : 
                Person(copyName, copyAge){
                    id = ++curr_id;
                }
        void getdata(void) override;
        void putdata(void) override;
};

#endif