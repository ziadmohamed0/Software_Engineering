/**
 * @file Task_10_2.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-04-08 
 */

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <functional>

struct Item{
    std::string name;
    float price;
    int quantity;
};

int main () {
    std::vector<Item> inventory = {
        {"Laptop", 15000.0f, 5},
        {"Smartphone", 8000.0f, 10},
        {"Tablet", 6000.0f, 0}
    };

    auto updatePrice = [&](const std::string &itemName, float newPrice) {
        for(auto &item : inventory) {
            if(item.name == itemName) {
                item.price = newPrice;
                std::cout << "Updated price of " << itemName << " to " << newPrice << " EGP\n";
                return;
            }
        }
        std::cout << "Item \"" << itemName << "\" not found.\n";
    };

    auto isOutOfStock = [inventory] (std::string &itemName) -> bool {
        for(const auto &item : inventory) {
            if(item.name == itemName) {
                return item.quantity == 0;
            }
        }
        return false;
    };

    auto calculateTotalValue = [&] () -> float {
        float total = 0.0f;
        for (const auto& item : inventory) {
            total += item.price * item.quantity;
        }
        return total;
    };

    std::cout << "---- Inventory Management System ----\n\n";

    updatePrice("Smartphone", 8500.0f);

    std::string checkItem = "Laptop";
    
    if (isOutOfStock(checkItem)) {
        std::cout << checkItem << " is out of stock.\n";
    } 
    
    else {
        std::cout << checkItem << " is available in stock.\n";
    }

    float totalValue = calculateTotalValue();
    std::cout << "Total inventory value = " << totalValue << " EGP\n";

    return 0;
}