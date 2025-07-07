/**
 * @file stack.h
 * @author Ziad Mohammed Fathy
 * @brief stack header file class & function declerations
 * @version 0.1
 * @date 2025-04-29
 */

#ifndef _STACK_STACK_H_
#define _STACK_STACK_H_

#include <iostream>

template <class T>
class stack{
    public:
        stack(int copySizeStack = 10);
        void push(T copyItem);
        void pop(T &copyElement);
        bool isFull(void);
        bool isEmpety(void);
        ~stack();
    private:
        T* Data;
        int top_stack;
        int stack_size;
};

#include "stack.tpp"

#endif