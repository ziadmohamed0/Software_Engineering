#include <iostream>
#include <math.h>

int main (void) {
    float rad = 0;      // radius variabel store
    const float pi = 3.14;  //  constant value stored in .rodata 
    float area = 0.0;   // variable to store area 

    // get value of radius from user.
    std::cout << "Enter radius: ";
    std::cin >> rad;

    // calac area
    area = pi * pow(rad, 2); // pow from math.h libbrary

    // display result in screen.
    std::cout << "Result = " << area << std::endl;

    return 0;
}