//
// Created by sari on 3/26/23.
//
#include "player.hpp"
#include "Card.hpp"
#include "game.hpp"
#include <string>

using namespace std;
namespace ariel{}

class Game{
        Game(){}
        Game(Player c,Player v){
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
