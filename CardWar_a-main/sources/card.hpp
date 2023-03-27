/**
 * header file for the Card Object
 * @author Sari Saif
 * @since 2023-03-27
 */

#ifndef CARDWAR_A_CARD_HPP
#define CARDWAR_A_CARD_HPP

/**
 * external libraries
 */
#include <string>
#include <iostream>

using namespace std;
namespace ariel {
    class Card{
    private:

        string _name;
        int _value; //- value of specifics card kind,name,number ...
    public:
        Card();
        Card( const string& name, int value);
        //~Card(...)
    };
    };
#endif //CARDWAR_A_CARD_HPP
