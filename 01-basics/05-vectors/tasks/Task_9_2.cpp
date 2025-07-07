/**
 * @file Task_9_2.cpp
 * @author Ziad Mohammed Fathy
 * @brief Program to swap and sort two vectors using lambda expressions and function callbacks.
 * @version 0.1
 * @date 2025-03-28
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

/**
 * @brief Executes the swapping and printing operations using callback functions.
 *
 * @param swap A lambda function responsible for swapping and sorting vectors.
 * @param print A lambda function responsible for printing the vectors after swapping.
 */
void Calculate(std::function<bool(void)> swap, std::function<void(void)> print) {
    if (swap()) {
        print();
    }
    else {
        std::cout << "Error while swapping!" << std::endl;
    }
}

int main() {
    int number_of_elements{0};
    std::cout << "Enter size of two vectors: ";
    std::cin >> number_of_elements;

    std::vector<int> v1(number_of_elements), v2(number_of_elements);

    std::cout << "Enter elements of first vector: ";
    for (int &ele : v1) {
        std::cin >> ele;
    }

    std::cout << "Enter elements of second vector: ";
    for (int &ele : v2) {
        std::cin >> ele;
    }

    /**
     * @brief Lambda function that sorts the second vector and swaps elements with the first vector.
     *
     * @return true if swapping is successful, otherwise false.
     */
    auto lambda_swapping = [&]() -> bool {
        std::sort(v2.begin(), v2.end());
        for (int i = 0; i < number_of_elements; ++i) {
            std::swap(v1[i], v2[i]);
        }
        return true;
    };

    /**
     * @brief Lambda function that prints the contents of both vectors after swapping.
     */
    auto lambda_printing = [&]() {
        std::cout << "Elements have been swapped successfully.\n";
        std::cout << "v1: ";
        for (const auto &ele : v1) {
            std::cout << ele << " ";
        }
        std::cout << "\nv2: ";
        for (const auto &ele : v2) {
            std::cout << ele << " ";
        }
        std::cout << "\n";
    };

    Calculate(lambda_swapping, lambda_printing);
    return 0;
}
