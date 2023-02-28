#pragma once

#include <string>
#include <memory>
#include "PC.h"
#include "Pokeball.h"

using namespace std;

// A person that captures Pokemons and makes them fight.
class Trainer
{
    private :
        string _name;
        PC& _pc;
        array<Pokeball, 6> _pokeballs; 


    public :
        Trainer(const string& name, PC& pc)
            : _name { name }
            , _pc { pc }
        {}

        const string& name() const{
            return _name;
        }

        const array<Pokeball, 6>& pokeballs() const{
            return _pokeballs;
        }

};
