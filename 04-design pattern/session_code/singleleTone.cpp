#include <iostream>
#include <memory>

class SingleTone{
    public:
        SingleTone() {}
        static std::shared_ptr<SingleTone> getInstance();
        void send(std::string data);
    private:
        SingleTone(const SingleTone&);
        static std::shared_ptr<SingleTone> instance;
};

std::shared_ptr<SingleTone> SingleTone::instance = nullptr;

std::shared_ptr<SingleTone> SingleTone::getInstance(void) {
    if(instance == nullptr) {
        instance = std::make_shared<SingleTone>();
        std::cout << "getInstance() : First instance\n";
        return instance;
    }

    else {
        std::cout << "getInstance(): \n";
        return instance;
    }
}

void SingleTone::send(std::string data) {
    std::cout << data;
}

void AirConditioner(){
    std::shared_ptr<SingleTone> s1 = SingleTone::getInstance();
    s1->send("Temprature 35 Degree\n");
}

void Streeo(){
    std::shared_ptr<SingleTone> s1 = SingleTone::getInstance();
    s1->send("Sound is on\n");
}

int main (void) {
    AirConditioner();
    Streeo();
    return 0;
}