/**
 * @file page.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-25
 */

#include "../inc/page.h"

void page::addItem(std::shared_ptr<PageObject> obj) {
    std::cout << "Item added to Page\n";
}   

void page::removeItem() {
    std::cout << "Item removed from Page\n";
}   

void page::deleteItem() {
    std::cout << "Page deleted\n";
}