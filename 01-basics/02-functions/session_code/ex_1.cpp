#include <iostream>

void digits(int num) {
    std::string output = " ";
    while(num) {
        output += ((num % 10) + '0');
        output += ' ';
        num /= 10;
    }

    for (int i = output.size() - 1; i >= 0; i--) {
        std::cout << output[i];
    }
    
    std::cout << std::endl;
}

int main (void) {
    int num;
    std::cout << "Enter Number = ";
    std::cin >> num;
    digits(num);
    return 0; 
}