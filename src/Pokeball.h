#pragma once

#include <iostream>
#include <Pokemon.h>

using namespace std;

// A ball where a Pokemon sleeps.
class Pokeball
{
    private:
        bool _empty = true;

    public: 
        Pokeball()
        {}

        bool empty() const{
            return _empty;
        }



};
