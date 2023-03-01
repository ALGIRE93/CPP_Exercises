#pragma once

#include "Pokemon.h"
#include <memory>

// A ball where a Pokemon sleeps.
class Pokeball
{
    private :
        PokemonPtr _pokemon;

    public :
        //savoir si le pointeur de Pokemon pointe sur le vide
        bool empty() const{
            return _pokemon == nullptr;
        }

        //Foutre le pokemon dans le pointeur
        void store(PokemonPtr pokemon){
            _pokemon = move(pokemon);
        }

        const Pokemon& pokemon() const{
            return *_pokemon;
        }

        //Test 10
        PokemonPtr steal(){
            return move(_pokemon);
        }
};
