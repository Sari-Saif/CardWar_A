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

using namespace std;
namespace ariel{}


Game::Game(){}
Game:Game(Player c,Player v){
if(c.stacksize()>26 || v.stacksize()>26)
{
    throw
}
this->c1=v;
this->c=c;

}
        void Game::playTurn(){}
        void Game::printLastTurn(){}
        void Game::playAll(){}
        void Game::printWiner(){}
        void Game::printLog(){}
        void Game::printStats(){}

Game:G



};
