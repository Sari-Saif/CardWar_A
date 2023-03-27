/**
 * implementation  file for the Game Object
 * @author Sari Saif
 * @since 2023-03-27
 */

#include "card.hpp"
/**
 * external libraries
 */
#include <string>
#include <iostream>
using namespace std;
namespace arie
{}
    //default
    Card::Card(){}
    Card::Card(const string& name,int v)
    {
        this->_name = name;
        this->_value =v;
    }
