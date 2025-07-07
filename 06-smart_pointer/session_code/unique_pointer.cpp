/**
 * @file smart_pointers.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-05-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <memory>

template <class T>
class SmartPTR {
    public:
        /**
         * @brief Construct a new Smart P T R object
         * 
         * @param value 
         */
        SmartPTR(T value) {
            real_ptr = new T(value);
        }

        /**
         * @brief returned value when write {*}
         * 
         * @return int& 
         */
        T &operator*(){
            return *real_ptr;
        }

        

        /**
         * @brief Destroy the Smart P T R object
         * 
         */
        ~SmartPTR() {
            delete real_ptr;
            std::cout<< "resources delete\n";
        }
    private:
        T *real_ptr;
};


int main(void) {
    // /* integer values */
    // SmartPTR<int> my_ptr(15), 
    //         my_ptr1(19), 
    //         my_ptr2(20);

    // /* double values */
    // SmartPTR<double> my_ptr3(15.32), 
    //                 my_ptr4(19.25), 
    //                 my_ptr5(20.69);
 
    // /* integers display */
    // std::cout << *my_ptr << std::endl;
    // std::cout << *my_ptr1 << std::endl;
    // std::cout << *my_ptr2 << std::endl;
 
    // /* double display */
    // std::cout << *my_ptr3 << std::endl;
    // std::cout << *my_ptr4 << std::endl;
    // std::cout << *my_ptr5 << std::endl;

    // create 1 pointer to point in one place not multi pointers
    std::unique_ptr<int> my_ptr = std::make_unique<int>(90);
    std::cout << *my_ptr << std::endl;

    return 0;
}