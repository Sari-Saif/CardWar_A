/**
 * implementation file for the TESTING
 * @author Sari Saif
 * @since 2023-03-27
 */

/**
 *
 */
#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Safe Players")
{
    Player p("Sari");
    Player  p1("Sami");
    CHECK(p.stacksize()==26);//trueeee
    CHECK(p.stacksize()<0);//false
    CHECK(p.stacksize()== p1.stacksize());//draw
    CHECK(p.stacksize()+p.cardesTaken()>2*p.stacksize());///isnot safe
    CHECK(p1.cardesTaken()+p.cardesTaken()==26);//draw
}
TEST_CASE("Counstructor checking")
{
    Player p("Sari");
    Player  p1("Sami");
    Game game(p,p1);
    CHECK_NOTHROW(Game{p,p1});
    CHECK(p.stacksize()==26);
    CHECK(p1.stacksize()==26);
        


}
TEST_CASE("Simoulation 1 ")
{
    Player p("Sari");
    Player  p1("Sami");
    Game game(p,p1);
    CHECK_NOTHROW(Game{p,p1});
    int comption = 10;
    while(comption>0){
        p.playTurn();
        comption--;
        bool pAlive = p.stacksize()>21;
        bool p1_WIN = (p1.stacksize()+p1.cardesTaken()>26);
        CHECK(p1.stacksize()+p.stacksize()==52);
        
        if(pAlive)
        {
            int after_round = p.cardesTaken()+p.stacksize();
            CHECK(p1.stacksize()-after_round<0);// maybe yes or not 
        
        }
        else if(p1_WIN)
        {
            CHECK(p1.stacksize()>p.stacksize());// true
        }
       else
       {
        CHECK((p1.stacksize()==p.stacksize()) ||(p1.cardesTaken()==p.cardesTaken()));// draww or p is the winner on current round
       }
}


