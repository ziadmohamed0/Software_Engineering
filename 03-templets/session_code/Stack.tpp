#include <iostream>
#include "Stack.h"

template<class T>
Stack<T>::Stack(int Size)
{
    if(Size > 100)
    {
        Size = 100;
    }
    stack_data = new T[Size];
    top_index = -1;
    Stack_size = Size;
}

template<class T>
void Stack<T>::Push(T item)
{
    if(!isFull())
    {
        top_index++;
        stack_data[top_index] = item;
    }
    else
    {
        std::cout << "Stack is full\n";
    }
}

template<class T>
void Stack<T>:: Pop(T& element)
{
    if(!isEmpty()){
        element = stack_data[top_index];
        stack_data[top_index] = 0;
        top_index--;
    }
    else
    {
        std::cout << "Stack is empty\n";
    }
}

template<class T>
bool Stack<T>::isFull()
{
    if(top_index == Stack_size - 1)
    {
        return true;
    }
    else{
        return false;
    }
}


template<class T>
bool Stack<T>::isEmpty()
{
    if(top_index == -1)
    {
        return true;
    }
    else{
        return false;
    }
}

template<class T>
Stack<T>::~Stack()
{
    delete this->stack_data;
}