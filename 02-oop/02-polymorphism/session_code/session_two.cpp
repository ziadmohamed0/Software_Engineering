/**
 * @file session_two.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-04-17
 */

#include <iostream>


// global area 
class black_team{
    private:
        int indvetual_score{0};
        std::string player_name;
        int T_shirtNo{0};
    public:
        static int team_score;
        black_team(std::string copyPlayerName, int copyT_shirtNo) : 
                    T_shirtNo(copyT_shirtNo),
                    player_name(copyPlayerName){
                        this->indvetual_score = 0;
                    }
        void Goal_score() {
            this->indvetual_score++;
            team_score++;
        }

        int get_indevidaul() {
            return this->indvetual_score;
        }
    
};

class white_team{
    private:
        int indvetual_score{0};
        std::string player_name;
        int T_shirtNo{0};
    public:
        static int team_score;
        white_team(std::string copyPlayerName, int copyT_shirtNo) : 
                    T_shirtNo(copyT_shirtNo),
                    player_name(copyPlayerName){
                        indvetual_score = 0;
                    }
        void Goal_score() {
            this->indvetual_score++;
            this->team_score++;
        }

        int get_indevidaul() {
            return this->indvetual_score;
        }

};

int white_team::team_score{0};
int black_team::team_score{0};

int main (void) {
    // local area
    white_team p1("mo-salah", 22), p2("messi", 10);
    p1.Goal_score();
    p2.Goal_score();
    std::cout << "white team scoure: " << white_team::team_score << " Goals" << std::endl;
    std::cout << "player 1 scored: " << p1.get_indevidaul() << " Goals" << std::endl;

    black_team pl1("abo treka", 5), pl2("hessen", 4);
    pl1.Goal_score();
    pl2.Goal_score();
    std::cout << "black team scoure: " << black_team::team_score << " Goals" << std::endl;
    std::cout << "player 1 scored: " << pl1.get_indevidaul() << " Goals" << std::endl;

    return 0;
}