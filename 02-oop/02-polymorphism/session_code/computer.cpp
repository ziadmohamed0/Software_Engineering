#include <iostream>

class memory{
    public:
        memory(std::string copyString) {
            type = "DDR4";
            std::cout << copyString << std::endl;
        }

        void setMemory(std::string copyString) {
            type = copyString;
        }

        std::string getMemory() {
            return this->type;
        }

    private:
        std::string type;
};

class computer {
    public:
        computer() {
            this->my_ptr = new memory("From constractorof computer"); // strong conanment
        }
        computer(memory* my_ram) {
            this->my_ptr = my_ram; // weak conanment
        }
        std::string getMemoryType() {
            return my_ptr->getMemory();
        }
    private:
        memory* my_ptr;
};


int main (void) {
    computer cmp1;

    memory ram_ddr("from main");
    computer cmp2(&ram_ddr);

    ram_ddr.setMemory("DDr2");
    std::cout << "Memory type: " << cmp2.getMemoryType() << std::endl;
    return 0;
}