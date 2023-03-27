/**
 * header file for the Player Object
 * @author Sari Saif
 * @since 2023-03-27
 */

#ifndef CARDWAR_A_PLAYER_HPP
#define CARDWAR_A_PLAYER_HPP

#include "card.hpp"
/**
 * external libraries
 */
#include <string>
#include <iostream>

class Player
{
private:
    string _name;
public:
// variables that need to be in player class:
// int size for stack or another datastructures == 26
// datastructure for save cards in (queue)
//
    Player();
    Player(const string& str);
    void playTurn();
    int stacksize();
    void cardesTaken();




};


#endif //CARDWAR_A_PLAYER_HPP
