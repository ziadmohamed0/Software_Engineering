#include<iostream>
#include "Employee.h"

    Employee::Employee(std::string id, float salary, std::string name)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void Employee::setSalary(float new_salary)
    {
        this->salary = new_salary;
    }


    float Employee::getSalary()
    {
        return this->salary;
    }
    Employee::~Employee()
    {
        //std::cout << "Destructor called\n";
    }