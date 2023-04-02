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
    CHECK_NOTHROW(Game{p, p1}); // check if the game can br iniated without any problem
    CHECK_THROWS(Game(p, p));
    CHECK_THROWS(Player("")); // empty and its not right !
    CHECK(p.stacksize() + p.cardesTaken() == 26);
    CHECK(p1.stacksize() + p1.cardesTaken() == 26);
    CHECK(p1.stacksize() + p.stacksize() == 52);
    CHECK_FALSE(p1.stacksize() + p.stacksize() > 52);
    CHECK_THROWS(game.printLastTurn()); // there no round before
}
TEST_CASE("Game rules")
{
    Player p("Sari");
    Player p1("Sami");
    Game game(p, p1);
    CHECK_THROWS(game.printLastTurn()); // there no round before
    game.playAll();
    CHECK_THROWS(game.playAll());        // they cant paly all twice
    CHECK_NOTHROW(game.printLastTurn()); // there was round before
    /*
    -at the end they might  winner ,loser or draw,
    -the winner will have in stack size biger than looser and take more cards
    -the winner will have in stack size biger than looser and take more cards
    -the draw situation will have equal stack size at tow players
    */
    bool winner = (p.stacksize() < p1.stacksize() ? true : false); // if true ,p1 is true and p is false
                                                                   // if false ,p1 is false and p is true
    bool p_win = true;
    bool draw = true;
    bool p1_win = true;
    if (winner == true)
    {
        p_win = false;
        CHECK_FALSE(winner == p_win);
        bool check = p.stacksize() + p.cardesTaken() < p1.cardesTaken() + p1.stacksize();
        CHECK(check);
    }
    if (winner == false)
    {
        p1_win = false;
        CHECK(winner == p_win);
        bool check = p.stacksize() + p.cardesTaken() > p1.cardesTaken() + p1.stacksize();
        CHECK(check);
    }
    bool check_draw = (p.stacksize() + p.cardesTaken()) == (p1.cardesTaken() + p1.stacksize());
    CHECK_FALSE(winner == p1_win);
    if (draw)
    {
        CHECK(draw);
    }
    else
    {
        CHECK(p_win);
    }
    CHECK(p1_win);
    CHECK(check_draw);
    if (check_draw)
    {
        CHECK_EQ(p.stacksize(), p1.stacksize());
    }
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
        comption = comption - 1;
        bool pAlive = (p.stacksize() > 21);
        bool p1_WIN = (p1.stacksize() + p1.cardesTaken() > 26);
        CHECK(p1.stacksize() + p.stacksize() == 52);

        if (pAlive)
        {
            int after_round = p.cardesTaken() + p.stacksize();
            CHECK(p1.stacksize() <= after_round); // maybe yes or not but clearly thay will be bigger if take  more cards
        }
        if (p1_WIN)
        {
            CHECK(p1.stacksize() > p.stacksize()); // true at current round
        }
        else
        {
            CHECK((p1.stacksize() == p.stacksize()));
            // draww or p is the winner on current round
            CHECK((p1.cardesTaken() == p.cardesTaken()));
        }
    }
}
