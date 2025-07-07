/**
 * @file stack.tpp
 * @author Ziad Mohammed Fathy
 * @brief stack template file functions impelemntation
 * @version 0.1
 * @date 2025-04-29
 */

#include "stack.h"

/**
 * @brief Construct a new stack<T>::stack object
 * 
 * @tparam T 
 * @param copySizeStack 
 */
template <class T>
stack<T>::stack(int copySizeStack)  : stack_size(copySizeStack) {
    if(this->stack_size > 100) {
        this->stack_size = 100;
    }

    this->Data = new T[stack_size];
    top_stack = -1;
}

/**
 * @brief push copyItem in stack.
 * 
 * @tparam T 
 * @param copyItem 
 */
template <class T>
void stack<T>::push(T copyItem) {
    if(!this->isFull()) {
        this->top_stack++;
        this->Data[this->top_stack] = copyItem;
    }
    else{
        std::cout << "Stack is Full :(\n";
    }
}

/**
 * @brief pop copyElement from stack
 * 
 * @tparam T 
 * @param copyElement 
 */
template <class T>
void stack<T>::pop(T &copyElement) {
    if(!this->isEmpety()) {
        copyElement = this->Data[this->top_stack];
        this->Data[this->top_stack] = T();
        this->top_stack--;
    }

    else {
        std::cout << "Stack is empty :( \n";
    }
}

/**
 * @brief check if stack is full
 * 
 * @tparam T 
 * @return true 
 * @return false 
 */
template <class T>
bool stack<T>::isFull(void) {
    if(this->stack_size == (this->top_stack - 1)) {
        return true;
    }
    else {
        return false;
    }
}

/**
 * @brief check if stack is Empety
 * 
 * @tparam T 
 * @return true 
 * @return false 
 */
template <class T>
bool stack<T>::isEmpety(void) {
    if(this->stack_size == -1) {
        return true;
    }
    else {
        return false;
    }
}

/**
 * @brief Destroy the stack<T>::stack object
 * 
 * @tparam T 
 */
template <class T>
stack<T>::~stack(void) {
    delete[] this->Data;
}