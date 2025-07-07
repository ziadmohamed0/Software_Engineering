/**
 * @file page.h
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-25
 */

#ifndef _INC_PAGE_H_
#define _INC_PAGE_H_

#include "PageObject.h"

class page : public PageObject {
    public : 
        void addItem(std::shared_ptr<PageObject> obj) override;    
        void removeItem() override;   
        void deleteItem() override; 
        ~page() = default;
    private : 
};
#endif