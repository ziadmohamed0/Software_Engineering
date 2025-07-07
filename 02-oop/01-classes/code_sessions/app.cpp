#include <iostream>
#include "Employee.h"

void Display_emp(Employee& Copy_emp)  // pass by value
{
    std::cout << "The salary = " << Copy_emp.getSalary() << std::endl;

    Copy_emp.setSalary(500);
}

int main()
{
    Employee emp1("48362148", 1000, "Luffy");

    Display_emp(emp1);

    std::cout << emp1.getSalary() << std::endl;

    return 0;
}
