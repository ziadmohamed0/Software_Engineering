/**
 * @file PageCopy.h
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-25
 */

#ifndef _INC_PAGE_COPY_H_
#define _INC_PAGE_COPY_H_

#include "page.h"
#include <iostream>

class copy : public PageObject {
    public:
        copy();
        void addItem(std::shared_ptr<PageObject> obj) override;
        void removeItem() override;
        void deleteItem() override;

    private:
        std::vector<std::shared_ptr<PageObject>> items;
};

#endif