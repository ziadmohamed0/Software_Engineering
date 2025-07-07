#include <iostream>
#include "Stack.h"

int main()
{
    Stack<double> my_st;

    my_st.Push(3.5);
    my_st.Push(5.3);
    my_st.Push(8.5);
    my_st.Push(-2.2);

    double element;

    for(int i = 0; i < 7; i++)
    {
        my_st.Pop(element);
        std::cout << element << std::endl;
    }

    return 0;
}