    #include <iostream>
    struct   fruit // define
    {
        double price;
        float weight;
    
    };
    
    int main()
    {
        fruit orange;
        fruit apple;
        orange.price = 15;
        orange.weight= 5;
        std::cout << "orange price = " <<  orange.price << " , orange weight = " << orange.weight << std::endl;
        return 0;
    }
    
    