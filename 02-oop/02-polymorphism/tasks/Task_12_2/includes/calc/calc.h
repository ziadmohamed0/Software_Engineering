/**
 * @file calc.h
 * @author Ziad Mohammed Fath
 * @brief 
 * @version 0.1
 * @date 2025-04-18
 */

#ifndef _INCLUDES_CALC_H_
#define _INCLUDES_CALC_H_

#include <iostream>

class Calculator {
    protected:
    double number_1{0}, number_2{0};
    public:
        Calculator(double copyNumber_1, double copyNumber_2) :
                    number_1(copyNumber_1),
                    number_2(copyNumber_2) {}
        virtual void add() = 0;
        virtual void sub() = 0;
        virtual void Display() = 0;
};

#endif