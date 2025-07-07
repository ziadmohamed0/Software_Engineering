/**
 * @file Task_7_1.cpp
 * @author Ziad Mohammed Fathy
 * @brief C++ to check whether a number is prime or not.
 * @version 0.1
 * @date 2025-03-18
 */
#include <iostream>

void check_whether(int num);

int main (void) {
    int num;
    std::cout << "Input a number to check prime or not: ";
    std::cin >> num;
    check_whether(num);

    return 0;
}

/**
 * @brief  check whether a number is prime or not.
 * 
 * @param num 
 */
void check_whether(int num) {
    bool isPrime;

    if (num <= 1) {
        isPrime = false;
    } 
    else {
        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        std::cout << "The entered number is a prime number.\n";
    else
        std::cout << "The entered number is not a prime number.\n";
}