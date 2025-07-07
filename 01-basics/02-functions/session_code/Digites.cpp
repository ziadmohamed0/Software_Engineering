

// 7486218371 --> 1
// 748621837

// 748621837 --> 7
// 74862183

#include <iostream>
void Digits(int num)
{ 
    std::string output = "";  
    while(num)
    {
        output += ((num % 10) + '0');
        output += ' ';
        num /= 10;
    }
    for(int i = output.size() - 1; i >= 0; i--)
    {
        std::cout << output[i];
    }
    std::cout << std::endl;
}

int main()
{
    int number;
    std::cin >> number;
    Digits(number);

    return 0;
}
