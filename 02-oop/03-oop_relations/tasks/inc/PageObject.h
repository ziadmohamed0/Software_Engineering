/**
 * @file PageObject.h
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-24
 */

#ifndef _INC_PAGE_OBJECT_H_
#define _INC_PAGE_OBJECT_H_

#include <iostream>
#include <vector>
#include <memory>

class PageObject{
    public:
        virtual void addItem(std::shared_ptr<PageObject> obj) = 0;
        virtual void removeItem() = 0;
        virtual void deleteItem() = 0;
        virtual ~PageObject() = default;
    protected:
        std::vector<std::shared_ptr<PageObject>> item;
        std::shared_ptr<PageObject> Page;
};

#endif