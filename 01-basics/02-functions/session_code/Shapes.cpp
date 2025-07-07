
#include<iostream>
// Square --> namespace (Area, Parameter)
// Circle --> namespace (Area, Parameter)

namespace Square
{
    double Area(double side)
    {
        return side * side;
    }

    double Parameter(double side)
    {
        return 4 * side;
    }
}

namespace Circle
{
    const double PI = 3.1415926;
    double Area(double redius)
    {
        return PI * redius * redius;
    }

    double Parameter(double redius)
    {
        return 2 * PI * redius;
    }
}

void Square_Output()
{
    std::cout << "Please enter square side\n";
    double side;
    std::cin >> side;

    std::cout << "The area of square = " << Square::Area(side) << std::endl;
    std::cout << "The Parameter of square = " << Square::Parameter(side) << std::endl;

}

void Circle_Output()
{
    std::cout << "Please enter Circle Redius\n";
    double Redius;
    std::cin >> Redius;

    std::cout << "The area of Circle = " << Circle::Area(Redius) << std::endl;
    std::cout << "The Parameter of Circle = " << Circle::Parameter(Redius) << std::endl;
}

int main()
{
    char choice;
    std::cout << "Please enter shape (C --> Circle, S --> Square)\n";

    std::cin >> choice;

    switch(choice)
    {
        case 'S':
            Square_Output();
            break;
        case 'C':
            Circle_Output();
            break;
        default:
            std::cout << "Invalid output\n";

    }


    return 0;
}
