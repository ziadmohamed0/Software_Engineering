/**
 * @file Task_6_4.cpp
 * @author Ziad Mohmmed fathy
 * @brief   C++ program that lets the user calculate the area of different shapes—rectangles(R), 
 *          circles(C), and triangles(T). Implement functions to compute the area ofeach shape and 
 *          demonstrate their usage in the main program
 * @version 0.1
 * @date 2025-03-14
 */

#include <iostream>
#include <math.h>

const float pi = 3.14;
double calculateTriangleArea(double base, double height);
double calculateCircleArea(double radius);
double calculateRectangleArea(double width, double height);
double options(int op);

int main (void) {
    int choice = 0;
    double return_area = 0.0;
    std::cout << "----------------------------------------------\n";
    std::cout << "Choose a shape to calculate area\n1-for Rectangle\n2-for Circle\n3-for Triangle\n";
    std::cout << "=> Enter your Choice: ";
    std::cin >> choice;
    std::cout << "----------------------------------------------\n";
    return_area = options(choice);
    std::cout << "----------------------------------------------\n";
    std::cout << "=> Area = " << return_area << " cm\n";
    std::cout << "----------------------------------------------\n";
    return 0;
}

/**
 * @brief Calculates thearea of a rectangle.
 * 
 * @param width 
 * @param height 
 * @return double 
 */
double calculateRectangleArea(double width, double height) {
    double area = 0.0;
    area = height * width;
    return area;
}

/**
 * @brief Calculates the area of a circle.
 * 
 * @param radius 
 * @return double 
 */
double calculateCircleArea(double radius) {
    double area = 0.0;
    area = pi * pow(2, radius);
    return area;
}

/**
 * @brief Calculates thearea of a triangle.
 * 
 * @param base 
 * @param height 
 * @return double 
 */
double calculateTriangleArea(double base, double height)  {
    double area = 0.0;
    area = 0.5 * base * height;
    return area;
}

/**
 * @brief Display the area of shape.
 * 
 * @param op 
 */
double options(int op) {
    double return_area;

    switch (op) {
    case 1:
        double base, height_Triangle;
        std::cout << "=> Enter Base: ";
        std::cin >> base;
        std::cout << "=> Enter Height: ";
        std::cin >> height_Triangle;
        return_area = calculateTriangleArea(base, height_Triangle);
        break;
    case 2:
        double rad;
        std::cout << "=> Enter radius: ";
        std::cin >> rad;
        return_area = calculateCircleArea(rad); 
        break;
    case 3:
        double width, height_Rectangle;
        std::cout << "=> Enter width: ";
        std::cin >> width;
        std::cout << "=> Enter height: ";
        std::cin >> height_Rectangle;
        return_area = calculateRectangleArea(width, height_Rectangle);
        break;
    default:
        return_area = 0.0;
        break;
    }

    return return_area;
}
