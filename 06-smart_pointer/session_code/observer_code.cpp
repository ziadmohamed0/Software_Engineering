#include <iostream>
#include <vector>
#include <algorithm>

class Subjects;

class observer {
    public:
        virtual ~observer() = default;
        virtual void Update(Subjects&) = 0;
};

class subject {
    public:
        virtual ~subject() = default;
        void attach(observer& o) {
            this->observers.push_back(o);
        }

        void de_attach(observer& o) {
            observers.erase(std::find(observers.begin(), observers.end(), &o));
        }

        void notify() {
            for(auto* ele : observers) {
                ele->Update(*this);
            }
        }
    private:
        std::vector<observer&> observers;
};



int main() {


    return 0;
}