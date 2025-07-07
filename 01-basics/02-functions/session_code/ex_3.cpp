#include <iostream>

void prog(std::string str) {

    std::string output = str;
    std::string start_char, end_char;
    int count = 0;

    if((output.size() <= 5) && (output.size() > 3)) {
        std::cout << output << std::endl;
    }
    else if (output.size() > 5) {
        for (int i = 0; i <= output.size(); i++) {
            count++;
            if(i == 0) {
                start_char = output[i];
            }
            else if (i == output.size() - 1) {
                end_char = output[i];
            }
        }
        std::cout << start_char << count-3 << end_char << std::endl;
    }

}


int main (void) {
    int num;
    int count = 0;
    std::cin >> num;
    
    while (count <= num-1) {
        std::string str = " ";
        std::cin >> str;
        prog(str);  
        count++;
    }



    return 0;
}