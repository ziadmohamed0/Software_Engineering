/**
 * @file session_two_2.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-17
 */

#include <iostream>

class team{
    protected:
        int indvetual_score{0};
        std::string player_name;
        int T_shirtNo{0};
    public:
        /**
         * @brief Construct a new team object
         * 
         * @param copyPlayer 
         * @param copyT_shirtNo 
         */
        team(std::string &copyPlayer, int &copyT_shirtNo) :
                player_name(copyPlayer), 
                T_shirtNo(copyT_shirtNo){
                    indvetual_score = 0;
                }
        /**
         * @brief Get the indevidaul object
         * 
         * @return int 
         */
        int get_indevidaul(void) {return this->indvetual_score;}
        virtual void Goal_score(void) = 0;
};

class white_team : public team{
    public:
        static int white_team_score;
        /**
         * @brief Construct a new white team object
         * 
         * @param copyPlayer 
         * @param copyT_shirtNo 
         */
        white_team(std::string copyPlayer, int copyT_shirtNo) : 
                    team(copyPlayer, copyT_shirtNo){}

        void Goal_score(void) override {
            this->indvetual_score++;
            this->white_team_score++;
        }
};

class black_team : public team{
    public:
        static int black_team_score;
        /**
         * @brief Construct a new black team object
         * 
         * @param copyPlayer 
         * @param copyT_shirtNo 
         */
        black_team(std::string copyPlayer, int copyT_shirtNo) : 
                    team(copyPlayer, copyT_shirtNo){}
        void Goal_score(void) override {
            this->indvetual_score++;
            this->black_team_score++;
        }
};

int white_team::white_team_score{0};
int black_team::black_team_score{0};

int main (void) {
    // white_team p1("mo-salah", 22), p2("messi", 10);
    // p1.Goal_score();
    // p2.Goal_score();
    // std::cout << "white team scoure: " << white_team::white_team_score << " Goals" << std::endl;
    // std::cout << "player 1 scored: " << p1.get_indevidaul() << " Goals" << std::endl;

    // black_team pl1("abo treka", 5), pl2("hessen", 4);
    // pl1.Goal_score();
    // pl2.Goal_score();
    // std::cout << "black team scoure: " << black_team::black_team_score << " Goals" << std::endl;
    // std::cout << "player 1 scored: " << pl1.get_indevidaul() << " Goals" << std::endl;

    team *ptr = nullptr;
    ptr = new white_team("Mo-Salah", 22); // new initalization in heap (Dynamic memory allocation).
    ptr->Goal_score();
    std::cout << "Mo-salah indevidaul: " << ptr->get_indevidaul() << std::endl;

    return 0;
}