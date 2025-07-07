/**
 * @file main.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-05-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */


#include <iostream>
#include <string>


template <typename T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

class Person {
private:
    std::string name;
    int age;

public:
    /**
     * @brief Construct a new Person object
     * 
     * @param n 
     * @param a 
     */
    Person(std::string n, int a) : name(n), age(a) {}
    
    /**
     * @brief Construct a new Person object
     * 
     * @param p 
     */
    Person(const Person &p) : name(p.name), age(p.age) {}
    
    /**
     * @brief 
     * 
     * @param other 
     * @return true 
     * @return false 
     */
    bool operator>(const Person &other) const {
        return age > other.age;
    }
    
    /**
     * @brief 
     * 
     * @param other 
     * @return true 
     * @return false 
     */
    bool operator==(const Person &other) const {
        return (name == other.name) && (age == other.age);
    }
    
    /**
     * @brief 
     * 
     * @param os 
     * @param p 
     * @return std::ostream& 
     */
    friend std::ostream& operator<<(std::ostream &os, const Person &p) {
        os << "Person(" << p.name << ", " << p.age << ")";
        return os;
    }
};

int main(void) {
    int x{0}, y{0};
    std::cout << "Enter Number 1 integer: ";
    std::cin >> x;

    std::cout << "Enter Number 2 integer: ";
    std::cin >> y;
    
    std::cout << "Max of " << x << " and " << y << " is " << myMax(x, y) << std::endl;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    mySwap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl << std::endl;
    
    double a{0.0}, b{0.0};
    std::cout << "Enter Number 1 double: ";
    std::cin >> a;

    std::cout << "Enter Number 2 double: ";
    std::cin >> b;

    std::cout << "Max of " << a << " and " << b << " is " << myMax(a, b) << std::endl;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    mySwap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl << std::endl;
    
    Person p1("Alice", 25);
    Person p2("Bob", 30);
    
    std::cout << "Max of " << p1 << " and " << p2 << " is " << myMax(p1, p2) << std::endl;
    std::cout << "Before swap: p1 = " << p1 << ", p2 = " << p2 << std::endl;
    mySwap(p1, p2);
    std::cout << "After swap: p1 = " << p1 << ", p2 = " << p2 << std::endl << std::endl;
    
    Person p3("Alice", 25);
    std::cout << p1 << " == " << p3 << "? " << (p1 == p3 ? "Yes" : "No") << std::endl;
    
    return 0;
}