//
// Created by sari on 3/26/23.
//

#ifndef CARDWAR_A_GAME_HPP
#define CARDWAR_A_GAME_HPP

#include <string>
use namespace std;

class Game {
public:
    Player c,c1;
    Game(){}
    Game(Player c,Player v){}
    void playTurn();
    string printLastTurn();
    void playAll();
    string printWiner();
    string printLog();
    string printStats();
};


#endif //CARDWAR_A_GAME_HPP
