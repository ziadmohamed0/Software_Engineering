#include <algorithm>
#include <iostream>


class IBox {
    public:
        virtual void Open() = 0;
        virtual ~IBox() {};
};

class SimpleBox : public IBox {
    public:
        virtual void Open() {
            std::cout << "Openning the Box\n";
        }
};

class proxyBox : public IBox {
    public:
        proxyBox(std::string sUserName, std::string sPwd) : 
                    mUserName(sUserName), 
                    mPwd(sPwd){}
        void Open() override {
            if(isAuthenticated()) {
                std::cout << "Authenticated success\n";
                mBox.Open();
                std::cout << "open called\n";
            }
        }
    private:
        std::string mUserName, mPwd;
        SimpleBox mBox;

        bool isAuthenticated() {
            bool bAutoCalled{false};
            if(this->mUserName == "Admin" && this->mPwd == "Test123") {
                bAutoCalled = true;
            }
            return bAutoCalled;
        }
};

int main () {
    IBox* box = new proxyBox("Admin", "Test123");
    box->Open();
    return 0;
}