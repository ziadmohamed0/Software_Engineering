#include <iostream>

const float pi = 3.14;

namespace Square {
    double Area (double side) {
        return (side * side);
    }

    double Parameter (double side) {
        return (4 * side);
    }
} 

namespace Circuil {
    double Area (double rad) {
        return (2 * pi * rad + rad);
    }

    double Parameter (double rad) {
        return (2 * pi * rad);
    }
}

int main (void) {
    double rad, side;
    int option_1, option_2;

    std::cout << "-------------------------------------\n";
    std::cout << "1 - Square\n2 - Circuil\nEnter your choise: ";
    std::cin >> option_1;
    std::cout << "-------------------------------------\n";

    std::cout << "1 - Area\n2 - Parameter\nEnter your choise: ";
    std::cin >> option_2;
    std::cout << "-------------------------------------\n";

    switch (option_1) {
    case 1:
        std::cout << "Enter side of Square: ";
        std::cin >> side;
        std::cout << "-------------------------------------\n";

        switch (option_2) {
        case 1:
            std::cout << "Area squarte = " << Square::Area(side) << std::endl;
            break;
        case 2:
            std::cout << "Parameter squarte = " << Square::Parameter(side) << std::endl;
            break;
        default:
            break;
        } 
        break;
        case 2:
        std::cout << "Enter Radios of Circuil: ";
        std::cin >> rad;
        std::cout << "-------------------------------------\n";
        switch (option_2) {
            case 1:
                std::cout << "Area Circuil = " << Circuil::Area(rad) << std::endl;
                break;
            case 2:
                std::cout << "Parameter Circuil = " << Circuil::Parameter(rad) << std::endl;
                break;
            default:
                break;
        } 
    default:
        break;
    }




    return 0;
}