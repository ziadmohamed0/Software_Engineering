/**
 * @file Task_7_2.cpp
 * @author Ziad Mohammed Fathy
 * @brief  C++ program that takes 5 integers as input from the user and stores them in anarray. 
 *          Then, find the sum and average of the numbers in the array and display theresults.
 * @version 0.1
 * @date 2025-03-18
 */

#include <iostream>
#include <array>

int array_sum(const std::array<int, 5> &array);
int array_avg(int sum, int size);

int main (void) {
    // important variables
    std::array <int, 5> array;
    int return_sum, return_avg;

    // get data from user
    std::cout << "Enter {5} elements of array: ";
    for (int &ele : array) {
        std::cin >> ele;
    }

    // calc summing & avarage of array.
    return_sum = array_sum(array);
    return_avg = array_avg(return_sum, array.size());

    // display data in screen.
    std::cout << "Total sum = " << return_sum << std::endl;
    std::cout << "Average = " << return_avg << std::endl;

    return 0;
}

/**
 * @brief calc summing of array.
 * 
 * @param array 
 * @return int 
 */
int array_sum(const std::array<int, 5> &array) {
    int sum = 0;
    for (int num : array) {
        sum += num;
    }
    return sum;
}

/**
 * @brief calc avarage of array.
 * 
 * @param sum 
 * @param size 
 * @return int 
 */
int array_avg(int sum, int size) {
    return static_cast<double>(sum)/size;    
}