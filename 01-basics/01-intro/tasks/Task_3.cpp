/**
 * @file Task_3.cpp
 * @author Ziad mohammed 
 * @brief Program a Simple Calculator
 * @version 0.1
 * @date 2025-02-26
 */

#include <iostream>

int main (void) {

    /* initialization local variable section */
    float number1 = 0.0;    // variable of number one to stored into.
    float number2 = 0.0;    // variable of number two to stored into.
    char operation = 0;     // variable of arthmaric operations to stored into.
    float result = 0.0;     // variable of result to stored into.

    /* Get numbers from user */
    std::cout << "---------------------\n";
    std::cout << "Enter first number: ";
    std::cin >> number1;
    std::cout << "Enter secound number: ";
    std::cin >> number2;
    std::cout << "---------------------\n\n";

    /* Display opertions options */
    std::cout << "---------------------\n";
    std::cout << "Enter {+} for addition,\n";    
    std::cout << "Enter {-} for substraction,\n";    
    std::cout << "Enter {*} for multiplication,\n"; 
    std::cout << "Enter {/} for division.\n";  
    std::cout << "Enter: ";   
    std::cin >> operation;

    std::cout << "---------------------\n\n";

    /* conitions */
    switch (operation) {
        case '+':
            result = number1 + number2;
            break;
        
        case '-':
            result = number1 - number2;
            break;    
            
        case '*':
            result = number1 * number2;
            break;

        case '/':
            result = number1 / number2;
            break;

        default:
            result  = 0;
            break;
    }

    /* Display the result on screen */
    std::cout << "---------------------\n";
    if(result == 0) {
        std::cout << "Error !! :(\n";
    }

    else {
        std::cout << "Result is = " << result << std::endl;
    }
    std::cout << "---------------------\n";

    return 0;
} 