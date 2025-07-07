/**
 * @file smart_pointter.cpp
 * @author Ziad Mohammed Fathy
 * @brief Shared Pointer Example
 * @version 0.1
 * @date 2025-05-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

class SharedPointer {
    public:
        /**
         * @brief Construct a new Shared Pointer object
         * 
         * @param value 
         */
        SharedPointer(int value) {
            std::cout << "Created is called\n";
            real_ptr = new int(value);
            counter = new int(1);
        }

        /**
         * @brief Construct a new Shared Pointer object
         * 
         * @param copy 
         */
        SharedPointer(const SharedPointer& copy) {
            std::cout << "Copy is called\n";
            this->real_ptr = copy.real_ptr;
            (*copy.counter)++;
            this->counter = copy.counter;
        }

        /**
         * @brief 
         * 
         * @param other 
         */
        void operator=(SharedPointer other) {
            std::cout << "operator is called\n";
            this->real_ptr = other.real_ptr;
            (*other.counter)++;
            this->counter = other.counter;
        }

        /**
         * @brief Get the Counter object
         * 
         * @return int 
         */
        int getCounter() {
            return *(this->counter);
        }

        /**
         * @brief Destroy the Shared Pointer object
         * 
         */
        ~SharedPointer() {
            std::cout << "destractor is called\n";
            (*this->counter)--;
            if(*this->counter == 0) {
                delete counter;
                delete real_ptr;
            }
        }

    private:
        int* counter;
        int* real_ptr;
};


int main () {
    SharedPointer ptr1(15);
    SharedPointer ptr2(ptr1);
    
    std::cout << "Counter : " << ptr2.getCounter() << std::endl;
 
    return 0;
}