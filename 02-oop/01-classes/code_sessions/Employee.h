#ifndef EMPLOYEEE_H
#define EMPLOYEEE_H // gaurd condition

#include<iostream>

class Employee
{
    public:
    Employee(std::string id, float salary, std::string name);

    void setSalary(float new_salary);

    float getSalary();
    ~Employee();

    private:
    std::string id;
    float salary;
    std::string name;

};

#endif