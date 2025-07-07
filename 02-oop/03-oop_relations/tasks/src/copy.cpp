/**
 * @file PageCopy.cpp
 * @author Ziad Mohammed fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-25
 */

#include "../inc/copy.h"

copy::copy() {}

void copy::addItem(std::shared_ptr<PageObject> obj) {
    items.push_back(obj);
    std::cout << "Copy: Page added\n";
}

void copy::removeItem() {
    if (!items.empty()) {
        items.pop_back();
        std::cout << "Copy: Last item removed\n";
    }
}

void copy::deleteItem() {
    items.clear();
    std::cout << "Copy: All items deleted\n";
}
