#include<iostream>

class Memory
{
    public:
    Memory(std::string welcome)
    {
        type = "DDR4";
        capacity = 16;
        std::cout << welcome << std::endl;
    }
    void setMemoryType(std::string new_type)
    {
        this->type = new_type;
    }

    std::string getMemoryType()
    {
        return this->type;
    }

    private:
    std::string type;
    double capacity;

};

class Computer
{
    public:
    Computer() // strong containment
    {
        //my_ptr = new Memory("From constructor of Computer");
    }

    Computer(Memory * my_ram) // weak containment
    {
        //my_ptr = my_ram;
    }

    std::string getMymemorytype()
    {
        return my_ptr->getMemoryType();
    }


    private:
    Memory *my_ptr; 
    int my_data;

};


int main()
{
    Computer cmp1; // strong containtanment X memory

    Memory RAM_DDR("From main");

    Computer cmp2(&RAM_DDR);  // weak continment

    RAM_DDR.setMemoryType("DDR5");

    std::cout << "My memory type " << cmp2.getMymemorytype() << std::endl;



    return 0;
}