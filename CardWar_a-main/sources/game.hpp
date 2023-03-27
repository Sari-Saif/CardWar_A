/**
 * header file for the Game Object
 * @author Sari Saif
 * @since 2023-03-27
 */

#ifndef CARDWAR_A_GAME_HPP
#define CARDWAR_A_GAME_HPP

#include "player.hpp"

/**
 * external libraries
 */
#include <iostream>
#include <string>

using namespace std;
namespace ariel{
class Game
{
private:
    // think to add new private function
    // all of the information will be included by progress...
    Player _player0;
    Player _player1;
public:

    //default
    Game();
    // initiate
    // need destructors there need dont to ignore him
    Game(Player& p,Player& p1);
    //functions
    void playTurn();
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();
};
};
#endif //CARDWAR_A_GAME_HPP
