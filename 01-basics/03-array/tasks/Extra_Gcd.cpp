/**
 * @file Extra_Gcd.cpp
 * @author Ziad Mohammed Fathy
 * @brief find the Greatest Common Divisor (GCD) of two numbers
 * @version 0.1
 * @date 2025-03-22
 */

 #include <iostream>

int gcd(int &a, int &b);

int main(void) {
    int num1, num2;

    std::cout << "Input the first number: ";
    std::cin >> num1;
    std::cout << "Input the second number: ";
    std::cin >> num2;

    std::cout << "The Greatest Common Divisor is: " << gcd(num1, num2) << std::endl;

    return 0;
} 

int gcd(int &a, int &b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}