/**
 * @file test.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-03-10
 */

#include <iostream>

namespace calc {
    /**
     * @brief add two number
     * 
     * @param num1 
     * @param num2 
     * @return float 
     */
    float add (float num1, float num2){
        return num1 + num2;
    }

    /**
     * @brief subsraction two number
     * 
     * @param num1 
     * @param num2 
     * @return float 
     */
    float sub (float num1, float num2){
        return num1 - num2;
    }

    /**
     * @brief multible two number
     * 
     * @param num1 
     * @param num2 
     * @return float 
     */
    float mul (float num1, float num2){
        return num1 * num2;
    }

    /**
     * @brief divided two number
     * 
     * @param num1 
     * @param num2 
     * @return float 
     */
    float divid (float num1, float num2){
        float retval = 0;
        if (num2 == 0) {
            std::cout << "erorr\n";
            retval = 0;
        }
        else {
            retval =  num1 / num2;
        }
        return 0;
    }

    /**
     * @brief claculator funtion
     * 
     * @param var 
     * @param num1 
     * @param num2 
     * @return float 
     */
    float Calc (char var, float num1, float num2){ 
        float retVl = 0;
        switch (var) {
        case '+':
            retVl = add(num1, num2);
            break;
        case '-':
            retVl = sub(num1, num2);
            break;
        case '*':
            retVl = mul(num1, num2);
            break; 
        case '/':
            retVl = divid(num1, num2);
            break;
        default:
            break;
        }
        return retVl;
    }
}

int main (void) {
    float num1;
    float num2;
    char op;
    
    std::cout << "Enter number 1: ";
    std::cin >> num1;
    std::cout << "Enter number 2: ";
    std::cin >> num2;

    std::cout << "Enter operation: ";
    std::cin >> op;
    
    std::cout << "result = " << calc::Calc(op, num1, num2) << std::endl;
    
    return 0; 
}