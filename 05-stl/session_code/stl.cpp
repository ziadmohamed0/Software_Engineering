/**
 * @file stl.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-05-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <set>

class person {
    public:
        /**
         * @brief Construct a new person object
         * 
         */
        person() {}
        /**
         * @brief Construct a new person object
         * 
         * @param copyID 
         * @param copyName 
         */
        person(int copyID, std::string copyName) : id(copyID), name(copyName){}
        friend struct PersonCompare;
        /**
         * @brief 
         * 
         */
        void Display(void) {
            std::cout << "persion id: " << this->id << ", persion name "
                << this->name << std::endl;    
        }
        /**
         * @brief 
         * 
         * @param p1 
         * @return true 
         * @return false 
         */
        bool operator<(const person &p1)const {
            return this->id < p1.id;
        }


    private:
        std::string name;
        int id;
};

struct PersonCompare {
    /**
     * @brief 
     * 
     * @param p1 
     * @param p2 
     * @return true 
     * @return false 
     */
    bool operator()(const person &p1, const person &p2)const {
        return p1.id < p2.id;
    }
};


int main (void) {
    person Ahmed(3, "Ahmed"),
            Ali(2,"Ali"),
            Emad(1, "Emad");
    std::set<person, PersonCompare> people;
    
    people.insert(Ahmed);
    people.insert(Ali);
    people.insert(Emad);

    for (auto per : people) {
        per.Display();
    }
    return 0;
}