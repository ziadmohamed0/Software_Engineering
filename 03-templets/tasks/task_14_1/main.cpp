/**
 * @file main.cpp
 * @author Ziad Mohammed Fathy
 * @brief main programm for task 1
 * @version 0.1
 * @date 2025-04-29
 */

#include "stack/stack.h"
#include "data/data.h"

int main(void) {
    stack<std::string> myStack_string(string_data::size_arry);
    stack<double> myStack_double(double_data::size_arry);
    stack<char> myStack_char(char_data::size_array);

    std::cout << "--------------------\n";
    std::cout << "=> push string data\n";
    for(const auto &elements : string_data::data) {
        myStack_string.push(elements);
    }

    std::cout << "=> push double data\n";
    for(const auto &elements : double_data::data) {
        myStack_double.push(elements);
    }

    std::cout << "=> push char data\n";
    for(const auto &elements : char_data::data) {
        myStack_char.push(elements);
    }


    std::cout << "--------------------\n";
    std::cout << "----- pop string data elements -----\n";
    for(const auto &elements : string_data::data) {
        myStack_string.pop(string_data::element);
        std::cout << string_data::element << "\n";
    }

    std::cout << "----- pop double data elements -----\n";
    for (double i : double_data::data) {
        myStack_double.pop(double_data::element);
        std::cout << double_data::element << "\n";
    }

    std::cout << "----- pop char data elements -----\n";
    for(char i : char_data::data) {
        myStack_char.pop(char_data::element);
        std::cout << char_data::element << "\n";
    }

    return 0;
}
