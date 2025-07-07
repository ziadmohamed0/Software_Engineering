/**
 * @file pointerFunctions.cpp
 * @author ziad moahmmed fathy
 * @brief 
 * @version 0.1
 * @date 2025-03-20
 */


#include <iostream>


int sum(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

/**
 * @brief 
 * 
 * @param ptr_function 
 * @param num1 
 * @param num2 
 */
void print_data(int (*ptr_function)(int, int), int num1, int num2) {
    std::cout << "result summing: " << ptr_function(num1, num2) << std::endl;
}

int main(void) {

    int (*ptr_function_calc)(int, int); //function like pointer. 

    ptr_function_calc = sum;
    print_data(ptr_function_calc, 50, 20);

    ptr_function_calc = sub;
    print_data(ptr_function_calc, 50, 20);
    

    return 0;
}