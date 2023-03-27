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

use namespace std;
use namespace ariel;

TEST_CASE("Test case 1"){

    Player p("Sari");
    Player  p1("Sami");
    Game game(p,p1);
    game.playTurn();

}
