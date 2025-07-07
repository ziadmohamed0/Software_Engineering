/**
 * @file CalculatorBase.h
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-18
 */

#ifndef _INCLUDE_CALCULATOR_BASE_H_
#define _INCLUDE_CALCULATOR_BASE_H_

#include "../calc/calc.h"

class CalculatorBase : public Calculator {
    private:
        double add_result{0}, sub_result{0};
    public:
        CalculatorBase(double copyNumber_1, double copyNumber_2) :
                        Calculator(copyNumber_1, copyNumber_2) {}
        void add() override;
        void sub() override;
        void Display() override;
};

#endif