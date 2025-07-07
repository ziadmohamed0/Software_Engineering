/**
 * @file data.h
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-30
 */

#include "../stack/stack.h"
#include <array>

namespace string_data {
    constexpr int size_arry = 7;
    std::string element{0};
    std::array<std::string, size_arry> data{
        "Ziad Mohammed", "Adham Mohammed", "Mohammed Fathy",
        "Yassen Mohammed", "Youssif Tarek", "Abdelrahman Ashraf",
        "Mohammed Tarek"
    };
}

namespace double_data {
    constexpr int size_arry = 10;
    double element{0};
    std::array<double, size_arry> data{
        50.25, 60.8, 70.9, 12.4, 61.5,
        14.65, 13.564, 72.5, 71.56, 65.25
    };
}

namespace char_data {
    constexpr int size_array = 12;
    char element{0};
    std::array<char, size_array> data{
        'a', 'b', 'c', 'd', 'e', 'f', 
        'g', 'h', 'i', 'j', 'k', 'l',
    };
}