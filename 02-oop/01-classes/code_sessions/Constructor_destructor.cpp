#include <iostream>
#include <array>

/*
                public      private       protected
inside class    true        true           true
outside class   true        false          false
inherted class  true        false          true

default   struct (public)  / class (private)
*/

#include <iostream>
#include <array>

class Fruit  // define 
{
    public:
    Fruit(double init_price, float init_weight)  // constructor
    {
        std::cout << "Fruit created\n";
        weight = init_weight;
        price = init_price;
    }
    double Caltotalprice()
    {
        return price * weight;
    }

    void setWeight(double new_weight)
    {
        weight = new_weight;
    }

    double getWeight()
    {
        return weight;
    }
    ~Fruit()
    {
        std::cout << "Destructor\n";
    }

    private:
    double price = 1;
    float weight;
};

int main()
{
    Fruit Orange(30, 15);

    Fruit Apple(70, 5);

    std::array<Fruit, 5> Cart = {Orange, Apple, Orange, Orange, Apple};

    double total_weight = 0;
    for(auto item: Cart)  
    {
        std::cout << item.getWeight() << std::endl;
        //total_weight += item.getWeight();
    }
    std::cout << "Total weight = " << total_weight << std::endl;
    return 0;
}