#include<iostream>
#include<algorithm>

int convert_hexa_to_dec(std::string hexa)
{
    int decimal = 0, base = 1;
    int size = hexa.size();
    for(int i = size - 1; i >= 0; i--)
    {
        if(hexa[i] >= '0' && hexa[i] <= '9')
        {
            decimal += (hexa[i] - '0') * base;
        }
        else if (hexa[i] >= 'A' && hexa[i] <= 'F')
        {
            decimal += (hexa[i] - 55) * base;  
        }

        base *= 16;
    }
    return decimal;
}

std::string Dec_binary(int decimal)
{
    std::string binary = "";
    while (decimal)
    {
        binary += (decimal % 2) + '0';

        decimal /= 2;
    }
    std::reverse(binary.begin(), binary.end());

    return binary;
    
}

std::string Dec_hexa(int decimal)
{
    std::string hexa = "";
    while (decimal)
    {
        int rem = decimal % 16;
        if(rem >= 0 && rem <= 9)
        {
            hexa += (rem + '0');
        }
        else
        {
            hexa += (rem + 55);
        }

        decimal /= 16;
    }
    std::reverse(hexa.begin(), hexa.end());

    return hexa;
    
}

int main()
{
    // std::cout << "Please enter hexa\n";
    // std::string hexa_num;

    // std::cin >> hexa_num;

    // std::cout << "Decimal value = " << convert_hexa_to_dec(hexa_num) << std::endl;

    std::cout << "Please enter decimal\n";

    int decimal;

    std::cin >> decimal;

    std::cout << "Hexa = " << Dec_hexa(decimal) << std::endl;
    std::cout << "binary = " << Dec_binary(decimal) << std::endl;
    return 0;
}