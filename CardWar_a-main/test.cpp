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
    CHECK(p.stacksize()==26);
    CHECK(p.stacksize()<0);//false
    CHECK(p.stacksize()== p1.stacksize());//draw
    CHECK(p.stacksize()+p.cardesTaken()>2*p.stacksize());///isnot safe
    //CHECK(p.stacksize()+p.cardesTaken()<=52);
    CHECK(p1.cardesTaken()+p.cardesTaken()==26);//draw
    int comption = 5;
    for(int i =3;i>0;i--)
    {
        p.playTurn();
        CHECK(2+i==comption);
    }
}
TEST_CASE("")
{
    Player p("Sari");
    Player  p1("Sami");
    Game game(p,p1);
}
