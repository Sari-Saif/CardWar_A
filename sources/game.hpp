/**
 * header file for the Game Object
 *
 * @author Sari Saif
 * @since 2023-03-27
 */

#ifndef CARDWAR_A_GAME_HPP
#define CARDWAR_A_GAME_HPP
#include "player.hpp"
#include <iostream>
#include <string>

use namespace std;
namespace ariel{}

class Game {
private:
    Player player0;
    Player player1;
public:

    //default
    Game(){}
    // initiate
    Game(Player c,Player v){}
    //functions
    void playTurn();
    string printLastTurn();
    void playAll();
    string printWiner();
    string printLog();
    string printStats();
};
#endif //CARDWAR_A_GAME_HPP
