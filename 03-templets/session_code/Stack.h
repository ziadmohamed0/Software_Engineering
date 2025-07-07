#ifndef _STACK_H
#define _STACK_H

template<class T>
class Stack
{
    public:
    Stack(int Size = 10);

    void Push(T item);

    void Pop(T& element);

    bool isFull();

    bool isEmpty();

    ~Stack();

    private:
    T* stack_data;
    int top_index;
    int Stack_size;

};

#include "Stack.tpp"

#endif