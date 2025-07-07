/**
 * @file task_16_1.cpp
 * @author Ziad Mohamed Fathy
 * @brief Given a string s containing just the characters 
 *          '(', ')', '{', '}', '[' and ']', determine if the inputstring is valid
 * @version 0.1
 * @date 2025-05-18
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <stack>
#include <string>

/**
 * @brief determine if the inputstring is valid
 * 
 * @param s 
 * @return true 
 * @return false 
 */
bool isValid(std::string& s) {
    std::stack<char> ch;
    for(char c : s) {
        if(c == '{' || c == '(' || c == '[') {
            ch.push(c);
        }

        else {
            if(ch.empty()) return false;
            char top = ch.top();
            ch.pop();
            if(c == '}' && top != '{' ||
                c == ')' && top != '(' ||
                c == ']' && top != '['
            ) {
                return false;
            }
        }
    }
    
    return ch.empty();
}

int main() {
    std::string st;
    std::cout << "Input: "; 
    std::cin >> st;
    
    if(isValid(st) == true) {
        std::cout << "Output: true\n"; 
    }
    else {
        std::cout << "Output: false\n"; 
    }

    return 0;
}