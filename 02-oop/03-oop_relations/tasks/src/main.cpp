/**
 * @file main.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-24
 */

#include "../inc/copy.h"

int main(void) {
    std::shared_ptr<PageObject> page1 = std::make_shared<page>();
    std::shared_ptr<PageObject> page2 = std::make_shared<page>();

    copy copyObj;

    copyObj.addItem(page1);
    copyObj.addItem(page2);

    copyObj.removeItem();  
    copyObj.deleteItem();


    copyObj.removeItem();   
    copyObj.deleteItem();   

    copyObj.addItem(page1);
    copyObj.deleteItem();   

    return 0;
}