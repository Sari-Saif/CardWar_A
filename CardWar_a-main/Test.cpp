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
    Player p1("Sami");
    CHECK(p.stacksize() == 26);                                 // trueeee
    CHECK_FALSE(p.stacksize() < 0);                             // false
    CHECK(p.stacksize() == p1.stacksize());                     // draw
    CHECK(p.stacksize() + p.cardesTaken() > 2 * p.stacksize()); /// isnot safe
    CHECK(p1.cardesTaken() + p.cardesTaken() == 26);            // draw
}
TEST_CASE("Counstructor checking")
{
    Player p("Sari");
    Player p1("Sami");
    Game game(p, p1);
    CHECK_NOTHROW(Game{p, p1});
    CHECK_THROWS(Game(p, p));
    CHECK_THROWS(Player("")); // empty and its not right !
    CHECK(p.stacksize()+p.cardesTaken() == 26);
    CHECK(p1.stacksize()+p1.cardesTaken() == 26);
    CHECK(p1.stacksize()+p.stacksize() == 52);
    CHECK_FALSE(p1.stacksize()+p.stacksize()>52);
    
}
TEST_CASE("Game rules")
{
    Player p("Sari");
    Player p1("Sami");
    Game game(p, p1);
    game.playAll();
    bool winner = (p.stacksize()<p1.stacksize() ? true:false );
    bool p_win = true;
    bool p1_win = true;
    bool draw = true;
    bool check = p.stacksize()+p.cardesTaken()>p1.cardesTaken()+p1.stacksize();
    bool check_draw = (p.stacksize()+p.cardesTaken())==(p1.cardesTaken()+p1.stacksize());
    CHECK_FALSE(winner==p_win);
    CHECK(winner==p1_win);
    CHECK(winner==check);
    CHECK(draw==check);
    CHECK_FALSE(draw==check);
}
TEST_CASE("Simoulation 1 ")
{
    Player p("Sari");
    Player p1("Sami");
    Game game(p, p1);
    CHECK_NOTHROW(Game{p, p1});
    int comption = 10;
    while (comption > 0)
    {
        p.playTurn();
        comption=comption-1;
        bool pAlive = (p.stacksize()>21);
        bool p1_WIN = (p1.stacksize()+p1.cardesTaken()>26);
        CHECK(p1.stacksize()+p.stacksize() == 52);

        if (pAlive)
        {
            int after_round =p.cardesTaken()+p.stacksize();
            CHECK(p1.stacksize()<after_round); // maybe yes or not
        }
        else if (p1_WIN)
        {
            CHECK(p1.stacksize() > p.stacksize()); // true
        }
        else
        {
            CHECK((p1.stacksize() == p.stacksize()));
            // draww or p is the winner on current round
            CHECK((p1.cardesTaken() == p.cardesTaken()));
        }
    }
}
