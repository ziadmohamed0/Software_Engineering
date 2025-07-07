#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    while(n > 0)
    {

        std::string input_word;
        std::cin >> input_word;

        if(input_word.size() > 10)
        {
            int counter = input_word.size() - 2;
            std::cout << input_word[0] << counter << input_word[counter + 1] << std::endl;
        
        }
        else
        {
            std::cout << input_word << std::endl;
        }
    n--;
    }


    return 0;
}