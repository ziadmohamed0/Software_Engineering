/**
 * @file CalculatorBase.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-18
 */

#include "CalculatorBase.h"

void CalculatorBase::add() {
    this->add_result = (this->number_1 + this->number_2);
}
void CalculatorBase::sub() {
    this->sub_result = (this->number_1 - this->number_2);
}

void CalculatorBase::Display() {
    std::cout << "Result of add two number: " << this->add_result << std::endl;
    std::cout << "Result of sub two number: " << this->sub_result << std::endl;
}