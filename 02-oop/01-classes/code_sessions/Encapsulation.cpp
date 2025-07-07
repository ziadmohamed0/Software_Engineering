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
    void setPrice(double New_Price)
    {
        price = New_Price;
    }

    double getPrice()
    {
        return price;
    }

    private:
    double price;
    float weight;
};

int main()
{
    Fruit Orange;
    Orange.setWeight(30);
    Orange.setPrice(15);
    

    Fruit Apple;
    Apple.setPrice(70);
    Apple.setWeight(5);

    std::array<Fruit, 5> Cart;
    Cart[0] = Orange;
    Cart[1] = Orange;
    Cart[2] = Apple;
    Cart[3] = Apple;
    Cart[4] = Apple;

    double total_price = 0;
    for(auto item: Cart)  
    {
        total_price += item.Caltotalprice();
    }

    std::cout << "Total Price = " << total_price << std::endl;
    return 0;
}