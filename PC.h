#pragma once

#include <vector>
#include <string>
#include <memory>
#include "Pokemon.h"
#include <algorithm> // Pour utiliser find_if

// A PC is the place where Pokemons get automagically sent when the trainer's pockets are full.
// When a Pokemon is transferred to the PC, this one takes ownership.
class PC
{
    private :
        //Ranger Pokemon dans un vector
        vector<PokemonPtr> _pokemons;

    public :

        //Obtenir la liste des pokemons
        vector<PokemonPtr>& pokemons(){
            return _pokemons;
        }

        //Ajouter un Pokemon dans notre liste de pokemons
        void transfer(PokemonPtr pokemon){
            if(pokemon != nullptr){
                _pokemons.push_back(move(pokemon));
            }
        }

        //Test 11 WTF
        PokemonPtr steal(Trainer& trainer, const string& name){
            auto it = find_if(_pokemons.begin(), _pokemons.end(), [&name](const auto& pokemon) {
                return pokemon->name() == name;
            });
            if(it != _pokemons.end() && (*it)->trainer() == &trainer){
                auto pokemon = move(*it);
                _pokemons.erase(it);
                return pokemon;
            }
            return nullptr;
        }


};
