/**
 * implementation  file for the Game Object
 * @author Sari Saif
 * @since 2023-03-27
 */
#include "player.hpp"
#include "card.hpp"
#include "game.hpp"

/**
 * external libraries
 */
#include <string>
#include "iostream"

/*
 * there alot of things need to add in this file ....
 */

using namespace std;
namespace ariel
{
Game::Game(){}
Game:Game(Player& c,Player& v){
    if(c.stacksize()>26 || v.stacksize()>26)
    {
    throw std::out_of_range("stack size bounded !!");
    }
    this->_player0= v;
    this->_player1= c;
}
        void Game::playTurn()
        {

        }
        void Game::printLastTurn()
        {
            return "null";
        }
        void Game::playAll()
        {

        }
        void Game::printWiner()
        {
            return "null";
        }
        void Game::printLog()
        {
            return "null";
        }
        void Game::printStats()
        {
            return "null";
        }
};
}