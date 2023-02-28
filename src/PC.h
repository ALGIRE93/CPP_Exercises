#pragma once

#include <memory>
#include <string>
#include "Pokemon.h"
#include <vector>

using namespace std;

// A PC is the place where Pokemons get automagically sent when the trainer's pockets are full.
// When a Pokemon is transferred to the PC, this one takes ownership.
class PC
{
    private :
       vector<PokemonPtr> _pokemons; 

    public :
        PC()
        {}

        vector<PokemonPtr>& pokemons(){
            return _pokemons;
        }

        void transfer(PokemonPtr pokemon){
            if(pokemon != nullptr){
                _pokemons.push_back(move(pokemon));
            }
        }
};
