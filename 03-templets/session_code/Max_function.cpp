#include <iostream>

template<typename T>
T max_function(T a, T b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int n1 = 15, n2 = 20;

    double p1 = 5.5, p2 = 5.7;

    std::cout << " Integer max = "<< max_function(n1, n2) << std::endl; 

    std::cout << " double max = "<< max_function(p1, p2) << std::endl; 

    return 0;
}