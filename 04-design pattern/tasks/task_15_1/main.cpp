/**
 * @file main.cpp
 * @author Ziad Mohammed Fathy
 * @brief Implementation of a custom find function similar to std::find
 * @version 0.1
 * @date 2025-05-06
 */

#include <iostream>
#include <vector>
#include <array>
#include <list>

/**
 * @brief Finds the first occurrence of a value in a range
 * @tparam InputIterator Iterator type for the range
 * @tparam T Type of the value to find
 * @param first Iterator to the beginning of the range
 * @param last Iterator to the end of the range
 * @param val Value to search for
 * @return Iterator to the first element equal to val, or last if not found
 */
template<class InputIterator, class T>
InputIterator my_find(InputIterator first, InputIterator last, const T& val) {
    for (; first != last; ++first) {
        if (*first == val) {
            return first;
        }
    }
    return last;
}

int main() {
    // Test with array
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    auto arr_result = my_find(arr.begin(), arr.end(), 30);
    if (arr_result != arr.end()) {
        std::cout << "Found in array: " << *arr_result << " at position " 
                  << std::distance(arr.begin(), arr_result) << std::endl;
    }

    // Test with vector
    std::vector<std::string> vec = {"apple", "banana", "cherry"};
    auto vec_result = my_find(vec.begin(), vec.end(), "banana");
    if (vec_result != vec.end()) {
        std::cout << "Found in vector: " << *vec_result << std::endl;
    } else {
        std::cout << "Not found in vector" << std::endl;
    }

    // Test with list (not found case)
    std::list<int> lst = {1, 3, 5, 7, 9};
    auto lst_result = my_find(lst.begin(), lst.end(), 4);
    if (lst_result != lst.end()) {
        std::cout << "Found in list: " << *lst_result << std::endl;
    } else {
        std::cout << "Not found in list" << std::endl;
    }

    return 0;
}