#pragma once

#include <string>
#include <memory>
#include <vector>
#include <variant>

#include "Monster.hpp"
#include "Spell.hpp"
#include "Trap.hpp"

using namespace std;

class Board
{
    

    public :
        using CardPtr = variant<unique_ptr<Monster>, unique_ptr<Spell>, unique_ptr<Trap>>;
        //WTF is that

        bool put(CardPtr card)
        {
            auto& type = card->get_type();
            auto nbre_monstre = 0;
            auto nbre_spell_trap = 0;
            for(auto& card : _cards){
                if(card->get_type() == CardType::Monster){
                    nbre_monstre++;
                }
                else{
                    nbre_spell_trap++;
                }
            }

            

            if(nbre_monstre == 5 && type==CardType::Monster){
                return false;
            }
            else if(nbre_spell_trap == 5 && (type==CardType::Spell 
            || type == CardType::Trap)){
                return false;
            }

            if(type==CardType::Monster){
                nbre_monstre++;
                
            }
            else if(type==CardType::Spell 
            || type == CardType::Trap){
                nbre_spell_trap++;
            }
            _nbre_monster = nbre_monstre;
            _nbre_spell_trap = nbre_spell_trap;
            return true;

        }

    private :
        vector<CardPtr> _cards;
        int _nbre_monster = 0;
        int _nbre_spell_trap = 0;
};
