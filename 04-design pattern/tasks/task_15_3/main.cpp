/**
 * @file mainc.cpp
 * @author Ziad Mohammed fathy
 * @brief 
 * @version 0.1
 * @date 2025-05-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Record {
    std::string name;
    int power_level;
    void Print_Data(void) const {
        std::cout << "Name: <" << name << ">, Power level: <" << power_level << ">.\n";
    }
};

int main (void) {
    std::vector<Record> records = {
        {"Erin", 100},
        {"Armin", 80},
        {"Mikasa", 150},
        {"Levi", 200},
        {"Eren", 120}
    };

    std::cout << "data:" << std::endl;
    for(const auto &record : records) {
        record.Print_Data();
    }
    std::cout << std::endl;

    auto CmpareByName = [](const Record &a, const Record &b) {
        return a.name > b.name;
    };

    auto CmpareByPowerLevel = [] (const Record &a, const Record &b) {
        return a.power_level > b.power_level;
    };

    std::sort(records.begin(), records.end(), CmpareByName);
    std::cout << "Sorted by name (descending):" << std::endl;
    for(const auto &record : records) {
        record.Print_Data();
    }
    std::cout << std::endl;

    std::sort(records.begin(), records.end(), CmpareByPowerLevel);
    std::cout << "Sorted by power level (descending):" << std::endl;
    for(const auto &record : records) {
        record.Print_Data();
    }
    return 0;
}