/**
 * implementation  file for the Player Object
 * @author Sari Saif
 * @since 2023-03-27
 */

#include "player.hpp"
/**
 * external libraries
 */
#include <string>
#include <iostream>
using namespace std;
namespace ariel
{

        Player::Player(){};
        Player::Player(const string& str)
        {
            this->_name= str;
        };
        void Player::playTurn(){};
        int Player::stacksize(){return 0;};
        int Player::cardesTaken(){return 0;};
};




