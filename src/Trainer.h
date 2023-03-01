#pragma once

#include "PC.h"
#include "Pokeball.h"
#include <string>
#include <array>

using namespace std;

// A person that captures Pokemons and makes them fight.
class Trainer
{
    private :
        string _name;
        PC& _pc;
        array<Pokeball, 6> _pokeballs;

    public :
        //Constructeur du Trainer
        Trainer(const string name, PC& pc)
            : _name {name}
            , _pc {pc}
        {}

        //Name du Trainer
        const string& name() const{
            return _name;
        }

        //Pokeballs du trainer
        const array<Pokeball, 6>& pokeballs() const{
            return _pokeballs;
        }

        //Caputre de Pokemons, pokeballs vide ou direct to PC
        void capture(PokemonPtr pokemon){
            //Test9 placer un Pokemon chez un dresseur
            pokemon->set_trainer(*this); //aled

            for(auto& pokeball : _pokeballs){
                if(pokeball.empty()){
                    pokeball.store(move(pokemon));
                    return;
                }
            }
            _pc.transfer(move(pokemon));
        }

        //Test 10
        void store_in_pc(size_t index){
            _pc.transfer(_pokeballs[index].steal());
        }

        //Test 11
        void fetch_from_pc(const string& name){
            for(auto& pokeball : _pokeballs){
                if(pokeball.empty()){
                    auto pokemon = _pc.steal(*this, name);
                    if(pokemon != nullptr){
                        pokeball.store(move(pokemon));
                    }
                    return;
                }
            }
        }

};
