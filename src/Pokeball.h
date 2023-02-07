#pragma once

#include <Pokemon.h>
#include <memory>

using namespace std;

// A ball where a Pokemon sleeps.
class Pokeball
{
    private:
        PokemonPtr _pokemon;

    public: 
        Pokeball()
        {}

        bool empty() const{
            return _pokemon == nullptr;
        }

        void store(PokemonPtr pokemon){
            _pokemon = move(pokemon);
        }



};
